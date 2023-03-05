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
    output wire [3:0] arrow_left_o,
    output wire [3:0] arrow_up_o,
    output wire [3:0] arrow_down_o,
    output wire [3:0] arrow_right_o
    );

    //arrow logic parameters
    localparam ARROW_SIZE           = 50;
    localparam ARROW_GAP            = 10;
    localparam ARROW_SPACE          = ARROW_SIZE + ARROW_GAP;
    localparam ARROWX_LEFT_BEGIN    = 197;
    localparam ARROWX_UP_BEGIN      = ARROWX_LEFT_BEGIN + ARROW_SPACE;
    localparam ARROWX_DOWN_BEGIN    = ARROWX_UP_BEGIN + ARROW_SPACE;
    localparam ARROWX_RIGHT_BEGIN   = ARROWX_DOWN_BEGIN + ARROW_SPACE;
    localparam ARROWY_BEGIN         = 450;
    localparam ARROW_SPEED          = 7;
    localparam ARROW_COUNT          = 4;

    logic [(CORDW*ARROW_COUNT)-1:0] arrow_left_y_l;
    arrow_draw
        #(.CORDW(CORDW)
         ,.ARROWX_BEGIN(ARROWX_LEFT_BEGIN)
         ,.ARROW_SIZE(ARROW_SIZE)
         ,.ARROW_COUNT(ARROW_COUNT))
    arrow_draw_left
    (.sx_i(sx_i)
    ,.sy_i(sy_i)
    ,.arrow_y_i(arrow_left_y_l)
    ,.arrow_o(arrow_left_o)
    );
    arrow_movement
        #(.CORDW(CORDW)
         ,.ARROWY_BEGIN(ARROWY_BEGIN)
         ,.ARROW_SPEED(ARROW_SPEED)
         ,.ARROW_COUNT(ARROW_COUNT))
    arrow_movement_left
    (.clk_i(clk_i)
    ,.frame_i(frame_i)
    ,.launch_i(btn_left_i)
    ,.arrow_y_o(arrow_left_y_l)
    );

    logic [(CORDW*ARROW_COUNT)-1:0] arrow_up_y_l;
    arrow_draw
        #(.CORDW(CORDW)
         ,.ARROWX_BEGIN(ARROWX_UP_BEGIN)
         ,.ARROW_SIZE(ARROW_SIZE)
         ,.ARROW_COUNT(ARROW_COUNT))
    arrow_draw_up
    (.sx_i(sx_i)
    ,.sy_i(sy_i)
    ,.arrow_y_i(arrow_up_y_l)
    ,.arrow_o(arrow_up_o)
    );
    arrow_movement
        #(.CORDW(CORDW)
         ,.ARROWY_BEGIN(ARROWY_BEGIN)
         ,.ARROW_SPEED(ARROW_SPEED)
         ,.ARROW_COUNT(ARROW_COUNT))
    arrow_movement_up
    (.clk_i(clk_i)
    ,.frame_i(frame_i)
    ,.launch_i(btn_up_i)
    ,.arrow_y_o(arrow_up_y_l)
    );

    logic [(CORDW*ARROW_COUNT)-1:0] arrow_down_y_l;
    arrow_draw
        #(.CORDW(CORDW)
         ,.ARROWX_BEGIN(ARROWX_DOWN_BEGIN)
         ,.ARROW_SIZE(ARROW_SIZE)
         ,.ARROW_COUNT(ARROW_COUNT))
    arrow_draw_down
    (.sx_i(sx_i)
    ,.sy_i(sy_i)
    ,.arrow_y_i(arrow_down_y_l)
    ,.arrow_o(arrow_down_o)
    );
    arrow_movement
        #(.CORDW(CORDW)
         ,.ARROWY_BEGIN(ARROWY_BEGIN)
         ,.ARROW_SPEED(ARROW_SPEED)
         ,.ARROW_COUNT(ARROW_COUNT))
    arrow_movement_down
    (.clk_i(clk_i)
    ,.frame_i(frame_i)
    ,.launch_i(btn_down_i)
    ,.arrow_y_o(arrow_down_y_l)
    );

    logic [(CORDW*ARROW_COUNT)-1:0] arrow_right_y_l;
    arrow_draw
        #(.CORDW(CORDW)
         ,.ARROWX_BEGIN(ARROWX_RIGHT_BEGIN)
         ,.ARROW_SIZE(ARROW_SIZE)
         ,.ARROW_COUNT(ARROW_COUNT))
    arrow_draw_right
    (.sx_i(sx_i)
    ,.sy_i(sy_i)
    ,.arrow_y_i(arrow_right_y_l)
    ,.arrow_o(arrow_right_o)
    );
    arrow_movement
        #(.CORDW(CORDW)
         ,.ARROWY_BEGIN(ARROWY_BEGIN)
         ,.ARROW_SPEED(ARROW_SPEED)
         ,.ARROW_COUNT(ARROW_COUNT))
    arrow_movement_right
    (.clk_i(clk_i)
    ,.frame_i(frame_i)
    ,.launch_i(btn_right_i)
    ,.arrow_y_o(arrow_right_y_l)
    );

endmodule
