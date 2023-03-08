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
    wire [9:0] score_base = 330;
    logic [9:0] score_offset_r = 0;
    logic [9:0] score_offset_n = 0;

    always_ff @(posedge clk_i) begin
        score_offset_r <= score_offset_n;
    end

    always_comb begin
        case ({(left_judge_i[3] | up_judge_i[3] | down_judge_i[3] | right_judge_i[3]),
               (left_judge_i[2] | up_judge_i[2] | down_judge_i[2] | right_judge_i[2]),
               (left_judge_i[1] | up_judge_i[1] | down_judge_i[1] | right_judge_i[1]),
               (left_judge_i[0] | up_judge_i[0] | down_judge_i[0] | right_judge_i[0])})
            4'b1000 : score_offset_n = score_offset_r + 50;
            4'b0100 : score_offset_n = score_offset_r + 50;
            4'b0010 : score_offset_n = score_offset_r + 50;
            4'b0001 : score_offset_n = score_offset_r + 50;
            default : score_offset_n = score_offset_r;
        endcase
    end

    assign life_bar_o = (sx_i >= 10) & (sx_i <= 20) & (sy_i >= (score_base - score_offset_r)) & (sy_i <= 330);

endmodule
