`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:38:01 05/17/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU(ADR,
			BDR,
			Extend,
			ALUOut,
			zero,
			ALUOp,
			ALUSrcB);
			
	input[31:0] ADR, BDR, Extend;
	input[2:0] ALUOp;
	input ALUSrcB;
	output zero;
	output reg[31:0] ALUOut;
	
	wire[31:0] alub;
	
	assign alub = ALUSrcB ? Extend : BDR;
	assign zero = (ADR - alub == 0) ? 1 : 0;
	
	always @(ALUOp or ADR or alub)
		begin
			case(ALUOp)
				3'b000: ALUOut = ADR + alub;
				3'b001: ALUOut = ADR - alub;
				3'b010: ALUOut = (ADR < alub) ? 1 : 0;
				3'b011: ALUOut = ADR >> alub;
				3'b100: ALUOut = ADR << alub;
				3'b101: ALUOut = ADR | alub;
				3'b110: ALUOut = ADR & alub;
				3'b111: ALUOut = (~ADR & alub) | (ADR & ~alub);
			endcase
		end
	
endmodule
