// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_fetch_fifo.h for the primary calling header

#ifndef VERILATED_VIBEX_FETCH_FIFO___024ROOT_H_
#define VERILATED_VIBEX_FETCH_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vibex_fetch_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_fetch_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(clear_i,0,0);
        VL_OUT8(busy_o,1,0);
        VL_IN8(in_valid_i,0,0);
        VL_IN8(in_err_i,0,0);
        VL_OUT8(out_valid_o,0,0);
        VL_IN8(out_ready_i,0,0);
        VL_OUT8(out_err_o,0,0);
        VL_OUT8(out_err_plus2_o,0,0);
        CData/*2:0*/ ibex_fetch_fifo__DOT__err_d;
        CData/*2:0*/ ibex_fetch_fifo__DOT__err_q;
        CData/*2:0*/ ibex_fetch_fifo__DOT__valid_d;
        CData/*2:0*/ ibex_fetch_fifo__DOT__valid_q;
        CData/*2:0*/ ibex_fetch_fifo__DOT__lowest_free_entry;
        CData/*2:0*/ ibex_fetch_fifo__DOT__valid_pushed;
        CData/*2:0*/ ibex_fetch_fifo__DOT__valid_popped;
        CData/*2:0*/ ibex_fetch_fifo__DOT__entry_en;
        CData/*0:0*/ ibex_fetch_fifo__DOT__pop_fifo;
        CData/*0:0*/ ibex_fetch_fifo__DOT__err;
        CData/*0:0*/ ibex_fetch_fifo__DOT__err_unaligned;
        CData/*0:0*/ ibex_fetch_fifo__DOT__err_plus2;
        CData/*0:0*/ ibex_fetch_fifo__DOT__valid;
        CData/*0:0*/ ibex_fetch_fifo__DOT__valid_unaligned;
        CData/*0:0*/ ibex_fetch_fifo__DOT__aligned_is_compressed;
        CData/*0:0*/ ibex_fetch_fifo__DOT__unaligned_is_compressed;
        CData/*0:0*/ ibex_fetch_fifo__DOT__addr_incr_two;
        CData/*0:0*/ ibex_fetch_fifo__DOT__instr_addr_en;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__clk_i;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__rst_ni;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__clear_i;
        CData/*1:0*/ ibex_fetch_fifo__DOT____Vtogcov__busy_o;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__in_valid_i;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__in_err_i;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__out_valid_o;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__out_ready_i;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__out_err_o;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__out_err_plus2_o;
        CData/*2:0*/ ibex_fetch_fifo__DOT____Vtogcov__err_d;
        CData/*2:0*/ ibex_fetch_fifo__DOT____Vtogcov__err_q;
        CData/*2:0*/ ibex_fetch_fifo__DOT____Vtogcov__valid_d;
        CData/*2:0*/ ibex_fetch_fifo__DOT____Vtogcov__valid_q;
        CData/*2:0*/ ibex_fetch_fifo__DOT____Vtogcov__lowest_free_entry;
        CData/*2:0*/ ibex_fetch_fifo__DOT____Vtogcov__valid_pushed;
        CData/*2:0*/ ibex_fetch_fifo__DOT____Vtogcov__valid_popped;
        CData/*2:0*/ ibex_fetch_fifo__DOT____Vtogcov__entry_en;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__pop_fifo;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__err;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__err_unaligned;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__err_plus2;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__valid;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__valid_unaligned;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__aligned_is_compressed;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__unaligned_is_compressed;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__addr_incr_two;
        CData/*0:0*/ ibex_fetch_fifo__DOT____Vtogcov__instr_addr_en;
        CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_h88eb07d9__0;
        CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_h18d2a020__0;
        CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_h46f3913b__0;
        CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_h11e4035a__0;
        CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_h72c0dcf0__0;
        CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_h87bd3038__0;
        CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_h379a9be1__0;
        CData/*0:0*/ ibex_fetch_fifo__DOT____VdfgTmp_h0de6124d__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(in_addr_i,31,0);
        VL_IN(in_rdata_i,31,0);
        VL_OUT(out_addr_o,31,0);
        VL_OUT(out_rdata_o,31,0);
        VlWide<3>/*95:0*/ ibex_fetch_fifo__DOT__rdata_d;
        VlWide<3>/*95:0*/ ibex_fetch_fifo__DOT__rdata_q;
        IData/*31:0*/ ibex_fetch_fifo__DOT__rdata;
        IData/*31:0*/ ibex_fetch_fifo__DOT__rdata_unaligned;
        IData/*30:0*/ ibex_fetch_fifo__DOT__instr_addr_next;
        IData/*30:0*/ ibex_fetch_fifo__DOT__instr_addr_d;
        IData/*30:0*/ ibex_fetch_fifo__DOT__instr_addr_q;
        IData/*31:0*/ ibex_fetch_fifo__DOT____Vtogcov__in_addr_i;
        IData/*31:0*/ ibex_fetch_fifo__DOT____Vtogcov__in_rdata_i;
        IData/*31:0*/ ibex_fetch_fifo__DOT____Vtogcov__out_addr_o;
        IData/*31:0*/ ibex_fetch_fifo__DOT____Vtogcov__out_rdata_o;
        VlWide<3>/*95:0*/ ibex_fetch_fifo__DOT____Vtogcov__rdata_d;
        VlWide<3>/*95:0*/ ibex_fetch_fifo__DOT____Vtogcov__rdata_q;
        IData/*31:0*/ ibex_fetch_fifo__DOT____Vtogcov__rdata;
        IData/*31:0*/ ibex_fetch_fifo__DOT____Vtogcov__rdata_unaligned;
        IData/*30:0*/ ibex_fetch_fifo__DOT____Vtogcov__instr_addr_next;
        IData/*30:0*/ ibex_fetch_fifo__DOT____Vtogcov__instr_addr_d;
        IData/*30:0*/ ibex_fetch_fifo__DOT____Vtogcov__instr_addr_q;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vibex_fetch_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vibex_fetch_fifo___024root(Vibex_fetch_fifo__Syms* symsp, const char* v__name);
    ~Vibex_fetch_fifo___024root();
    VL_UNCOPYABLE(Vibex_fetch_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
