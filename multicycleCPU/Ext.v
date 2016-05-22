`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:34 05/17/2016 
// Design Name: 
// Module Name:    Ext 
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
module Ext(OP,
			Out,
			ExtSel);
	
	input[1:0] ExtSel;
	input[31:0] OP;
	output[31:0] Out;
	
	wire[15:0] In;
	reg[31:0] out;
	
	assign Out = out;
	assign In = OP[15:0];
	
	always @(In or ExtSel)
		case(ExtSel)
			2'b00: out = { {27{1'b0}}, In[10:6] }; //  sa
			2'b01: out = { {16{1'b0}}, In[15:0] };
			2'b10: out = { {16{In[15]}}, In[15:0] };
		endcase
endmodule
