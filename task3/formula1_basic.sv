module formula1_basic (
    input  logic  clk,              // clock
    input  logic  en,               // en
    input  logic  rst,              // reset
    output logic  [7:0] data_out    // f1 light pattern
);

    // define states
    typedef enum {S0, S1, S2, S3, S4, S5, S6, S7, S8} lights_state;
    lights_state current_state, next_state;

    // state transition
    always_ff @ (posedge clk, posedge rst)
        if (rst) current_state <= S0;
        else if (en) current_state <= next_state;

    // next state logic
    always_comb
        case (current_state)
            S0: next_state = S1;
            S1: next_state = S2;
            S2: next_state = S3;
            S3: next_state = S4;
            S4: next_state = S5;
            S5: next_state = S6;
            S6: next_state = S7;
            S7: next_state = S8;
            S8: next_state = S0;
            default: next_state = S0;   // this should never be used
        endcase

    // output logic
    always_comb
        case (current_state)
            S0: data_out = 8'b00000000;
            S1: data_out = 8'b00000001;
            S2: data_out = 8'b00000011;
            S3: data_out = 8'b00000111;
            S4: data_out = 8'b00001111;
            S5: data_out = 8'b00011111;
            S6: data_out = 8'b00111111;
            S7: data_out = 8'b01111111;
            S8: data_out = 8'b11111111;
        endcase

endmodule

