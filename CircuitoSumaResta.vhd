----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:57:07 11/27/2019 
-- Design Name: 
-- Module Name:    CircuitoSumaResta - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity CircuitoSumaResta is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           O : in  STD_LOGIC;
           Display1 : out  STD_LOGIC_VECTOR (3 downto 0);
           Display2 : out  STD_LOGIC_VECTOR (1 downto 0));
end CircuitoSumaResta;

architecture Behavioral of CircuitoSumaResta is
begin
validacion:process(A,B)

begin
	if( A > 9  and A > 9) then
	Display1 <= "0000";
	Display2 <= "00";

	else
		
		if( (A+B) >9) then
		Display1 <= A+B-10;
		Display2 <= "11";
		else
		Display1 <= A+B;
		Display2 <= "00";
		end if;
		
	
	end if;
end process validacion;

end Behavioral;

