--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:09:44 11/27/2019
-- Design Name:   
-- Module Name:   E:/ProgramFiles/xiling/proyectoElectro1/proyecto1electro/proyectoTB.vhd
-- Project Name:  proyecto1electro
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CircuitoSumaResta
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY proyectoTB IS
END proyectoTB;
 
ARCHITECTURE behavior OF proyectoTB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CircuitoSumaResta
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         O : IN  std_logic;
         Display1 : OUT  std_logic_vector(3 downto 0);
         Display2 : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal O : std_logic := '0';

 	--Outputs
   signal Display1 : std_logic_vector(3 downto 0);
   signal Display2 : std_logic_vector(1 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CircuitoSumaResta PORT MAP (
          A => A,
          B => B,
          O => O,
          Display1 => Display1,
          Display2 => Display2
        );

  

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		A <= "1111"; B <= "1111"; O<='0';
      wait for 100 ns;	
		A <= "0001"; B <= "0001"; O<='0';
      wait for 100 ns;	



      -- insert stimulus here 

   end process;

END;
