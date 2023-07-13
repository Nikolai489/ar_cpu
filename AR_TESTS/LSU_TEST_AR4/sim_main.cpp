// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2017 by Wilson Snyder.
//======================================================================

#include "ARVerilatorTestbench.h"

int main(int argc, char** argv, char** env)
{
    ar_verilator_testbench__.runSimulation(argc, argv, env);
    exit(0);
}
