//DDR Project for UCSC CSE x25 taught by Dustin Richmond
//By: Andre Ong
//Used a lot of Will Green Pong project as a skeleton
//Link: https://projectf.io/posts/fpga-pong/

`default_nettype none
`timescale 1ns / 1ps

module top_ddr (
    input  wire logic clk_12m,      // 12 MHz clock
    input  wire logic btn_rst,      // reset button
    input  wire logic btn_fire,     // fire button
    //input  wire logic btn_up,       // up button
    //input  wire logic btn_dn,       // down button
    input  wire       btn_left_i,   //left button from external button
    input  wire       btn_up_i,     //up button from external button
    input  wire       btn_down_i,   //down button from external button
    input  wire       btn_right_i,  //right button from external button
    output      logic dvi_clk,      // DVI pixel clock
    output      logic dvi_hsync,    // DVI horizontal sync
    output      logic dvi_vsync,    // DVI vertical sync
    output      logic dvi_de,       // DVI data enable
    output      logic [3:0] dvi_r,  // 4-bit DVI red
    output      logic [3:0] dvi_g,  // 4-bit DVI green
    output      logic [3:0] dvi_b   // 4-bit DVI blue
    );


    // generate pixel clock
    logic clk_pix;
    logic clk_pix_locked;
    clock_480p clock_pix_inst (
       .clk_12m,
       .rst(btn_rst),
       .clk_pix,
       .clk_pix_locked
    );

    // display sync signals and coordinates
    localparam CORDW = 10;  // screen coordinate width in bits
    logic [CORDW-1:0] sx, sy;
    logic hsync, vsync, de;
    simple_480p display_inst (
        .clk_pix,
        .rst_pix(!clk_pix_locked),  // wait for clock lock
        .sx,
        .sy,
        .hsync,
        .vsync,
        .de
    );

    // screen dimensions (must match display_inst)
    //localparam H_RES = 640;  // horizontal screen resolution
    localparam V_RES = 480;  // vertical screen resolution

    logic frame;  // high for one clock tick at the start of vertical blanking
    always_comb frame = (sy == V_RES && sx == 0);

    wire [3:0] arrow_w;
    wire [3:0] timing_w;
    wire [0:0] next_w;
    chart
        #()
    chart_inst
    (.clk_i(clk_pix)
    ,.next_i(fire_l)
    ,.arrows_o(arrow_w)
    ,.timing_o(timing_w)
    );

    // debounce buttons
    logic fire_l, left_l, up_l, right_l, down_l;
    /* verilator lint_off PINCONNECTEMPTY */
    debounce deb_fire (.clk(clk_pix), .in(btn_fire), .out(), .ondn(), .onup(fire_l));
    debounce deb_left (.clk(clk_pix), .in(btn_left_i), .out(), .ondn(), .onup(left_l));
    debounce deb_up (.clk(clk_pix), .in(btn_up_i), .out(), .ondn(), .onup(up_l));
    debounce deb_down (.clk(clk_pix), .in(btn_down_i), .out(), .ondn(), .onup(down_l));
    debounce deb_right (.clk(clk_pix), .in(btn_right_i), .out(), .ondn(), .onup(right_l));
    /* verilator lint_on PINCONNECTEMPTY */

    logic [2:0] arrow_left_l;
    logic [2:0] arrow_up_l;
    logic [2:0] arrow_down_l;
    logic [2:0] arrow_right_l;
    arrow_logic
        #(.CORDW(CORDW))
    arrow_logic_inst
    (.clk_i(clk_pix)
    ,.sx_i(sx)
    ,.sy_i(sy)
    ,.frame_i(frame)
    ,.btn_left_i(left_l)
    ,.btn_up_i(up_l)
    ,.btn_down_i(down_l)
    ,.btn_right_i(right_l)
    ,.arrows_i(arrow_w)
    ,.timing_i(timing_w)
    ,.arrow_left_o(arrow_left_l)
    ,.arrow_up_o(arrow_up_l)
    ,.arrow_down_o(arrow_down_l)
    ,.arrow_right_o(arrow_right_l)
    ,.next_o(next_w)
    );

    // paint colour
    logic [3:0] paint_r, paint_g, paint_b;
    always_comb begin
        if (arrow_left_l[2]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_left_l[1]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_left_l[0]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_up_l[2]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_up_l[1]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_up_l[0]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_down_l[2]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_down_l[1]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_down_l[0]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_right_l[2]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_right_l[1]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else if (arrow_right_l[0]) {paint_r, paint_g, paint_b} = 12'hFFF;
        else {paint_r, paint_g, paint_b} = 12'h44E;  // background
    end

    // display colour: paint colour but black in blanking interval
    logic [3:0] display_r, display_g, display_b;
    always_comb begin
        display_r = (de) ? paint_r : 4'h0;
        display_g = (de) ? paint_g : 4'h0;
        display_b = (de) ? paint_b : 4'h0;
    end

    // DVI Pmod output
    SB_IO #(
        .PIN_TYPE(6'b010100)  // PIN_OUTPUT_REGISTERED
    ) dvi_signal_io [14:0] (
        .PACKAGE_PIN({dvi_hsync, dvi_vsync, dvi_de, dvi_r, dvi_g, dvi_b}),
        .OUTPUT_CLK(clk_pix),
        .D_OUT_0({hsync, vsync, de, display_r, display_g, display_b}),
        /* verilator lint_off PINCONNECTEMPTY */
        .D_OUT_1()
        /* verilator lint_on PINCONNECTEMPTY */
    );

    // DVI Pmod clock output: 180° out of phase with other DVI signals
    SB_IO #(
        .PIN_TYPE(6'b010000)  // PIN_OUTPUT_DDR
    ) dvi_clk_io (
        .PACKAGE_PIN(dvi_clk),
        .OUTPUT_CLK(clk_pix),
        .D_OUT_0(1'b0),
        .D_OUT_1(1'b1)
    );
endmodule
