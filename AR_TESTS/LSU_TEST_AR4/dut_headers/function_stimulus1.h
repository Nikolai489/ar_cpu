// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2017 by Wilson Snyder.
//======================================================================
//

//*dut_module*:i:o:stimulus:lsu_stimulus:dr32e_lsu:../dut_verilog/dr32e_lsu.v
#include "dr32e_lsu_tbf.h"

bool stimulus1 STIMULUS_FUNCTION_PARAMS
{
	if((main_time % PERIODS(0.5)) == 0)
	{
		if((main_time % PERIODS(10)) == 0)
		{
			ar_sim_data->tx = ar_sim_data->seq->generateTxn();	
		}
		if((main_time % PERIODS(1)) == 0)
		{
			ar_sim_data->drv->drive(ar_sim_data->tx);
			ar_sim_data->tx = ar_sim_data->seq->driveCtrlSignals();
		}
		if((main_time % PERIODS(10)) == PERIODS(9))
		{
			delete ar_sim_data->tx;	
		}

		dut->clk_i = !dut->clk_i;
		return true;
	}

	return false;
}

const bool adding_sim_stimulus_function = ar_verilator_testbench__.addStimulusFunction(stimulus1);
