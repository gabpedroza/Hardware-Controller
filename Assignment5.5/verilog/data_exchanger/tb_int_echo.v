`timescale 1ns/1ps
module tb_int_echo();

    parameter half_clock = (1_000_000_000/(27*1000000))/2;
    reg clock;
    wire clk;
    assign clk = clock;
    wire rst;
    assign rst = 1;
    wire tx, rx;
    reg period_clock;
    always begin
        #half_clock
        clock = ~clock;
    end
    wire avail;
    wire[7:0] data_out;
    int_echo echo(.rx(rx), .tx(tx), .clk(clk), .rst(~rst));
    rx_module rxm(.rx(tx), .clock(clk), .rst(rst), .data(data_out), .avail(avail));
    always@(posedge avail)begin
        $display("received %d", data_out);
    end
    always@(echo.int_s.state)begin
        $display("state = %d", echo.int_s.state);
    end
    always@(echo.int_s.data_to_send)begin
        $display("data to send = %d", echo.int_s.data_to_send);
    end
    always@(echo.int_s.ready)begin
        $display("ready changed! = %d", echo.int_s.ready);
    end
endmodule