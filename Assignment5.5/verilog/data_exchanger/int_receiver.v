`timescale 1ns/1ps
module int_receiver(input clk, input rx, input rst, output reg[31:0] o_int, output reg int_avail);

    localparam IDLE = 2'd0;
    localparam GET_BYTE = 2'd1;
    localparam WAIT_BYTE = 2'd2;
    
    reg[1:0] bytes;
    wire[7:0] data;
    wire avail;
    reg prev_avail;
    reg[1:0] state;
    rx_module rxm(.clock(clk), .rx(rx), .rst(rst), .data(data), .avail(avail));
    always@(posedge clk or negedge rst)begin
        
        if(!rst)begin
            bytes <= 2'd0;
            o_int <= 32'd0;
            prev_avail <= 0;
            state <= IDLE;
        end
        else begin
            case (state)
                IDLE:
                begin
                    if(prev_avail == 0 && avail == 1)begin
                        state <= GET_BYTE;
                        o_int <= 32'd0;
                        int_avail <= 0;
                    end
                    else begin
                        state <= IDLE;
                    end
                    bytes <= 2'd0;
                end 
                GET_BYTE:
                begin
                    case (bytes)
                        2'd0:
                        begin
                            o_int[7:0] <= data;
                            state <= WAIT_BYTE;
                            bytes <= 2'd1;
                            int_avail <= 0;
                        end 
                        2'd1:
                        begin
                            o_int[15:8] <= data;
                            state <= WAIT_BYTE;
                            bytes <= 2'd2;
                            int_avail <= 0;
                        end
                        2'd2:
                        begin
                            o_int[23:16] <= data;
                            state <= WAIT_BYTE;
                            bytes <= 2'd3;
                            int_avail <= 0;
                        end
                        2'd3:
                        begin
                            o_int[31:24] <= data;
                            state <= IDLE;
                            int_avail <= 1;
                            bytes <= 2'd0;
                        end
                    endcase
                end
                WAIT_BYTE:
                begin
                    if(prev_avail == 0 && avail == 1)begin
                        state <= GET_BYTE;
                        int_avail <= 0;
                        bytes <= bytes;
                    end
                    else begin
                        state <= WAIT_BYTE;
                        int_avail <= 0;
                        bytes <= bytes;
                    end
                end
                default:
                begin
                    bytes <= 2'd0;
                    o_int <= 32'd0;
                    prev_avail <= 0;
                    state <= IDLE;
                end
            endcase
            prev_avail <= avail;
        end
    end

endmodule