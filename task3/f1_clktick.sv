module f1_clktick (
    input  logic clk,
    input  logic en,  
    input  logic rst,
    input  logic [15:0] N,
    output logic [7:0] data_out
);

logic f1_light_tick; 

clktick clktick (
    .N(N),
    .en(en),
    .rst(rst),
    .clk(clk),
    .tick(f1_light_tick)
);

formula1_basic f1_fsm (
    .clk(clk),
    .en(f1_light_tick),
    .rst(rst),
    .data_out(data_out)
);

endmodule
