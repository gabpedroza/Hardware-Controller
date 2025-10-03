`timescale 1ns/1ps

module int_sender(input[31:0] data, input int_send, input rst, input clk, output reg int_ready, output tx);

    localparam IDLE = 2'd0;
    localparam WAIT_READY = 2'd1;
    localparam SEND_BYTE = 2'd2;
    localparam DELAY_STATE = 2'd3;
    reg[1:0] bytes;
    reg[31:0] data_latch;
    reg prev_send;
    reg byte_send;
    reg[1:0] state;
    reg[7:0] data_to_send;
    reg wait_a_bit;
    wire ready;
    tx_module txm(.data(data_to_send), .send(byte_send), .rst(rst), .clock(clk), .tx(tx), .ready(ready));
    always@(posedge clk or negedge rst)begin
        if(!rst)begin
            bytes <= 2'd0;
            data_latch <= 32'd0;
            prev_send <= 0;
            byte_send <= 0;
            state <= IDLE;
            data_to_send <= 8'd0;
            int_ready <= 1;
            wait_a_bit <= 0;
        end
        else begin
            prev_send <= int_send;
            case (state)
                IDLE:
                begin
                    if(/*prev_send == 0 &&*/ int_send == 1)begin
                        data_latch <= data;
                        state <= WAIT_READY;
                        int_ready <= 0;
                    end
                    else begin
                        state <= IDLE;
                        data_latch <= 32'd0;
                        int_ready <= 1;
                    end
                    data_to_send <= 8'd0;
                    bytes <= 2'd0;
                    byte_send <= 0;
                    wait_a_bit <= 0;
                end 
                WAIT_READY:
                begin
                    int_ready <= 0;
                    byte_send <= 0;
                    bytes <= bytes;
                    if(ready == 0 || wait_a_bit == 1)begin
                        state <= WAIT_READY;
                        wait_a_bit <= 0;
                    end
                    else begin
                        state <= SEND_BYTE;
                    end
                end
                SEND_BYTE:
                begin
                    byte_send <= 1;
                    wait_a_bit <= 1;
                    case (bytes)
                        2'd0:
                        begin
                            data_to_send <= data_latch[7:0];
                            int_ready <= 0;
                            state <= WAIT_READY;
                            bytes <= 2'd1;
                        end
                        2'd1:
                        begin
                            data_to_send <= data_latch[15:8];
                            int_ready <= 0;
                            state <=WAIT_READY;
                            bytes <= 2'd2;
                        end 
                        2'd2:
                        begin
                            data_to_send <= data_latch[23:16];
                            int_ready <= 0;
                            state <= WAIT_READY;
                            bytes <= 2'd3;
                        end 
                        2'd3:
                        begin
                            data_to_send <= data_latch[31:24];
                            int_ready <= 0;
                            state <= DELAY_STATE;
                            bytes <= 2'd0;
                        end 
                    endcase
                end
                DELAY_STATE:
                begin
                    bytes <= 2'd0;
                    if(ready == 0 || wait_a_bit == 1)begin
                        state <= DELAY_STATE;
                        wait_a_bit <= 0;
                        int_ready <= 0;
                    end
                    else begin
                        state <= IDLE;
                        int_ready <= 1;
                    end
                    int_ready <= 1;
                    data_to_send <= 8'd0;
                    byte_send <= 0;
                end
            endcase
        end
    end
    always@(posedge byte_send)begin
        $display("sender is sending %d", data_to_send);
    end
    always @(data_latch) begin
        $display("sender to send int %d", data_latch);
    end
endmodule