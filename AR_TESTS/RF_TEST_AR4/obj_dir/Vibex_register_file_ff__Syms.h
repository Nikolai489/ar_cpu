// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIBEX_REGISTER_FILE_FF__SYMS_H_
#define VERILATED_VIBEX_REGISTER_FILE_FF__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vibex_register_file_ff.h"

// INCLUDE MODULE CLASSES
#include "Vibex_register_file_ff___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vibex_register_file_ff__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vibex_register_file_ff* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vibex_register_file_ff___024root TOP;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[276];

    // SCOPE NAMES
    VerilatedScope __Vscope_ibex_register_file_ff;

    // CONSTRUCTORS
    Vibex_register_file_ff__Syms(VerilatedContext* contextp, const char* namep, Vibex_register_file_ff* modelp);
    ~Vibex_register_file_ff__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
