// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCVE2_ALU__SYMS_H_
#define VERILATED_VCVE2_ALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcve2_alu.h"

// INCLUDE MODULE CLASSES
#include "Vcve2_alu___024root.h"
#include "Vcve2_alu___024unit.h"
#include "Vcve2_alu_cve2_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcve2_alu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcve2_alu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcve2_alu___024root            TOP;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[934];

    // SCOPE NAMES
    VerilatedScope __Vscope_cve2_alu;

    // CONSTRUCTORS
    Vcve2_alu__Syms(VerilatedContext* contextp, const char* namep, Vcve2_alu* modelp);
    ~Vcve2_alu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
