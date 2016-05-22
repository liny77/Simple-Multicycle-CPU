`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:37:53 05/20/2016
// Design Name:   PC
// Module Name:   C:/Users/Fade/Desktop/multicycle cpu/multicycleCPU/pc_tf.v
// Project Name:  multicycleCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pc_tf;

	// Inputs
	reg clk;
	reg reset;
	reg PCWre;
	reg [31:0] Extend;
	reg [31:0] rs;
	reg [31:0] init;
	reg [31:0] OP;
	reg [1:0] PCSrc;

	// Outputs
	wire [31:0] PC0;
	wire [31:0] PC4;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.clk(clk), 
		.reset(reset), 
		.PCWre(PCWre), 
		.Extend(Extend), 
		.rs(rs), 
		.init(init), 
		.OP(OP), 
		.PCSrc(PCSrc), 
		.PC0(PC0), 
		.PC4(PC4)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		PCWre = 0;
		Extend = 0;
		rs = 0;
		init = 32'h00000028;
		OP = 0;
		PCSrc = 2'b00;

		// Wait 100 ns for global reset to finish
		#100;
			clk = !clk;
		#100;
			clk = !clk;
			reset = 0;
		#100;
			clk = !clk;
			PCWre = 1;
			PCSrc = 2'b00;
		#100;
			clk = !clk;
			OP = 7'h0000064;
			PCWre = 1;
			PCSrc = 2'b11;
		// Add stimulus here
		forever #100
			begin // 产生时钟信号
				clk = !clk;
			end
	end
      
endmodule

