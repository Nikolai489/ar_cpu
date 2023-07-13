// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_register_file_ff.h for the primary calling header

#ifndef VERILATED_VIBEX_REGISTER_FILE_FF___024ROOT_H_
#define VERILATED_VIBEX_REGISTER_FILE_FF___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vibex_register_file_ff__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_register_file_ff___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(test_en_i,0,0);
        VL_IN8(dummy_instr_id_i,0,0);
        VL_IN8(dummy_instr_wb_i,0,0);
        VL_IN8(raddr_a_i,4,0);
        VL_IN8(raddr_b_i,4,0);
        VL_IN8(waddr_a_i,4,0);
        VL_IN8(we_a_i,0,0);
        VL_OUT8(err_o,0,0);
        CData/*0:0*/ ibex_register_file_ff__DOT____Vtogcov__clk_i;
        CData/*0:0*/ ibex_register_file_ff__DOT____Vtogcov__rst_ni;
        CData/*0:0*/ ibex_register_file_ff__DOT____Vtogcov__test_en_i;
        CData/*0:0*/ ibex_register_file_ff__DOT____Vtogcov__dummy_instr_id_i;
        CData/*0:0*/ ibex_register_file_ff__DOT____Vtogcov__dummy_instr_wb_i;
        CData/*4:0*/ ibex_register_file_ff__DOT____Vtogcov__raddr_a_i;
        CData/*4:0*/ ibex_register_file_ff__DOT____Vtogcov__raddr_b_i;
        CData/*4:0*/ ibex_register_file_ff__DOT____Vtogcov__waddr_a_i;
        CData/*0:0*/ ibex_register_file_ff__DOT____Vtogcov__we_a_i;
        CData/*0:0*/ ibex_register_file_ff__DOT____Vtogcov__err_o;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(rdata_a_o,31,0);
        VL_OUT(rdata_b_o,31,0);
        VL_IN(wdata_a_i,31,0);
        IData/*31:0*/ ibex_register_file_ff__DOT__we_a_dec;
        IData/*31:0*/ ibex_register_file_ff__DOT____Vtogcov__rdata_a_o;
        IData/*31:0*/ ibex_register_file_ff__DOT____Vtogcov__rdata_b_o;
        IData/*31:0*/ ibex_register_file_ff__DOT____Vtogcov__wdata_a_i;
        IData/*31:0*/ ibex_register_file_ff__DOT____Vtogcov__we_a_dec;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
        IData/*31:0*/ ibex_register_file_ff__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> ibex_register_file_ff__DOT__rf_reg;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vibex_register_file_ff__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vibex_register_file_ff___024root(Vibex_register_file_ff__Syms* symsp, const char* v__name);
    ~Vibex_register_file_ff___024root();
    VL_UNCOPYABLE(Vibex_register_file_ff___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
