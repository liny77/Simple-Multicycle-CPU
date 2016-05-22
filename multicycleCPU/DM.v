`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:42:04 05/15/2016 
// Design Name: 
// Module Name:    DM 
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
module DM(DAddr,
			DataIn,
			DataMemRW,
			DataOut);
	input[31:0] DAddr, DataIn;
	input DataMemRW;
	output [31:0] DataOut;
	
	reg[7:0] memory[0:127];

	integer i;
	
	initial
		begin
			for (i = 0; i < 128; i = i + 1)
				memory[i] <= 0;
		end
		
	assign DataOut = {memory[DAddr], memory[DAddr + 1], memory[DAddr + 2], memory[DAddr + 3]};
	
	always @(DataMemRW or DataIn)
		begin
			if (DataMemRW == 1)
				begin
					memory[DAddr] <= DataIn[31:24];
					memory[DAddr + 1] <= DataIn[23:16];
					memory[DAddr + 2] <= DataIn[15:8];
					memory[DAddr + 3] <= DataIn[7:0];
				end
		end
		
endmodule
