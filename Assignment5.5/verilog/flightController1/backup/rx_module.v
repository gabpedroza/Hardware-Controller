`timescale 1ns/1ps
module rx_module(
    input rx,
    input clock,
    input rst,
    output reg avail,
    output reg[7:0] data
);
    localparam WAIT_PULL_DOWN = 3'd0;
    localparam WAIT_START_SAMPLE = 3'd1;
    localparam SAMPLE_START = 3'd2;
    localparam WAIT_BEFORE_BIT = 3'd3;
    localparam WAIT_AFTER_BITS = 3'd4;
    localparam SAMPLE_BIT = 3'd5;
    localparam SAMPLE_STOP = 3'd6;
    localparam WAIT_SUCCESS = 3'd7;
    localparam period = 27*1000000/115200;
    reg[2:0] state;
    reg[8:0] count;
    reg[2:0] bits;
    initial begin
        avail = 0;
        data = 8'd0;
        count = 9'd0;
        bits = 3'd0;
        state = WAIT_PULL_DOWN;
    end
    always@(posedge clock or negedge rst) begin

        if(!rst)begin
            avail <= 0;
            data <= 8'd0;
            count <= 9'd0;
            bits <= 3'd0;
            state <= WAIT_PULL_DOWN;
        end

        else begin
            case (state)
                WAIT_PULL_DOWN: 
                begin
                    if (rx == 0) begin
                        state <= WAIT_START_SAMPLE;
                        avail <= 0;
                        data <= 8'd0;
                    end
                    else begin
                        state <= WAIT_PULL_DOWN;
                        avail <= avail;
                    end
                    count <= 9'd0;
                    bits <= 3'd0; 
                end
                WAIT_START_SAMPLE:
                begin
                    if(count < period/2)begin
                        state <= WAIT_START_SAMPLE;
                        count <= count + 9'd1;
                    end
                    else begin
                        state <= SAMPLE_START;
                        count <= 9'd0;
                    end
                    bits <= 3'd0;
                    avail <= 0;
                    data <= 8'd0;
                end
                SAMPLE_START:
                begin
                    if(rx == 0)begin
                        state <= WAIT_BEFORE_BIT;
                    end
                    else begin
                        state <= WAIT_PULL_DOWN;
                    end
                    bits <= 3'd0;
                    avail <= 0;
                    count <= 9'd0;
                    data <= 8'd0;
                end
                WAIT_BEFORE_BIT:
                begin
                    if(count < period)begin
                        state <= WAIT_BEFORE_BIT;
                        count <= count + 9'd1;
                    end
                    else begin
                        state <= SAMPLE_BIT;
                        count <= 9'd0;
                    end
                    avail <= 0;
                end
                SAMPLE_BIT:
                begin
                    data[bits] <= rx;
                    if(bits == 7)begin
                        state <= WAIT_AFTER_BITS;
                        bits <= 3'd0;
                    end
                    else begin
                        state <= WAIT_BEFORE_BIT;
                        bits <= bits + 3'd1;
                    end
                    count <= 9'd0;
                    avail <= 0;                    
                end
                WAIT_AFTER_BITS:
                begin
                    if(count < period)begin
                        state <= WAIT_AFTER_BITS;
                        count <= count + 9'd1;
                    end
                    else begin
                        state <= SAMPLE_STOP;
                        count <= 9'd0;
                    end
                    avail <= 0;
                    bits <= 3'd0;
                end
                SAMPLE_STOP:
                begin
                    if(rx == 0)begin
                        state <= WAIT_PULL_DOWN;
                        avail <= 0;
                    end
                    else begin
                        state <= WAIT_SUCCESS;
                        avail <= 1;
                    end
                    bits <= 3'd0;
                    count <= 9'd0;
                end
                WAIT_SUCCESS:
                begin
                    /*
                    if(count < period/2)begin
                        state <= WAIT_SUCCESS;
                        count <= count + 9'd1;
                    end
                    else begin*/
                        state <= WAIT_PULL_DOWN;
                        count <= 9'd0;
                    //end
                    avail <= 1;
                    bits <= 3'd0;
                end
                default: 
                    state <= WAIT_PULL_DOWN;
            endcase
        end

    end
    always @(posedge avail) begin
        $display("sending %d", data);
    end
endmodule