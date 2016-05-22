`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:04:08 05/19/2016
// Design Name:   CPU
// Module Name:   C:/Users/Fade/Desktop/multicycle cpu/multicycleCPU/cpu_tf.v
// Project Name:  multicycleCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_tf;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] init;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.clk(clk), 
		.reset(reset), 
		.init(init)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		init = 32'h00000028;

		// Wait 100 ns for global reset to finish
      #100;
			clk = !clk;
		#100;
			reset = 0;
			clk = !clk;
      forever #100
			begin // 产生时钟信号
				clk = !clk;
			end
		
		// Add stimulus here


	end
      
endmodule

