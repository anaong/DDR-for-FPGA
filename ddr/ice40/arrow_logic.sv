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

    logic [0:0] go_l = btn_left_i | btn_up_i | btn_down_i | btn_right_i;
    logic [0:0] reset_l = arrowl_y <= 3 | arrowl_y >= 485 |
                          arrowu_y <= 3 | arrowu_y >= 485 |
                          arrowd_y <= 3 | arrowd_y >= 485 |
                          arrowr_y <= 3 | arrowr_y >= 485;
    
    enum logic [1:0] {state_wait_s  = 2'b00,
                      state_count_s = 2'b01,
                      state_move_s  = 2'b10,
                      state_judge_s = 2'b11
                      }state_r, state_n;

    always_comb begin
        case({state_r, go_l, reset_l})
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
    
    logic [0:0]count_up_l = '0;
    always_comb begin
        case(state_r)
            state_wait_s : begin
                count_up_l = 1'b0;
            end
            state_count_s : begin
                count_up_l = 1'b1;
            end
            state_move_s : begin
                count_up_l = 1'b0;
            end
            state_judge_s : begin
                count_up_l = 1'b0;
            end
        endcase
    end

    always_ff @(posedge clk_i) begin
        state_r <= state_n;
    end

    logic [1:0] arrow_count_l;
    counter_up 
        #(.WIDTH_P(2)
         ,.RESET_VAL(3))
    counter_up_inst
        (.clk_i(clk_i)
        ,.reset_i(1'b0)
        ,.up_i(count_up_l)
        ,.count_o(arrow_count_l)
        );

    always_ff @(posedge clk_i) begin
        if(arrowl_y <= 3 | arrowl_y >= 485 | btn_left_i) begin
            arrowl_y <= ARROWY_BEGIN;
        end else if (arrowu_y <= 3 | arrowu_y >= 485 | btn_up_i) begin
            arrowu_y <= ARROWY_BEGIN;
        end else if (arrowd_y <= 3 | arrowd_y >= 485 | btn_down_i) begin
            arrowd_y <= ARROWY_BEGIN;
        end else if (arrowr_y <= 3 | arrowr_y >= 485 | btn_right_i) begin
            arrowr_y <= ARROWY_BEGIN;
        end else if (frame_i & state_r == state_move_s) begin
            case(arrow_count_l)
            2'b00 : arrowl_y <= arrowl_y - ARROW_SPEED;
            2'b01 : arrowu_y <= arrowu_y - ARROW_SPEED;
            2'b10 : arrowd_y <= arrowd_y - ARROW_SPEED;
            2'b11 : arrowr_y <= arrowr_y - ARROW_SPEED;
            endcase
        end
    end

endmodule
