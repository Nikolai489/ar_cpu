// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2017 by Wilson Snyder.
//======================================================================
//*dut_module*:a:i:monitor:fifo_monitor:ibex_fetch_fifo:../dut_verilog/ibex_fetch_fifo.v
//*description*Fifo Monitor : Uses 10 periods per transaction

#include "ibex_fetch_fifo_tbf.h"

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
		printf(ANSI_COLOR_RED "FIFO SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, ar_sim_data->scb->error_count_);
		}
		else
		{
		printf(ANSI_COLOR_GREEN "FIFO SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, ar_sim_data->scb->error_count_);
		}
	}
	return false;
}

const bool adding_sim_monitor_function = ar_verilator_testbench__.addMonitorFunction(monitor1);
