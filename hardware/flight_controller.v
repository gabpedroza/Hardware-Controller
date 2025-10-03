`timescale 1ns/1ps
`define CLEAN \
    ints <= 2'd0;\
    count <= 8'd0;\
    for(j = 0; j < 3; j = j + 1) positions[j] <= 32'd0;\
    for(j = 0; j < 3; j = j + 1) velocities[j] <= 32'd0;\
    int_send <= 0;\
    result <= 32'd0;\
    data_latch <= 32'd0;

`define CLEAN_POS for(j = 0; j < 3; j = j + 1) positions[j] <= 32'd0;
`define CLEAN_VEL for(j = 0; j < 3; j = j + 1) velocities[j] <= 32'd0;

`define ABS_GET(int, rec)\
        if(int < 0)begin\
            rec <= -1*int;\
        end\
        else begin\
            rec <= int;\
        end

module flight_controller(input clk, rst, rx, output tx);

    localparam START_CODE = 32'b10101010_10101010_10101010_10101010;
    localparam DIV_7 = 32'd36;
    localparam DIV_2 = 32'd128;
    localparam MARS_RADIUS = 32'd866816000;
    localparam signed DELTA = 32'd76;

    localparam IDLE = 3'd0;
    localparam WAIT_POS = 3'd1;
    localparam GET_POS = 3'd2;
    localparam WAIT_VEL = 3'd3;
    localparam GET_VEL = 3'd4;
    localparam COMPUTE_DATA = 3'd5;
    localparam FILTER_DATA = 3'd6;
    localparam SEND_DATA = 3'd7;

    wire rst_n;
    assign rst_n = ~rst;
    reg[2:0] state;
    reg[1:0] ints;
    reg[7:0] count;
    reg[31:0] positions[2:0];
    reg signed[31:0] velocities[2:0];
    reg signed[31:0] result;
    reg signed[31:0] data_latch;
    reg prev_avail;

    wire signed[31:0] received_int;
    wire int_avail;
    int_receiver int_r(.clk(clk), .rx(rx), .rst(rst_n), .o_int(received_int), .int_avail(int_avail));
    
    reg int_send; 
    wire int_ready;
    int_sender int_s(.clk(clk), .rst(rst_n), .data(result), .int_send(int_send), .int_ready(int_ready), .tx(tx));
    
    integer j;
    always@(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
            state <= IDLE;
            `CLEAN
        end
        else begin
            prev_avail <= int_avail;
            case (state)
                IDLE:
                begin
                    if(int_avail == 1 && received_int == START_CODE)begin
                        state <= WAIT_POS;
                        
                    end
                    else begin
                        state <= IDLE;
                    end
                    `CLEAN
                end 
                WAIT_POS:
                begin
                    if(prev_avail == 0 && int_avail == 1)begin
                        state <= GET_POS;
                        data_latch <= received_int;
                    end
                    else begin
                        state <= WAIT_POS;
                        data_latch <= 32'd0;
                    end
                    count <= 8'd0;
                    `CLEAN_VEL
                    int_send <= 0;
                    result <= 32'd0;
                end
                GET_POS:
                begin
                    if(data_latch == START_CODE)begin
                        state <= WAIT_POS;
                        `CLEAN
                    end
                    else begin
                        case (ints)
                            2'd0: 
                            begin
                                `ABS_GET(data_latch, positions[0])
                                ints <= 2'd1;
                                state <= WAIT_POS;
                            end
                            2'd1:
                            begin
                                `ABS_GET(data_latch, positions[1])
                                ints <= 2'd2;
                                state <= WAIT_POS;
                            end
                            2'd2:
                            begin
                                `ABS_GET(data_latch, positions[2])
                                ints <= 2'd0;
                                state <= WAIT_VEL;
                            end
                            default: 
                            begin
                                state <= IDLE;
                                `CLEAN
                            end
                        endcase
                        count <= 8'd0;
                        int_send <= 0;
                        result <= 32'd0;
                        data_latch <= 32'd0;
                        `CLEAN_VEL
                    end
                end
                WAIT_VEL:
                begin
                    if(prev_avail == 0 && int_avail == 1)begin
                        state <= GET_VEL;
                        data_latch <= received_int;
                    end
                    else begin
                        state <= WAIT_VEL;
                        data_latch <= 32'd0;
                    end
                    count <= 8'd0;
                    int_send <= 0;
                    result <= 32'd0;
                end
                GET_VEL:
                begin
                    if(data_latch == START_CODE)begin
                        state <= WAIT_POS;
                        `CLEAN
                    end
                    else begin
                        case (ints)
                            2'd0: 
                            begin
                                velocities[0] <= data_latch;
                                ints <= 2'd1;
                                state <= WAIT_VEL;
                            end
                            2'd1:
                            begin
                                velocities[1] <= data_latch;
                                ints <= 2'd2;
                                state <= WAIT_VEL;
                            end
                            2'd2:
                            begin
                                velocities[2] <= data_latch;
                                ints <= 2'd0;
                                state <= COMPUTE_DATA;
                            end
                            default: 
                            begin
                                state <= IDLE;
                                `CLEAN
                            end
                        endcase
                        count <= 8'd0;
                        int_send <= 0;
                        result <= 32'd0;
                        data_latch <= 32'd0;
                    end
                end
                COMPUTE_DATA:
                begin
                    if(count == 8'd0)begin
                        result <= -1*(DIV_2 + (((((positions[0] + positions[1] + positions[2]) - MARS_RADIUS)>>3)*DIV_7)>>8) - (velocities[0] + velocities[1] + velocities[2]));
                        state <= COMPUTE_DATA;
                        count <= count + 8'd1;
                    end
                    else if(count == 8'd100)begin
                        state <= FILTER_DATA;
                        count <= 8'd0;
                    end
                    else begin
                        state <= COMPUTE_DATA;
                        count <= count + 8'd1;
                    end
                    int_send <= 0;
                    ints <= 0;
                    data_latch <= 32'd0;
                end
                FILTER_DATA:
                begin
                    if(result > -1*DELTA && result < 32'd256 - DELTA)begin
                        result <= DELTA + result;
                    end
                    else if(result > -1*DELTA && result >= 32'd256 - DELTA)begin
                        result <= 32'd256;
                    end
                    else begin
                        result <= 32'd0;
                    end
                    state <= SEND_DATA;
                    int_send <= 0;
                    count <= 8'd0;
                    `CLEAN_POS
                    `CLEAN_VEL
                    ints <= 2'd0;
                    data_latch <= 32'd0;
                end
                SEND_DATA:
                begin
                    if(count < 8'd3)begin
                        count <= count + 8'd1;
                        state <= SEND_DATA;
                    end
                    else begin
                        state <= IDLE;
                        count <= 8'd0;
                    end
                    int_send <= 1;
                    ints <= 2'd0;
                    data_latch <= 32'd0;
                    `CLEAN_POS
                    `CLEAN_VEL
                end
            endcase
        end
    end
endmodule