`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:26:35 05/20/2016 
// Design Name: 
// Module Name:    RegDR 
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
module RegDR(clk,
				adr,
				bdr,
				ADR,
				BDR);
	input clk;
	input[31:0] adr, bdr;
	output reg[31:0] ADR, BDR;
	
	always @(negedge clk)
		begin
			ADR <= adr;
			BDR <= bdr;
		end

endmodule
