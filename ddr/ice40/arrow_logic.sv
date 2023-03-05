`default_nettype none
`timescale 1ns / 1ps

module arrow_logic #(parameter CORDW = 10) (
    input  wire clk_i,
    input  wire [CORDW-1:0] sx_i,
    input  wire [CORDW-1:0] sy_i,
    input  wire frame_i,
    input  wire btn_left_i,
    input  wire btn_up_i,
    input  wire btn_down_i,
    input  wire btn_right_i,
    output wire [3:0] arrow_o
    );

    //arrow
    localparam ARROW_SIZE   = 50;
    localparam ARROW_GAP    = 15;
    localparam ARROWX_BEGIN = 197;
    localparam ARROWY_BEGIN = 480;
    localparam ARROW_SPEED  = 7;

    logic arrowl, arrowu, arrowd, arrowr;
    logic [CORDW-1:0] arrowl_x = ARROWX_BEGIN;
    logic [CORDW-1:0] arrowl_y = ARROWY_BEGIN;

    logic [CORDW-1:0] arrowu_x = arrowl_x + ARROW_SIZE + ARROW_GAP;
    logic [CORDW-1:0] arrowu_y = ARROWY_BEGIN;

    logic [CORDW-1:0] arrowd_x = arrowu_x + ARROW_SIZE + ARROW_GAP;
    logic [CORDW-1:0] arrowd_y = ARROWY_BEGIN;

    logic [CORDW-1:0] arrowr_x = arrowd_x + ARROW_SIZE+ ARROW_GAP;
    logic [CORDW-1:0] arrowr_y = ARROWY_BEGIN;
    always_comb begin
        arrowl = (sx_i >= arrowl_x) && (sx_i <= arrowl_x + ARROW_SIZE) && (sy_i >= arrowl_y) && (sy_i <= arrowl_y + ARROW_SIZE);
        arrowu = (sx_i >= arrowu_x) && (sx_i <= arrowu_x + ARROW_SIZE) && (sy_i >= arrowu_y) && (sy_i <= arrowu_y + ARROW_SIZE);
        arrowd = (sx_i >= arrowd_x) && (sx_i <= arrowd_x + ARROW_SIZE) && (sy_i >= arrowd_y) && (sy_i <= arrowd_y + ARROW_SIZE);
        arrowr = (sx_i >= arrowr_x) && (sx_i <= arrowr_x + ARROW_SIZE) && (sy_i >= arrowr_y) && (sy_i <= arrowr_y + ARROW_SIZE);
    end
    
    assign arrow_o = {arrowl, arrowu, arrowd, arrowr};

    logic [0:0] resetl_l = arrowl_y <= 3 | arrowl_y >= 485;
    logic [0:0] resetu_l = arrowu_y <= 3 | arrowu_y >= 485;
    logic [0:0] resetd_l = arrowd_y <= 3 | arrowd_y >= 485;
    logic [0:0] resetr_l = arrowr_y <= 3 | arrowr_y >= 485;
    
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
        case({state_rr, btn_up_i | btn_right_i, resetr_l})
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
        if(arrowl_y <= 3 | arrowl_y >= 485) begin
            arrowl_y <= ARROWY_BEGIN;
        end else if (frame_i & state_r == state_move_s) begin
            case(count_up_l[0])
                1'b1: arrowl_y <= arrowl_y - ARROW_SPEED;
                default : arrowl_y <= ARROWY_BEGIN;
            endcase
        end
    end

    //up arrow
    always_ff @(posedge clk_i) begin
        if(arrowu_y <= 3 | arrowu_y >= 485) begin
            arrowu_y <= ARROWY_BEGIN;
        end else if (frame_i & state_ru == state_move_s) begin
            case(count_up_l[1])
                1'b1: arrowu_y <= arrowu_y - ARROW_SPEED;
                default : arrowu_y <= arrowu_y;
            endcase
        end
    end

    //down arrow
    always_ff @(posedge clk_i) begin
        if(arrowd_y <= 3 | arrowd_y >= 485) begin
            arrowd_y <= ARROWY_BEGIN;
        end else if (frame_i & state_rd == state_move_s) begin
            case(count_up_l[2])
                1'b1: arrowd_y <= arrowd_y - ARROW_SPEED;
                default : arrowd_y <= arrowd_y;
            endcase
        end
    end

    //right arrow
    always_ff @(posedge clk_i) begin
        if(arrowr_y <= 3 | arrowr_y >= 485) begin
            arrowr_y <= ARROWY_BEGIN;
        end else if (frame_i & state_rr == state_move_s) begin
            case(count_up_l[3])
                1'b1: arrowr_y <= arrowr_y - ARROW_SPEED;
                default : arrowr_y <= arrowr_y;
            endcase
        end
    end

endmodule
