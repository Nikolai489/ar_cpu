// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcve2_alu.h for the primary calling header

#include "verilated.h"

#include "Vcve2_alu__Syms.h"
#include "Vcve2_alu__Syms.h"
#include "Vcve2_alu___024unit.h"

void Vcve2_alu___024unit___ctor_var_reset(Vcve2_alu___024unit* vlSelf);

Vcve2_alu___024unit::Vcve2_alu___024unit(Vcve2_alu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcve2_alu___024unit___ctor_var_reset(this);
}

void Vcve2_alu___024unit___configure_coverage(Vcve2_alu___024unit* vlSelf, bool first);

void Vcve2_alu___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vcve2_alu___024unit___configure_coverage(this, first);
}

Vcve2_alu___024unit::~Vcve2_alu___024unit() {
}

// Coverage
void Vcve2_alu___024unit::__vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    assert(sizeof(uint32_t) == sizeof(std::atomic<uint32_t>));
    uint32_t* count32p = reinterpret_cast<uint32_t*>(countp);
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
