`default_nettype none
`timescale 1ns / 1ps

module timing #() (
    input  wire [0:0] clk_i,
    output wire [0:0] quarter_o,
    output wire [0:0] eigth_o,
    output wire [0:0] sixteenth_o,
    output wire [0:0] tick_o
    );
    //default bpm 60 = 6300000
    //change bpm here 6300000/(60/BPM)
    //calculate the divisor and replace
    localparam SIM_SEC = 6300000/1;

    localparam QUARTER_TIME = SIM_SEC;
    localparam EIGTH_TIME = QUARTER_TIME / 2;
    localparam SIXTEENTH_TIME = QUARTER_TIME / 8;

    localparam TICK = 105000;

    logic [35:0] counter_quarter_l = 1;
    logic [35:0] counter_eigth_l = 1;
    logic [35:0] counter_sixteenth_l = 1;
    logic [16:0] counter_tick_l = 1;
    always_ff @(posedge clk_i) begin
        if(counter_quarter_l == QUARTER_TIME) begin
            counter_quarter_l <= 1;
        end else begin
            counter_quarter_l <= counter_quarter_l + 1;
        end

        if(counter_eigth_l == EIGTH_TIME) begin
            counter_eigth_l <= 1;
        end else begin
            counter_eigth_l <= counter_eigth_l + 1;
        end

        if(counter_sixteenth_l == SIXTEENTH_TIME) begin
            counter_sixteenth_l <= 1;
        end else begin
            counter_sixteenth_l <= counter_sixteenth_l + 1;
        end

        if(counter_tick_l == TICK) begin
            counter_tick_l <= 1;
        end else begin
            counter_tick_l <= counter_tick_l + 1;
        end
    end

    logic [0:0] quarter_l;
    logic [0:0] eigth_l;
    logic [0:0] sixteenth_l;
    logic [0:0] tick_l;
    always_comb begin
        if(counter_quarter_l == QUARTER_TIME) begin
            quarter_l = 1'b1;
        end else begin
            quarter_l = 1'b0;
        end
    end

    always_comb begin
        if (counter_eigth_l == EIGTH_TIME) begin
            eigth_l = 1'b1;
        end else begin
            eigth_l = 1'b0;
        end
    end

    always_comb begin
        if (counter_sixteenth_l == SIXTEENTH_TIME) begin
            sixteenth_l = 1'b1;
        end else begin
            sixteenth_l = 1'b0;
        end
    end

    always_comb begin
        if (counter_tick_l == TICK) begin
            tick_l = 1'b1;
        end else begin
            tick_l = 1'b0;
        end
    end

    assign quarter_o = quarter_l;
    assign eigth_o = eigth_l;
    assign sixteenth_o = sixteenth_l;
    assign tick_o = tick_l;
endmodule
