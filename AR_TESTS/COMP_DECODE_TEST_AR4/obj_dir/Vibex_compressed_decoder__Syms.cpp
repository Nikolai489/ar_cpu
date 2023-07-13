// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vibex_compressed_decoder__Syms.h"
#include "Vibex_compressed_decoder.h"
#include "Vibex_compressed_decoder___024root.h"

// FUNCTIONS
Vibex_compressed_decoder__Syms::~Vibex_compressed_decoder__Syms()
{
}

Vibex_compressed_decoder__Syms::Vibex_compressed_decoder__Syms(VerilatedContext* contextp, const char* namep, Vibex_compressed_decoder* modelp)
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
