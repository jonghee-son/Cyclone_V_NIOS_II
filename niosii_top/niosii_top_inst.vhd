	component niosii_top is
		port (
			clk_1_clk       : in std_logic := 'X'; -- clk
			reset_1_reset_n : in std_logic := 'X'  -- reset_n
		);
	end component niosii_top;

	u0 : component niosii_top
		port map (
			clk_1_clk       => CONNECTED_TO_clk_1_clk,       --   clk_1.clk
			reset_1_reset_n => CONNECTED_TO_reset_1_reset_n  -- reset_1.reset_n
		);

