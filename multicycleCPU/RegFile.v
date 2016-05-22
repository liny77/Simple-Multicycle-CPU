`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:26:29 05/15/2016 
// Design Name: 
// Module Name:    RegFile 
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
module RegFile(OP,
					PC4, 
					ALUM2DR,
					WrRegData,
					RegOut,
					clk,
					RegWre,
					ADR,
					BDR);
	
	input[31:0] PC4, ALUM2DR, OP;
	input WrRegData, RegWre, clk;
	input[1:0] RegOut;	
	output[31:0] ADR, BDR;
	
	reg[31:0] registers[0:31];
	wire[31:0] WriteData;
	wire[4:0] WriteReg;
	wire[4:0] rs, rt, rd;
	integer i;
	
	assign rs = OP[25:21];
	assign rt = OP[20:16];
	assign rd = OP[15:11];
	
	assign WriteData = WrRegData ? ALUM2DR : PC4;
	assign WriteReg = (RegOut == 2'b00) ? 5'b11111 : ((RegOut == 2'b01) ? rt : rd);
	
	assign ADR = registers[rs];
	assign BDR = registers[rt];
	
	initial
		begin
			for (i = 0; i < 32; i = i + 1)
				registers[i] = 0;
		end

	always @(posedge clk)
		begin
		
			if (RegWre && WriteReg != 0)
				registers[WriteReg] = WriteData;
		end

endmodule
