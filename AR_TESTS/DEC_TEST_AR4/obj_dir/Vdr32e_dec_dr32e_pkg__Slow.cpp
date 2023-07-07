// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdr32e_dec.h for the primary calling header

#include "verilated.h"

#include "Vdr32e_dec__Syms.h"
#include "Vdr32e_dec__Syms.h"
#include "Vdr32e_dec_dr32e_pkg.h"

void Vdr32e_dec_dr32e_pkg___ctor_var_reset(Vdr32e_dec_dr32e_pkg* vlSelf);

Vdr32e_dec_dr32e_pkg::Vdr32e_dec_dr32e_pkg(Vdr32e_dec__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdr32e_dec_dr32e_pkg___ctor_var_reset(this);
}

void Vdr32e_dec_dr32e_pkg___configure_coverage(Vdr32e_dec_dr32e_pkg* vlSelf, bool first);

void Vdr32e_dec_dr32e_pkg::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vdr32e_dec_dr32e_pkg___configure_coverage(this, first);
}

Vdr32e_dec_dr32e_pkg::~Vdr32e_dec_dr32e_pkg() {
}

// Coverage
void Vdr32e_dec_dr32e_pkg::__vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    assert(sizeof(uint32_t) == sizeof(std::atomic<uint32_t>));
    uint32_t* count32p = reinterpret_cast<uint32_t*>(countp);
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
