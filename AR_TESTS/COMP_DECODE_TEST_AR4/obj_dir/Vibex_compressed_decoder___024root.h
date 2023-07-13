// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_compressed_decoder.h for the primary calling header

#ifndef VERILATED_VIBEX_COMPRESSED_DECODER___024ROOT_H_
#define VERILATED_VIBEX_COMPRESSED_DECODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vibex_compressed_decoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_compressed_decoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(valid_i,0,0);
    VL_OUT8(is_compressed_o,0,0);
    VL_OUT8(illegal_instr_o,0,0);
    CData/*0:0*/ ibex_compressed_decoder__DOT____Vtogcov__clk_i;
    CData/*0:0*/ ibex_compressed_decoder__DOT____Vtogcov__rst_ni;
    CData/*0:0*/ ibex_compressed_decoder__DOT____Vtogcov__valid_i;
    CData/*0:0*/ ibex_compressed_decoder__DOT____Vtogcov__is_compressed_o;
    CData/*0:0*/ ibex_compressed_decoder__DOT____Vtogcov__illegal_instr_o;
    CData/*0:0*/ __VactContinue;
    VL_IN16(enum_dpi,15,0);
    SData/*15:0*/ ibex_compressed_decoder__DOT____Vtogcov__enum_dpi;
    VL_IN(instr_i,31,0);
    VL_OUT(instr_o,31,0);
    IData/*16:0*/ ibex_compressed_decoder__DOT__unused_signals;
    IData/*31:0*/ ibex_compressed_decoder__DOT____Vtogcov__instr_i;
    IData/*31:0*/ ibex_compressed_decoder__DOT____Vtogcov__instr_o;
    IData/*16:0*/ ibex_compressed_decoder__DOT____Vtogcov__unused_signals;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vibex_compressed_decoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vibex_compressed_decoder___024root(Vibex_compressed_decoder__Syms* symsp, const char* v__name);
    ~Vibex_compressed_decoder___024root();
    VL_UNCOPYABLE(Vibex_compressed_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
