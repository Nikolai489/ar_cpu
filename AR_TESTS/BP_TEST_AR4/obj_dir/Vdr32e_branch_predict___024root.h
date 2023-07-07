// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdr32e_branch_predict.h for the primary calling header

#ifndef VERILATED_VDR32E_BRANCH_PREDICT___024ROOT_H_
#define VERILATED_VDR32E_BRANCH_PREDICT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class Vdr32e_branch_predict_dr32e_pkg;


class Vdr32e_branch_predict__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdr32e_branch_predict___024root final : public VerilatedModule {
  public:
    // CELLS
    Vdr32e_branch_predict_dr32e_pkg* __PVT__dr32e_pkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(fetch_valid_i,0,0);
    VL_OUT8(predict_branch_taken_o,0,0);
    CData/*0:0*/ dr32e_branch_predict__DOT__instr_cj;
    CData/*0:0*/ dr32e_branch_predict__DOT__instr_cb;
    CData/*0:0*/ dr32e_branch_predict__DOT__instr_b_taken;
    CData/*0:0*/ dr32e_branch_predict__DOT____Vtogcov__clk_i;
    CData/*0:0*/ dr32e_branch_predict__DOT____Vtogcov__rst_ni;
    CData/*0:0*/ dr32e_branch_predict__DOT____Vtogcov__fetch_valid_i;
    CData/*0:0*/ dr32e_branch_predict__DOT____Vtogcov__predict_branch_taken_o;
    CData/*0:0*/ dr32e_branch_predict__DOT____Vtogcov__instr_j;
    CData/*0:0*/ dr32e_branch_predict__DOT____Vtogcov__instr_b;
    CData/*0:0*/ dr32e_branch_predict__DOT____Vtogcov__instr_cj;
    CData/*0:0*/ dr32e_branch_predict__DOT____Vtogcov__instr_cb;
    CData/*0:0*/ dr32e_branch_predict__DOT____Vtogcov__instr_b_taken;
    CData/*0:0*/ __VactContinue;
    VL_IN(fetch_rdata_i,31,0);
    VL_IN(fetch_pc_i,31,0);
    VL_OUT(predict_branch_pc_o,31,0);
    IData/*31:0*/ dr32e_branch_predict__DOT__imm_j_type;
    IData/*31:0*/ dr32e_branch_predict__DOT__imm_b_type;
    IData/*31:0*/ dr32e_branch_predict__DOT__imm_cj_type;
    IData/*31:0*/ dr32e_branch_predict__DOT__imm_cb_type;
    IData/*31:0*/ dr32e_branch_predict__DOT__branch_imm;
    IData/*31:0*/ dr32e_branch_predict__DOT____Vtogcov__fetch_rdata_i;
    IData/*31:0*/ dr32e_branch_predict__DOT____Vtogcov__fetch_pc_i;
    IData/*31:0*/ dr32e_branch_predict__DOT____Vtogcov__predict_branch_pc_o;
    IData/*31:0*/ dr32e_branch_predict__DOT____Vtogcov__imm_j_type;
    IData/*31:0*/ dr32e_branch_predict__DOT____Vtogcov__imm_b_type;
    IData/*31:0*/ dr32e_branch_predict__DOT____Vtogcov__imm_cj_type;
    IData/*31:0*/ dr32e_branch_predict__DOT____Vtogcov__imm_cb_type;
    IData/*31:0*/ dr32e_branch_predict__DOT____Vtogcov__branch_imm;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdr32e_branch_predict__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdr32e_branch_predict___024root(Vdr32e_branch_predict__Syms* symsp, const char* v__name);
    ~Vdr32e_branch_predict___024root();
    VL_UNCOPYABLE(Vdr32e_branch_predict___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
