// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2017 by Wilson Snyder.
//======================================================================
//*dut_module*:a:i:monitor:prefetch_monitor:ibex_prefetch_buffer:../dut_verilog/ibex_prefetch_buffer.v
#include "ibex_prefetch_buffer_tbf.h"

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