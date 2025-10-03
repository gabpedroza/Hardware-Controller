`timescale 1ns/1ps
module flooder(input clk, input rst, input rx, output tx);

    wire[7:0] message;
    assign message = 8'd65;
    wire send;
    assign send = 1;
    wire ready, avail;
    wire[7:0] data_in;
    uart sender(.clk(clk), .rst(rst), .rx(rx), .tx(tx), .send(send), .ready(ready), .avail(avail), .data_in(data_in), .data_out(message));

endmodule