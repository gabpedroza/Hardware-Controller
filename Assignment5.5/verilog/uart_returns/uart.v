`timescale 1ns/1ps
module uart(input clk, rst, send, rx, 
            input[7:0] data_out, 
            output tx, ready, avail, 
            output[7:0] data_in); 
    wire rst_n;
    assign rst_n = !rst;
    rx_module rxm(.rx(rx), .clock(clk), .rst(rst_n), .avail(avail), .data(data_in));
    tx_module txm(.tx(tx), .clock(clk), .rst(rst_n), .data(data_out), .send(send), .ready(ready));
endmodule