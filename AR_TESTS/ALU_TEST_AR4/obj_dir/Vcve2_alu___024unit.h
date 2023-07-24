// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcve2_alu.h for the primary calling header

#ifndef VERILATED_VCVE2_ALU___024UNIT_H_
#define VERILATED_VCVE2_ALU___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vcve2_alu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcve2_alu___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcve2_alu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcve2_alu___024unit(Vcve2_alu__Syms* symsp, const char* v__name);
    ~Vcve2_alu___024unit();
    VL_UNCOPYABLE(Vcve2_alu___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
