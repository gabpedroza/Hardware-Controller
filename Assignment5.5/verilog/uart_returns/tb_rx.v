`timescale 1ns/1ps
module tb_rx();
    parameter half_clock = (1_000_000_000/(50*1000000))/2;
    parameter period = (1_000_000_000/115200);
    reg clock;
    always begin
        #half_clock
        clock = ~clock;
    end
    
    reg rx;
    reg rst;
    wire avail;
    wire [7:0] data;
    rx_module rxm(.rx(rx), .clock(clock), .rst(rst), .avail(avail), .data(data));   
    integer i, j;
    initial begin
        clock = 0;
        rx = 1;
        rst = 0;
        #half_clock;
        #half_clock;
        rst = 1;
        for(i = 0; i < 256; i = i + 1) begin
            reg[7:0] to_send = i[7:0];
            rx = 1;
            #period;
            #period;
            $display("data is now %d", data);
            #period;
            rx = 0;
            #period;
            for(j = 0; j < 8; j = j + 1) begin
                if(j == 4 && i == 156) begin
                    rst = 0;
                    #half_clock;
                    #half_clock;
                    rst = 1;
                end
                rx = i[j];
                #period;
            end
            rx = 1;
            #period;
            #half_clock;
            #half_clock;
            $display("used i = %d, got avail = %d, data = %d, state = %d", i, avail, data, rxm.state);
        end
        $finish;
    end

endmodule