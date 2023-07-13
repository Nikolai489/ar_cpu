// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIBEX_FETCH_FIFO__SYMS_H_
#define VERILATED_VIBEX_FETCH_FIFO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vibex_fetch_fifo.h"

// INCLUDE MODULE CLASSES
#include "Vibex_fetch_fifo___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vibex_fetch_fifo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vibex_fetch_fifo* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vibex_fetch_fifo___024root     TOP;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[542];

    // CONSTRUCTORS
    Vibex_fetch_fifo__Syms(VerilatedContext* contextp, const char* namep, Vibex_fetch_fifo* modelp);
    ~Vibex_fetch_fifo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
