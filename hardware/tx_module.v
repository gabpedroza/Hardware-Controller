`timescale 1ns/1ps
module tx_module(input[7:0] data, input send, input rst, input clock, output tx, output reg ready);

    localparam WAIT_SEND = 3'd0;
    localparam START_BIT = 3'd1;
    localparam SEND_BIT = 3'd2;
    localparam UPDATE_BIT = 3'd3;
    localparam SEND_STOP = 3'd4;
    localparam period = 27*1000000/115200;
    reg[7:0] copy_data;
    reg[2:0] state;
    reg[8:0] count;
    reg[2:0] bits;
    reg int_tx;
    assign tx = int_tx;
    always@(posedge clock or negedge rst) begin
        if(!rst)begin
            copy_data <= 8'd0;
            state <= WAIT_SEND;
            count <= 9'd0;
            bits <= 3'd0;
            int_tx <= 1;
            ready <= 1;
        end
        else begin
            case (state)
                WAIT_SEND:
                begin
                    if(send == 1)begin
                        state <= START_BIT;
                        copy_data <= data;
                        ready <= 0;
                    end
                    else begin
                        state <= WAIT_SEND;
                        copy_data <= 8'd0;
                        ready <= 1;
                    end
                    int_tx <= 1;
                    count <= 9'd0;
                    bits <= 3'd0;
                end 
                START_BIT:
                begin
                    if(count < period)begin
                        state <= START_BIT;
                        count <= count + 9'd1;
                    end
                    else begin
                        state <= SEND_BIT;
                        count <= 9'd0;
                    end
                    int_tx <= 0;
                    ready <= 0;
                    bits <= 3'd0;
                end
                SEND_BIT:
                begin
                    if(count < period - 1)begin
                        count <= count + 9'd1;
                        state <= SEND_BIT;
                    end 
                    else begin
                        state <= UPDATE_BIT;
                        count <= 9'd0;
                    end
                    ready <= 0;
                    int_tx <= copy_data[bits];
                end
                UPDATE_BIT:
                begin
                    if(bits == 3'd7)begin
                        bits <= 3'd0;
                        state <= SEND_STOP;
                    end
                    else begin
                        bits <= bits + 3'd1;
                        state <= SEND_BIT;
                    end
                    ready <= 0;
                    count <= 9'd0;
                end
                SEND_STOP:
                begin
                    if(count < period)begin
                        count <= count + 9'd1;
                        state <= SEND_STOP;
                    end
                    else begin
                        state <= WAIT_SEND;
                        count <= 9'd0;
                        ready <= 1;
                    end
                    bits <= 3'd0;
                    int_tx <= 1;
                    copy_data <= 8'd0;
                end
                default:
                    state <= WAIT_SEND; 
            endcase
        end
    end
endmodule