// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcve2_alu.h for the primary calling header

#include "verilated.h"

#include "Vcve2_alu__Syms.h"
#include "Vcve2_alu__Syms.h"
#include "Vcve2_alu___024root.h"

VL_ATTR_COLD void Vcve2_alu___024root___eval_initial__TOP(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
    vlSelf->cve2_alu__DOT__bwlogic_op_b_negate = 0U;
    vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
    vlSelf->imd_val_d_o[0U] = 0U;
    vlSelf->imd_val_d_o[1U] = 0U;
    vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__imd_val_we_o))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_we_o 
            = (2U & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__imd_val_we_o));
    }
    if ((1U & (~ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg)))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = (1ULL | vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg);
    }
    vlSelf->cve2_alu__DOT__shift_amt = (0x1fU & (IData)(vlSelf->cve2_alu__DOT__shift_amt));
    vlSelf->imd_val_we_o = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcve2_alu___024root___dump_triggers__stl(Vcve2_alu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcve2_alu___024root___eval_triggers__stl(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcve2_alu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vcve2_alu___024root___stl_sequent__TOP__0(Vcve2_alu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcve2_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcve2_alu___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->operator_i) >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->operator_i))) {
            if ((1U & (~ ((IData)(vlSelf->operator_i) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->operator_i) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & (IData)(vlSelf->operator_i))) {
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->operator_i))) {
                vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->operator_i) >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->operator_i) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->operator_i) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & (IData)(vlSelf->operator_i))) {
                    vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x10U & (IData)(vlSelf->operator_i))) {
                if ((8U & (IData)(vlSelf->operator_i))) {
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->operator_i) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->multdiv_sel_i)))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->multdiv_sel_i) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x40U & (IData)(vlSelf->operator_i))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ VL_ONEHOT0_I((IData)(vlSelf->multdiv_sel_i))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: cve2_alu.v:96: Assertion failed in %Ncve2_alu: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("verilog/cve2_alu.v", 96, "");
        }
    }
    if ((1U & (~ ((vlSelf->operand_a_i ^ vlSelf->operand_b_i) 
                  >> 0x1fU)))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__clk_i))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__clk_i = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->instr_first_cycle_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__instr_first_cycle_i))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__instr_first_cycle_i 
            = vlSelf->instr_first_cycle_i;
    }
    if (((IData)(vlSelf->multdiv_sel_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__multdiv_sel_i))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_sel_i 
            = vlSelf->multdiv_sel_i;
    }
    if (((8U == (IData)(vlSelf->operator_i)) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_arith))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_arith 
            = (8U == (IData)(vlSelf->operator_i));
    }
    if (((IData)(vlSelf->cve2_alu__DOT__bwlogic_op_b_negate) 
         ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_op_b_negate))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_op_b_negate 
            = vlSelf->cve2_alu__DOT__bwlogic_op_b_negate;
    }
    vlSelf->cve2_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = vlSelf->imd_val_q_i[0U];
    vlSelf->cve2_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = vlSelf->imd_val_q_i[1U];
    if ((1U & ((vlSelf->operand_b_i >> 0x10U) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_off)))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bfp_off = 
            ((0x1eU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_off)) 
             | (1U & (vlSelf->operand_b_i >> 0x10U)));
    }
    if ((1U & ((vlSelf->operand_b_i >> 0x11U) ^ ((IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_off) 
                                                 >> 1U)))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bfp_off = 
            ((0x1dU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_off)) 
             | (2U & (vlSelf->operand_b_i >> 0x10U)));
    }
    if ((1U & ((vlSelf->operand_b_i >> 0x12U) ^ ((IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_off) 
                                                 >> 2U)))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bfp_off = 
            ((0x1bU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_off)) 
             | (4U & (vlSelf->operand_b_i >> 0x10U)));
    }
    if ((1U & ((vlSelf->operand_b_i >> 0x13U) ^ ((IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_off) 
                                                 >> 3U)))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bfp_off = 
            ((0x17U & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_off)) 
             | (8U & (vlSelf->operand_b_i >> 0x10U)));
    }
    if ((1U & ((vlSelf->operand_b_i >> 0x14U) ^ ((IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_off) 
                                                 >> 4U)))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bfp_off = 
            ((0xfU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_off)) 
             | (0x10U & (vlSelf->operand_b_i >> 0x10U)));
    }
    if ((1U & ((0x1fU & vlSelf->operand_b_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl 
            = ((0x3eU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl)) 
               | (1U & vlSelf->operand_b_i));
    }
    if ((1U & ((0xfU & (vlSelf->operand_b_i >> 1U)) 
               ^ ((IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl) 
                  >> 1U)))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl 
            = ((0x3dU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl)) 
               | (2U & vlSelf->operand_b_i));
    }
    if ((1U & ((7U & (vlSelf->operand_b_i >> 2U)) ^ 
               ((IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl) 
                >> 2U)))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl 
            = ((0x3bU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl)) 
               | (4U & vlSelf->operand_b_i));
    }
    if ((1U & ((3U & (vlSelf->operand_b_i >> 3U)) ^ 
               ((IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl) 
                >> 3U)))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl 
            = ((0x37U & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl)) 
               | (8U & vlSelf->operand_b_i));
    }
    if ((1U & ((vlSelf->operand_b_i >> 4U) ^ ((IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl) 
                                              >> 4U)))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl 
            = ((0x2fU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl)) 
               | (0x10U & vlSelf->operand_b_i));
    }
    if ((0x20U & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl 
            = (0x1fU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt_compl));
    }
    if ((1U & ((IData)(vlSelf->operator_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operator_i 
            = ((0x7eU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)) 
               | (1U & (IData)(vlSelf->operator_i)));
    }
    if ((2U & ((IData)(vlSelf->operator_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operator_i 
            = ((0x7dU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)) 
               | (2U & (IData)(vlSelf->operator_i)));
    }
    if ((4U & ((IData)(vlSelf->operator_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operator_i 
            = ((0x7bU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)) 
               | (4U & (IData)(vlSelf->operator_i)));
    }
    if ((8U & ((IData)(vlSelf->operator_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operator_i 
            = ((0x77U & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)) 
               | (8U & (IData)(vlSelf->operator_i)));
    }
    if ((0x10U & ((IData)(vlSelf->operator_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operator_i 
            = ((0x6fU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)) 
               | (0x10U & (IData)(vlSelf->operator_i)));
    }
    if ((0x20U & ((IData)(vlSelf->operator_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operator_i 
            = ((0x5fU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)) 
               | (0x20U & (IData)(vlSelf->operator_i)));
    }
    if ((0x40U & ((IData)(vlSelf->operator_i) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operator_i 
            = ((0x3fU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__operator_i)) 
               | (0x40U & (IData)(vlSelf->operator_i)));
    }
    if ((1U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (1U & vlSelf->operand_a_i));
    }
    if ((2U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (2U & vlSelf->operand_a_i));
    }
    if ((4U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (4U & vlSelf->operand_a_i));
    }
    if ((8U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (8U & vlSelf->operand_a_i));
    }
    if ((0x10U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x10U & vlSelf->operand_a_i));
    }
    if ((0x20U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x20U & vlSelf->operand_a_i));
    }
    if ((0x40U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x40U & vlSelf->operand_a_i));
    }
    if ((0x80U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x80U & vlSelf->operand_a_i));
    }
    if ((0x100U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x100U & vlSelf->operand_a_i));
    }
    if ((0x200U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x200U & vlSelf->operand_a_i));
    }
    if ((0x400U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x400U & vlSelf->operand_a_i));
    }
    if ((0x800U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x800U & vlSelf->operand_a_i));
    }
    if ((0x1000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x1000U & vlSelf->operand_a_i));
    }
    if ((0x2000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x2000U & vlSelf->operand_a_i));
    }
    if ((0x4000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x4000U & vlSelf->operand_a_i));
    }
    if ((0x8000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x8000U & vlSelf->operand_a_i));
    }
    if ((0x10000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x10000U & vlSelf->operand_a_i));
    }
    if ((0x20000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x20000U & vlSelf->operand_a_i));
    }
    if ((0x40000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x40000U & vlSelf->operand_a_i));
    }
    if ((0x80000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x80000U & vlSelf->operand_a_i));
    }
    if ((0x100000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x100000U & vlSelf->operand_a_i));
    }
    if ((0x200000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x200000U & vlSelf->operand_a_i));
    }
    if ((0x400000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x400000U & vlSelf->operand_a_i));
    }
    if ((0x800000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x800000U & vlSelf->operand_a_i));
    }
    if ((0x1000000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x1000000U & vlSelf->operand_a_i));
    }
    if ((0x2000000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x2000000U & vlSelf->operand_a_i));
    }
    if ((0x4000000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x4000000U & vlSelf->operand_a_i));
    }
    if ((0x8000000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x8000000U & vlSelf->operand_a_i));
    }
    if ((0x10000000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x10000000U & vlSelf->operand_a_i));
    }
    if ((0x20000000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x20000000U & vlSelf->operand_a_i));
    }
    if ((0x40000000U & (vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x40000000U & vlSelf->operand_a_i));
    }
    if (((vlSelf->operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_i) 
               | (0x80000000U & vlSelf->operand_a_i));
    }
    if ((1U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (1U & vlSelf->operand_b_i));
    }
    if ((2U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (2U & vlSelf->operand_b_i));
    }
    if ((4U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (4U & vlSelf->operand_b_i));
    }
    if ((8U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (8U & vlSelf->operand_b_i));
    }
    if ((0x10U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x10U & vlSelf->operand_b_i));
    }
    if ((0x20U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x20U & vlSelf->operand_b_i));
    }
    if ((0x40U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x40U & vlSelf->operand_b_i));
    }
    if ((0x80U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x80U & vlSelf->operand_b_i));
    }
    if ((0x100U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x100U & vlSelf->operand_b_i));
    }
    if ((0x200U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x200U & vlSelf->operand_b_i));
    }
    if ((0x400U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x400U & vlSelf->operand_b_i));
    }
    if ((0x800U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x800U & vlSelf->operand_b_i));
    }
    if ((0x1000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x1000U & vlSelf->operand_b_i));
    }
    if ((0x2000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x2000U & vlSelf->operand_b_i));
    }
    if ((0x4000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x4000U & vlSelf->operand_b_i));
    }
    if ((0x8000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x8000U & vlSelf->operand_b_i));
    }
    if ((0x10000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x10000U & vlSelf->operand_b_i));
    }
    if ((0x20000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x20000U & vlSelf->operand_b_i));
    }
    if ((0x40000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x40000U & vlSelf->operand_b_i));
    }
    if ((0x80000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x80000U & vlSelf->operand_b_i));
    }
    if ((0x100000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x100000U & vlSelf->operand_b_i));
    }
    if ((0x200000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x200000U & vlSelf->operand_b_i));
    }
    if ((0x400000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x400000U & vlSelf->operand_b_i));
    }
    if ((0x800000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x800000U & vlSelf->operand_b_i));
    }
    if ((0x1000000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x1000000U & vlSelf->operand_b_i));
    }
    if ((0x2000000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x2000000U & vlSelf->operand_b_i));
    }
    if ((0x4000000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x4000000U & vlSelf->operand_b_i));
    }
    if ((0x8000000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x8000000U & vlSelf->operand_b_i));
    }
    if ((0x10000000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x10000000U & vlSelf->operand_b_i));
    }
    if ((0x20000000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x20000000U & vlSelf->operand_b_i));
    }
    if ((0x40000000U & (vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x40000000U & vlSelf->operand_b_i));
    }
    if (((vlSelf->operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_i) 
               | (0x80000000U & vlSelf->operand_b_i));
    }
    if ((1U & ((~ vlSelf->operand_b_i) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                  >> 1U))))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fffffffdULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ vlSelf->operand_b_i)))) 
                  << 1U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 1U)) ^ (IData)(
                                                         (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                          >> 2U))))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fffffffbULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 1U))))) 
                  << 2U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 2U)) ^ (IData)(
                                                         (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                          >> 3U))))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fffffff7ULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 2U))))) 
                  << 3U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 3U)) ^ (IData)(
                                                         (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                          >> 4U))))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffffffefULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 3U))))) 
                  << 4U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 4U)) ^ (IData)(
                                                         (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                          >> 5U))))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffffffdfULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 4U))))) 
                  << 5U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 5U)) ^ (IData)(
                                                         (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                          >> 6U))))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffffffbfULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 5U))))) 
                  << 6U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 6U)) ^ (IData)(
                                                         (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                          >> 7U))))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffffff7fULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 6U))))) 
                  << 7U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 7U)) ^ (IData)(
                                                         (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                          >> 8U))))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fffffeffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 7U))))) 
                  << 8U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 8U)) ^ (IData)(
                                                         (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                          >> 9U))))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fffffdffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 8U))))) 
                  << 9U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 9U)) ^ (IData)(
                                                         (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                          >> 0xaU))))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fffffbffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 9U))))) 
                  << 0xaU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0xaU)) ^ (IData)(
                                                           (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                            >> 0xbU))))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fffff7ffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0xaU))))) 
                  << 0xbU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0xbU)) ^ (IData)(
                                                           (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                            >> 0xcU))))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffffefffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0xbU))))) 
                  << 0xcU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0xcU)) ^ (IData)(
                                                           (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                            >> 0xdU))))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffffdfffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0xcU))))) 
                  << 0xdU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0xdU)) ^ (IData)(
                                                           (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                            >> 0xeU))))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffffbfffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0xdU))))) 
                  << 0xeU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0xeU)) ^ (IData)(
                                                           (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                            >> 0xfU))))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffff7fffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0xeU))))) 
                  << 0xfU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0xfU)) ^ (IData)(
                                                           (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                            >> 0x10U))))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fffeffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0xfU))))) 
                  << 0x10U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x10U)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x11U))))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fffdffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x10U))))) 
                  << 0x11U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x11U)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x12U))))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fffbffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x11U))))) 
                  << 0x12U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x12U)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x13U))))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fff7ffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x12U))))) 
                  << 0x13U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x13U)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x14U))))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffefffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x13U))))) 
                  << 0x14U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x14U)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x15U))))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffdfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x14U))))) 
                  << 0x15U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x15U)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x16U))))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ffbfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x15U))))) 
                  << 0x16U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x16U)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x17U))))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1ff7fffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x16U))))) 
                  << 0x17U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x17U)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x18U))))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1feffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x17U))))) 
                  << 0x18U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x18U)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x19U))))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fdffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x18U))))) 
                  << 0x19U));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x19U)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x1aU))))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1fbffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x19U))))) 
                  << 0x1aU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x1aU)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x1bU))))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1f7ffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x1aU))))) 
                  << 0x1bU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x1bU)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x1cU))))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1efffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x1bU))))) 
                  << 0x1cU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x1cU)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x1dU))))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1dfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x1cU))))) 
                  << 0x1dU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x1dU)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x1eU))))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x1bfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x1dU))))) 
                  << 0x1eU));
    }
    if ((1U & ((~ (vlSelf->operand_b_i >> 0x1eU)) ^ (IData)(
                                                            (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                             >> 0x1fU))))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0x17fffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x1eU))))) 
                  << 0x1fU));
    }
    if ((1U ^ ((vlSelf->operand_b_i >> 0x1fU) ^ (vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
                                                 >> 0x20U)))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg 
            = ((0xffffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__operand_b_neg) 
               | ((QData)((IData)((1U & (~ (vlSelf->operand_b_i 
                                            >> 0x1fU))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlSelf->multdiv_operand_a_i) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i)))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffffffeULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | (IData)((IData)((1U & (IData)(vlSelf->multdiv_operand_a_i)))));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 1U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffffffdULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 2U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffffffbULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 3U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffffff7ULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 4U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffffffefULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 5U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffffffdfULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 6U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffffffbfULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 7U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffffff7fULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 8U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffffeffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 9U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffffdffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0xaU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffffbffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0xbU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffff7ffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0xcU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffffefffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0xdU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffffdfffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0xeU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffffbfffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0xfU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffff7fffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x10U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffeffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x11U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffdffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x12U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fffbffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x13U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fff7ffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x14U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffefffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x15U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffdfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x16U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ffbfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x17U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1ff7fffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x18U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1feffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x19U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fdffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x1aU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1fbffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x1bU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1f7ffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x1cU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1efffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x1dU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1dfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x1eU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x1bfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_a_i 
                        >> 0x1fU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0x17fffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->multdiv_operand_a_i ^ vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i 
            = ((0xffffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_a_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_a_i 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlSelf->multdiv_operand_b_i) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffffffeULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | (IData)((IData)((1U & (IData)(vlSelf->multdiv_operand_b_i)))));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 1U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffffffdULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 2U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffffffbULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 3U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffffff7ULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 4U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffffffefULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 5U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffffffdfULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 6U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffffffbfULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 7U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffffff7fULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 8U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffffeffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 9U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffffdffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0xaU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffffbffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0xbU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffff7ffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0xcU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffffefffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0xdU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffffdfffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0xeU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffffbfffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0xfU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffff7fffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x10U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffeffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x11U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffdffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x12U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fffbffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x13U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fff7ffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x14U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffefffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x15U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffdfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x16U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ffbfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x17U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1ff7fffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x18U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1feffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x19U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fdffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x1aU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1fbffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x1bU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1f7ffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x1cU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1efffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x1dU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1dfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x1eU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x1bfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->multdiv_operand_b_i 
                        >> 0x1fU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0x17fffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->multdiv_operand_b_i ^ vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i 
            = ((0xffffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__multdiv_operand_b_i) 
               | ((QData)((IData)((1U & (IData)((vlSelf->multdiv_operand_b_i 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->cve2_alu__DOT__bfp_len = ((0x10U & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->operand_b_i 
                                                                >> 0x18U))))) 
                                                << 4U)) 
                                      | (0xfU & (vlSelf->operand_b_i 
                                                 >> 0x18U)));
    if ((1U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
               [0U]))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (1U & vlSelf->imd_val_q_i[0U]));
    }
    if ((2U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
               [0U]))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (2U & vlSelf->imd_val_q_i[0U]));
    }
    if ((4U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
               [0U]))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (4U & vlSelf->imd_val_q_i[0U]));
    }
    if ((8U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
               [0U]))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (8U & vlSelf->imd_val_q_i[0U]));
    }
    if ((0x10U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                  [0U]))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x10U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x20U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                  [0U]))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x20U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x40U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                  [0U]))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x40U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x80U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                  [0U]))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x80U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x100U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                   [0U]))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x100U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x200U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                   [0U]))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x200U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x400U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                   [0U]))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x400U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x800U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                   [0U]))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x800U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x1000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                    [0U]))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x1000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x2000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                    [0U]))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x2000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x4000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                    [0U]))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x4000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x8000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                    [0U]))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x8000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x10000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                     [0U]))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x10000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x20000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                     [0U]))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x20000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x40000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                     [0U]))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x40000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x80000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                     [0U]))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x80000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x100000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                      [0U]))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x100000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x200000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                      [0U]))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x200000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x400000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                      [0U]))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x400000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x800000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                      [0U]))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x800000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                       [0U]))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x1000000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                       [0U]))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x2000000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                       [0U]))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x4000000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                       [0U]))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x8000000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                        [0U]))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x10000000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                        [0U]))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x20000000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                        [0U]))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x40000000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if (((vlSelf->imd_val_q_i[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[0U] 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [0U]) | (0x80000000U & vlSelf->imd_val_q_i
                         [0U]));
    }
    if ((1U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
               [1U]))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (1U & vlSelf->imd_val_q_i[1U]));
    }
    if ((2U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
               [1U]))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (2U & vlSelf->imd_val_q_i[1U]));
    }
    if ((4U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
               [1U]))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (4U & vlSelf->imd_val_q_i[1U]));
    }
    if ((8U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
               [1U]))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (8U & vlSelf->imd_val_q_i[1U]));
    }
    if ((0x10U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                  [1U]))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x10U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x20U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                  [1U]))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x20U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x40U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                  [1U]))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x40U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x80U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                  [1U]))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x80U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x100U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                   [1U]))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x100U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x200U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                   [1U]))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x200U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x400U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                   [1U]))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x400U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x800U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                   [1U]))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x800U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x1000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                    [1U]))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x1000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x2000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                    [1U]))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x2000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x4000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                    [1U]))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x4000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x8000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                    [1U]))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x8000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x10000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                     [1U]))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x10000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x20000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                     [1U]))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x20000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x40000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                     [1U]))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x40000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x80000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                     [1U]))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x80000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x100000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                      [1U]))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x100000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x200000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                      [1U]))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x200000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x400000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                      [1U]))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x400000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x800000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                      [1U]))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x800000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                       [1U]))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x1000000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                       [1U]))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x2000000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                       [1U]))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x4000000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                       [1U]))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x8000000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                        [1U]))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x10000000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                        [1U]))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x20000000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                        [1U]))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x40000000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if (((vlSelf->imd_val_q_i[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i[1U] 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_q_i
                [1U]) | (0x80000000U & vlSelf->imd_val_q_i
                         [1U]));
    }
    if ((1U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
               [0U]))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (1U & vlSelf->imd_val_d_o[0U]));
    }
    if ((2U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
               [0U]))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (2U & vlSelf->imd_val_d_o[0U]));
    }
    if ((4U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
               [0U]))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (4U & vlSelf->imd_val_d_o[0U]));
    }
    if ((8U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
               [0U]))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (8U & vlSelf->imd_val_d_o[0U]));
    }
    if ((0x10U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                  [0U]))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x10U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x20U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                  [0U]))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x20U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x40U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                  [0U]))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x40U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x80U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                  [0U]))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x80U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x100U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                   [0U]))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x100U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x200U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                   [0U]))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x200U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x400U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                   [0U]))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x400U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x800U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                   [0U]))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x800U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x1000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                    [0U]))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x1000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x2000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                    [0U]))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x2000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x4000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                    [0U]))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x4000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x8000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                    [0U]))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x8000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x10000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                     [0U]))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x10000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x20000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                     [0U]))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x20000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x40000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                     [0U]))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x40000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x80000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                     [0U]))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x80000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x100000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                      [0U]))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x100000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x200000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                      [0U]))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x200000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x400000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                      [0U]))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x400000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x800000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                      [0U]))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x800000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                       [0U]))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x1000000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                       [0U]))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x2000000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                       [0U]))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x4000000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                       [0U]))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x8000000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                        [0U]))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x10000000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                        [0U]))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x20000000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                        [0U]))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x40000000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if (((vlSelf->imd_val_d_o[0U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[0U] 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [0U]) | (0x80000000U & vlSelf->imd_val_d_o
                         [0U]));
    }
    if ((1U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
               [1U]))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (1U & vlSelf->imd_val_d_o[1U]));
    }
    if ((2U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
               [1U]))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (2U & vlSelf->imd_val_d_o[1U]));
    }
    if ((4U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
               [1U]))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (4U & vlSelf->imd_val_d_o[1U]));
    }
    if ((8U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
               [1U]))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (8U & vlSelf->imd_val_d_o[1U]));
    }
    if ((0x10U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                  [1U]))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x10U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x20U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                  [1U]))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x20U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x40U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                  [1U]))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x40U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x80U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                  [1U]))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x80U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x100U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                   [1U]))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x100U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x200U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                   [1U]))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x200U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x400U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                   [1U]))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x400U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x800U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                   [1U]))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x800U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x1000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                    [1U]))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x1000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x2000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                    [1U]))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x2000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x4000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                    [1U]))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x4000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x8000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                    [1U]))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x8000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x10000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                     [1U]))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x10000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x20000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                     [1U]))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x20000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x40000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                     [1U]))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x40000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x80000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                     [1U]))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x80000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x100000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                      [1U]))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x100000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x200000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                      [1U]))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x200000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x400000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                      [1U]))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x400000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x800000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                      [1U]))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x800000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                       [1U]))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x1000000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                       [1U]))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x2000000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                       [1U]))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x4000000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                       [1U]))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x8000000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                        [1U]))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x10000000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                        [1U]))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x20000000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                        [1U]))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x40000000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    if (((vlSelf->imd_val_d_o[1U] ^ vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o[1U] 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__imd_val_d_o
                [1U]) | (0x80000000U & vlSelf->imd_val_d_o
                         [1U]));
    }
    vlSelf->cve2_alu__DOT__cmp_signed = (1U & ((~ ((IData)(vlSelf->operator_i) 
                                                   >> 6U)) 
                                               & ((0x20U 
                                                   & (IData)(vlSelf->operator_i))
                                                   ? 
                                                  ((~ 
                                                    ((IData)(vlSelf->operator_i) 
                                                     >> 4U)) 
                                                   & ((8U 
                                                       & (IData)(vlSelf->operator_i))
                                                       ? (IData)(
                                                                 (3U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(vlSelf->operator_i))))
                                                       : (IData)(
                                                                 (1U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(vlSelf->operator_i))))))
                                                   : (IData)(
                                                             ((0x18U 
                                                               == 
                                                               (0x18U 
                                                                & (IData)(vlSelf->operator_i))) 
                                                              & ((4U 
                                                                  & (IData)(vlSelf->operator_i))
                                                                  ? 
                                                                 (((IData)(vlSelf->operator_i) 
                                                                   >> 1U) 
                                                                  & (IData)(vlSelf->operator_i))
                                                                  : (IData)(vlSelf->operator_i)))))));
    vlSelf->cve2_alu__DOT__bwlogic_and = ((4U == (IData)(vlSelf->operator_i)) 
                                          | (7U == (IData)(vlSelf->operator_i)));
    vlSelf->cve2_alu__DOT__bwlogic_or = ((3U == (IData)(vlSelf->operator_i)) 
                                         | (6U == (IData)(vlSelf->operator_i)));
    vlSelf->cve2_alu__DOT__shift_left = (IData)((0xaU 
                                                 == (IData)(vlSelf->operator_i)));
    vlSelf->cve2_alu__DOT__shift_amt = ((0x20U & (IData)(vlSelf->cve2_alu__DOT__shift_amt)) 
                                        | (0x1fU & vlSelf->operand_b_i));
    vlSelf->cve2_alu__DOT__adder_op_b_negate = 0U;
    if ((1U & (~ ((IData)(vlSelf->operator_i) >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->operator_i) >> 5U)))) {
            if ((0x10U & (IData)(vlSelf->operator_i))) {
                if ((8U & (IData)(vlSelf->operator_i))) {
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
                            }
                            vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((1U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                            vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
                            }
                            vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->operator_i) 
                              >> 3U)))) {
                    vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->operator_i) 
                          >> 4U)))) {
                vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                if ((8U & (IData)(vlSelf->operator_i))) {
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->operator_i) 
                              >> 3U)))) {
                    vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelf->operator_i))) {
            if ((1U & (~ ((IData)(vlSelf->operator_i) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->operator_i) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
                            }
                            vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
                }
                if ((8U & (IData)(vlSelf->operator_i))) {
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
                                vlSelf->cve2_alu__DOT__adder_op_b_negate = 1U;
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                            }
                            vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
                            }
                            vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                        }
                    } else if ((2U & (IData)(vlSelf->operator_i))) {
                        if ((1U & (IData)(vlSelf->operator_i))) {
                            vlSelf->cve2_alu__DOT__adder_op_b_negate = 1U;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->operator_i))) {
                        if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                            vlSelf->cve2_alu__DOT__adder_op_b_negate = 1U;
                        }
                    } else {
                        vlSelf->cve2_alu__DOT__adder_op_b_negate = 1U;
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->operator_i))) {
                vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                if ((1U & (~ ((IData)(vlSelf->operator_i) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->operator_i))) {
                    vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
            }
        } else if ((0x10U & (IData)(vlSelf->operator_i))) {
            if ((8U & (IData)(vlSelf->operator_i))) {
                if ((4U & (IData)(vlSelf->operator_i))) {
                    vlSelf->cve2_alu__DOT__adder_op_b_negate = 1U;
                } else if ((2U & (IData)(vlSelf->operator_i))) {
                    vlSelf->cve2_alu__DOT__adder_op_b_negate = 1U;
                } else if ((1U & (IData)(vlSelf->operator_i))) {
                    vlSelf->cve2_alu__DOT__adder_op_b_negate = 1U;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->operator_i) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->operator_i) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->operator_i) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->operator_i))) {
                        vlSelf->cve2_alu__DOT__adder_op_b_negate = 1U;
                    }
                }
            }
        }
    }
    vlSelf->cve2_alu__DOT__operand_a_rev = ((vlSelf->operand_a_i 
                                             << 0x1fU) 
                                            | ((0x40000000U 
                                                & (vlSelf->operand_a_i 
                                                   << 0x1dU)) 
                                               | ((0x20000000U 
                                                   & (vlSelf->operand_a_i 
                                                      << 0x1bU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->operand_a_i 
                                                         << 0x19U)) 
                                                     | ((0x8000000U 
                                                         & (vlSelf->operand_a_i 
                                                            << 0x17U)) 
                                                        | ((0x4000000U 
                                                            & (vlSelf->operand_a_i 
                                                               << 0x15U)) 
                                                           | ((0x2000000U 
                                                               & (vlSelf->operand_a_i 
                                                                  << 0x13U)) 
                                                              | ((0x1000000U 
                                                                  & (vlSelf->operand_a_i 
                                                                     << 0x11U)) 
                                                                 | ((0x800000U 
                                                                     & (vlSelf->operand_a_i 
                                                                        << 0xfU)) 
                                                                    | ((0x400000U 
                                                                        & (vlSelf->operand_a_i 
                                                                           << 0xdU)) 
                                                                       | ((0x200000U 
                                                                           & (vlSelf->operand_a_i 
                                                                              << 0xbU)) 
                                                                          | ((0x100000U 
                                                                              & (vlSelf->operand_a_i 
                                                                                << 9U)) 
                                                                             | ((0x80000U 
                                                                                & (vlSelf->operand_a_i 
                                                                                << 7U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->operand_a_i 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->operand_a_i 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->operand_a_i 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->operand_a_i 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->operand_a_i 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->cve2_alu__DOT__bwlogic_operand_b = ((IData)(vlSelf->cve2_alu__DOT__bwlogic_op_b_negate)
                                                 ? 
                                                (~ vlSelf->operand_b_i)
                                                 : vlSelf->operand_b_i);
    if ((1U & ((IData)(vlSelf->cve2_alu__DOT__bfp_len) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_len)))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bfp_len = 
            ((0x1eU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_len)) 
             | (1U & (IData)(vlSelf->cve2_alu__DOT__bfp_len)));
    }
    if ((2U & ((IData)(vlSelf->cve2_alu__DOT__bfp_len) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_len)))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bfp_len = 
            ((0x1dU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_len)) 
             | (2U & (IData)(vlSelf->cve2_alu__DOT__bfp_len)));
    }
    if ((4U & ((IData)(vlSelf->cve2_alu__DOT__bfp_len) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_len)))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bfp_len = 
            ((0x1bU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_len)) 
             | (4U & (IData)(vlSelf->cve2_alu__DOT__bfp_len)));
    }
    if ((8U & ((IData)(vlSelf->cve2_alu__DOT__bfp_len) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_len)))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bfp_len = 
            ((0x17U & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_len)) 
             | (8U & (IData)(vlSelf->cve2_alu__DOT__bfp_len)));
    }
    if ((0x10U & ((IData)(vlSelf->cve2_alu__DOT__bfp_len) 
                  ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_len)))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bfp_len = 
            ((0xfU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bfp_len)) 
             | (0x10U & (IData)(vlSelf->cve2_alu__DOT__bfp_len)));
    }
    if (((IData)(vlSelf->cve2_alu__DOT__cmp_signed) 
         ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__cmp_signed))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__cmp_signed 
            = vlSelf->cve2_alu__DOT__cmp_signed;
    }
    if (((IData)(vlSelf->cve2_alu__DOT__bwlogic_and) 
         ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and 
            = vlSelf->cve2_alu__DOT__bwlogic_and;
    }
    if ((1U & (~ (IData)(vlSelf->cve2_alu__DOT__bwlogic_or)))) {
        if ((1U & (~ (IData)(vlSelf->cve2_alu__DOT__bwlogic_and)))) {
            vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->cve2_alu__DOT__bwlogic_and) {
            vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->multdiv_sel_i) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT__adder_in_a = vlSelf->multdiv_operand_a_i;
    } else {
        vlSelf->cve2_alu__DOT__adder_in_a = (1ULL | 
                                             ((QData)((IData)(vlSelf->operand_a_i)) 
                                              << 1U));
    }
    if (vlSelf->cve2_alu__DOT__bwlogic_or) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
    }
    if (((vlSelf->operand_a_i ^ vlSelf->operand_b_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x40U & (IData)(vlSelf->operator_i))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->operator_i) >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->operator_i) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->operator_i) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->operator_i))) {
                        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->operator_i))) {
                            vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->operator_i))) {
                                vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->operator_i))) {
                    vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x10U & (IData)(vlSelf->operator_i))) {
                vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x20U & (IData)(vlSelf->operator_i))) {
            vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->cve2_alu__DOT__bwlogic_and) 
                                << 1U) | (IData)(vlSelf->cve2_alu__DOT__bwlogic_or)))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: cve2_alu.v:403: Assertion failed in %Ncve2_alu: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("verilog/cve2_alu.v", 403, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->multdiv_sel_i)))) {
        if ((1U & (~ (IData)(vlSelf->cve2_alu__DOT__adder_op_b_negate)))) {
            vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->cve2_alu__DOT__adder_op_b_negate) {
            vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->cve2_alu__DOT__bwlogic_or) 
         ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or 
            = vlSelf->cve2_alu__DOT__bwlogic_or;
    }
    if (((IData)(vlSelf->cve2_alu__DOT__shift_left) 
         ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_left))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_left 
            = vlSelf->cve2_alu__DOT__shift_left;
    }
    if ((1U & ((IData)(vlSelf->cve2_alu__DOT__shift_amt) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt 
            = ((0x3eU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)) 
               | (1U & (IData)(vlSelf->cve2_alu__DOT__shift_amt)));
    }
    if ((2U & ((IData)(vlSelf->cve2_alu__DOT__shift_amt) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt 
            = ((0x3dU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)) 
               | (2U & (IData)(vlSelf->cve2_alu__DOT__shift_amt)));
    }
    if ((4U & ((IData)(vlSelf->cve2_alu__DOT__shift_amt) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt 
            = ((0x3bU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)) 
               | (4U & (IData)(vlSelf->cve2_alu__DOT__shift_amt)));
    }
    if ((8U & ((IData)(vlSelf->cve2_alu__DOT__shift_amt) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt 
            = ((0x37U & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)) 
               | (8U & (IData)(vlSelf->cve2_alu__DOT__shift_amt)));
    }
    if ((0x10U & ((IData)(vlSelf->cve2_alu__DOT__shift_amt) 
                  ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt 
            = ((0x2fU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)) 
               | (0x10U & (IData)(vlSelf->cve2_alu__DOT__shift_amt)));
    }
    if ((0x20U & ((IData)(vlSelf->cve2_alu__DOT__shift_amt) 
                  ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_amt 
            = ((0x1fU & (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_amt)) 
               | (0x20U & (IData)(vlSelf->cve2_alu__DOT__shift_amt)));
    }
    if ((1U & ((IData)(vlSelf->cve2_alu__DOT__adder_in_a) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a)))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffffffeULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | (IData)((IData)((1U & (IData)(vlSelf->cve2_alu__DOT__adder_in_a)))));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 1U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffffffdULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 2U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffffffbULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 3U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffffff7ULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 4U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffffffefULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 5U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffffffdfULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 6U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffffffbfULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 7U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffffff7fULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 8U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffffeffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 9U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffffdffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0xaU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffffbffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0xbU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffff7ffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0xcU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffffefffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0xdU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffffdfffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0xeU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffffbfffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0xfU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffff7fffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x10U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffeffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x11U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffdffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x12U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fffbffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x13U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fff7ffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x14U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffefffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x15U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffdfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x16U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ffbfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x17U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1ff7fffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x18U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1feffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x19U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fdffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x1aU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1fbffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x1bU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1f7ffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x1cU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1efffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x1dU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1dfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x1eU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x1bfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                        >> 0x1fU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0x17fffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->cve2_alu__DOT__adder_in_a 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a 
            = ((0xffffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_a 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->cve2_alu__DOT__adder_op_b_negate) 
                                << 1U) | (IData)(vlSelf->multdiv_sel_i)))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: cve2_alu.v:108: Assertion failed in %Ncve2_alu: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("verilog/cve2_alu.v", 108, "");
        }
    }
    vlSelf->cve2_alu__DOT__adder_in_b = (0x1ffffffffULL 
                                         & ((IData)(vlSelf->multdiv_sel_i)
                                             ? vlSelf->multdiv_operand_b_i
                                             : ((IData)(vlSelf->cve2_alu__DOT__adder_op_b_negate)
                                                 ? 
                                                (~ 
                                                 ((QData)((IData)(vlSelf->operand_b_i)) 
                                                  << 1U))
                                                 : 
                                                ((QData)((IData)(vlSelf->operand_b_i)) 
                                                 << 1U))));
    if (((IData)(vlSelf->cve2_alu__DOT__adder_op_b_negate) 
         ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__adder_op_b_negate))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_op_b_negate 
            = vlSelf->cve2_alu__DOT__adder_op_b_negate;
    }
    if ((1U & (vlSelf->cve2_alu__DOT__operand_a_rev 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (1U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((2U & (vlSelf->cve2_alu__DOT__operand_a_rev 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (2U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((4U & (vlSelf->cve2_alu__DOT__operand_a_rev 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (4U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((8U & (vlSelf->cve2_alu__DOT__operand_a_rev 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (8U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x10U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x10U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x20U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x20U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x40U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x40U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x80U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x80U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x100U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x100U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x200U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x200U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x400U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x400U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x800U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x800U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x1000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x1000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x2000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x2000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x4000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x4000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x8000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x8000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x10000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x10000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x20000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x20000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x40000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x40000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x80000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x80000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x100000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x100000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x200000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x200000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x400000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x400000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x800000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x800000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x1000000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x1000000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x2000000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x2000000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x4000000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x4000000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x8000000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x8000000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x10000000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x10000000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x20000000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x20000000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if ((0x40000000U & (vlSelf->cve2_alu__DOT__operand_a_rev 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x40000000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    if (((vlSelf->cve2_alu__DOT__operand_a_rev ^ vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__operand_a_rev) 
               | (0x80000000U & vlSelf->cve2_alu__DOT__operand_a_rev));
    }
    vlSelf->cve2_alu__DOT__shift_operand = ((IData)(vlSelf->cve2_alu__DOT__shift_left)
                                             ? vlSelf->cve2_alu__DOT__operand_a_rev
                                             : vlSelf->operand_a_i);
    vlSelf->cve2_alu__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlSelf->operator_i)) 
                                                              & (vlSelf->cve2_alu__DOT__shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->cve2_alu__DOT__shift_operand))), 
                                           (0x1fU & (IData)(vlSelf->cve2_alu__DOT__shift_amt))));
    vlSelf->cve2_alu__DOT__shift_result_ext = vlSelf->cve2_alu__DOT__shift_result_ext_signed;
    vlSelf->cve2_alu__DOT__shift_result = (IData)(vlSelf->cve2_alu__DOT__shift_result_ext);
    vlSelf->cve2_alu__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                         >> 0x20U)));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0xfffffff8U 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((4U 
                                                   & (vlSelf->cve2_alu__DOT__shift_result 
                                                      >> 0x1bU)) 
                                                  | ((2U 
                                                      & (vlSelf->cve2_alu__DOT__shift_result 
                                                         >> 0x1dU)) 
                                                     | (vlSelf->cve2_alu__DOT__shift_result 
                                                        >> 0x1fU))));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0xffffffc7U 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((0x20U 
                                                   & (vlSelf->cve2_alu__DOT__shift_result 
                                                      >> 0x15U)) 
                                                  | ((0x10U 
                                                      & (vlSelf->cve2_alu__DOT__shift_result 
                                                         >> 0x17U)) 
                                                     | (8U 
                                                        & (vlSelf->cve2_alu__DOT__shift_result 
                                                           >> 0x19U)))));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0xfffffe3fU 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((0x100U 
                                                   & (vlSelf->cve2_alu__DOT__shift_result 
                                                      >> 0xfU)) 
                                                  | ((0x80U 
                                                      & (vlSelf->cve2_alu__DOT__shift_result 
                                                         >> 0x11U)) 
                                                     | (0x40U 
                                                        & (vlSelf->cve2_alu__DOT__shift_result 
                                                           >> 0x13U)))));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0xfffff1ffU 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((0x800U 
                                                   & (vlSelf->cve2_alu__DOT__shift_result 
                                                      >> 9U)) 
                                                  | ((0x400U 
                                                      & (vlSelf->cve2_alu__DOT__shift_result 
                                                         >> 0xbU)) 
                                                     | (0x200U 
                                                        & (vlSelf->cve2_alu__DOT__shift_result 
                                                           >> 0xdU)))));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0xffff8fffU 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((0x4000U 
                                                   & (vlSelf->cve2_alu__DOT__shift_result 
                                                      >> 3U)) 
                                                  | ((0x2000U 
                                                      & (vlSelf->cve2_alu__DOT__shift_result 
                                                         >> 5U)) 
                                                     | (0x1000U 
                                                        & (vlSelf->cve2_alu__DOT__shift_result 
                                                           >> 7U)))));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0xfffc7fffU 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((0x20000U 
                                                   & (vlSelf->cve2_alu__DOT__shift_result 
                                                      << 3U)) 
                                                  | ((0x10000U 
                                                      & (vlSelf->cve2_alu__DOT__shift_result 
                                                         << 1U)) 
                                                     | (0x8000U 
                                                        & (vlSelf->cve2_alu__DOT__shift_result 
                                                           >> 1U)))));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0xffe3ffffU 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((0x100000U 
                                                   & (vlSelf->cve2_alu__DOT__shift_result 
                                                      << 9U)) 
                                                  | ((0x80000U 
                                                      & (vlSelf->cve2_alu__DOT__shift_result 
                                                         << 7U)) 
                                                     | (0x40000U 
                                                        & (vlSelf->cve2_alu__DOT__shift_result 
                                                           << 5U)))));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0xff1fffffU 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((0x800000U 
                                                   & (vlSelf->cve2_alu__DOT__shift_result 
                                                      << 0xfU)) 
                                                  | ((0x400000U 
                                                      & (vlSelf->cve2_alu__DOT__shift_result 
                                                         << 0xdU)) 
                                                     | (0x200000U 
                                                        & (vlSelf->cve2_alu__DOT__shift_result 
                                                           << 0xbU)))));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0xf8ffffffU 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((0x4000000U 
                                                   & (vlSelf->cve2_alu__DOT__shift_result 
                                                      << 0x15U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->cve2_alu__DOT__shift_result 
                                                         << 0x13U)) 
                                                     | (0x1000000U 
                                                        & (vlSelf->cve2_alu__DOT__shift_result 
                                                           << 0x11U)))));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0xc7ffffffU 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((0x20000000U 
                                                   & (vlSelf->cve2_alu__DOT__shift_result 
                                                      << 0x1bU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->cve2_alu__DOT__shift_result 
                                                         << 0x19U)) 
                                                     | (0x8000000U 
                                                        & (vlSelf->cve2_alu__DOT__shift_result 
                                                           << 0x17U)))));
    vlSelf->cve2_alu__DOT__shift_result_rev = ((0x3fffffffU 
                                                & vlSelf->cve2_alu__DOT__shift_result_rev) 
                                               | ((vlSelf->cve2_alu__DOT__shift_result 
                                                   << 0x1fU) 
                                                  | (0x40000000U 
                                                     & (vlSelf->cve2_alu__DOT__shift_result 
                                                        << 0x1dU))));
    vlSelf->cve2_alu__DOT__shift_result = ((IData)(vlSelf->cve2_alu__DOT__shift_left)
                                            ? vlSelf->cve2_alu__DOT__shift_result_rev
                                            : vlSelf->cve2_alu__DOT__shift_result);
    if ((1U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (1U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((2U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (2U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((4U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (4U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((8U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (8U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x10U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x10U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x20U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x20U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x40U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x40U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x80U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x80U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x100U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x100U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x200U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x200U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x400U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x400U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x800U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x800U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x1000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x1000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x2000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x2000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x4000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x4000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x8000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x8000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x10000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x10000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x20000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x20000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x40000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x40000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x80000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x80000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x100000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x100000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x200000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x200000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x400000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x400000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x800000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x800000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x1000000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x1000000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x2000000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x2000000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x4000000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x4000000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x8000000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x8000000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x10000000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x10000000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x20000000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x20000000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if ((0x40000000U & (vlSelf->cve2_alu__DOT__bwlogic_operand_b 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x40000000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    if (((vlSelf->cve2_alu__DOT__bwlogic_operand_b 
          ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_operand_b) 
               | (0x80000000U & vlSelf->cve2_alu__DOT__bwlogic_operand_b));
    }
    vlSelf->cve2_alu__DOT__bwlogic_or_result = (vlSelf->operand_a_i 
                                                | vlSelf->cve2_alu__DOT__bwlogic_operand_b);
    vlSelf->cve2_alu__DOT__bwlogic_and_result = (vlSelf->operand_a_i 
                                                 & vlSelf->cve2_alu__DOT__bwlogic_operand_b);
    vlSelf->cve2_alu__DOT__bwlogic_xor_result = (vlSelf->operand_a_i 
                                                 ^ vlSelf->cve2_alu__DOT__bwlogic_operand_b);
    vlSelf->cve2_alu__DOT__bwlogic_result = ((IData)(vlSelf->cve2_alu__DOT__bwlogic_or)
                                              ? vlSelf->cve2_alu__DOT__bwlogic_or_result
                                              : ((IData)(vlSelf->cve2_alu__DOT__bwlogic_and)
                                                  ? vlSelf->cve2_alu__DOT__bwlogic_and_result
                                                  : vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    if ((1U & ((IData)(vlSelf->cve2_alu__DOT__adder_in_b) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b)))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffffffeULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | (IData)((IData)((1U & (IData)(vlSelf->cve2_alu__DOT__adder_in_b)))));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 1U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffffffdULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 2U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffffffbULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 3U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffffff7ULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 4U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffffffefULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 5U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffffffdfULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 6U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffffffbfULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 7U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffffff7fULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 8U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffffeffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 9U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffffdffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0xaU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffffbffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0xbU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffff7ffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0xcU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffffefffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0xdU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffffdfffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0xeU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffffbfffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0xfU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffff7fffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x10U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffeffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x11U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffdffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x12U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fffbffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x13U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fff7ffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x14U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffefffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x15U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffdfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x16U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ffbfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x17U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1ff7fffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x18U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1feffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x19U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fdffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x1aU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1fbffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x1bU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1f7ffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x1cU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1efffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x1dU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1dfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x1eU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x1bfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                        >> 0x1fU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0x17fffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->cve2_alu__DOT__adder_in_b 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b 
            = ((0xffffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_in_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__adder_in_b 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->adder_result_ext_o = (0x3ffffffffULL & 
                                  (vlSelf->cve2_alu__DOT__adder_in_a 
                                   + vlSelf->cve2_alu__DOT__adder_in_b));
    vlSelf->cve2_alu__DOT__is_greater_equal = (1U & 
                                               (((vlSelf->operand_a_i 
                                                  ^ vlSelf->operand_b_i) 
                                                 >> 0x1fU)
                                                 ? 
                                                ((vlSelf->operand_a_i 
                                                  >> 0x1fU) 
                                                 ^ (IData)(vlSelf->cve2_alu__DOT__cmp_signed))
                                                 : 
                                                (~ (IData)(
                                                           (vlSelf->adder_result_ext_o 
                                                            >> 0x20U)))));
    if (((IData)(vlSelf->cve2_alu__DOT__unused_shift_result_ext) 
         ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__unused_shift_result_ext))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__unused_shift_result_ext 
            = vlSelf->cve2_alu__DOT__unused_shift_result_ext;
    }
    if ((1U & (vlSelf->cve2_alu__DOT__shift_operand 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (1U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((2U & (vlSelf->cve2_alu__DOT__shift_operand 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (2U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((4U & (vlSelf->cve2_alu__DOT__shift_operand 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (4U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((8U & (vlSelf->cve2_alu__DOT__shift_operand 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (8U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x10U & (vlSelf->cve2_alu__DOT__shift_operand 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x10U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x20U & (vlSelf->cve2_alu__DOT__shift_operand 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x20U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x40U & (vlSelf->cve2_alu__DOT__shift_operand 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x40U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x80U & (vlSelf->cve2_alu__DOT__shift_operand 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x80U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x100U & (vlSelf->cve2_alu__DOT__shift_operand 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x100U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x200U & (vlSelf->cve2_alu__DOT__shift_operand 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x200U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x400U & (vlSelf->cve2_alu__DOT__shift_operand 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x400U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x800U & (vlSelf->cve2_alu__DOT__shift_operand 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x800U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x1000U & (vlSelf->cve2_alu__DOT__shift_operand 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x1000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x2000U & (vlSelf->cve2_alu__DOT__shift_operand 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x2000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x4000U & (vlSelf->cve2_alu__DOT__shift_operand 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x4000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x8000U & (vlSelf->cve2_alu__DOT__shift_operand 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x8000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x10000U & (vlSelf->cve2_alu__DOT__shift_operand 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x10000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x20000U & (vlSelf->cve2_alu__DOT__shift_operand 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x20000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x40000U & (vlSelf->cve2_alu__DOT__shift_operand 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x40000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x80000U & (vlSelf->cve2_alu__DOT__shift_operand 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x80000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x100000U & (vlSelf->cve2_alu__DOT__shift_operand 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x100000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x200000U & (vlSelf->cve2_alu__DOT__shift_operand 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x200000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x400000U & (vlSelf->cve2_alu__DOT__shift_operand 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x400000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x800000U & (vlSelf->cve2_alu__DOT__shift_operand 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x800000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x1000000U & (vlSelf->cve2_alu__DOT__shift_operand 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x1000000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x2000000U & (vlSelf->cve2_alu__DOT__shift_operand 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x2000000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x4000000U & (vlSelf->cve2_alu__DOT__shift_operand 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x4000000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x8000000U & (vlSelf->cve2_alu__DOT__shift_operand 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x8000000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x10000000U & (vlSelf->cve2_alu__DOT__shift_operand 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x10000000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x20000000U & (vlSelf->cve2_alu__DOT__shift_operand 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x20000000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((0x40000000U & (vlSelf->cve2_alu__DOT__shift_operand 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x40000000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if (((vlSelf->cve2_alu__DOT__shift_operand ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_operand 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_operand) 
               | (0x80000000U & vlSelf->cve2_alu__DOT__shift_operand));
    }
    if ((1U & (vlSelf->cve2_alu__DOT__shift_result_rev 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (1U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((2U & (vlSelf->cve2_alu__DOT__shift_result_rev 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (2U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((4U & (vlSelf->cve2_alu__DOT__shift_result_rev 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (4U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((8U & (vlSelf->cve2_alu__DOT__shift_result_rev 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (8U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x10U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x10U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x20U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x20U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x40U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x40U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x80U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x80U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x100U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x100U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x200U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x200U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x400U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x400U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x800U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x800U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x1000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x1000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x2000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x2000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x4000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x4000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x8000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x8000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x10000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x10000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x20000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x20000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x40000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x40000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x80000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x80000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x100000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x100000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x200000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x200000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x400000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x400000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x800000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x800000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x1000000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x1000000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x2000000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x2000000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x4000000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x4000000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x8000000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x8000000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x10000000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x10000000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x20000000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x20000000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((0x40000000U & (vlSelf->cve2_alu__DOT__shift_result_rev 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x40000000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if (((vlSelf->cve2_alu__DOT__shift_result_rev ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_rev) 
               | (0x80000000U & vlSelf->cve2_alu__DOT__shift_result_rev));
    }
    if ((1U & ((IData)(vlSelf->cve2_alu__DOT__shift_result_ext_signed) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed)))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffffffeULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | (IData)((IData)((1U & (IData)(vlSelf->cve2_alu__DOT__shift_result_ext_signed)))));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 1U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffffffdULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 2U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffffffbULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 3U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffffff7ULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 4U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffffffefULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 5U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffffffdfULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 6U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffffffbfULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 7U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffffff7fULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 8U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffffeffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 9U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffffdffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0xaU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffffbffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0xbU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffff7ffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0xcU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffffefffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0xdU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffffdfffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0xeU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffffbfffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0xfU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffff7fffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x10U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffeffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x11U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffdffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x12U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fffbffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x13U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fff7ffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x14U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffefffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x15U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffdfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x16U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ffbfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x17U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1ff7fffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x18U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1feffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x19U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fdffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x1aU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1fbffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x1bU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1f7ffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x1cU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1efffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x1dU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1dfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x1eU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x1bfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x1fU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0x17fffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                        >> 0x20U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed 
            = ((0xffffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext_signed) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext_signed 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlSelf->cve2_alu__DOT__shift_result_ext) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext)))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffffffeULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | (IData)((IData)((1U & (IData)(vlSelf->cve2_alu__DOT__shift_result_ext)))));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 1U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffffffdULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 2U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffffffbULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 3U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffffff7ULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 4U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffffffefULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 5U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffffffdfULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 6U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffffffbfULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 7U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffffff7fULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 8U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffffeffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 9U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffffdffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0xaU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffffbffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0xbU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffff7ffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0xcU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffffefffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0xdU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffffdfffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0xeU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffffbfffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0xfU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffff7fffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x10U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffeffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x11U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffdffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x12U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fffbffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x13U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fff7ffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x14U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffefffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x15U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffdfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x16U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ffbfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x17U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1ff7fffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x18U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1feffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x19U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fdffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x1aU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1fbffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x1bU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1f7ffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x1cU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1efffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x1dU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1dfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x1eU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x1bfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                        >> 0x1fU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0x17fffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->cve2_alu__DOT__shift_result_ext 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext 
            = ((0xffffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__shift_result_ext) 
               | ((QData)((IData)((1U & (IData)((vlSelf->cve2_alu__DOT__shift_result_ext 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & (vlSelf->cve2_alu__DOT__shift_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (1U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((2U & (vlSelf->cve2_alu__DOT__shift_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (2U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((4U & (vlSelf->cve2_alu__DOT__shift_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (4U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((8U & (vlSelf->cve2_alu__DOT__shift_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (8U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x10U & (vlSelf->cve2_alu__DOT__shift_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x10U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x20U & (vlSelf->cve2_alu__DOT__shift_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x20U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x40U & (vlSelf->cve2_alu__DOT__shift_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x40U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x80U & (vlSelf->cve2_alu__DOT__shift_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x80U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x100U & (vlSelf->cve2_alu__DOT__shift_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x100U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x200U & (vlSelf->cve2_alu__DOT__shift_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x200U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x400U & (vlSelf->cve2_alu__DOT__shift_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x400U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x800U & (vlSelf->cve2_alu__DOT__shift_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x800U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x1000U & (vlSelf->cve2_alu__DOT__shift_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x1000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x2000U & (vlSelf->cve2_alu__DOT__shift_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x2000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x4000U & (vlSelf->cve2_alu__DOT__shift_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x4000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x8000U & (vlSelf->cve2_alu__DOT__shift_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x8000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x10000U & (vlSelf->cve2_alu__DOT__shift_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x10000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x20000U & (vlSelf->cve2_alu__DOT__shift_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x20000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x40000U & (vlSelf->cve2_alu__DOT__shift_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x40000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x80000U & (vlSelf->cve2_alu__DOT__shift_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x80000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x100000U & (vlSelf->cve2_alu__DOT__shift_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x100000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x200000U & (vlSelf->cve2_alu__DOT__shift_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x200000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x400000U & (vlSelf->cve2_alu__DOT__shift_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x400000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x800000U & (vlSelf->cve2_alu__DOT__shift_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x800000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x1000000U & (vlSelf->cve2_alu__DOT__shift_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x1000000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x2000000U & (vlSelf->cve2_alu__DOT__shift_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x2000000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x4000000U & (vlSelf->cve2_alu__DOT__shift_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x4000000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x8000000U & (vlSelf->cve2_alu__DOT__shift_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x8000000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x10000000U & (vlSelf->cve2_alu__DOT__shift_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x10000000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x20000000U & (vlSelf->cve2_alu__DOT__shift_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x20000000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((0x40000000U & (vlSelf->cve2_alu__DOT__shift_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x40000000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if (((vlSelf->cve2_alu__DOT__shift_result ^ vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__shift_result 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__shift_result) 
               | (0x80000000U & vlSelf->cve2_alu__DOT__shift_result));
    }
    if ((1U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (1U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((2U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (2U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((4U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (4U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((8U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (8U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x10U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x10U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x20U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x20U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x40U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x40U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x80U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x80U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x100U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x100U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x200U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x200U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x400U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x400U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x800U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x800U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x1000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x1000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x2000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x2000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x4000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x4000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x8000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x8000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x10000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x10000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x20000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x20000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x40000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x40000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x80000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x80000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x100000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x100000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x200000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x200000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x400000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x400000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x800000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x800000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x1000000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x1000000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x2000000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x2000000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x4000000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x4000000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x8000000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x8000000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x10000000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x10000000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x20000000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x20000000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((0x40000000U & (vlSelf->cve2_alu__DOT__bwlogic_or_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x40000000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if (((vlSelf->cve2_alu__DOT__bwlogic_or_result 
          ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_or_result) 
               | (0x80000000U & vlSelf->cve2_alu__DOT__bwlogic_or_result));
    }
    if ((1U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (1U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((2U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (2U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((4U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (4U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((8U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (8U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x10U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x10U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x20U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x20U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x40U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x40U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x80U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x80U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x100U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x100U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x200U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x200U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x400U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x400U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x800U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x800U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x1000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x1000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x2000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x2000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x4000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x4000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x8000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x8000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x10000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x10000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x20000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x20000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x40000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x40000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x80000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x80000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x100000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x100000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x200000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x200000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x400000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x400000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x800000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x800000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x1000000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x1000000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x2000000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x2000000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x4000000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x4000000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x8000000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x8000000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x10000000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x10000000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x20000000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x20000000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((0x40000000U & (vlSelf->cve2_alu__DOT__bwlogic_and_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x40000000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if (((vlSelf->cve2_alu__DOT__bwlogic_and_result 
          ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_and_result) 
               | (0x80000000U & vlSelf->cve2_alu__DOT__bwlogic_and_result));
    }
    if ((1U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (1U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((2U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (2U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((4U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (4U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((8U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (8U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x10U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x10U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x20U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x20U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x40U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x40U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x80U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x80U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x100U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x100U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x200U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x200U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x400U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x400U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x800U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x800U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x1000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x1000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x2000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x2000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x4000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x4000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x8000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x8000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x10000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x10000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x20000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x20000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x40000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x40000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x80000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x80000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x100000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x100000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x200000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x200000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x400000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x400000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x800000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x800000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x1000000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x1000000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x2000000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x2000000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x4000000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x4000000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x8000000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x8000000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x10000000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x10000000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x20000000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x20000000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((0x40000000U & (vlSelf->cve2_alu__DOT__bwlogic_xor_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x40000000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if (((vlSelf->cve2_alu__DOT__bwlogic_xor_result 
          ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_xor_result) 
               | (0x80000000U & vlSelf->cve2_alu__DOT__bwlogic_xor_result));
    }
    if ((1U & ((IData)(vlSelf->adder_result_ext_o) 
               ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o)))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffffffeULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | (IData)((IData)((1U & (IData)(vlSelf->adder_result_ext_o)))));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 1U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffffffdULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 2U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffffffbULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 3U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffffff7ULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 4U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffffffefULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 5U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffffffdfULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 6U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffffffbfULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 7U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffffff7fULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 8U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffffeffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 9U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffffdffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0xaU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffffbffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0xbU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffff7ffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0xcU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffffefffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0xdU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffffdfffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0xeU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffffbfffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0xfU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffff7fffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x10U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffeffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x11U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffdffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x12U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fffbffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x13U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fff7ffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x14U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffefffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x15U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffdfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x16U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ffbfffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x17U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3ff7fffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x18U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3feffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x19U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fdffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x1aU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3fbffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x1bU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3f7ffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x1cU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3efffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x1dU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3dfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x1eU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x3bfffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x1fU)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x37fffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->adder_result_ext_o 
                        >> 0x20U)) ^ (IData)((vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x2ffffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((IData)(((vlSelf->adder_result_ext_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
                 >> 0x21U))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o 
            = ((0x1ffffffffULL & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_ext_o) 
               | ((QData)((IData)((1U & (IData)((vlSelf->adder_result_ext_o 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    vlSelf->adder_result_o = (IData)((vlSelf->adder_result_ext_o 
                                      >> 1U));
    if ((1U & (vlSelf->cve2_alu__DOT__bwlogic_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (1U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((2U & (vlSelf->cve2_alu__DOT__bwlogic_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (2U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((4U & (vlSelf->cve2_alu__DOT__bwlogic_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (4U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((8U & (vlSelf->cve2_alu__DOT__bwlogic_result 
               ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (8U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x10U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x10U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x20U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x20U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x40U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x40U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x80U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                  ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x80U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x100U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x100U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x200U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x200U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x400U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x400U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x800U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                   ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x800U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x1000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x1000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x2000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x2000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x4000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x4000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x8000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                    ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x8000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x10000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x10000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x20000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x20000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x40000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x40000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x80000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                     ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x80000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x100000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x100000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x200000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x200000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x400000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x400000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x800000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                      ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x800000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x1000000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x1000000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x2000000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x2000000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x4000000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x4000000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x8000000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                       ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x8000000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x10000000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x10000000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x20000000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x20000000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if ((0x40000000U & (vlSelf->cve2_alu__DOT__bwlogic_result 
                        ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x40000000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if (((vlSelf->cve2_alu__DOT__bwlogic_result ^ vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__bwlogic_result) 
               | (0x80000000U & vlSelf->cve2_alu__DOT__bwlogic_result));
    }
    if (((IData)(vlSelf->cve2_alu__DOT__is_greater_equal) 
         ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__is_greater_equal))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__is_greater_equal 
            = vlSelf->cve2_alu__DOT__is_greater_equal;
    }
    if ((1U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (1U & vlSelf->adder_result_o));
    }
    if ((2U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (2U & vlSelf->adder_result_o));
    }
    if ((4U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (4U & vlSelf->adder_result_o));
    }
    if ((8U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (8U & vlSelf->adder_result_o));
    }
    if ((0x10U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x10U & vlSelf->adder_result_o));
    }
    if ((0x20U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x20U & vlSelf->adder_result_o));
    }
    if ((0x40U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x40U & vlSelf->adder_result_o));
    }
    if ((0x80U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x80U & vlSelf->adder_result_o));
    }
    if ((0x100U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x100U & vlSelf->adder_result_o));
    }
    if ((0x200U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x200U & vlSelf->adder_result_o));
    }
    if ((0x400U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x400U & vlSelf->adder_result_o));
    }
    if ((0x800U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x800U & vlSelf->adder_result_o));
    }
    if ((0x1000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x1000U & vlSelf->adder_result_o));
    }
    if ((0x2000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x2000U & vlSelf->adder_result_o));
    }
    if ((0x4000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x4000U & vlSelf->adder_result_o));
    }
    if ((0x8000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x8000U & vlSelf->adder_result_o));
    }
    if ((0x10000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x10000U & vlSelf->adder_result_o));
    }
    if ((0x20000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x20000U & vlSelf->adder_result_o));
    }
    if ((0x40000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x40000U & vlSelf->adder_result_o));
    }
    if ((0x80000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x80000U & vlSelf->adder_result_o));
    }
    if ((0x100000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x100000U & vlSelf->adder_result_o));
    }
    if ((0x200000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x200000U & vlSelf->adder_result_o));
    }
    if ((0x400000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x400000U & vlSelf->adder_result_o));
    }
    if ((0x800000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x800000U & vlSelf->adder_result_o));
    }
    if ((0x1000000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x1000000U & vlSelf->adder_result_o));
    }
    if ((0x2000000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x2000000U & vlSelf->adder_result_o));
    }
    if ((0x4000000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x4000000U & vlSelf->adder_result_o));
    }
    if ((0x8000000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x8000000U & vlSelf->adder_result_o));
    }
    if ((0x10000000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x10000000U & vlSelf->adder_result_o));
    }
    if ((0x20000000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x20000000U & vlSelf->adder_result_o));
    }
    if ((0x40000000U & (vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x40000000U & vlSelf->adder_result_o));
    }
    if (((vlSelf->adder_result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__adder_result_o) 
               | (0x80000000U & vlSelf->adder_result_o));
    }
    vlSelf->is_equal_result_o = (0U == vlSelf->adder_result_o);
    if (((IData)(vlSelf->is_equal_result_o) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__is_equal_result_o))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__is_equal_result_o 
            = vlSelf->is_equal_result_o;
    }
    vlSelf->cve2_alu__DOT__cmp_result = (1U & ((0x40U 
                                                & (IData)(vlSelf->operator_i))
                                                ? (IData)(vlSelf->is_equal_result_o)
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->operator_i))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->operator_i))
                                                     ? (IData)(vlSelf->is_equal_result_o)
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->operator_i))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->operator_i))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->operator_i))
                                                        ? (IData)(vlSelf->is_equal_result_o)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->operator_i))
                                                         ? (IData)(vlSelf->is_equal_result_o)
                                                         : 
                                                        (~ (IData)(vlSelf->cve2_alu__DOT__is_greater_equal))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->operator_i))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->operator_i))
                                                         ? 
                                                        (~ (IData)(vlSelf->cve2_alu__DOT__is_greater_equal))
                                                         : (IData)(vlSelf->is_equal_result_o))
                                                        : (IData)(vlSelf->is_equal_result_o)))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->operator_i))
                                                       ? (IData)(vlSelf->is_equal_result_o)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->operator_i))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->operator_i))
                                                         ? (IData)(vlSelf->is_equal_result_o)
                                                         : (IData)(vlSelf->cve2_alu__DOT__is_greater_equal))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->operator_i))
                                                         ? (IData)(vlSelf->cve2_alu__DOT__is_greater_equal)
                                                         : 
                                                        (~ (IData)(vlSelf->cve2_alu__DOT__is_greater_equal)))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->operator_i))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->operator_i))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->operator_i))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->operator_i))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->operator_i))
                                                         ? 
                                                        (~ (IData)(vlSelf->cve2_alu__DOT__is_greater_equal))
                                                         : 
                                                        (~ (IData)(vlSelf->is_equal_result_o)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->operator_i))
                                                         ? (IData)(vlSelf->is_equal_result_o)
                                                         : (IData)(vlSelf->cve2_alu__DOT__is_greater_equal)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->operator_i))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->operator_i))
                                                         ? (IData)(vlSelf->cve2_alu__DOT__is_greater_equal)
                                                         : 
                                                        (~ (IData)(vlSelf->cve2_alu__DOT__is_greater_equal)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->operator_i))
                                                         ? 
                                                        (~ (IData)(vlSelf->cve2_alu__DOT__is_greater_equal))
                                                         : (IData)(vlSelf->is_equal_result_o))))
                                                      : (IData)(vlSelf->is_equal_result_o))
                                                     : (IData)(vlSelf->is_equal_result_o)))));
    if (((IData)(vlSelf->cve2_alu__DOT__cmp_result) 
         ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__cmp_result))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__cmp_result 
            = vlSelf->cve2_alu__DOT__cmp_result;
    }
    vlSelf->comparison_result_o = vlSelf->cve2_alu__DOT__cmp_result;
    vlSelf->result_o = 0U;
    if ((0x40U & (IData)(vlSelf->operator_i))) {
        if ((1U & (~ ((IData)(vlSelf->operator_i) >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->operator_i) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->operator_i) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->operator_i) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->operator_i)))) {
                                vlSelf->result_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->result_o = ((0x20U & (IData)(vlSelf->operator_i))
                             ? ((0x10U & (IData)(vlSelf->operator_i))
                                 ? 0U : ((8U & (IData)(vlSelf->operator_i))
                                          ? ((4U & (IData)(vlSelf->operator_i))
                                              ? ((2U 
                                                  & (IData)(vlSelf->operator_i))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->operator_i))
                                                   ? 0U
                                                   : (IData)(vlSelf->cve2_alu__DOT__cmp_result)))
                                              : ((2U 
                                                  & (IData)(vlSelf->operator_i))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->operator_i))
                                                   ? (IData)(vlSelf->cve2_alu__DOT__cmp_result)
                                                   : 0U)
                                                  : 0U))
                                          : 0U)) : 
                            ((0x10U & (IData)(vlSelf->operator_i))
                              ? ((8U & (IData)(vlSelf->operator_i))
                                  ? ((4U & (IData)(vlSelf->operator_i))
                                      ? ((2U & (IData)(vlSelf->operator_i))
                                          ? ((1U & (IData)(vlSelf->operator_i))
                                              ? 0U : (IData)(vlSelf->cve2_alu__DOT__cmp_result))
                                          : (IData)(vlSelf->cve2_alu__DOT__cmp_result))
                                      : ((2U & (IData)(vlSelf->operator_i))
                                          ? (IData)(vlSelf->cve2_alu__DOT__cmp_result)
                                          : ((1U & (IData)(vlSelf->operator_i))
                                              ? (IData)(vlSelf->cve2_alu__DOT__cmp_result)
                                              : vlSelf->adder_result_o)))
                                  : ((4U & (IData)(vlSelf->operator_i))
                                      ? ((2U & (IData)(vlSelf->operator_i))
                                          ? vlSelf->adder_result_o
                                          : 0U) : 0U))
                              : ((8U & (IData)(vlSelf->operator_i))
                                  ? ((4U & (IData)(vlSelf->operator_i))
                                      ? ((2U & (IData)(vlSelf->operator_i))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->operator_i))
                                                   ? 0U
                                                   : vlSelf->cve2_alu__DOT__shift_result))
                                      : vlSelf->cve2_alu__DOT__shift_result)
                                  : ((4U & (IData)(vlSelf->operator_i))
                                      ? vlSelf->cve2_alu__DOT__bwlogic_result
                                      : ((2U & (IData)(vlSelf->operator_i))
                                          ? vlSelf->cve2_alu__DOT__bwlogic_result
                                          : vlSelf->adder_result_o)))));
    }
    if (((IData)(vlSelf->comparison_result_o) ^ (IData)(vlSelf->cve2_alu__DOT____Vtogcov__comparison_result_o))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__comparison_result_o 
            = vlSelf->comparison_result_o;
    }
    if ((1U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffffffeU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (1U & vlSelf->result_o));
    }
    if ((2U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffffffdU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (2U & vlSelf->result_o));
    }
    if ((4U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffffffbU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (4U & vlSelf->result_o));
    }
    if ((8U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffffff7U & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (8U & vlSelf->result_o));
    }
    if ((0x10U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffffffefU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x10U & vlSelf->result_o));
    }
    if ((0x20U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffffffdfU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x20U & vlSelf->result_o));
    }
    if ((0x40U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffffffbfU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x40U & vlSelf->result_o));
    }
    if ((0x80U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffffff7fU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x80U & vlSelf->result_o));
    }
    if ((0x100U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffffeffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x100U & vlSelf->result_o));
    }
    if ((0x200U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffffdffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x200U & vlSelf->result_o));
    }
    if ((0x400U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffffbffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x400U & vlSelf->result_o));
    }
    if ((0x800U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffff7ffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x800U & vlSelf->result_o));
    }
    if ((0x1000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffffefffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x1000U & vlSelf->result_o));
    }
    if ((0x2000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffffdfffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x2000U & vlSelf->result_o));
    }
    if ((0x4000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffffbfffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x4000U & vlSelf->result_o));
    }
    if ((0x8000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffff7fffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x8000U & vlSelf->result_o));
    }
    if ((0x10000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffeffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x10000U & vlSelf->result_o));
    }
    if ((0x20000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffdffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x20000U & vlSelf->result_o));
    }
    if ((0x40000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfffbffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x40000U & vlSelf->result_o));
    }
    if ((0x80000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfff7ffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x80000U & vlSelf->result_o));
    }
    if ((0x100000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffefffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x100000U & vlSelf->result_o));
    }
    if ((0x200000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffdfffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x200000U & vlSelf->result_o));
    }
    if ((0x400000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xffbfffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x400000U & vlSelf->result_o));
    }
    if ((0x800000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xff7fffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x800000U & vlSelf->result_o));
    }
    if ((0x1000000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfeffffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x1000000U & vlSelf->result_o));
    }
    if ((0x2000000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfdffffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x2000000U & vlSelf->result_o));
    }
    if ((0x4000000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xfbffffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x4000000U & vlSelf->result_o));
    }
    if ((0x8000000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xf7ffffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x8000000U & vlSelf->result_o));
    }
    if ((0x10000000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xefffffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x10000000U & vlSelf->result_o));
    }
    if ((0x20000000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xdfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x20000000U & vlSelf->result_o));
    }
    if ((0x40000000U & (vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0xbfffffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x40000000U & vlSelf->result_o));
    }
    if (((vlSelf->result_o ^ vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->cve2_alu__DOT____Vtogcov__result_o 
            = ((0x7fffffffU & vlSelf->cve2_alu__DOT____Vtogcov__result_o) 
               | (0x80000000U & vlSelf->result_o));
    }
}
