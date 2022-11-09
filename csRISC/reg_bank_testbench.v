`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:44:10 10/26/2022
// Design Name:   Reg_Bank
// Module Name:   /home/invisiblehat/Documents/Academics/COA/lab/RISC/RISC/reg_bank_testbench.v
// Project Name:  RISC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Reg_Bank
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module reg_bank_testbench;

	// Inputs
	reg clk;
	reg reset;
	reg [1:0] write_register;
	reg [4:0] reg1_address;
	reg [4:0] reg2_address;
	reg [31:0] write_data;

	// Outputs
	wire [31:0] reg_data1;
	wire [31:0] reg_data2;
	wire [31:0] RA_register;

	// Instantiate the Unit Under Test (UUT)
	Reg_Bank uut (
		.clk(clk), 
		.reset(reset), 
		.write_register(write_register), 
		.reg1_address(reg1_address), 
		.reg2_address(reg2_address), 
		.write_data(write_data), 
		.reg_data1(reg_data1), 
		.reg_data2(reg_data2), 
		.RA_register(RA_register)
	);
	always #2 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		write_register = 0;
		reg1_address = 0;
		reg2_address = 0;
		write_data = 0;

		// Wait 100 ns for global reset to finish
		#100;       
		$monitor ("register 0 = %d, register 1 = %d, register 2 = %d, register 3 = %d, register 31 = %d", $signed(uut.r[0]), $signed(uut.r[1]), $signed(uut.r[2]), $signed(uut.r[3]), $signed(uut.r[31]));
		reset = 0;
		#100;
		
		// Add stimulus here
		write_data = 32'd10;
		write_register = 2'b00;
		reg1_address = 5'd1;
		reg2_address = 5'd2;
		#4;
		reg1_address = 5'd1;
		reg2_address = 5'd2;
		write_register = 2'b01;
		#4;
		reg1_address = 5'd2;
		reg2_address = 5'd1;
		write_data = 32'd8;
		#4;
		reg1_address = 5'd3;
		write_register = 2'b10;
		write_data = 32'd14;
		#4;
		write_register= 2'b11;
		write_data = 32'd20;
		reg2_address = 5'd1;

	end
      
endmodule

