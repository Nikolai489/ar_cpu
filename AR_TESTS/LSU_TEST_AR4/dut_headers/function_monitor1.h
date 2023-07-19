// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2017 by Wilson Snyder.
//======================================================================
//*dut_module*:a:i:monitor:dec_monitor:dr32e_lsu:../dut_verilog/dr32e_lsu.v
#include "dr32e_lsu_tbf.h"

bool monitor1 MONITOR_FUNCTION_PARAMS
{
	
	ar_sim_data->inMon->monitor();
    ar_sim_data->outMon->monitor();

	return false;
}

const bool adding_sim_monitor_function = ar_verilator_testbench__.addMonitorFunction(monitor1);
