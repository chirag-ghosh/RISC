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

	// Instantiate the Unit Under Test (UUT)
	CS_RISC uut (
		.clk(clk), 
		.reset(reset)
	);
	
	always #2 clk = ~clk;

	initial begin
	
		$monitor("line: %d\t, instruction = %b\t, reg0 = %d\t, reg1 = %d\t, reg2 = %d\t, reg3 = %d\t, reg4 = %d\t, reg5 = %d\t, reg6 = %d\t, reg7 = %d\t, reg8 = %d\t, reg9 = %d\t, reg20 = %d",
				(uut.pc/4),
				uut.instruction,
				$signed(uut.RB.r[0]), 
				$signed(uut.RB.r[1]), 
				$signed(uut.RB.r[2]), 
				$signed(uut.RB.r[3]), 
				$signed(uut.RB.r[4]),
				$signed(uut.RB.r[5]),
				$signed(uut.RB.r[6]),
				$signed(uut.RB.r[7]),
				$signed(uut.RB.r[8]),
				$signed(uut.RB.r[9]),
				$signed(uut.RB.r[20]));
		// Initialize Inputs
		clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 0;
		
		#1000;

	end
      
endmodule

