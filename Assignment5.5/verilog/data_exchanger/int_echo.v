`timescale 1ns/1ps
module int_echo(input rx, clk, rst, output tx);

    wire rst_n;
    assign rst_n = !rst;
    wire[31:0] data_in;
    //reg[31:0] data_TEST = 32'b01000001010000100100001101000100;
    wire int_avail;
    wire int_ready;
    reg int_send;
    reg[31:0] data_out;
    reg prev_int_avail;
    int_receiver int_r(.clk(clk), .rx(rx), .rst(rst_n), .o_int(data_in), .int_avail(int_avail));
    int_sender int_s(.clk(clk), .data(data_out), .int_send(int_send), .rst(rst_n), .int_ready(int_ready), .tx(tx));
    always@(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
            int_send <= 0;
            data_out <= 32'd0;
            prev_int_avail <= 0;
        end
        else begin
            if(int_ready == 1 && int_avail == 1 && int_send == 0 && prev_int_avail == 0)begin
                data_out <= data_in;
                //data_out <= data_TEST;
                int_send <= 1;
            end
            else if(int_send == 1)begin
                int_send <= 0;
            end
            prev_int_avail <= int_avail;
        end
    end

endmodule