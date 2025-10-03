module uart_echo(input rx, clk, rst, output tx);

    wire[7:0] data_in;
    wire avail;
    uart receiver(.tx(), .send(), .clk(clk), .rst(rst), .rx(rx), .ready(), .avail(avail), .data_in(data_in), .data_out());
    wire ready;
    reg send;
    reg[7:0] data_out;
    uart sender(.rx(), .avail(), .data_in(), .send(send), .ready(ready), .data_out(data_out), .clk(clk), .rst(rst), .tx(tx));
    always@(posedge avail or posedge rst)begin
        if(rst)begin
            send <= 1;
            data_out = 8'd0;
        end
        else if(ready == 1)begin
            data_out = data_in; 
        end
    end

endmodule