`default_nettype none
`timescale 1ns / 1ps

module ram_1r1w_sync
  #(parameter [31:0] width_p = 8
    ,parameter [31:0] depth_p = 128
    ,parameter  filename_p = "chart.hex")
   (input [0:0] clk_i
    ,input [0:0] wr_valid_i
    ,input [width_p-1:0] wr_data_i
    ,input [$clog2(depth_p) - 1 : 0] wr_addr_i

    ,input [$clog2(depth_p) - 1 : 0] rd_addr_i
    ,output [width_p-1:0] rd_data_o
    );

  logic [width_p-1:0] mem_l [depth_p-1:0];
  logic [width_p-1:0] rd_data_l;

  always_ff @(posedge clk_i) begin
    if(wr_valid_i) begin
      mem_l[wr_addr_i] <= wr_data_i;
    end
    rd_data_l <= mem_l[rd_addr_i];
  end

  assign rd_data_o = rd_data_l;
  
  initial begin
    $readmemh(filename_p, mem_l);
  end

endmodule

