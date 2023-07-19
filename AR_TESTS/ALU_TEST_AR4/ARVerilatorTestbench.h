#ifndef ARVERILATORTESTBENCH_H
#define ARVERILATORTESTBENCH_H

#include <vector>
#include <queue>


// Include common routines
#include <verilated.h>

// If "verilator --trace" is used, include the tracing class
#if VM_TRACE
#include <verilated_vcd_c.h>
#endif

#include "dut.h"
#include "dut_headers/defines.h"

#define EVAL_EVERY_STEP yes
//#define DEBUG yes
//#define TIMING_ENABLED yes

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

#define STD_TO_C_STRING(a) std::string(a).c_str()
#define STR(a) #a

#define PERIODS(a) (std::max((vluint64_t) 4, (vluint64_t) (ar_period * a)))

#define STR(a) #a


#ifndef VCD_FILE_NAME
#  error This code requires define 'VCD_FILE_NAME' to be set (example value = "adder8")
#endif

#ifndef DUT_NAME
#  error This code requires define 'DUT_NAME' to be set (example value = adder8)
#endif

#ifndef SIM_STOP_TIME
#  error This code requires define 'SIM_STOP_TIME' to be set (example value = 1e-6)
#endif

#ifndef MIN_STEP_TIME
#  error This code requires define 'MIN_STEP_TIME' to be set (example value = 1e-12)
#endif

#ifndef PERIOD_TIME
#  error This code requires define 'PERIOD_TIME' to be set (example value = 1e-9)
#endif

#ifndef PROBE_DEPTH
#  error This code requires define 'PROBE_DEPTH' to be set (example value = 99)
#endif

#ifndef TIME_UNIT
#  error This code requires define 'TIME_UNIT' to be set (example value = 1ns)
#endif

#ifndef TIME_RESOLUTION
#  error This code requires define 'SIM_STOP_TIME' to be set (example value = 1ns)
#endif


const int ar_max_cycle_count = (SIM_STOP_TIME / MIN_STEP_TIME);
const int ar_period_cycle_count = (PERIOD_TIME / MIN_STEP_TIME);
const int ar_period = (PERIOD_TIME / MIN_STEP_TIME);

#define MONITOR_FUNCTION_PARAMS (DUT_CLASS_NAME * dut, const vluint64_t &main_time, ARSimulationData * ar_sim_data)
#define STIMULUS_FUNCTION_PARAMS (DUT_CLASS_NAME * dut, const vluint64_t &main_time, ARSimulationData * ar_sim_data)

class ARSimulationData;

typedef bool (*ARStimulusFunction)(DUT_CLASS_NAME *, const vluint64_t &, ARSimulationData *);
typedef bool (*ARMonitorFunction)(DUT_CLASS_NAME *, const vluint64_t &, ARSimulationData *);

// Current simulation time (64-bit unsigned)
vluint64_t main_time__;
vluint64_t main_stop_time__;

ARSimulationData * createARSimulationData(DUT_CLASS_NAME * dut);

// Called by $time in Verilog
double sc_time_stamp() {
    return main_time__;  // Note does conversion to real, to match SystemC
}

class ARVerilatorTestbench
{
public:
    ARVerilatorTestbench() {}
    ~ARVerilatorTestbench() {}

    bool runSimulation(int argc, char** argv, char** env) {
        // This is a more complicated example, please also see the simpler examples/hello_world_c.
        const std::string vcd_file_name = VCD_FILE_NAME;
        const float sim_stop_time = SIM_STOP_TIME;
        const float min_step_time = MIN_STEP_TIME;
        const float period_time = PERIOD_TIME;
        const int probe_depth = PROBE_DEPTH;

        main_time__ = 0;
        main_stop_time__ = ar_max_cycle_count;
        std::cout << "probe depth " << probe_depth << std::endl;
        std::cout << "period time" << period_time << std::endl;
        std::cout << "sim stop time " << sim_stop_time << std::endl;
        std::cout << "min step time size " << min_step_time << std::endl;
        std::cout << "run step count " << main_stop_time__ << std::endl;
        std::cout << "run steps per cycle count " << ar_period_cycle_count  << std::endl;
        std::cout << "run cycle count " << (main_stop_time__ / ar_period_cycle_count)  << std::endl;

        // Prevent unused variable warnings
        if (0 && argc && argv && env) {}
        // Pass arguments so Verilated code can see them, e.g. $value$plusargs
        Verilated::commandArgs(argc, argv);

        // Set debug level, 0 is off, 9 is highest presently used
        Verilated::debug(0);

        // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
        DUT_CLASS_NAME * dut = new DUT_CLASS_NAME; // Or use a const unique_ptr, or the VL_UNIQUE_PTR wrapper
        ARSimulationData * ar_sim_data = createARSimulationData(dut);

    #if VM_TRACE
        // If verilator was invoked with --trace argument,
        // and if at run time passed the +trace argument, turn on tracing
        VerilatedVcdC* tfp = NULL;
        const char* flag = Verilated::commandArgsPlusMatch("trace");
        if (flag && 0==strcmp(flag, "+trace")) {
            Verilated::traceEverOn(true);  // Verilator must compute traced signals
            VL_PRINTF(STD_TO_C_STRING("Enabling waves into logs/" + vcd_file_name + ".vcd...\n"));
            tfp = new VerilatedVcdC;
            tfp->set_time_resolution(TIME_RESOLUTION);
            tfp->set_time_unit(TIME_UNIT);
            dut->trace(tfp, probe_depth);  // Trace 99 levels of hierarchy
            Verilated::mkdir("logs");
            tfp->open(STD_TO_C_STRING("logs/" + vcd_file_name + ".vcd"));  // Open the dump file
            std::cout << "vcd time unit : " << TIME_UNIT << std::endl;
            std::cout << "vcd time resolution : " << TIME_RESOLUTION << std::endl;
        }
    #endif

    #if TIMING_ENABLED
	std::queue<vluint64_t> event_queue;
	if(event_queue.empty())
	{
            std::cout << "initial queue size empty" << std::endl;
	}
	else
	{
       	    std::cout << "initial queue size " << event_queue.size() << std::endl;
	}
    #endif

        // Simulate until $finish
        while (!Verilated::gotFinish() && main_time__ <= main_stop_time__) {
	    #ifdef DEBUG
            std::cout << "starting cycle " << main_time__ << std::endl;
	    #endif
 
    	    #if TIMING_ENABLED
            if(dut->eventsPending())
	    {
		const int next_event_time = dut->nextTimeSlot();
		if(event_queue.back() != next_event_time)
		{
			event_queue.push(next_event_time);	
            		std::cout << "pushing on to event queue size" << std::endl;
		}
	    }
    	    #endif

	    #ifdef EVAL_EVERY_STEP
            bool change = true;
	    #else
            bool change = (main_time__ == 0 || main_time__ == main_stop_time__);
    	    #endif

    	    #if TIMING_ENABLED
	    const bool is_event_time = (!event_queue.empty() && main_time__ == event_queue.front());
	    if(is_event_time)
	    {
		event_queue.pop();
		change = true;
            	std::cout << "popping off of event queue size" << std::endl;
	    }
	    if(event_queue.empty())
	    {
            	std::cout << "queue size empty" << std::endl;
	    }
	    else
	    {
            	std::cout << "queue size " << event_queue.size() << std::endl;
	    }
    	    #endif

            const int stimulus_count = stimulus_functions_vector_.size();
            for(int stimulus_index = 0; stimulus_index < stimulus_count; stimulus_index++)
            {
                if(stimulus_functions_vector_[stimulus_index](dut, main_time__, ar_sim_data))
                {
                    change = true;
                }
            }

            if(change)
            {
		#ifdef DEBUG
                std::cout << "change at cycle " << main_time__ << std::endl;
		#endif

                // Evaluate model
                dut->eval();

                const int monitor_count = monitor_functions_vector_.size();
                for(int monitor_index = 0; monitor_index < monitor_count; monitor_index++)
                {
                    monitor_functions_vector_[monitor_index](dut, main_time__, ar_sim_data);
                }
            }

    #if VM_TRACE
            // Dump trace data for this cycle
            if (tfp) tfp->dump (main_time__);
    #endif

            main_time__++;  // Time passes...
            //std::cout << "finishing cycle " << main_time__ << std::endl;
        }

        const int monitor_count = monitor_functions_vector_.size();
        for(int monitor_index = 0; monitor_index < monitor_count; monitor_index++)
        {
            monitor_functions_vector_[monitor_index](dut, main_stop_time__, ar_sim_data);
        }

        // Final model cleanup
        dut->final();

        // Close trace if opened
    #if VM_TRACE
        if (tfp) { tfp->close(); tfp = NULL; }
    #endif

        //  Coverage analysis (since test passed)
    #if VM_COVERAGE
        Verilated::mkdir("logs");
        VerilatedCov::write("logs/coverage.dat");
    #endif

        // Destroy model
        delete dut; dut = NULL;
	delete ar_sim_data;

        // Fin
        exit(0);
    }

    bool addStimulusFunction(ARStimulusFunction function)
    {
//        const bool already_exists = (std::find(stimulus_functions_vector_.begin(), stimulus_functions_vector_.end(), function) != stimulus_functions_vector_.end());
//        if(!already_exists)
//        {
//            stimulus_functions_vector_.push_back(function);
//        }

//        return !already_exists;

        stimulus_functions_vector_.push_back(function);
        return true;
    }

    bool addMonitorFunction(ARStimulusFunction function)
    {
//        const bool already_exists = (std::find(monitor_functions_vector_.begin(), monitor_functions_vector_.end(), function) != monitor_functions_vector_.end());
//        if(!already_exists)
//        {
//            monitor_functions_vector_.push_back(function);
//        }

//        return !already_exists;

        monitor_functions_vector_.push_back(function);
        return true;
    }

    std::vector<ARStimulusFunction> stimulus_functions_vector_;
    std::vector<ARMonitorFunction> monitor_functions_vector_;
};

static ARVerilatorTestbench ar_verilator_testbench__;

#include "dut_headers/functions.h"


#ifndef CUSTOM_ARSIMDATA
class ARSimulationData
{
public:
	ARSimulationData(DUT_CLASS_NAME * dut) {}
};
#endif

ARSimulationData * createARSimulationData(DUT_CLASS_NAME * dut)
{
	return new ARSimulationData(dut);
}

#endif // ARVERILATORTESTBENCH_H
