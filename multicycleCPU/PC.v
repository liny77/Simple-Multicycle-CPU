`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:53 05/17/2016 
// Design Name: 
// Module Name:    PC 
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
module PC(clk,
			reset,
			PCWre,
			Extend,
			rs,
			init,
			OP,
			PCSrc,
			PC0,
			PC4);
	
	input clk, reset, PCWre;
	input[1:0] PCSrc;
	input[31:0] OP;
	input[31:0] Extend, rs, init;
	output[31:0] PC0, PC4;
	
	reg[31:0] pc;
	wire[25:0] addr;
	
	assign PC0 = pc;
	assign addr = OP[25:0];
	assign PC4 = pc + 32'h00000004;
	
	always @(posedge clk)
		begin
			if (reset)
				pc = init;
			else if (PCWre == 1)
				begin
					case (PCSrc)
						2'b00: pc <= pc + 32'h00000004;
						2'b01: pc <= pc + Extend * 4;
						2'b10: pc <= rs;
						2'b11: pc <= {pc[31:28], addr[25:0], 1'b0, 1'b0};
					endcase
				end
		end

endmodule
























