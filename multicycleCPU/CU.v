`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:00:38 05/17/2016 
// Design Name: 
// Module Name:    CU 
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
module CU(clk,
			reset,
			zero,
			OP,
			PCWre,
			ALUSrcB,
			ALUM2Reg,
			RegWre,
			WrRegData,
			InsMemRW,
			DataMemRW,
			IRWre,
			ALUOp,
			PCSrc,
			RegOut,
			ExtSel);

	input clk, reset, zero;
	input[31:0] OP;
	output reg PCWre, ALUSrcB, ALUM2Reg, RegWre, WrRegData, InsMemRW, DataMemRW, IRWre;
	output reg[1:0] PCSrc, RegOut, ExtSel;
	output reg[2:0] ALUOp;

	wire[5:0] op;

	reg[2:0] state;
	reg[2:0] nextState;
	
	assign op = OP[31:26];
	
	
	
	always @*
		begin
		
			RegWre <= 0;
			InsMemRW <= 0;
			DataMemRW <= 0;
			IRWre <= 0;
			
			//PCWre <= 0;
			//ALUSrcB <= 0;
			//ALUM2Reg <= 0;
			//WrRegData <= 0;
			//ALUOp <= 3'b000;
			//PCSrc <= 2'b00;
			//RegOut <= 2'b00;
			//ExtSel <= 2'b00;
			
			case(state)
				3'b000: // IF
					begin
						PCWre <= 1;
						RegWre <= 0;
						InsMemRW <= 0;
						DataMemRW <= 0;
						IRWre <= 1;
						PCSrc <= 2'b00;
						
						nextState <= 3'b001;
					end
				3'b001: // ID
					begin
						if (op == 6'b111000) // j
							begin
								PCWre <= 1;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								PCSrc <= 2'b11;
								
								nextState <= 3'b000;
							end
						else if (op == 6'b111010) // jal
							begin
								PCWre <= 1;
								RegWre <= 1;
								WrRegData <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								PCSrc <= 2'b11;
								RegOut <= 2'b00;
								
								nextState <= 3'b000;
							end
						else if (op == 6'b111001) // jr
							begin
								PCWre <= 1;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								PCSrc <= 2'b10;
								
								nextState <= 3'b000;
							end
						else if (op == 6'b111111) // halt
							begin
								PCWre <= 0;
								IRWre <= 0;
								
								nextState <= 3'b001;
							end
						else //非跳转指令
							begin
								PCWre <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								
								if (op == 6'b110000 || op == 6'b110001) nextState <= 3'b010;
								else if (op == 6'b110100) nextState <= 3'b101;
								else nextState <= 3'b110;
							end
					end
				3'b110: //  EXE 算数逻辑运算
					begin
						if (op == 6'b000000) // add
							begin
								PCWre <= 0;
								ALUSrcB <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b000;
							end
						else if (op == 6'b000001) // sub
							begin
								PCWre <= 0;
								ALUSrcB <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b001;
							end
						else if (op == 6'b000010) // addi
							begin
								PCWre <= 0;
								ALUSrcB <= 1;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b000;
								ExtSel <= 2'b10;
							end
						else if (op == 6'b010000) // or
							begin
								PCWre <= 0;
								ALUSrcB <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b101;
							end
						else if (op == 6'b010001) // and
							begin
								PCWre <= 0;
								ALUSrcB <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b110;
							end
						else if (op == 6'b010010) // ori
							begin
								PCWre <= 0;
								ALUSrcB <= 1;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b101;
								ExtSel <= 2'b01;
							end
						else if (op == 6'b100000) // move
							begin
								PCWre <= 0;
								ALUSrcB <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b000;
							end
						else if (op == 6'b100111) // slt
							begin
								PCWre <= 0;
								ALUSrcB <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b010;
							end
						else if (op == 6'b011000) // sll
							begin
								PCWre <= 0;
								ALUSrcB <= 1;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b100;
								ExtSel <= 2'b00;
							end
						
						ALUM2Reg <= 0;
						nextState <= 3'b111;
					end
				3'b101: // EXE   beq
					begin
						if (zero == 0)  // 不发生跳转
							begin
								PCWre <= 0;
								ALUSrcB <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b001;
							end
						else if (zero == 1)  // 跳转
							begin
								PCWre <= 1;
								ALUSrcB <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b001;
								PCSrc <= 2'b01;
								ExtSel <= 2'b10;
							end
							
						nextState <= 3'b000;
					end
				3'b010:  //  EXE sw, lw
					begin
						if (op == 6'b110000) // sw
							begin
								PCWre <= 0;
								ALUSrcB <= 1;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b000;
								ExtSel <= 2'b10;
							end
						else if (op == 6'b110001) // lw
							begin
								PCWre <= 0;
								ALUSrcB <= 1;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								ALUOp <= 3'b000;
								ExtSel <= 2'b10;
								
								ALUM2Reg <= 1;
							end
						
						nextState <= 3'b011;
					end
				3'b011: //  MEM
					begin
						if (op == 6'b110000) // sw
							begin
								PCWre <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 1;
								IRWre <= 0;
								
								nextState <= 3'b000;
							end
						else if (op == 6'b110001) // lw
							begin
								PCWre <= 0;
								RegWre <= 0;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;								
								ALUM2Reg <= 1;//
								
								nextState <= 3'b100;
							end
					end
				3'b100: //  WB   lw
					begin
						PCWre <= 0;
						//ALUM2Reg <= 1;
						RegWre <= 1;
						WrRegData <= 1;
						InsMemRW <= 0;
						DataMemRW <= 0;
						IRWre <= 0;
						RegOut <= 2'b01;
								
						nextState <= 3'b000;
					end
					
				3'b111:  //  WB  算术逻辑运算结果
					begin
						if (op == 6'b000000 || op == 6'b000001 || op == 6'b010000 || op == 6'b010001 || op == 6'b011000 ||
								op == 6'b100000 || op == 6'b100111)
							//  add              sub                 or                  and                 sll
							//  move             slt
							begin
								PCWre <= 0;
								ALUM2Reg <= 0;
								RegWre <= 1;
								WrRegData <= 1;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								RegOut <= 2'b10;
							end
						else if (op == 6'b000010 || op == 6'b010010)
									//   addi             ori
							begin
								PCWre <= 0;
								ALUM2Reg <= 0;
								RegWre <= 1;
								WrRegData <= 1;
								InsMemRW <= 0;
								DataMemRW <= 0;
								IRWre <= 0;
								RegOut <= 2'b01;
							end
						
						nextState <= 3'b000;
					end
				default:
					state <= 3'b000;
			endcase						
		
		end
		
	
	always @(posedge clk)
		begin
			if (reset) state <= 3'b000;
			else state <= nextState;
		end
	
endmodule


























