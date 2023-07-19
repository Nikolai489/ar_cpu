// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2017 by Wilson Snyder.
//======================================================================
//*dut_module*:a:i:monitor:fifo_monitor:ibex_fetch_fifo:../dut_verilog/ibex_fetch_fifo.v
#include "ibex_fetch_fifo_tbf.h"

bool monitor1 MONITOR_FUNCTION_PARAMS
{
	if((main_time % PERIODS(10)) == PERIODS(5))
	{
		ar_sim_data->inMon->monitor();
      		ar_sim_data->outMon->monitor();
	}

	return false;
}

const bool adding_sim_monitor_function = ar_verilator_testbench__.addMonitorFunction(monitor1);
