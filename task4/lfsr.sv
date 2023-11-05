module lfsr #(
    DATA_WIDTH = 7
)(
    input  logic                      clk,         // clock
    input  logic                      rst,         // reset
    input  logic                      en,          // enable
    output logic [DATA_WIDTH - 1 : 0] data_out     // pseudo-random output
);

logic [DATA_WIDTH : 1] sreg;   // shift register

always_ff @ (posedge clk, posedge rst)
    if  (rst)
        sreg <= {DATA_WIDTH{1'b1}};
    else if (en)
        sreg <= {sreg[DATA_WIDTH - 1 : 1], sreg[DATA_WIDTH] ^ sreg[3]};

assign data_out = sreg;
endmodule
