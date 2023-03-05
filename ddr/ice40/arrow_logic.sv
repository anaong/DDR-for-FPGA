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
    localparam ARROW_COUNT = 4;

    logic [(CORDW*ARROW_COUNT)-1:0] arrow_y_l;
    arrow_draw
        #(.CORDW(CORDW)
         ,.ARROWX_BEGIN(ARROWX_BEGIN)
         ,.ARROW_SIZE(ARROW_SIZE)
         ,.ARROW_COUNT(ARROW_COUNT))
    arrow_draw_inst
    (.sx_i(sx_i)
    ,.sy_i(sy_i)
    ,.arrow_y_i(arrow_y_l)
    ,.arrow_o(arrow_o)
    );

    arrow_movement
        #(.CORDW(CORDW)
         ,.ARROWY_BEGIN(ARROWY_BEGIN)
         ,.ARROW_SPEED(ARROW_SPEED)
         ,.ARROW_COUNT(ARROW_COUNT))
    arrow_movement_inst
    (.clk_i(clk_i)
    ,.frame_i(frame_i)
    ,.launch_i(btn_left_i)
    ,.arrow_y_o(arrow_y_l)
    );

endmodule
