`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:01:47 10/21/2022
// Design Name:   ALU
// Module Name:   /home/invisiblehat/Documents/Academics/COA/lab/RISC/RISC/alu_testbench.v
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

module alu_testbench;

	// Inputs
	reg signed [31:0] inp1;
	reg signed [31:0] inp2;
	reg [4:0] shamt;
	reg [3:0] ALUControl;

	// Outputs
	wire signed [31:0] out;
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
		$monitor ("input1 = %d, input2 = %d, shamt = %d, out = %d, carry = %d, is_zero = %d, is_negative = %d, control = %b", inp1, inp2, shamt, out, carry_out, isZero, isNeg, ALUControl);
		
		inp1 = 0;
		inp2 = 0;
		shamt = 0;
		ALUControl = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		inp1 = 32'd200;
		inp2 = 32'd169;
		ALUControl = 4'b0000;
		// wait for 10ns
		#10;
		
		inp1 = 32'd200;
		inp2 = 32'd169;
		ALUControl = 4'b0001;
		// wait for 10ns
		#10;
		
		inp1 = 32'd200;
		inp2 = 32'd169;
		ALUControl = 4'b0010;
		// wait for 10ns
		#10;
		
		inp1 = 32'd200;
		inp2 = 32'd169;
		ALUControl = 4'b0011;
		// wait for 10ns
		#10;
		
		inp1 = -32'd111;
		inp2 = 32'd111;
		shamt = 5'd4;
		ALUControl = 4'b0100;
		// wait for 10ns
		#10;
		
		inp1 = 32'd200;
		inp2 = 32'd3;
		shamt = 5'd4;
		ALUControl = 4'b0101;
		// wait for 10ns
		#10;
		
		inp1 = 32'd0;
		inp2 = 32'd3;
		shamt = 5'd4;
		ALUControl = 4'b0110;
		// wait for 10ns
		#10;
		
		inp1 = 32'd200;
		inp2 = 32'd3;
		shamt = 5'd4;
		ALUControl = 4'b1100;
		// wait for 10ns
		#10;
		
		inp1 = 32'd200;
		inp2 = 32'd3;
		shamt = 5'd4;
		ALUControl = 4'b1101;
		// wait for 10ns
		#10;
		
		inp1 = 32'd200;
		inp2 = 32'd3;
		shamt = 5'd4;
		ALUControl = 4'b1110;
		// wait for 10ns
		#10;
		
		inp1 = 32'd200;
		inp2 = 32'd169;
		ALUControl = 4'b0111;
		// wait for 10ns
		#10;

	end
      
endmodule

