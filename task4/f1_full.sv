module f1_full #(
    N_WIDTH = 5, DELAY_WIDTH = 7, LIGHTS_WIDTH = 8
)(
    input  logic clk,                               // clock
    input  logic rst,                               // reset
    input  logic trigger,                           // trigger for lights
    input  logic [N_WIDTH - 1 : 0] N,               // controls speed of light switching
    output logic [LIGHTS_WIDTH - 1 : 0] data_out    // lights output
);

logic cmd_seq;
logic cmd_delay;
logic clktick_tick;
logic  [DELAY_WIDTH - 1 : 0] pseudo_random_delay;
logic delay_timeout;
logic lights_en;

always_comb
    lights_en = cmd_seq ? clktick_tick : delay_timeout;

clktick #(
    .WIDTH(N_WIDTH)
) wait_one_second (
    .clk(clk),
    .rst(rst),
    .en(cmd_seq),
    .N(N),
    .tick(clktick_tick)
);

lfsr #(
    .DATA_WIDTH(DELAY_WIDTH)
) delay_randomizer (
    .clk(clk),
    .rst(rst),
    .en(1'b1),  // always have PRBS generator enabled
    .data_out(pseudo_random_delay)
);

delay #(
    .WIDTH(DELAY_WIDTH)
) delay_countdown (
    .clk(clk),
    .rst(rst),
    .trigger(cmd_delay),
    .n(pseudo_random_delay),
    .time_out(delay_timeout)
);

f1_fsm #(
    .LIGHTS_WIDTH(LIGHTS_WIDTH)
) lights_fsm (
    .clk(clk),
    .en(lights_en),
    .rst(rst),
    .trigger(trigger),
    .data_out(data_out),
    .cmd_seq(cmd_seq),
    .cmd_delay(cmd_delay)
);
endmodule
