//Calculates the timing of sheet music notes
//Has 1/4 note, 1/8 note, and 1/16 note

`default_nettype none
`timescale 1ns / 1ps

module timing #() (
    input  wire [0:0] clk_i,
    output wire [0:0] quarter_o,
    output wire [0:0] eigth_o,
    output wire [0:0] sixteenth_o
    );
    //default bpm 60
    //change bpm here by replacing the number
    //equation: 6300000*60/BPM
    localparam SIM_SEC = 25600000*60/50;

    //IMPORTANT
    //************************************************************
    //time signature used is 4/4
    //won't work for other time signatures
    //************************************************************
    //equations used to calculate the time for each note
    //x is the BPM of the song/music
    //quarter   = 60/x
    //eight     = 60/(2*x)
    //sixteenth = 60/(8*x)
    //don't modify this to change BPM, instead change SIM_SEC above
    localparam QUARTER_TIME = SIM_SEC;
    localparam EIGTH_TIME = QUARTER_TIME / 2;
    localparam SIXTEENTH_TIME = QUARTER_TIME / 8;
    
    logic [35:0] counter_quarter_l = 1;
    logic [35:0] counter_eigth_l = 1;
    logic [35:0] counter_sixteenth_l = 1;
    always_ff @(posedge clk_i) begin
        //counts the quarter note
        if(counter_quarter_l == QUARTER_TIME) begin
            counter_quarter_l <= 1;
        end else begin
            counter_quarter_l <= counter_quarter_l + 1;
        end

        //counts the eigth note
        if(counter_eigth_l == EIGTH_TIME) begin
            counter_eigth_l <= 1;
        end else begin
            counter_eigth_l <= counter_eigth_l + 1;
        end

        //counts the fourth note
        if(counter_sixteenth_l == SIXTEENTH_TIME) begin
            counter_sixteenth_l <= 1;
        end else begin
            counter_sixteenth_l <= counter_sixteenth_l + 1;
        end
    end

    logic [0:0] quarter_l;
    logic [0:0] eigth_l;
    logic [0:0] sixteenth_l;
    always_comb begin
        //quarter note high
        if(counter_quarter_l == QUARTER_TIME) begin
            quarter_l = 1'b1;
        end else begin
            quarter_l = 1'b0;
        end

        //eigth note high
        if (counter_eigth_l == EIGTH_TIME) begin
            eigth_l = 1'b1;
        end else begin
            eigth_l = 1'b0;
        end

        //sixteenth note high
        if (counter_sixteenth_l == SIXTEENTH_TIME) begin
            sixteenth_l = 1'b1;
        end else begin
            sixteenth_l = 1'b0;
        end
    end

    assign quarter_o = quarter_l;
    assign eigth_o = eigth_l;
    assign sixteenth_o = sixteenth_l;
endmodule
