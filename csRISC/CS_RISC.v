`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:47:36 10/26/2022 
// Design Name: 
// Module Name:    CS_RISC 
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
module CS_RISC(
	input clk,
	input reset,
	input address_mode,
	input [31:0] fpga_address,
	output [31:0] fpga_value,
	output program_done
    );
	 
	wire [31:0] pc, pc_next;
	Program_Counter PC(.PC_input(pc_next), .PC_output(pc), .clock(clk), .reset(reset));
	 
	wire [31:0] instruction;
	Instruction_Cache_Wrapper IC(.clk(clk), .address(pc), .output_data(instruction));
	 
	wire [1:0] regdst;
	wire [4:0] write_register;
	Write_Reg_MUX WRM(.rs(instruction[25:21]), .rt(instruction[20:16]), .RegDst(regdst), .reg_write(write_register));

	wire regwrite;
	wire [31:0] write_reg_data, reg_data1, reg_data2;
	Reg_Bank RB(.clk(clk), .reset(reset), .reg1_address(instruction[25:21]), .reg2_address(instruction[20:16]), .write_register(write_register), .RegWrite(regwrite), .write_data(write_reg_data), .reg_data1(reg_data1), .reg_data2(reg_data2), .program_done(program_done));
	
	wire [31:0] immediate;
	wire ALUsource;
	wire [31:0] alu_input2;
	assign immediate = { {16{instruction[15]}}, instruction[15:0] };
	ALU_Input_MUX AIM(.reg_data(reg_data2), .instr_data(immediate), .ALUSource(ALUsource), .alu_input(alu_input2));
	
	wire [3:0] ALUControl;
	wire [31:0] alu_out;
	wire carry_out, isNeg, isZero;
	ALU alu(.inp1(reg_data1), .inp2(alu_input2), .shamt(instruction[15:11]), .ALUControl(ALUControl), .out(alu_out), .carry_out(carry_out), .isNeg(isNeg), .isZero(isZero));
	
	//for fpga
	wire [31:0] real_address;
	assign real_address = address_mode ? fpga_address : alu_out;
	
	wire MemRead, MemWrite;
	wire [31:0] mem_data;
	Data_Cache_Wrapper DC(.clk(clk), .enable(address_mode ? 1'b1 : MemRead), .write_enable(MemWrite), .address(real_address), .input_data(reg_data2), .output_data(mem_data));
	assign fpga_value = mem_data;
	
	wire [31:0] pc_add;
	wire [1:0] PCMemReg;
	Write_Reg_Data_MUX WRDM(.alu_data(alu_out), .mem_data(mem_data), .pc_data(pc_add), .PCMemReg(PCMemReg), .write_reg_data(write_reg_data));
	
	wire [2:0] ALUop;
	ALU_Control aluC(.ALUop(ALUop), .func(instruction[4:0]), .ALU_control_output(ALUControl));
	
	wire [1:0] branchOP, branch_control_out;
	Branch_Control BC(.branchOP(branchOP), .func(instruction[4:0]), .zero_bit(isZero), .carry_out(carry_out), .sign_bit(isNeg), .branch_control_out(branch_control_out));
	
	pc_adder pca(.pc(pc), .pc_add(pc_add));
	
	wire [31:0] jump_address;
	assign jump_address = { {16{0}}, instruction[20:5] };
	Branching_MUX BM(.branch_control_out(branch_control_out), .pc_add(pc_add), .instr_addr(jump_address), .reg_addr(reg_data1), .next_addr(pc_next));
	
	Control_Unit CU(.OPcode(instruction[31:26]), .reg_dst(regdst), .reg_write(regwrite), .ALUop(ALUop), .memory_read(MemRead), .memory_write(MemWrite), .branchOP(branchOP), .ALUsource(ALUsource), .PC_mem_reg(PCMemReg));

endmodule
