//Displays the chart from chart.hex into the game
//Takes hex value
//Left 4 bits is which arrows to launch
//Right 4 bits is when arrows will launch

`default_nettype none
`timescale 1ns / 1ps

module chart #() (
    input  wire [0:0] clk_i,
    input  wire [0:0] next_i,
    output wire [3:0] arrows_o,
    output wire [3:0] timing_o
    );
    localparam WIDTH = 3;
    wire [WIDTH-1:0] rd_addr_w;

    counter_up
        #(.WIDTH_P(WIDTH))
    counter_up_chart
    (.clk_i(clk_i)
    ,.reset_i(1'b0)
    ,.up_i(next_i)
    ,.count_o(rd_addr_w)
    );

    rom
        #()
    rom_inst
    (.rd_addr_i(rd_addr_w)
    ,.rd_data_o({arrows_o, timing_o})
    );

endmodule
