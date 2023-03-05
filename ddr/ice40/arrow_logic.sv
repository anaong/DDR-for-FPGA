`default_nettype none
`timescale 1ns / 1ps

module arrow_logic #(parameter CORDW = 10) (
    input  wire [0:0] clk_i,
    input  wire [CORDW-1:0] sx_i,
    input  wire [CORDW-1:0] sy_i,
    input  wire [0:0]frame_i,
    input  wire [0:0] btn_left_i,
    input  wire [0:0] btn_up_i,
    input  wire [0:0] btn_down_i,
    input  wire [0:0] btn_right_i,
    output wire [3:0] arrow_o
    );

    //arrow logic parameters
    localparam ARROW_SIZE   = 50;
    localparam ARROW_GAP    = 15;
    localparam ARROWX_BEGIN = 197;
    localparam ARROWY_BEGIN = 450;
    localparam ARROW_SPEED  = 7;
    localparam ARROW_SPACE = ARROW_SIZE + ARROW_GAP;

    //arrow initial poisition
    logic arrowl, arrowu, arrowd, arrowr;
    logic [CORDW-1:0] arrowl_x = ARROWX_BEGIN;
    logic [CORDW-1:0] arrowl_y;

    logic [CORDW-1:0] arrowu_x = arrowl_x + ARROW_SPACE;
    logic [CORDW-1:0] arrowu_y;

    logic [CORDW-1:0] arrowd_x = arrowu_x + ARROW_SPACE;
    logic [CORDW-1:0] arrowd_y;

    logic [CORDW-1:0] arrowr_x = arrowd_x + ARROW_SPACE;
    logic [CORDW-1:0] arrowr_y;

    //arrow drawing and size
    always_comb begin
        arrowl = (sx_i >= arrowl_x) && (sx_i <= arrowl_x + ARROW_SIZE) && (sy_i >= arrowl_y) && (sy_i <= arrowl_y + ARROW_SIZE);
        arrowu = (sx_i >= arrowu_x) && (sx_i <= arrowu_x + ARROW_SIZE) && (sy_i >= arrowu_y) && (sy_i <= arrowu_y + ARROW_SIZE);
        arrowd = (sx_i >= arrowd_x) && (sx_i <= arrowd_x + ARROW_SIZE) && (sy_i >= arrowd_y) && (sy_i <= arrowd_y + ARROW_SIZE);
        arrowr = (sx_i >= arrowr_x) && (sx_i <= arrowr_x + ARROW_SIZE) && (sy_i >= arrowr_y) && (sy_i <= arrowr_y + ARROW_SIZE);
    end

    assign arrow_o = {arrowl, arrowu, arrowd, arrowr};

    arrow_movement
        #(.CORDW(CORDW)
         ,.ARROWY_BEGIN(ARROWY_BEGIN)
         ,.ARROW_SPEED(ARROW_SPEED))
    arrow_movement_inst
    (.clk_i(clk_i)
    ,.frame_i(frame_i)
    ,.launch_i(btn_left_i)
    ,.arrow_y_o({arrowl_y, arrowu_y, arrowd_y, arrowr_y})
    );

endmodule
