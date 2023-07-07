// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdr32e_branch_predict__Syms.h"
#include "Vdr32e_branch_predict.h"
#include "Vdr32e_branch_predict___024root.h"
#include "Vdr32e_branch_predict_dr32e_pkg.h"

// FUNCTIONS
Vdr32e_branch_predict__Syms::~Vdr32e_branch_predict__Syms()
{
}

Vdr32e_branch_predict__Syms::Vdr32e_branch_predict__Syms(VerilatedContext* contextp, const char* namep, Vdr32e_branch_predict* modelp)
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
    __Vscope_dr32e_branch_predict.configure(this, name(), "dr32e_branch_predict", "dr32e_branch_predict", -12, VerilatedScope::SCOPE_OTHER);
}
