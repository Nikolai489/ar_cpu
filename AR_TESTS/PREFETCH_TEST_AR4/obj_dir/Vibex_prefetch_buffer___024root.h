// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_prefetch_buffer.h for the primary calling header

#ifndef VERILATED_VIBEX_PREFETCH_BUFFER___024ROOT_H_
#define VERILATED_VIBEX_PREFETCH_BUFFER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vibex_prefetch_buffer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_prefetch_buffer___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(req_i,0,0);
        VL_IN8(branch_i,0,0);
        VL_IN8(ready_i,0,0);
        VL_OUT8(valid_o,0,0);
        VL_OUT8(err_o,0,0);
        VL_OUT8(err_plus2_o,0,0);
        VL_OUT8(instr_req_o,0,0);
        VL_IN8(instr_gnt_i,0,0);
        VL_IN8(instr_err_i,0,0);
        VL_IN8(instr_rvalid_i,0,0);
        VL_OUT8(busy_o,0,0);
        CData/*0:0*/ ibex_prefetch_buffer__DOT__valid_new_req;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__valid_req_d;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__valid_req_q;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__discard_req_d;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__discard_req_q;
        CData/*1:0*/ ibex_prefetch_buffer__DOT__rdata_outstanding_n;
        CData/*1:0*/ ibex_prefetch_buffer__DOT__rdata_outstanding_s;
        CData/*1:0*/ ibex_prefetch_buffer__DOT__rdata_outstanding_q;
        CData/*1:0*/ ibex_prefetch_buffer__DOT__branch_discard_n;
        CData/*1:0*/ ibex_prefetch_buffer__DOT__branch_discard_s;
        CData/*1:0*/ ibex_prefetch_buffer__DOT__branch_discard_q;
        CData/*1:0*/ ibex_prefetch_buffer__DOT__rdata_outstanding_rev;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__stored_addr_en;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fetch_addr_en;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_valid;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_ready;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__clk_i;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__rst_ni;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__req_i;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__branch_i;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__ready_i;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__valid_o;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__err_o;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__err_plus2_o;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__instr_req_o;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__instr_gnt_i;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__instr_err_i;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__instr_rvalid_i;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__busy_o;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__valid_new_req;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__valid_req_d;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__valid_req_q;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__discard_req_d;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__discard_req_q;
        CData/*1:0*/ ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_n;
        CData/*1:0*/ ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_s;
        CData/*1:0*/ ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_q;
        CData/*1:0*/ ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_n;
        CData/*1:0*/ ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_s;
        CData/*1:0*/ ibex_prefetch_buffer__DOT____Vtogcov__branch_discard_q;
        CData/*1:0*/ ibex_prefetch_buffer__DOT____Vtogcov__rdata_outstanding_rev;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_en;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_en;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__fifo_valid;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____Vtogcov__fifo_ready;
        CData/*1:0*/ ibex_prefetch_buffer__DOT____Vtogcov__fifo_busy;
        CData/*0:0*/ ibex_prefetch_buffer__DOT____VdfgTmp_h6a6a3522__0;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__err_d;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__err_q;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_d;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_q;
    };
    struct {
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__lowest_free_entry;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_pushed;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_popped;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__entry_en;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__pop_fifo;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__err;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__err_unaligned;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__err_plus2;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__valid;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__valid_unaligned;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__aligned_is_compressed;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__unaligned_is_compressed;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__addr_incr_two;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_en;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_d;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_q;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_d;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_q;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__lowest_free_entry;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_pushed;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_popped;
        CData/*2:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__entry_en;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__pop_fifo;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_unaligned;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__err_plus2;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__valid_unaligned;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__aligned_is_compressed;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__unaligned_is_compressed;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__addr_incr_two;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_en;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h88eb07d9__0;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h18d2a020__0;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h46f3913b__0;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h11e4035a__0;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h72c0dcf0__0;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h87bd3038__0;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h379a9be1__0;
        CData/*0:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____VdfgTmp_h0de6124d__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(addr_i,31,0);
        VL_OUT(rdata_o,31,0);
        VL_OUT(addr_o,31,0);
        VL_OUT(instr_addr_o,31,0);
        VL_IN(instr_rdata_i,31,0);
        IData/*31:0*/ ibex_prefetch_buffer__DOT__stored_addr_d;
        IData/*31:0*/ ibex_prefetch_buffer__DOT__stored_addr_q;
        IData/*31:0*/ ibex_prefetch_buffer__DOT__fetch_addr_d;
        IData/*31:0*/ ibex_prefetch_buffer__DOT__fetch_addr_q;
        IData/*31:0*/ ibex_prefetch_buffer__DOT____Vtogcov__addr_i;
        IData/*31:0*/ ibex_prefetch_buffer__DOT____Vtogcov__rdata_o;
        IData/*31:0*/ ibex_prefetch_buffer__DOT____Vtogcov__addr_o;
        IData/*31:0*/ ibex_prefetch_buffer__DOT____Vtogcov__instr_addr_o;
        IData/*31:0*/ ibex_prefetch_buffer__DOT____Vtogcov__instr_rdata_i;
        IData/*31:0*/ ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_d;
        IData/*31:0*/ ibex_prefetch_buffer__DOT____Vtogcov__stored_addr_q;
        IData/*31:0*/ ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_d;
        IData/*31:0*/ ibex_prefetch_buffer__DOT____Vtogcov__fetch_addr_q;
        VlWide<3>/*95:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_d;
        VlWide<3>/*95:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_q;
        IData/*31:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata;
    };
    struct {
        IData/*31:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__rdata_unaligned;
        IData/*30:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_next;
        IData/*30:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_d;
        IData/*30:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT__instr_addr_q;
        VlWide<3>/*95:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_d;
        VlWide<3>/*95:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_q;
        IData/*31:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata;
        IData/*31:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__rdata_unaligned;
        IData/*30:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_next;
        IData/*30:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_d;
        IData/*30:0*/ ibex_prefetch_buffer__DOT__fifo_i__DOT____Vtogcov__instr_addr_q;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vibex_prefetch_buffer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vibex_prefetch_buffer___024root(Vibex_prefetch_buffer__Syms* symsp, const char* v__name);
    ~Vibex_prefetch_buffer___024root();
    VL_UNCOPYABLE(Vibex_prefetch_buffer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
