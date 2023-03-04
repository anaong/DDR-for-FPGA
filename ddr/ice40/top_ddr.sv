//DDR Project for UCSC CSE x25 taught by Dustin Richmond
//By: Andre Ong
//Used a lot of Will Green Pong project as a skeleton
//Link: https://projectf.io/posts/fpga-pong/

`default_nettype none
`timescale 1ns / 1ps

module top_ddr (
    input  wire logic clk_12m_i,      // 12 MHz clock
    input  wire logic btn_rst_i,      // reset button
    input  wire logic btn_fire_i,     // fire button
    input  wire logic btn_up_i,       // up button
    input  wire logic btn_dn_i,       // down button
    output      logic dvi_clk_o,      // DVI pixel clock
    output      logic dvi_hsync_o,    // DVI horizontal sync
    output      logic dvi_vsync_o,    // DVI vertical sync
    output      logic dvi_de_o,       // DVI data enable
    output      logic [3:0] dvi_r_o,  // 4-bit DVI red
    output      logic [3:0] dvi_g_o,  // 4-bit DVI green
    output      logic [3:0] dvi_b_o   // 4-bit DVI blue
    );
    //* verilator lint_off UNUSEDPARAM */
    //* verilator lint_off UNUSEDSIGNAL */
    //* verilator lint_off UNDRIVEN */

    // gameplay parameters

    // generate pixel clock
    /* verilator lint_off PINCONNECTEMPTY */
    logic clk_pix_l;
    logic clk_pix_locked_l;
    clock_480p clock_pix_inst (
       .clk_12m(clk_12m_i),
       .rst(btn_rst_i & btn_fire_i & btn_up_i & btn_dn_i),
       .clk_pix(clk_pix_l),
       .clk_pix_locked(clk_pix_locked_l)
    );
    /* verilator lint_off PINCONNECTEMPTY */

    // display sync signals and coordinates
    localparam CORDW = 10;  // screen coordinate width in bits
    logic [CORDW-1:0] sx_l, sy_l;
    logic hsync_l, vsync_l, de_l;
    simple_480p display_inst (
        .clk_pix(clk_pix_l),
        .rst_pix(!clk_pix_locked_l),  // wait for clock lock
        .sx(sx_l),
        .sy(sy_l),
        .hsync(hsync_l),
        .vsync(vsync_l),
        .de(de_l)
    );

    // screen dimensions (must match display_inst)
    localparam H_RES = 640;  // horizontal screen resolution
    localparam V_RES = 480;  // vertical screen resolution

    logic frame_l;  // high for one clock tick at the start of vertical blanking
    always_comb frame_l = (sy_l == V_RES && sx_l == 0);

    // debounce buttons
    logic left_l, up_l, down_l, right_l;
    /* verilator lint_off PINCONNECTEMPTY */
    debounce deb_left (.clk(clk_pix_l), .in(btn_fire_i), .out(left_l), .ondn(), .onup());
    debounce deb_up (.clk(clk_pix_l), .in(btn_up_i), .out(up_l), .ondn(), .onup());
    debounce deb_down (.clk(clk_pix_l), .in(btn_dn_i), .out(down_l), .ondn(), .onup());
    debounce deb_right (.clk(clk_pix_l), .in(btn_rst_i), .out(right_l), .ondn(), .onup());
    /* verilator lint_on PINCONNECTEMPTY */

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
        arrowl = (sx >= arrowl_x) && (sx <= arrowl_x + ARROW_SIZE) && (sy >= arrowl_y) && (sy <= arrowl_y + ARROW_SIZE);
        arrowu = (sx >= arrowu_x) && (sx <= arrowu_x + ARROW_SIZE) && (sy >= arrowu_y) && (sy <= arrowu_y + ARROW_SIZE);
        arrowd = (sx >= arrowd_x) && (sx <= arrowd_x + ARROW_SIZE) && (sy >= arrowd_y) && (sy <= arrowd_y + ARROW_SIZE);
        arrowr = (sx >= arrowr_x) && (sx <= arrowr_x + ARROW_SIZE) && (sy >= arrowr_y) && (sy <= arrowr_y + ARROW_SIZE);
    end

    // paint colour
    logic [3:0] paint_r_l, paint_g_l, paint_b_l;

    // display colour: paint colour but black in blanking interval
    logic [3:0] display_r_l, display_g_l, display_b_l;
    always_comb begin
        display_r_l = (de_l) ? paint_r_l : 4'h0;
        display_g_l = (de_l) ? paint_g_l : 4'h0;
        display_b_l = (de_l) ? paint_b_l : 4'h0;
    end

    // DVI Pmod output
    SB_IO #(
        .PIN_TYPE(6'b010100)  // PIN_OUTPUT_REGISTERED
    ) dvi_signal_io [14:0] (
        .PACKAGE_PIN({dvi_hsync_o, dvi_vsync_o, dvi_de_o, dvi_r_o, dvi_g_o, dvi_b_o}),
        .OUTPUT_CLK(clk_pix_l),
        .D_OUT_0({hsync_l, vsync_l, de_l, display_r_l, display_g_l, display_b_l}),
        /* verilator lint_off PINCONNECTEMPTY */
        .D_OUT_1()
        /* verilator lint_on PINCONNECTEMPTY */
    );

    // DVI Pmod clock output: 180° out of phase with other DVI signals
    SB_IO #(
        .PIN_TYPE(6'b010000)  // PIN_OUTPUT_DDR
    ) dvi_clk_io (
        .PACKAGE_PIN(dvi_clk_o),
        .OUTPUT_CLK(clk_pix_l),
        .D_OUT_0(1'b0),
        .D_OUT_1(1'b1)
    );

    /* verilator lint_off UNUSEDPARAM */
    /* verilator lint_off UNUSEDSIGNAL */
    /* verilator lint_off UNDRIVEN */
endmodule
