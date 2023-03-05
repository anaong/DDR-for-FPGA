`default_nettype none
`timescale 1ns / 1ps

module arrow_movement #(parameter CORDW = 10
                       ,parameter ARROWY_BEGIN = 480
                       ,parameter ARROW_SPEED = 5
                       ,parameter ARROW_COUNT = 4) (
    input  wire [0:0] clk_i,
    input  wire [0:0] frame_i,
    input  wire [0:0] btn_left_i,
    input  wire [0:0] btn_up_i,
    input  wire [0:0] btn_down_i,
    input  wire [0:0] btn_right_i,
    output wire [(CORDW*ARROW_COUNT)-1:0] arrow_y_o
    );
    logic [CORDW-1:0] arrow1_l;
    logic [CORDW-1:0] arrow2_l;
    logic [CORDW-1:0] arrow3_l;
    logic [CORDW-1:0] arrow4_l;

    assign arrow_y_o = {arrow1_l, arrow2_l, arrow3_l, arrow4_l};

    logic [0:0] resetl_l = arrow1_l <= 3 | arrow1_l >= 485;
    logic [0:0] resetu_l = arrow2_l <= 3 | arrow2_l >= 485;
    logic [0:0] resetd_l = arrow3_l <= 3 | arrow3_l >= 485;
    logic [0:0] resetr_l = arrow4_l <= 3 | arrow4_l >= 485;
    
    enum logic [1:0] {state_wait_s  = 2'b00,
                      state_count_s = 2'b01,
                      state_move_s  = 2'b10,
                      state_judge_s = 2'b11
                     }state_r, state_n
                     ,state_ru, state_nu
                     ,state_rd, state_nd
                     ,state_rr, state_nr;

    always_comb begin
        case({state_r, btn_left_i, resetl_l})
            {state_wait_s, 1'b1, 1'b0} : begin
                state_n = state_count_s;
            end
            {state_count_s, 1'b0, 1'b0} : begin
                state_n = state_move_s;
            end
            {state_move_s, 1'b0, 1'b1} : begin
                state_n = state_judge_s;
            end
            {state_judge_s, 1'b0, 1'b0} : begin
                state_n = state_wait_s;
            end
            default : state_n = state_r;
        endcase
    end

    always_comb begin
        case({state_ru, btn_up_i, resetu_l})
            {state_wait_s, 1'b1, 1'b0} : begin
                state_nu = state_count_s;
            end
            {state_count_s, 1'b0, 1'b0} : begin
                state_nu = state_move_s;
            end
            {state_move_s, 1'b0, 1'b1} : begin
                state_nu = state_judge_s;
            end
            {state_judge_s, 1'b0, 1'b0} : begin
                state_nu = state_wait_s;
            end
            default : state_nu = state_ru;
        endcase
    end

    always_comb begin
        case({state_rd, btn_down_i, resetd_l})
            {state_wait_s, 1'b1, 1'b0} : begin
                state_nd = state_count_s;
            end
            {state_count_s, 1'b0, 1'b0} : begin
                state_nd = state_move_s;
            end
            {state_move_s, 1'b0, 1'b1} : begin
                state_nd = state_judge_s;
            end
            {state_judge_s, 1'b0, 1'b0} : begin
                state_nd = state_wait_s;
            end
            default : state_nd = state_rd;
        endcase
    end

    always_comb begin
        case({state_rr, btn_up_i, resetr_l})
            {state_wait_s, 1'b1, 1'b0} : begin
                state_nr = state_count_s;
            end
            {state_count_s, 1'b0, 1'b0} : begin
                state_nr = state_move_s;
            end
            {state_move_s, 1'b0, 1'b1} : begin
                state_nr = state_judge_s;
            end
            {state_judge_s, 1'b0, 1'b0} : begin
                state_nr = state_wait_s;
            end
            default : state_nr = state_rr;
        endcase
    end

    always_ff @(posedge clk_i) begin
        state_r <= state_n;
        state_ru <= state_nu;
        state_rd <= state_nd;
        state_rr <= state_nr;
    end
    
    logic [3:0]count_up_l = '0;
    always_comb begin
        count_up_l[0] = (state_r == state_move_s) ? 1'b1 : 1'b0;
        count_up_l[1] = (state_ru == state_move_s) ? 1'b1 : 1'b0;
        count_up_l[2] = (state_rd == state_move_s) ? 1'b1 : 1'b0;
        count_up_l[3] = (state_rr == state_move_s) ? 1'b1 : 1'b0;
    end

    //left arrow
    always_ff @(posedge clk_i) begin
        if(arrow1_l <= 3 | arrow1_l >= 485) begin
            arrow1_l <= ARROWY_BEGIN;
        end else if (frame_i & state_r == state_move_s) begin
            case(count_up_l[0])
                1'b1: arrow1_l <= arrow1_l - ARROW_SPEED;
                default : arrow1_l <= ARROWY_BEGIN;
            endcase
        end
    end

    //up arrow
    always_ff @(posedge clk_i) begin
        if(arrow2_l <= 3 | arrow2_l >= 485) begin
            arrow2_l <= ARROWY_BEGIN;
        end else if (frame_i & state_ru == state_move_s) begin
            case(count_up_l[1])
                1'b1: arrow2_l <= arrow2_l - ARROW_SPEED;
                default : arrow2_l <= arrow2_l;
            endcase
        end
    end

    //down arrow
    always_ff @(posedge clk_i) begin
        if(arrow3_l <= 3 | arrow3_l >= 485) begin
            arrow3_l <= ARROWY_BEGIN;
        end else if (frame_i & state_rd == state_move_s) begin
            case(count_up_l[2])
                1'b1: arrow3_l <= arrow3_l - ARROW_SPEED;
                default : arrow3_l <= arrow3_l;
            endcase
        end
    end

    //right arrow
    always_ff @(posedge clk_i) begin
        if(arrow4_l <= 3 | arrow4_l >= 485) begin
            arrow4_l <= ARROWY_BEGIN;
        end else if (frame_i & state_rr == state_move_s) begin
            case(count_up_l[3])
                1'b1: arrow4_l <= arrow4_l - ARROW_SPEED;
                default : arrow4_l <= arrow4_l;
            endcase
        end
    end

endmodule
