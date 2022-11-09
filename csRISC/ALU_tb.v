`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:00:55 10/21/2022
// Design Name:   ALU
// Module Name:   /home/invisiblehat/Documents/Academics/COA/lab/RISC/RISC/ALU_tb.v
// Project Name:  RISC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg [31:0] inp1;
	reg [31:0] inp2;
	reg [4:0] shamt;
	reg [3:0] ALUControl;

	// Outputs
	wire [31:0] out;
	wire carry_out;
	wire isNeg;
	wire isZero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.inp1(inp1), 
		.inp2(inp2), 
		.shamt(shamt), 
		.ALUControl(ALUControl), 
		.out(out), 
		.carry_out(carry_out), 
		.isNeg(isNeg), 
		.isZero(isZero)
	);

	initial begin
		// Initialize Inputs
		inp1 = 0;
		inp2 = 0;
		shamt = 0;
		ALUControl = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

