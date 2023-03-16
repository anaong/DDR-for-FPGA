// Project F: FPGA Pong - Pong Game (Verilator SDL)
// (C)2023 Will Green, open source hardware released under the MIT License
// Learn more at https://projectf.io/posts/fpga-pong/

`default_nettype none
`timescale 1ns / 1ps

module top_ddr #(parameter CORDW=10) (    // coordinate width
    input  wire clk_pix,             // pixel clock
    input  wire sim_rst,             // sim reset
    input  wire btn_fire,            // fire button
    input  wire btn_up,              // up button
    input  wire btn_dn,              // down button
    output      logic [CORDW-1:0] sdl_sx,  // horizontal SDL position
    output      logic [CORDW-1:0] sdl_sy,  // vertical SDL position
    output      logic sdl_de,              // data enable (low in blanking interval)
    output      logic [7:0] sdl_r,         // 8-bit red
    output      logic [7:0] sdl_g,         // 8-bit green
    output      logic [7:0] sdl_b          // 8-bit blue
    );

    // gameplay parameters

    // display sync signals and coordinates
    wire [CORDW-1:0] sx, sy;
    wire de;
    simple_480p display_inst (
        .clk_pix,
        /* verilator lint_off PINCONNECTEMPTY */
        .rst_pix(),
        .sx,
        .sy,
        .hsync(),
        .vsync(),
        /* verilator lint_on PINCONNECTEMPTY */
        .de
    );

    // screen dimensions (must match display_inst)
    // localparam H_RES = 640;  // horizontal screen resolution
    localparam V_RES = 480;  // vertical screen resolution

    logic frame;  // high for one clock tick at the start of vertical blanking
    always_comb frame = (sy == V_RES && sx == 0);

    wire [3:0] arrows_w;
    wire [3:0] timing_w;
    wire [0:0] next_w;
    chart
        #()
    chart_inst
    (.clk_i(clk_pix)
    ,.next_i(next_w)
    ,.arrows_o(arrows_w)
    ,.timing_o(timing_w)
    );

    // debounce buttons
    wire sig_fire, sig_up, sig_dn, sig_rst;
    /* verilator lint_off PINCONNECTEMPTY */
    debounce deb_fire (.clk(clk_pix), .in(btn_fire), .out(), .ondn(), .onup(sig_fire));
    debounce deb_up (.clk(clk_pix), .in(btn_up), .out(), .ondn(), .onup(sig_up));
    debounce deb_dn (.clk(clk_pix), .in(btn_dn), .out(), .ondn(), .onup(sig_dn));
    debounce deb_rst (.clk(clk_pix), .in(sim_rst), .out(), .ondn(), .onup(sig_rst));
    /* verilator lint_on PINCONNECTEMPTY */

    wire [2:0] arrow_left_l;
    wire [2:0] arrow_up_l;
    wire [2:0] arrow_down_l;
    wire [2:0] arrow_right_l;
    // wire [0:0] life_bar_l;
    // wire [47:0] arrow_left_color_w;
    // wire [47:0] arrow_up_color_w;
    // wire [47:0] arrow_down_color_w;
    // wire [47:0] arrow_right_color_w;
    arrow_logic
        #(.CORDW(CORDW))
    arrow_logic_inst
    (.clk_i(clk_pix)
    ,.sx_i(sx)
    ,.sy_i(sy)
    ,.frame_i(frame)
    ,.btn_left_i(sig_fire)
    ,.btn_up_i(sig_up)
    ,.btn_down_i(sig_dn)
    ,.btn_right_i(sig_rst)
    ,.arrows_i(arrows_w)
    ,.timing_i(timing_w)
    ,.arrow_left_o(arrow_left_l)
    ,.arrow_up_o(arrow_up_l)
    ,.arrow_down_o(arrow_down_l)
    ,.arrow_right_o(arrow_right_l)
    // ,.life_bar_o(life_bar_l)
    ,.next_o(next_w)
    // ,.arrow_left_color_o(arrow_left_color_w)
    // ,.arrow_up_color_o(arrow_up_color_w)
    // ,.arrow_down_color_o(arrow_down_color_w)
    // ,.arrow_right_color_o(arrow_right_color_w)
    );

    // paint colour
    logic [3:0] paint_r, paint_g, paint_b;
    always_comb begin
        // if (arrow_left_l[3]) {paint_r, paint_g, paint_b} = arrow_left_color_w[47:36];
        if (arrow_left_l[2]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_left_color_w[35:24];
        else if (arrow_left_l[1]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_left_color_w[23:12];
        else if (arrow_left_l[0]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_left_color_w[11:0];
        // else if (arrow_up_l[3]) {paint_r, paint_g, paint_b} = arrow_up_color_w[47:36];
        else if (arrow_up_l[2]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_up_color_w[35:24];
        else if (arrow_up_l[1]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_up_color_w[23:12];
        else if (arrow_up_l[0]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_up_color_w[11:0];
        // else if (arrow_down_l[3]) {paint_r, paint_g, paint_b} = arrow_down_color_w[47:36];
        else if (arrow_down_l[2]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_down_color_w[35:24];
        else if (arrow_down_l[1]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_down_color_w[23:12];
        else if (arrow_down_l[0]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_down_color_w[11:0];
        // else if (arrow_right_l[3]) {paint_r, paint_g, paint_b} = arrow_right_color_w[47:36];
        else if (arrow_right_l[2]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_right_color_w[35:24];
        else if (arrow_right_l[1]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_right_color_w[23:12];
        else if (arrow_right_l[0]) {paint_r, paint_g, paint_b} = 12'hFFF;//arrow_right_color_w[11:0];
        // else if (life_bar_l) {paint_r, paint_g, paint_b} = 12'hFFF;
        else {paint_r, paint_g, paint_b} = 12'h44E;  // background
    end

    // display colour: paint colour but black in blanking interval
    logic [3:0] display_r, display_g, display_b;
    always_comb begin
        display_r = (de) ? paint_r : 4'h0;
        display_g = (de) ? paint_g : 4'h0;
        display_b = (de) ? paint_b : 4'h0;
    end

    // SDL output (8 bits per colour channel)
    always_ff @(posedge clk_pix) begin
        sdl_sx <= sx;
        sdl_sy <= sy;
        sdl_de <= de;
        sdl_r <= {2{display_r}};
        sdl_g <= {2{display_g}};
        sdl_b <= {2{display_b}};
    end
endmodule
