// Do not modify this file!
`timescale 1ns/1ps
`ifndef WIDTH
`define WIDTH 8
//`define WIDTH 16
`endif
module testbench();
   localparam width_lp = `WIDTH;
   localparam iterations_lp = 8;

   logic [0:0] reset_done = 1'b0;
   logic [0:0] up_i;
   wire [0:0]  clk_i;
   logic [0:0]  reset_i;
   wire [width_lp-1:0] rd_data_o;
   
   logic [2:0] rd_addr_i;
   logic [width_lp-1:0] correct_count_o;
   logic [0:0]  error_counter_o;

   logic [0:0] error;

   int			  itervar;

//    assign error_counter_o = (rd_data_o !== correct_count_o);

   nonsynth_clock_gen
     #(.cycle_time_p(10))
   cg
     (.clk_o(clk_i));

   nonsynth_reset_gen
     #(.num_clocks_p(1)
      ,.reset_cycles_lo_p(1)
      ,.reset_cycles_hi_p(10))
   rg
     (.clk_i(clk_i)
     ,.async_reset_o(reset_i));

   rom
      #()
   dut
     (.rd_addr_i(rd_addr_i)
     ,.rd_data_o(rd_data_o));

   initial begin
`ifdef VERILATOR
   $dumpfile("verilator.fst");
`else
   $dumpfile("iverilog.vcd");
`endif
   $dumpvars;

   $display();
   $display("///////////////////////////////////////");
   $display("***************************************");
   $display("TESTING TESTING TESTING TESTING TESTING");
   $display("***************************************");
   $display("///////////////////////////////////////");
   $display();
   $display("BEGIN TEST");

   itervar = 0;
   rd_addr_i = '0;
   correct_count_o = '0;

   @(negedge reset_i);

   reset_done = 1;

   for(itervar = 0; itervar < iterations_lp ; itervar ++) begin
	   @(posedge clk_i);
         rd_addr_i = rd_addr_i + 1;
         correct_count_o[7:4] = correct_count_o[7:4] + 1;
         correct_count_o[3:0] = correct_count_o[3:0] + 1;
	   $display("At Posedge %d: correct_count_o = %b, reset_i = %b ",
		itervar, correct_count_o, reset_i);
   end
      $finish();
   end


   always @(negedge clk_i) begin
      if(reset_done & !reset_i & error_counter_o) begin
	    $display("\033[0;31mError!\033[0m: rd_data_o should be %b, got %b", correct_count_o, rd_data_o);
        error_counter_o = 1'b1;
      end else if (reset_i & error_counter_o) begin
	    $display("\033[0;31mError!\033[0m: rd_data_o should be %b during reset, got %b", correct_count_o, rd_data_o);
        error_counter_o = 1'b1;
      end
   end

   final begin
      $display("Simulation time is %t", $time);
      if(error_counter_o) begin
	 $display("\033[0;31m    ______                    \033[0m");
	 $display("\033[0;31m   / ____/_____________  _____\033[0m");
	 $display("\033[0;31m  / __/ / ___/ ___/ __ \\/ ___/\033[0m");
	 $display("\033[0;31m / /___/ /  / /  / /_/ / /    \033[0m");
	 $display("\033[0;31m/_____/_/  /_/   \\____/_/     \033[0m");
	 $display();
	 $display("Simulation Failed");

     end else begin
	 $display("\033[0;32m    ____  ___   __________\033[0m");
	 $display("\033[0;32m   / __ \\/   | / ___/ ___/\033[0m");
	 $display("\033[0;32m  / /_/ / /| | \\__ \\\__ \ \033[0m");
	 $display("\033[0;32m / ____/ ___ |___/ /__/ / \033[0m");
	 $display("\033[0;32m/_/   /_/  |_/____/____/  \033[0m");
	 $display();
	 $display("Simulation Succeeded!");
      end
   end

endmodule
