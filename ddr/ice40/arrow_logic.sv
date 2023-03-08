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
    input  wire [3:0] arrows_i,
    input  wire [3:0] timing_i,
    output wire [3:0] arrow_left_o,
    output wire [3:0] arrow_up_o,
    output wire [3:0] arrow_down_o,
    output wire [3:0] arrow_right_o,
    output wire [0:0] life_bar_o
    );
    //arrow wire parameters
    localparam ARROW_SIZE           = 50;
    localparam ARROW_GAP            = 10;
    localparam ARROW_SPACE          = ARROW_SIZE + ARROW_GAP;
    localparam ARROWX_LEFT_BEGIN    = (640 - (ARROW_SIZE * 4 + ARROW_GAP * 3)) / 2;
    localparam ARROWX_UP_BEGIN      = ARROWX_LEFT_BEGIN + ARROW_SPACE;
    localparam ARROWX_DOWN_BEGIN    = ARROWX_UP_BEGIN + ARROW_SPACE;
    localparam ARROWX_RIGHT_BEGIN   = ARROWX_DOWN_BEGIN + ARROW_SPACE;
    localparam ARROWY_BEGIN         = 450;
    localparam ARROW_SPEED          = 5;
    localparam ARROW_COUNT          = 4;

    //** in comments means to do
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //timing for sheet music notes for
    //1/4 note, 1/8 note, and 1/16 note
    //also has a tick runs at **figure our tick rate**
    wire [0:0] quarter_w, eigth_w, sixteenth_w, tick_w;
    timing
        #()
    timing_inst
    (.clk_i(clk_i)  
    ,.quarter_o(quarter_w)
    ,.eigth_o(eigth_w)
    ,.sixteenth_o(sixteenth_w)
    ,.tick_o(tick_w)
    );
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //gets the timing/judge from the arrow and inscreases and decreases values listed below
    //increases and **decreases** the life bar on the left, the **combo counter**, and the **score**
    wire [3:0] left_judge_w, up_judge_w, down_judge_w, right_judge_w;
    scoring
        #(.CORDW(CORDW))
    scoring_inst
    (.clk_i(clk_i)
    ,.sx_i(sx_i)
    ,.sy_i(sy_i)
    ,.left_judge_i(left_judge_w)
    ,.up_judge_i(up_judge_w)
    ,.down_judge_i(down_judge_w)
    ,.right_judge_i(right_judge_w)
    ,.life_bar_o(life_bar_o)
    );
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //takes data from the chart.hex file and launches arrows with the correct timing
    wire [0:0] launch_left_w  = arrows_i[3] & ((quarter_w & timing_i[2]) | (eigth_w & timing_i[3]) | (sixteenth_w & timing_i == '1));
    wire [0:0] launch_up_w    = arrows_i[2] & ((quarter_w & timing_i[2]) | (eigth_w & timing_i[3]) | (sixteenth_w & timing_i == '1));
    wire [0:0] launch_down_w  = arrows_i[1] & ((quarter_w & timing_i[2]) | (eigth_w & timing_i[3]) | (sixteenth_w & timing_i == '1));
    wire [0:0] launch_right_w = arrows_i[0] & ((quarter_w & timing_i[2]) | (eigth_w & timing_i[3]) | (sixteenth_w & timing_i == '1));
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //a set of 4 left arrows
    //controls:
    //  drawing
    //  movement
    //  judge/timing
    //  launching
    //  detecting button press
    wire [(CORDW*ARROW_COUNT)-1:0] arrow_left_y_l;
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
    ,.frame_i(tick_w)
    ,.launch_i(launch_left_w)
    ,.btn_i(btn_left_i)
    ,.arrow_y_o(arrow_left_y_l)
    ,.judge_o(left_judge_w)
    );
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //a set of 4 up arrows
    //controls:
    //  drawing
    //  movement
    //  judge/timing
    //  launching
    //  detecting button press
    wire [(CORDW*ARROW_COUNT)-1:0] arrow_up_y_l;
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
    ,.frame_i(tick_w)
    ,.launch_i(launch_up_w)
    ,.btn_i(btn_up_i)
    ,.arrow_y_o(arrow_up_y_l)
    ,.judge_o(up_judge_w)
    );
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //a set of 4 down arrows
    //controls:
    //  drawing
    //  movement
    //  judge/timing
    //  launching
    //  detecting button press
    wire [(CORDW*ARROW_COUNT)-1:0] arrow_down_y_l;
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
    ,.frame_i(tick_w)
    ,.launch_i(launch_down_w)
    ,.btn_i(btn_down_i)
    ,.arrow_y_o(arrow_down_y_l)
    ,.judge_o(down_judge_w)
    );
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //a set of 4 right arrows
    //controls:
    //  drawing
    //  movement
    //  judge/timing
    //  launching
    //  detecting button press
    wire [(CORDW*ARROW_COUNT)-1:0] arrow_right_y_l;
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
    ,.frame_i(tick_w)
    ,.launch_i(launch_right_w)
    ,.btn_i(btn_right_i)
    ,.arrow_y_o(arrow_right_y_l)
    ,.judge_o(right_judge_w)
    );
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

endmodule
