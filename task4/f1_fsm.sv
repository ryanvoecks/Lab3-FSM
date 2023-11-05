module f1_fsm #(
    LIGHTS_WIDTH = 8
)(
    input  logic clk,                               // clock
    input  logic en,                                // en
    input  logic rst,                               // reset
    input  logic trigger,                           // trigger edge
    output logic [LIGHTS_WIDTH - 1 : 0] data_out,   // f1 light pattern
    output logic cmd_seq,                           // high for S1->S8
    output logic cmd_delay                          // triggers delay component
);

    // define states
    typedef enum {S0, S1, S2, S3, S4, S5, S6, S7, S8} lights_state;
    lights_state current_state, next_state;

    // set high by trigger, then goes low after en
    typedef enum {TRIGGER_HIGH, TRIGGER_LOW} trigger_state;
    trigger_state trigger_flag, trigger_flag_next;

    // state transition
    always_ff @ (posedge clk) begin
        if (rst) current_state <= S0;
        else if (en) current_state <= next_state;
        trigger_flag <= trigger_flag_next;
    end

    // next state logic
    always_comb
        case (current_state)
            S0: next_state = (trigger_flag == TRIGGER_HIGH) ? S1 : S0;
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

    // lights output logic
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
            default: data_out = 8'b00000000;    // this should never be used
        endcase

    // logic for trigger flag
    always_comb
        case (trigger_flag)
            TRIGGER_HIGH: trigger_flag_next = en ? TRIGGER_LOW : TRIGGER_HIGH;
            TRIGGER_LOW:  trigger_flag_next = trigger ? TRIGGER_HIGH : TRIGGER_LOW;
            default: trigger_flag_next = TRIGGER_LOW;
        endcase

    // output control signals logic
    always_comb begin
        cmd_seq   = (current_state == S8) ? 1'b0 : 1'b1;
        cmd_delay = (current_state == S8) ? 1'b1 : 1'b0;
    end
endmodule

