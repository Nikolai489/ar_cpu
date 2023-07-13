// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIBEX_COMPRESSED_DECODER__SYMS_H_
#define VERILATED_VIBEX_COMPRESSED_DECODER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vibex_compressed_decoder.h"

// INCLUDE MODULE CLASSES
#include "Vibex_compressed_decoder___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vibex_compressed_decoder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vibex_compressed_decoder* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vibex_compressed_decoder___024root TOP;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[158];

    // CONSTRUCTORS
    Vibex_compressed_decoder__Syms(VerilatedContext* contextp, const char* namep, Vibex_compressed_decoder* modelp);
    ~Vibex_compressed_decoder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
