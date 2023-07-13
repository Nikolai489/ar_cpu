// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vibex_register_file_ff__Syms.h"
#include "Vibex_register_file_ff.h"
#include "Vibex_register_file_ff___024root.h"

// FUNCTIONS
Vibex_register_file_ff__Syms::~Vibex_register_file_ff__Syms()
{
}

Vibex_register_file_ff__Syms::Vibex_register_file_ff__Syms(VerilatedContext* contextp, const char* namep, Vibex_register_file_ff* modelp)
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
    // Setup scopes
    __Vscope_ibex_register_file_ff.configure(this, name(), "ibex_register_file_ff", "ibex_register_file_ff", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ibex_register_file_ff.varInsert(__Vfinal,"rf_reg", &(TOP.ibex_register_file_ff__DOT__rf_reg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,31);
    }
}
