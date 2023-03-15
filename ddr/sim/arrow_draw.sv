`default_nettype none
`timescale 1ns / 1ps

module arrow_draw #(parameter CORDW = 10
                   ,parameter ARROWX_BEGIN = 0
                   ,parameter ARROW_SIZE = 5
                   ,parameter ARROW_COUNT = 1) (
    input  wire [CORDW-1:0] sx_i,
    input  wire [CORDW-1:0] sy_i,
    input  wire [(CORDW*ARROW_COUNT)-1:0] arrow_y_i,
    output wire [ARROW_COUNT-1:0] arrow_o
    );
    // logic arrow1, 
    logic arrow2, arrow3, arrow4;
    
    //x position of each arrow
    //all should be the same value 
    /* verilator lint_off WIDTH */
    // logic [CORDW-1:0] arrow1_x = ARROWX_BEGIN;
    logic [CORDW-1:0] arrow2_x = ARROWX_BEGIN;
    logic [CORDW-1:0] arrow3_x = ARROWX_BEGIN;
    logic [CORDW-1:0] arrow4_x = ARROWX_BEGIN;
    /* verilator lint_off WIDTH */

    //tracks the positions of the y value of each arrow
    // logic [CORDW-1:0] arrow1_y = arrow_y_i[39:30];
    logic [CORDW-1:0] arrow2_y = arrow_y_i[29:20];
    logic [CORDW-1:0] arrow3_y = arrow_y_i[19:10];
    logic [CORDW-1:0] arrow4_y = arrow_y_i[9:0];

    //draws the arrow
    always_comb begin
        // arrow1 = (sx_i >= arrow1_x) & (sx_i <= arrow1_x + ARROW_SIZE) & (sy_i >= arrow1_y) & (sy_i <= arrow1_y + ARROW_SIZE);
        arrow2 = (sx_i >= arrow2_x) & (sx_i <= arrow2_x + ARROW_SIZE) & (sy_i >= arrow2_y) & (sy_i <= arrow2_y + ARROW_SIZE);
        arrow3 = (sx_i >= arrow3_x) & (sx_i <= arrow3_x + ARROW_SIZE) & (sy_i >= arrow3_y) & (sy_i <= arrow3_y + ARROW_SIZE);
        arrow4 = (sx_i >= arrow4_x) & (sx_i <= arrow4_x + ARROW_SIZE) & (sy_i >= arrow4_y) & (sy_i <= arrow4_y + ARROW_SIZE);
    end

    assign arrow_o = {/*arrow1,*/ arrow2, arrow3, arrow4};

endmodule
