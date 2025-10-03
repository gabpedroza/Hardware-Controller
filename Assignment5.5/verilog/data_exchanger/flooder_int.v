`timescale 1ns/1ps
module flooder_int(input clk, input rst, output tx);

    wire[31:0] message;
    assign message = 32'b01000001010000100100001101000100;
    wire send;
    assign send = 1;
    wire ready, avail;
    wire[7:0] data_in;
    int_sender sender(.tx(tx), .clk(clk), .rst(rst), .int_send(send), .data(message), .int_ready(ready));


endmodule;