`timescale 1ns/1ps
module tb_flooder_int();
    parameter half_clock = (1_000_000_000/(27*1000000))/2;
    reg clock;
    wire clk;
    assign clk = clock;
    wire rst;
    assign rst = 1;
    wire tx;
    reg period_clock;
    always begin
        #half_clock
        clock = ~clock;
    end
    wire avail;
    wire[7:0] data_out;
    flooder_int flod(.tx(tx), .clk(clk), .rst(rst));
    rx_module rxm(.rx(tx), .clock(clk), .rst(rst), .data(data_out), .avail(avail));
    always@(posedge avail)begin
        $display("received %d", data_out);
    end
    always@(flod.sender.state)begin
        $display("state = %d", flod.sender.state);
    end

endmodule