`timescale 1ns/1ps
module tb_flight_controller();

    parameter half_clock = (1_000_000_000/(27*1000000))/2;
    reg clock;
    wire clk;
    assign clk = clock;
    wire rst;
    assign rst = 0;
    wire rst_n;
    assign rst_n = 1;
    wire tx, rx;
    reg period_clock;
    always begin
        #half_clock
        clock = ~clock;
        counter <= counter + 32'd1;
        if(counter > 32'd500000)begin
            $finish;
        end
    end
    flight_controller fc(.clk(clk), .rst(rst), .tx(tx), .rx(rx));
    reg signed[31:0] data_out[7:0];
    reg[31:0] data;
    reg[2:0] cnt;
    reg[31:0] counter;

    initial begin
        data_out[0] = 32'd2863311530;
        data_out[1] = 32'b11001100001110011101001000000000;
        data_out[2] = 32'd0;
        data_out[3] = 32'd0;
        data_out[4] = 32'd32088;
        data_out[5] = 32'd0;
        data_out[6] = 32'd0;
        data_out[7] = 32'd0;
        cnt = 3'd0;
        send = 0;
        counter = 32'd0;
        $dumpfile("tb_flight_controller.vcd");
        $dumpvars(0, tb_flight_controller);
    end

    wire ready;
    reg send;
    int_sender int_s(.clk(clk), .rst(rst_n), .tx(rx), .int_ready(ready), .int_send(send), .data(data));
    wire avail;
    wire signed[31:0] data_back;
    int_receiver int_r(.clk(clk), .rst(rst_n), .rx(tx), .int_avail(avail), .o_int(data_back));
    always@(fc.state or int_s.state or int_r.state)begin
        //$display("state fc = %d, state int_s = %d, state int_r = %d, result = %d, count = %d", fc.state, int_s.state, int_r.state, fc.result, fc.count);
    
    end
    always@(posedge ready or negedge ready)begin
        if(ready)begin
            data = data_out[cnt];
            send <= 1;
            cnt <= cnt + 3'd1;
        end 
        else begin
            send <= 0;
        end
    end
    always@(posedge avail)begin
        $display("data received = %d", data_back);
    end
    always@(fc.velocities[0] or fc.velocities[1] or fc.velocities[2])begin
        //$display("received %d", fc.received_int);
    end
    always@(fc.ints)begin
        //$display("ints = %d", fc.ints);
    end
    always@(fc.data_latch)begin
        //$display("latched data = %d, rec_int = %d", fc.data_latch, fc.received_int);
    end
endmodule