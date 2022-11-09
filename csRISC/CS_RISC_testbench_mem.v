`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:33:00 10/28/2022
// Design Name:   CS_RISC
// Module Name:   /home/invisiblehat/Documents/Academics/COA/lab/RISC/RISC/CS_RISC_testbench.v
// Project Name:  RISC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CS_RISC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CS_RISC_testbench;

	// Inputs
	reg clk;
	reg reset;
	reg address_mode;
	wire [31:0] mem_data;
	reg [31:0] mem_address;
	wire program_done;

	// Instantiate the Unit Under Test (UUT)
	CS_RISC uut (
		.clk(clk), 
		.reset(reset),
		.address_mode(address_mode),
		.fpga_address(mem_address),
		.fpga_value(mem_data),
		.program_done(program_done)
	);
	
	always #2 clk = ~clk;

	initial begin
	
		$monitor("line: %d,\t instruction = %b,\t program_done: %d,\t mem_address: %d,\t mem_data: %d",
				(uut.pc/4),
				uut.instruction,
				program_done,
				mem_address,
				mem_data);
		// Initialize Inputs
		clk = 0;
		reset = 1;
		address_mode = 0;
		mem_address = 32'b0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 0;
		
		#5000;
		address_mode = 1'b1;
		
		mem_address = 32'd4092;
		#4;
		mem_address = 32'd4088;
		#4;
		mem_address = 32'd4084;
		#4;
		mem_address = 32'd4080;
		#4;
		mem_address = 32'd4076;
		#4;
		mem_address = 32'd4072;
		#4;
		mem_address = 32'd4068;
		#4;
		mem_address = 32'd4064;
		#4;
		mem_address = 32'd4060;
		#4;
	end
      
endmodule

