`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:22:50 05/20/2016 
// Design Name: 
// Module Name:    IR 
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
module IR(clk,
			DataOut,
			OP,
			IRWre);
	input clk, IRWre;
	input[31:0] DataOut;
	output reg[31:0] OP;

	always @(posedge clk)
		begin
			if (IRWre == 1) OP <= DataOut;
		end
		
endmodule
