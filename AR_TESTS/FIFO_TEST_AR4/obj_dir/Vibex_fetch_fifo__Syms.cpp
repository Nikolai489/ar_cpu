// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vibex_fetch_fifo__Syms.h"
#include "Vibex_fetch_fifo.h"
#include "Vibex_fetch_fifo___024root.h"

// FUNCTIONS
Vibex_fetch_fifo__Syms::~Vibex_fetch_fifo__Syms()
{
}

Vibex_fetch_fifo__Syms::Vibex_fetch_fifo__Syms(VerilatedContext* contextp, const char* namep, Vibex_fetch_fifo* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
