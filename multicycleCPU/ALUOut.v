`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:29:13 05/20/2016 
// Design Name: 
// Module Name:    ALUOut 
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
module ALUOUT(clk,
				result,
				ALUOut);
	input [31:0] result;
	input clk;
	output reg[31:0] ALUOut;

	always @(negedge clk)
		begin
			ALUOut <= result;
		end

endmodule
