`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:30:02 05/18/2016 
// Design Name: 
// Module Name:    CPU 
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
module CPU(clk,
			reset,
			init);
	input clk, reset;
	input [31:0] init;
	
	///
	wire zero, PCWre, ALUSrcB, ALUM2Reg, RegWre, WrRegData, InsMemRW, DataMemRW, IRWre;
	wire[2:0] ALUOp;
	wire[1:0] PCSrc, RegOut, ExtSel;
	wire[31:0] OP, PC0, PC4, ADR, BDR, Extend, ALUOut, ALUM2DR, iData, adr, bdr, result, DataOut;
	///
	// PC(clk,reset,PCWre,Extend,rs,init,OP,PCSrc,PC0,PC4);
	PC pc(
		.clk(clk),
		.reset(reset),
		.PCWre(PCWre),
		.Extend(Extend),
		.rs(ADR),
		.init(init),
		.OP(OP),
		.PCSrc(PCSrc),
		.PC0(PC0),
		.PC4(PC4)
	);
	
	// IM(IAddr,InsMemRW,DataOut);
	IM im(
		.IAddr(PC0),
		.InsMemRW(InsMemRW),
		.DataOut(iData)
	);
	
	// IR(clk,DataOut,OP,IRWre);
	IR ir(
		.clk(clk),
		.DataOut(iData),
		.OP(OP),
		.IRWre(IRWre)
		);
	
	//RegFile(OP,PC4,ALUM2DR,WrRegData,RegOut,clk,RegWre,ADR,BDR);
	RegFile regfile(
		.OP(OP),
		.PC4(PC0),//
		.ALUM2DR(ALUM2DR),
		.WrRegData(WrRegData),
		.RegOut(RegOut),
		.clk(clk),
		.RegWre(RegWre),
		.ADR(adr),
		.BDR(bdr)
	);
	
	// RegDR(clk,adr,bdr,ADR,BDR);
	RegDR regdr(
		.clk(clk),
		.adr(adr),
		.bdr(bdr),
		.ADR(ADR),
		.BDR(BDR)
	);
	
	// ALU(ADR,BDR,Extend,ALUOut,zero,ALUOp,ALUSrcB);
	ALU alu(
		.ADR(ADR),
		.BDR(BDR),
		.Extend(Extend),
		.ALUOut(result),
		.zero(zero),
		.ALUOp(ALUOp),
		.ALUSrcB(ALUSrcB)
	);
	
	// ALUOUT(clk,result,ALUOut);
	ALUOUT aluout(
		.clk(clk),
		.result(result),
		.ALUOut(ALUOut)
	);
	
	// Ext(OP,Out,ExtSel);
	Ext ext(
		.OP(OP),
		.Out(Extend),
		.ExtSel(ExtSel)
	);
	
	// DM(DAddr,DataIn,DataMemRW,DataOut);
	DM dm(
		.DAddr(ALUOut),
		.DataIn(BDR),
		.DataMemRW(DataMemRW),
		.DataOut(DataOut)
	);
	
	// DMDR(clk,ALUOut,DataOut,ALUM2Reg,ALUM2DR);
	DMDR dmdr(
		.clk(clk),
		.ALUOut(ALUOut),
		.DataOut(DataOut),
		.ALUM2Reg(ALUM2Reg),
		.ALUM2DR(ALUM2DR)
	);
	
	// CU(clk,reset,zero,OP,PCWre,ALUSrcB,ALUM2Reg,RegWre,WrRegData,
	//			InsMemRW,DataMemRW,IRWre,ALUOp,PCSrc,RegOut,ExtSel);
	CU cu(
		.clk(clk),
		.reset(reset),
		.zero(zero),
		.OP(OP),
		.PCWre(PCWre),
		.ALUSrcB(ALUSrcB),
		.ALUM2Reg(ALUM2Reg),
		.RegWre(RegWre),
		.WrRegData(WrRegData),
		.InsMemRW(InsMemRW),
		.DataMemRW(DataMemRW),
		.IRWre(IRWre),
		.ALUOp(ALUOp),
		.PCSrc(PCSrc),
		.RegOut(RegOut),
		.ExtSel(ExtSel)
	);
	
endmodule
