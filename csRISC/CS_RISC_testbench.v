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
	
	reg mem_enable;
	reg [31:0] address;
	reg [31:0] mem_data;

	// Instantiate the Unit Under Test (UUT)
	CS_RISC uut (
		.clk(clk), 
		.reset(reset)
	);
	
	Data_Cache_Wrapper dcw (
		.clk(clk),
		.enable(mem_enable),
		.write_enable(1'b0),
		.address(address),
		.input_data(32'd0),
		.output_data(mem_data)
	);
	
	always #2 clk = ~clk;

	initial begin
	
		$monitor("line: %d\t, instruction = %b\t, reg0 = %d\t, reg1 = %d\t, reg2 = %d\t, reg3 = %d\t, reg4 = %d\t, reg5 = %d\t, reg20 = %d",
				(uut.pc/4),
				uut.instruction,
				$signed(uut.RB.r[0]), 
				$signed(uut.RB.r[1]), 
				$signed(uut.RB.r[2]), 
				$signed(uut.RB.r[3]), 
				$signed(uut.RB.r[4]),
				$signed(uut.RB.r[5]),
				$signed(uut.RB.r[20]));
		// Initialize Inputs
		clk = 0;
		reset = 1;
		mem_enable = 0;
		address = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 0;
		
		#1000;
		mem_enable = 1;
		
		address = 4092;
		$display("1: %d", mem_data);
		
		#2;
		address = 4088;
		$display("2: %d", mem_data);
		
		#2;
		address = 4084;
		$display("3: %d", mem_data);
		
		#2;
		address = 4080;
		$display("4: %d", mem_data);
		
		#2;
		address = 4076;
		$display("5: %d", mem_data);
		
		#2;
		address = 4072;
		$display("6: %d", mem_data);
		
		#2;
		address = 4068;
		$display("7: %d", mem_data);
		
		#2;
		address = 4064;
		$display("8: %d", mem_data);

	end
      
endmodule

