// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDR32E_BRANCH_PREDICT__SYMS_H_
#define VERILATED_VDR32E_BRANCH_PREDICT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdr32e_branch_predict.h"

// INCLUDE MODULE CLASSES
#include "Vdr32e_branch_predict___024root.h"
#include "Vdr32e_branch_predict_dr32e_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdr32e_branch_predict__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdr32e_branch_predict* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdr32e_branch_predict___024root TOP;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[271];

    // SCOPE NAMES
    VerilatedScope __Vscope_dr32e_branch_predict;

    // CONSTRUCTORS
    Vdr32e_branch_predict__Syms(VerilatedContext* contextp, const char* namep, Vdr32e_branch_predict* modelp);
    ~Vdr32e_branch_predict__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
