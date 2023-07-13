// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcve2_alu.h for the primary calling header

#ifndef VERILATED_VCVE2_ALU___024ROOT_H_
#define VERILATED_VCVE2_ALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class Vcve2_alu_cve2_pkg;


class Vcve2_alu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcve2_alu___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcve2_alu_cve2_pkg* __PVT__cve2_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(operator_i,6,0);
        VL_IN8(clk_i,0,0);
        VL_IN8(instr_first_cycle_i,0,0);
        VL_IN8(multdiv_sel_i,0,0);
        VL_OUT8(imd_val_we_o,1,0);
        VL_OUT8(comparison_result_o,0,0);
        VL_OUT8(is_equal_result_o,0,0);
        CData/*0:0*/ cve2_alu__DOT__adder_op_b_negate;
        CData/*0:0*/ cve2_alu__DOT__is_greater_equal;
        CData/*0:0*/ cve2_alu__DOT__cmp_signed;
        CData/*0:0*/ cve2_alu__DOT__cmp_result;
        CData/*0:0*/ cve2_alu__DOT__shift_left;
        CData/*5:0*/ cve2_alu__DOT__shift_amt;
        CData/*0:0*/ cve2_alu__DOT__unused_shift_result_ext;
        CData/*4:0*/ cve2_alu__DOT__bfp_len;
        CData/*0:0*/ cve2_alu__DOT__bwlogic_or;
        CData/*0:0*/ cve2_alu__DOT__bwlogic_and;
        CData/*0:0*/ cve2_alu__DOT__bwlogic_op_b_negate;
        CData/*6:0*/ cve2_alu__DOT____Vtogcov__operator_i;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__clk_i;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__instr_first_cycle_i;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__multdiv_sel_i;
        CData/*1:0*/ cve2_alu__DOT____Vtogcov__imd_val_we_o;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__comparison_result_o;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__is_equal_result_o;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__adder_op_b_negate;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__is_greater_equal;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__cmp_signed;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__cmp_result;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__shift_left;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__shift_arith;
        CData/*5:0*/ cve2_alu__DOT____Vtogcov__shift_amt;
        CData/*5:0*/ cve2_alu__DOT____Vtogcov__shift_amt_compl;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__unused_shift_result_ext;
        CData/*4:0*/ cve2_alu__DOT____Vtogcov__bfp_len;
        CData/*4:0*/ cve2_alu__DOT____Vtogcov__bfp_off;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__bwlogic_or;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__bwlogic_and;
        CData/*0:0*/ cve2_alu__DOT____Vtogcov__bwlogic_op_b_negate;
        CData/*0:0*/ __VactContinue;
        VL_IN(operand_a_i,31,0);
        VL_IN(operand_b_i,31,0);
        VL_OUT(adder_result_o,31,0);
        VL_OUT(result_o,31,0);
        IData/*31:0*/ cve2_alu__DOT__operand_a_rev;
        IData/*31:0*/ cve2_alu__DOT__shift_operand;
        IData/*31:0*/ cve2_alu__DOT__shift_result;
        IData/*31:0*/ cve2_alu__DOT__shift_result_rev;
        IData/*31:0*/ cve2_alu__DOT__bwlogic_operand_b;
        IData/*31:0*/ cve2_alu__DOT__bwlogic_or_result;
        IData/*31:0*/ cve2_alu__DOT__bwlogic_and_result;
        IData/*31:0*/ cve2_alu__DOT__bwlogic_xor_result;
        IData/*31:0*/ cve2_alu__DOT__bwlogic_result;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__operand_a_i;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__operand_b_i;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__adder_result_o;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__result_o;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__operand_a_rev;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__shift_operand;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__shift_result;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__shift_result_rev;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__bwlogic_operand_b;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__bwlogic_or_result;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__bwlogic_and_result;
    };
    struct {
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__bwlogic_xor_result;
        IData/*31:0*/ cve2_alu__DOT____Vtogcov__bwlogic_result;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(multdiv_operand_a_i,32,0);
        VL_IN64(multdiv_operand_b_i,32,0);
        VL_OUT64(adder_result_ext_o,33,0);
        QData/*32:0*/ cve2_alu__DOT__adder_in_a;
        QData/*32:0*/ cve2_alu__DOT__adder_in_b;
        QData/*32:0*/ cve2_alu__DOT__shift_result_ext_signed;
        QData/*32:0*/ cve2_alu__DOT__shift_result_ext;
        QData/*32:0*/ cve2_alu__DOT____Vtogcov__multdiv_operand_a_i;
        QData/*32:0*/ cve2_alu__DOT____Vtogcov__multdiv_operand_b_i;
        QData/*33:0*/ cve2_alu__DOT____Vtogcov__adder_result_ext_o;
        QData/*32:0*/ cve2_alu__DOT____Vtogcov__operand_b_neg;
        QData/*32:0*/ cve2_alu__DOT____Vtogcov__adder_in_a;
        QData/*32:0*/ cve2_alu__DOT____Vtogcov__adder_in_b;
        QData/*32:0*/ cve2_alu__DOT____Vtogcov__shift_result_ext_signed;
        QData/*32:0*/ cve2_alu__DOT____Vtogcov__shift_result_ext;
        VL_IN(imd_val_q_i[2],31,0);
        VL_OUT(imd_val_d_o[2],31,0);
        VlUnpacked<IData/*31:0*/, 2> cve2_alu__DOT____Vtogcov__imd_val_q_i;
        VlUnpacked<IData/*31:0*/, 2> cve2_alu__DOT____Vtogcov__imd_val_d_o;
        VlUnpacked<IData/*31:0*/, 2> cve2_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcve2_alu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcve2_alu___024root(Vcve2_alu__Syms* symsp, const char* v__name);
    ~Vcve2_alu___024root();
    VL_UNCOPYABLE(Vcve2_alu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
