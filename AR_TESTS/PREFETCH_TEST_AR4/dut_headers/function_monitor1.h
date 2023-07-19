// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2017 by Wilson Snyder.
//======================================================================
//*dut_module*:a:i:monitor:prefetch_monitor:ibex_prefetch_buffer:../dut_verilog/ibex_prefetch_buffer.v
//*description*Prefetch Buffer Monitor : Uses 10 periods per transaction

#include "ibex_prefetch_buffer_tbf.h"

bool monitor1 MONITOR_FUNCTION_PARAMS
{
	if((main_time % PERIODS(10)) == PERIODS(5))
	{
		ar_sim_data->inMon->monitor();
      		ar_sim_data->outMon->monitor();
	}
	if(main_stop_time__ == main_time__){
		if(ar_sim_data->scb->error_count_ > 0 )
		{
		printf(ANSI_COLOR_RED "PB SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, ar_sim_data->scb->error_count_);
		}
		else
		{
		printf(ANSI_COLOR_GREEN "PB SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, ar_sim_data->scb->error_count_);
		}
	}
	return false;
}

const bool adding_sim_monitor_function = ar_verilator_testbench__.addMonitorFunction(monitor1);
