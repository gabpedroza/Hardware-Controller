`timescale 1ns/1ps

module tb_tx();

    parameter half_clock = (1_000_000_000/(50*1000000))/2;
    parameter period = (1_000_000_000/115200);
    reg clock;
    always begin
        #half_clock
        clock = ~clock;
    end
    
    reg tx;
    reg rst;
    wire ready;
    reg send;
    reg [7:0] data;
    tx_module txm(.data(data), .clock(clock), .rst(rst), .ready(ready), .tx(tx), .send(send));   
    integer i, j;
    initial begin
        clock = 0;
        rst = 0;
        #half_clock;
        #half_clock;
        rst = 1;
        for(i = 0; i < 256; i = i + 1) begin
            while(!ready)@(posedge clock);
            data = i[7:0];
            send = 1;
            #half_clock
            #half_clock
            send = 0;
            for(j = 0; j < 12; j = j + 1) begin
                $display("i = %d tx = %d state = %d", i, tx, txm.state);
                #period;
            end
            #half_clock;
            #half_clock;
            #period;
            #period;
        end
        
        $finish;
    end

endmodule