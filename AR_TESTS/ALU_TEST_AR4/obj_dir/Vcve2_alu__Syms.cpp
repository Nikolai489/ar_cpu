// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcve2_alu__Syms.h"
#include "Vcve2_alu.h"
#include "Vcve2_alu___024root.h"
#include "Vcve2_alu___024unit.h"
#include "Vcve2_alu_cve2_pkg.h"

// FUNCTIONS
Vcve2_alu__Syms::~Vcve2_alu__Syms()
{
}

Vcve2_alu__Syms::Vcve2_alu__Syms(VerilatedContext* contextp, const char* namep, Vcve2_alu* modelp)
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
    __Vscope_cve2_alu.configure(this, name(), "cve2_alu", "cve2_alu", -12, VerilatedScope::SCOPE_OTHER);
}
