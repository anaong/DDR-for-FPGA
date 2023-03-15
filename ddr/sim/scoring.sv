`default_nettype none
`timescale 1ns / 1ps

module scoring #(parameter CORDW = 10) (
    input  wire [0:0] clk_i,
    input  wire [CORDW-1:0] sx_i,
    input  wire [CORDW-1:0] sy_i,
    input  wire [3:0] left_judge_i,
    input  wire [3:0] up_judge_i,
    input  wire [3:0] down_judge_i,
    input  wire [3:0] right_judge_i,
    output wire [0:0] life_bar_o
    );
    //life bar sizing/dimmensions
    localparam LIFE_BAR_X_START = 170;
    localparam LIFE_BAR_X_END   = LIFE_BAR_X_START + 15;
    localparam LIFE_BAR_Y_BASE  = 390;
    localparam LIFE_BAR_MAX_VAL = 300;
    localparam DEFAULT_LIFE_VAL = 150;

    logic [9:0] score_progress_r = DEFAULT_LIFE_VAL;
    logic [9:0] score_progress_n = 0;

    always_ff @(posedge clk_i) begin
        score_progress_r <= score_progress_n;
    end

    always_comb begin
        case ({(score_progress_r >= LIFE_BAR_MAX_VAL),//checks if the bar is full
               (left_judge_i[3] | up_judge_i[3] | down_judge_i[3] | right_judge_i[3]),//marvelous
               (left_judge_i[2] | up_judge_i[2] | down_judge_i[2] | right_judge_i[2]),//perfect
               (left_judge_i[1] | up_judge_i[1] | down_judge_i[1] | right_judge_i[1]),//great
               (left_judge_i[0] | up_judge_i[0] | down_judge_i[0] | right_judge_i[0])})//good
            5'b01000 : score_progress_n = score_progress_r + 12;//marvelous
            5'b00100 : score_progress_n = score_progress_r + 9;//perfect
            5'b00010 : score_progress_n = score_progress_r + 6;//great
            5'b00001 : score_progress_n = score_progress_r + 3;//good
            //stops the life bar from going past 300 pixels which is 100% full
            5'b11000, 5'b10100, 5'b10010, 5'b10001 : score_progress_n = LIFE_BAR_MAX_VAL;
            default : score_progress_n = score_progress_r;
        endcase
    end

    //draws the life bar
    assign life_bar_o = (sx_i >= LIFE_BAR_X_START) & (sx_i <= LIFE_BAR_X_END) & 
                        (sy_i >= (LIFE_BAR_Y_BASE - score_progress_r)) & (sy_i <= LIFE_BAR_Y_BASE);

endmodule
