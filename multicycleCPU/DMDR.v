`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:32:43 05/20/2016 
// Design Name: 
// Module Name:    DMDR 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DMDR(clk,
				ALUOut,
				DataOut,
				ALUM2Reg,
				ALUM2DR);
	input clk, ALUM2Reg;
	input [31:0] ALUOut, DataOut;
	output reg[31:0] ALUM2DR;

	wire[31:0] in;
	
	assign in = (ALUM2Reg == 0) ? ALUOut : DataOut;
	always @(posedge clk)
		begin
			ALUM2DR = in;
		end
	
endmodule
