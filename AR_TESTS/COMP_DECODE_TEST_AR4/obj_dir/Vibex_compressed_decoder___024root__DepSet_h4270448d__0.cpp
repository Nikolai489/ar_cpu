// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_compressed_decoder.h for the primary calling header

#include "verilated.h"

#include "Vibex_compressed_decoder__Syms.h"
#include "Vibex_compressed_decoder__Syms.h"
#include "Vibex_compressed_decoder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_compressed_decoder___024root___dump_triggers__ico(Vibex_compressed_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vibex_compressed_decoder___024root___eval_triggers__ico(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_compressed_decoder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vibex_compressed_decoder___024root___ico_sequent__TOP__0(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (vlSelf->instr_i >> 1U)))) {
        if ((1U & vlSelf->instr_i)) {
            if ((0x8000U & vlSelf->instr_i)) {
                if ((1U & (~ (vlSelf->instr_i >> 0xeU)))) {
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        if ((0x800U & vlSelf->instr_i)) {
                            if ((0x400U & vlSelf->instr_i)) {
                                if ((0x1000U & vlSelf->instr_i)) {
                                    vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (vlSelf->instr_i 
                                              >> 0xcU)))) {
                                    if ((0x40U & vlSelf->instr_i)) {
                                        if ((0x20U 
                                             & vlSelf->instr_i)) {
                                            vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr_i 
                                                    >> 5U)))) {
                                            vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->instr_i 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & vlSelf->instr_i)) {
                                            vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr_i 
                                                    >> 5U)))) {
                                            vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                }
                                vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (vlSelf->instr_i 
                                          >> 0xaU)))) {
                                vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ (vlSelf->instr_i 
                                      >> 0xbU)))) {
                            if ((0x1000U & vlSelf->instr_i)) {
                                vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (vlSelf->instr_i 
                                          >> 0xcU)))) {
                                vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
                            }
                            vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x2000U & vlSelf->instr_i)) {
                        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x4000U & vlSelf->instr_i)) {
                    vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ (vlSelf->instr_i >> 0xfU)))) {
                if ((0x4000U & vlSelf->instr_i)) {
                    if ((0x2000U & vlSelf->instr_i)) {
                        if ((2U == (0x1fU & (vlSelf->instr_i 
                                             >> 7U)))) {
                            vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U != (0x1fU & (vlSelf->instr_i 
                                             >> 7U)))) {
                            vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0U == ((0x20U & (vlSelf->instr_i 
                                              >> 7U)) 
                                    | (0x1fU & (vlSelf->instr_i 
                                                >> 2U))))) {
                            vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0U != ((0x20U & (vlSelf->instr_i 
                                              >> 7U)) 
                                    | (0x1fU & (vlSelf->instr_i 
                                                >> 2U))))) {
                            vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (vlSelf->instr_i >> 0xeU)))) {
                    if ((0x2000U & vlSelf->instr_i)) {
                        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ vlSelf->instr_i))) {
            if ((1U & (~ (vlSelf->instr_i >> 0xfU)))) {
                if ((1U & (~ (vlSelf->instr_i >> 0xeU)))) {
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
                        if ((0U != (0xffU & (vlSelf->instr_i 
                                             >> 5U)))) {
                            vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0U == (0xffU & (vlSelf->instr_i 
                                             >> 5U)))) {
                            vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2000U & vlSelf->instr_i)) {
                        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x4000U & vlSelf->instr_i)) {
                    if ((0x2000U & vlSelf->instr_i)) {
                        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((0x8000U & vlSelf->instr_i)) {
                if ((0x4000U & vlSelf->instr_i)) {
                    if ((0x2000U & vlSelf->instr_i)) {
                        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (vlSelf->instr_i >> 0xeU)))) {
                    vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
                }
            }
            vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__clk_i))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__clk_i 
            = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__rst_ni))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__rst_ni 
            = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->valid_i) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__valid_i))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__valid_i 
            = vlSelf->valid_i;
    }
    vlSelf->illegal_instr_o = 0U;
    vlSelf->is_compressed_o = (3U != (3U & vlSelf->instr_i));
    if ((1U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xfffeU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (1U & (IData)(vlSelf->enum_dpi)));
    }
    if ((2U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xfffdU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (2U & (IData)(vlSelf->enum_dpi)));
    }
    if ((4U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xfffbU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (4U & (IData)(vlSelf->enum_dpi)));
    }
    if ((8U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xfff7U & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (8U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x10U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xffefU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x10U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x20U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xffdfU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x20U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x40U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xffbfU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x40U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x80U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xff7fU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x80U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x100U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xfeffU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x100U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x200U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xfdffU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x200U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x400U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xfbffU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x400U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x800U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xf7ffU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x800U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x1000U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xefffU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x1000U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x2000U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xdfffU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x2000U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x4000U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0xbfffU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x4000U & (IData)(vlSelf->enum_dpi)));
    }
    if ((0x8000U & ((IData)(vlSelf->enum_dpi) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi 
            = ((0x7fffU & (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi)) 
               | (0x8000U & (IData)(vlSelf->enum_dpi)));
    }
    if ((1U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffffffeU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (1U & vlSelf->instr_i));
    }
    if ((2U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffffffdU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (2U & vlSelf->instr_i));
    }
    if ((4U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffffffbU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (4U & vlSelf->instr_i));
    }
    if ((8U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffffff7U & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (8U & vlSelf->instr_i));
    }
    if ((0x10U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffffffefU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x10U & vlSelf->instr_i));
    }
    if ((0x20U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffffffdfU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x20U & vlSelf->instr_i));
    }
    if ((0x40U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffffffbfU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x40U & vlSelf->instr_i));
    }
    if ((0x80U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffffff7fU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x80U & vlSelf->instr_i));
    }
    if ((0x100U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffffeffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x100U & vlSelf->instr_i));
    }
    if ((0x200U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffffdffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x200U & vlSelf->instr_i));
    }
    if ((0x400U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffffbffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x400U & vlSelf->instr_i));
    }
    if ((0x800U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffff7ffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x800U & vlSelf->instr_i));
    }
    if ((0x1000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffffefffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x1000U & vlSelf->instr_i));
    }
    if ((0x2000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffffdfffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x2000U & vlSelf->instr_i));
    }
    if ((0x4000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffffbfffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x4000U & vlSelf->instr_i));
    }
    if ((0x8000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffff7fffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x8000U & vlSelf->instr_i));
    }
    if ((0x10000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffeffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x10000U & vlSelf->instr_i));
    }
    if ((0x20000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffdffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x20000U & vlSelf->instr_i));
    }
    if ((0x40000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfffbffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x40000U & vlSelf->instr_i));
    }
    if ((0x80000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfff7ffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x80000U & vlSelf->instr_i));
    }
    if ((0x100000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffefffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x100000U & vlSelf->instr_i));
    }
    if ((0x200000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffdfffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x200000U & vlSelf->instr_i));
    }
    if ((0x400000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xffbfffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x400000U & vlSelf->instr_i));
    }
    if ((0x800000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xff7fffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x800000U & vlSelf->instr_i));
    }
    if ((0x1000000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfeffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x1000000U & vlSelf->instr_i));
    }
    if ((0x2000000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfdffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x2000000U & vlSelf->instr_i));
    }
    if ((0x4000000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xfbffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x4000000U & vlSelf->instr_i));
    }
    if ((0x8000000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xf7ffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x8000000U & vlSelf->instr_i));
    }
    if ((0x10000000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xefffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x10000000U & vlSelf->instr_i));
    }
    if ((0x20000000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xdfffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x20000000U & vlSelf->instr_i));
    }
    if ((0x40000000U & (vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0xbfffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x40000000U & vlSelf->instr_i));
    }
    if (((vlSelf->instr_i ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i 
            = ((0x7fffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i) 
               | (0x80000000U & vlSelf->instr_i));
    }
    vlSelf->ibex_compressed_decoder__DOT__unused_signals 
        = (((IData)(vlSelf->enum_dpi) << 1U) | (IData)(vlSelf->valid_i));
    vlSelf->instr_o = vlSelf->instr_i;
    if ((2U & vlSelf->instr_i)) {
        if ((1U & (~ vlSelf->instr_i))) {
            if ((1U & (~ (vlSelf->instr_i >> 0xfU)))) {
                if ((1U & (~ (vlSelf->instr_i >> 0xeU)))) {
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
                        if ((1U & (~ (vlSelf->instr_i 
                                      >> 0xcU)))) {
                            vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x1000U & vlSelf->instr_i)) {
                            vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2000U & vlSelf->instr_i)) {
                        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x4000U & vlSelf->instr_i)) {
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
                        if ((0U != (0x1fU & (vlSelf->instr_i 
                                             >> 7U)))) {
                            vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0U == (0x1fU & (vlSelf->instr_i 
                                             >> 7U)))) {
                            vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x2000U & vlSelf->instr_i)) {
                        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((0x8000U & vlSelf->instr_i)) {
                if ((1U & (~ (vlSelf->instr_i >> 0xeU)))) {
                    if ((0x2000U & vlSelf->instr_i)) {
                        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
                        if ((1U & (~ (vlSelf->instr_i 
                                      >> 0xcU)))) {
                            vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
                            if ((0U == (0x1fU & (vlSelf->instr_i 
                                                 >> 2U)))) {
                                vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
                                if ((0U != (0x1fU & 
                                            (vlSelf->instr_i 
                                             >> 7U)))) {
                                    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0U == (0x1fU & 
                                            (vlSelf->instr_i 
                                             >> 7U)))) {
                                    vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0U != (0x1fU & (vlSelf->instr_i 
                                                 >> 2U)))) {
                                vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x1000U & vlSelf->instr_i)) {
                            if ((0U != (0x1fU & (vlSelf->instr_i 
                                                 >> 2U)))) {
                                vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0U == (0x1fU & (vlSelf->instr_i 
                                                 >> 2U)))) {
                                if ((0U == (0x1fU & 
                                            (vlSelf->instr_i 
                                             >> 7U)))) {
                                    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0U != (0x1fU & 
                                            (vlSelf->instr_i 
                                             >> 7U)))) {
                                    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
                                }
                                vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
                            }
                            vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((0x4000U & vlSelf->instr_i)) {
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->instr_o = (0x12023U 
                                           | ((0xc000000U 
                                               & (vlSelf->instr_i 
                                                  << 0x13U)) 
                                              | ((0x2000000U 
                                                  & (vlSelf->instr_i 
                                                     << 0xdU)) 
                                                 | ((0x1f00000U 
                                                     & (vlSelf->instr_i 
                                                        << 0x12U)) 
                                                    | (0xe00U 
                                                       & vlSelf->instr_i)))));
                    }
                    if ((0x2000U & vlSelf->instr_i)) {
                        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->illegal_instr_o = 1U;
                    }
                } else {
                    if ((0x2000U & vlSelf->instr_i)) {
                        vlSelf->illegal_instr_o = 1U;
                    } else if ((1U & (~ (vlSelf->instr_i 
                                         >> 0xcU)))) {
                        if ((0U == (0x1fU & (vlSelf->instr_i 
                                             >> 2U)))) {
                            if ((0U == (0x1fU & (vlSelf->instr_i 
                                                 >> 7U)))) {
                                vlSelf->illegal_instr_o = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                        vlSelf->instr_o = ((0x1000U 
                                            & vlSelf->instr_i)
                                            ? ((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->instr_i 
                                                    >> 2U)))
                                                ? (0x33U 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->instr_i 
                                                          << 0x12U)) 
                                                      | ((0xf8000U 
                                                          & (vlSelf->instr_i 
                                                             << 8U)) 
                                                         | (0xf80U 
                                                            & vlSelf->instr_i))))
                                                : (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->instr_i 
                                                        >> 7U)))
                                                    ? 0x100073U
                                                    : 
                                                   (0xe7U 
                                                    | (0xf8000U 
                                                       & (vlSelf->instr_i 
                                                          << 8U)))))
                                            : ((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->instr_i 
                                                    >> 2U)))
                                                ? (0x33U 
                                                   | ((0x1f00000U 
                                                       & (vlSelf->instr_i 
                                                          << 0x12U)) 
                                                      | (0xf80U 
                                                         & vlSelf->instr_i)))
                                                : (0x67U 
                                                   | (0xf8000U 
                                                      & (vlSelf->instr_i 
                                                         << 8U)))));
                    }
                }
            } else if ((0x4000U & vlSelf->instr_i)) {
                if ((0x2000U & vlSelf->instr_i)) {
                    vlSelf->illegal_instr_o = 1U;
                } else if ((0U == (0x1fU & (vlSelf->instr_i 
                                            >> 7U)))) {
                    vlSelf->illegal_instr_o = 1U;
                }
                if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                    vlSelf->instr_o = (0x12003U | (
                                                   (0xc000000U 
                                                    & (vlSelf->instr_i 
                                                       << 0x18U)) 
                                                   | ((0x2000000U 
                                                       & (vlSelf->instr_i 
                                                          << 0xdU)) 
                                                      | ((0x1c00000U 
                                                          & (vlSelf->instr_i 
                                                             << 0x12U)) 
                                                         | (0xf80U 
                                                            & vlSelf->instr_i)))));
                }
            } else {
                if ((0x2000U & vlSelf->instr_i)) {
                    vlSelf->illegal_instr_o = 1U;
                } else if ((0x1000U & vlSelf->instr_i)) {
                    vlSelf->illegal_instr_o = 1U;
                }
                if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                    vlSelf->instr_o = (0x1013U | ((0x1f00000U 
                                                   & (vlSelf->instr_i 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->instr_i 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & vlSelf->instr_i))));
                }
            }
            vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & vlSelf->instr_i)) {
            vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        }
    } else if ((1U & vlSelf->instr_i)) {
        if ((0x8000U & vlSelf->instr_i)) {
            if ((1U & (~ (vlSelf->instr_i >> 0xeU)))) {
                if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                    if ((0x800U & vlSelf->instr_i)) {
                        if ((0x400U & vlSelf->instr_i)) {
                            if ((0x1000U & vlSelf->instr_i)) {
                                vlSelf->illegal_instr_o = 1U;
                            }
                        }
                    } else if ((0x1000U & vlSelf->instr_i)) {
                        vlSelf->illegal_instr_o = 1U;
                    }
                }
            }
            if ((0x4000U & vlSelf->instr_i)) {
                vlSelf->instr_o = (0x40063U | (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->instr_i 
                                                               >> 0xcU)))) 
                                                << 0x1cU) 
                                               | ((0xc000000U 
                                                   & (vlSelf->instr_i 
                                                      << 0x15U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->instr_i 
                                                         << 0x17U)) 
                                                     | ((0x38000U 
                                                         & (vlSelf->instr_i 
                                                            << 8U)) 
                                                        | ((0x1000U 
                                                            & (vlSelf->instr_i 
                                                               >> 1U)) 
                                                           | ((0xc00U 
                                                               & vlSelf->instr_i) 
                                                              | ((0x300U 
                                                                  & (vlSelf->instr_i 
                                                                     << 5U)) 
                                                                 | (0x80U 
                                                                    & (vlSelf->instr_i 
                                                                       >> 5U))))))))));
            } else if ((0x2000U & vlSelf->instr_i)) {
                vlSelf->instr_o = (0x6fU | ((0x80000000U 
                                             & (vlSelf->instr_i 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlSelf->instr_i 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlSelf->instr_i 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->instr_i 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->instr_i 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->instr_i 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->instr_i 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlSelf->instr_i 
                                                                     << 0x12U)) 
                                                                 | ((0x1ff000U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->instr_i 
                                                                                >> 0xcU)))) 
                                                                        << 0xcU)) 
                                                                    | (0x80U 
                                                                       & ((~ 
                                                                           (vlSelf->instr_i 
                                                                            >> 0xfU)) 
                                                                          << 7U))))))))))));
            } else if ((0x800U & vlSelf->instr_i)) {
                if ((0x400U & vlSelf->instr_i)) {
                    if ((1U & (~ (vlSelf->instr_i >> 0xcU)))) {
                        vlSelf->instr_o = ((0x40U & vlSelf->instr_i)
                                            ? ((0x20U 
                                                & vlSelf->instr_i)
                                                ? (0x847433U 
                                                   | ((0x700000U 
                                                       & (vlSelf->instr_i 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlSelf->instr_i 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlSelf->instr_i))))
                                                : (0x846433U 
                                                   | ((0x700000U 
                                                       & (vlSelf->instr_i 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlSelf->instr_i 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlSelf->instr_i)))))
                                            : ((0x20U 
                                                & vlSelf->instr_i)
                                                ? (0x844433U 
                                                   | ((0x700000U 
                                                       & (vlSelf->instr_i 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlSelf->instr_i 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlSelf->instr_i))))
                                                : (0x40840433U 
                                                   | ((0x700000U 
                                                       & (vlSelf->instr_i 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlSelf->instr_i 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlSelf->instr_i))))));
                    }
                } else {
                    vlSelf->instr_o = (0x47413U | (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->instr_i 
                                                                   >> 0xcU)))) 
                                                    << 0x1aU) 
                                                   | ((0x2000000U 
                                                       & (vlSelf->instr_i 
                                                          << 0xdU)) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->instr_i 
                                                             << 0x12U)) 
                                                         | ((0x38000U 
                                                             & (vlSelf->instr_i 
                                                                << 8U)) 
                                                            | (0x380U 
                                                               & vlSelf->instr_i))))));
                }
            } else {
                vlSelf->instr_o = (0x45413U | ((0x40000000U 
                                                & (vlSelf->instr_i 
                                                   << 0x14U)) 
                                               | ((0x1f00000U 
                                                   & (vlSelf->instr_i 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlSelf->instr_i 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & vlSelf->instr_i)))));
            }
        } else if ((0x4000U & vlSelf->instr_i)) {
            if ((0x2000U & vlSelf->instr_i)) {
                if ((0U == ((0x20U & (vlSelf->instr_i 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelf->instr_i 
                                                    >> 2U))))) {
                    vlSelf->illegal_instr_o = 1U;
                }
                vlSelf->instr_o = (0x37U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->instr_i 
                                                            >> 0xcU)))) 
                                             << 0x11U) 
                                            | ((0x1f000U 
                                                & (vlSelf->instr_i 
                                                   << 0xaU)) 
                                               | (0xf80U 
                                                  & vlSelf->instr_i))));
                if ((2U == (0x1fU & (vlSelf->instr_i 
                                     >> 7U)))) {
                    vlSelf->instr_o = (0x10113U | (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->instr_i 
                                                                   >> 0xcU)))) 
                                                    << 0x1dU) 
                                                   | ((0x18000000U 
                                                       & (vlSelf->instr_i 
                                                          << 0x18U)) 
                                                      | ((0x4000000U 
                                                          & (vlSelf->instr_i 
                                                             << 0x15U)) 
                                                         | ((0x2000000U 
                                                             & (vlSelf->instr_i 
                                                                << 0x17U)) 
                                                            | (0x1000000U 
                                                               & (vlSelf->instr_i 
                                                                  << 0x12U)))))));
                }
            } else {
                vlSelf->instr_o = (0x13U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->instr_i 
                                                            >> 0xcU)))) 
                                             << 0x1aU) 
                                            | ((0x2000000U 
                                                & (vlSelf->instr_i 
                                                   << 0xdU)) 
                                               | ((0x1f00000U 
                                                   & (vlSelf->instr_i 
                                                      << 0x12U)) 
                                                  | (0xf80U 
                                                     & vlSelf->instr_i)))));
            }
        } else {
            vlSelf->instr_o = ((0x2000U & vlSelf->instr_i)
                                ? (0x6fU | ((0x80000000U 
                                             & (vlSelf->instr_i 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlSelf->instr_i 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlSelf->instr_i 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->instr_i 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->instr_i 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->instr_i 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->instr_i 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlSelf->instr_i 
                                                                     << 0x12U)) 
                                                                 | ((0x1ff000U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->instr_i 
                                                                                >> 0xcU)))) 
                                                                        << 0xcU)) 
                                                                    | (0x80U 
                                                                       & ((~ 
                                                                           (vlSelf->instr_i 
                                                                            >> 0xfU)) 
                                                                          << 7U))))))))))))
                                : (0x13U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->instr_i 
                                                            >> 0xcU)))) 
                                             << 0x1aU) 
                                            | ((0x2000000U 
                                                & (vlSelf->instr_i 
                                                   << 0xdU)) 
                                               | ((0x1f00000U 
                                                   & (vlSelf->instr_i 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->instr_i 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & vlSelf->instr_i)))))));
        }
    } else if ((0x8000U & vlSelf->instr_i)) {
        if ((0x4000U & vlSelf->instr_i)) {
            if ((0x2000U & vlSelf->instr_i)) {
                vlSelf->illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
                vlSelf->instr_o = (0x842023U | ((0x4000000U 
                                                 & (vlSelf->instr_i 
                                                    << 0x15U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->instr_i 
                                                       << 0xdU)) 
                                                   | ((0x700000U 
                                                       & (vlSelf->instr_i 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlSelf->instr_i 
                                                             << 8U)) 
                                                         | ((0xc00U 
                                                             & vlSelf->instr_i) 
                                                            | (0x200U 
                                                               & (vlSelf->instr_i 
                                                                  << 3U))))))));
            }
        } else {
            vlSelf->illegal_instr_o = 1U;
        }
    } else if ((0x4000U & vlSelf->instr_i)) {
        if ((0x2000U & vlSelf->instr_i)) {
            vlSelf->illegal_instr_o = 1U;
        }
        if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
            vlSelf->instr_o = (0x42403U | ((0x4000000U 
                                            & (vlSelf->instr_i 
                                               << 0x15U)) 
                                           | ((0x3800000U 
                                               & (vlSelf->instr_i 
                                                  << 0xdU)) 
                                              | ((0x400000U 
                                                  & (vlSelf->instr_i 
                                                     << 0x10U)) 
                                                 | ((0x38000U 
                                                     & (vlSelf->instr_i 
                                                        << 8U)) 
                                                    | (0x380U 
                                                       & (vlSelf->instr_i 
                                                          << 5U)))))));
        }
    } else {
        if ((0x2000U & vlSelf->instr_i)) {
            vlSelf->illegal_instr_o = 1U;
        } else if ((0U == (0xffU & (vlSelf->instr_i 
                                    >> 5U)))) {
            vlSelf->illegal_instr_o = 1U;
        }
        if ((1U & (~ (vlSelf->instr_i >> 0xdU)))) {
            vlSelf->instr_o = (0x10413U | ((0x3c000000U 
                                            & (vlSelf->instr_i 
                                               << 0x13U)) 
                                           | ((0x3000000U 
                                               & (vlSelf->instr_i 
                                                  << 0xdU)) 
                                              | ((0x800000U 
                                                  & (vlSelf->instr_i 
                                                     << 0x12U)) 
                                                 | ((0x400000U 
                                                     & (vlSelf->instr_i 
                                                        << 0x10U)) 
                                                    | (0x380U 
                                                       & (vlSelf->instr_i 
                                                          << 5U)))))));
        }
    }
    if (((IData)(vlSelf->illegal_instr_o) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__illegal_instr_o))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__illegal_instr_o 
            = vlSelf->illegal_instr_o;
    }
    if (((IData)(vlSelf->is_compressed_o) ^ (IData)(vlSelf->ibex_compressed_decoder__DOT____Vtogcov__is_compressed_o))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__is_compressed_o 
            = vlSelf->is_compressed_o;
    }
    if ((1U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
               ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1fffeU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (1U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((2U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
               ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1fffdU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (2U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((4U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
               ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1fffbU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (4U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((8U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
               ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1fff7U & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (8U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x10U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                  ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1ffefU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x10U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x20U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                  ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1ffdfU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x20U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x40U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                  ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1ffbfU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x40U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x80U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                  ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1ff7fU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x80U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x100U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                   ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1feffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x100U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x200U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                   ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1fdffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x200U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x400U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                   ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1fbffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x400U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x800U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                   ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1f7ffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x800U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x1000U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                    ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1efffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x1000U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x2000U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                    ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1dfffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x2000U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x4000U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                    ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x1bfffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x4000U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x8000U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                    ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0x17fffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x8000U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((0x10000U & (vlSelf->ibex_compressed_decoder__DOT__unused_signals 
                     ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals 
            = ((0xffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals) 
               | (0x10000U & vlSelf->ibex_compressed_decoder__DOT__unused_signals));
    }
    if ((1U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffffffeU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (1U & vlSelf->instr_o));
    }
    if ((2U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffffffdU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (2U & vlSelf->instr_o));
    }
    if ((4U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffffffbU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (4U & vlSelf->instr_o));
    }
    if ((8U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffffff7U & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (8U & vlSelf->instr_o));
    }
    if ((0x10U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffffffefU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x10U & vlSelf->instr_o));
    }
    if ((0x20U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffffffdfU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x20U & vlSelf->instr_o));
    }
    if ((0x40U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffffffbfU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x40U & vlSelf->instr_o));
    }
    if ((0x80U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffffff7fU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x80U & vlSelf->instr_o));
    }
    if ((0x100U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffffeffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x100U & vlSelf->instr_o));
    }
    if ((0x200U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffffdffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x200U & vlSelf->instr_o));
    }
    if ((0x400U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffffbffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x400U & vlSelf->instr_o));
    }
    if ((0x800U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffff7ffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x800U & vlSelf->instr_o));
    }
    if ((0x1000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffffefffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x1000U & vlSelf->instr_o));
    }
    if ((0x2000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffffdfffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x2000U & vlSelf->instr_o));
    }
    if ((0x4000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffffbfffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x4000U & vlSelf->instr_o));
    }
    if ((0x8000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffff7fffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x8000U & vlSelf->instr_o));
    }
    if ((0x10000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffeffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x10000U & vlSelf->instr_o));
    }
    if ((0x20000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffdffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x20000U & vlSelf->instr_o));
    }
    if ((0x40000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfffbffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x40000U & vlSelf->instr_o));
    }
    if ((0x80000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfff7ffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x80000U & vlSelf->instr_o));
    }
    if ((0x100000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffefffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x100000U & vlSelf->instr_o));
    }
    if ((0x200000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffdfffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x200000U & vlSelf->instr_o));
    }
    if ((0x400000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xffbfffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x400000U & vlSelf->instr_o));
    }
    if ((0x800000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xff7fffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x800000U & vlSelf->instr_o));
    }
    if ((0x1000000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfeffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x1000000U & vlSelf->instr_o));
    }
    if ((0x2000000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfdffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x2000000U & vlSelf->instr_o));
    }
    if ((0x4000000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xfbffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x4000000U & vlSelf->instr_o));
    }
    if ((0x8000000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xf7ffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x8000000U & vlSelf->instr_o));
    }
    if ((0x10000000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xefffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x10000000U & vlSelf->instr_o));
    }
    if ((0x20000000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xdfffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x20000000U & vlSelf->instr_o));
    }
    if ((0x40000000U & (vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0xbfffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x40000000U & vlSelf->instr_o));
    }
    if (((vlSelf->instr_o ^ vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o 
            = ((0x7fffffffU & vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o) 
               | (0x80000000U & vlSelf->instr_o));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_compressed_decoder___024root___dump_triggers__act(Vibex_compressed_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vibex_compressed_decoder___024root___eval_triggers__act(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_compressed_decoder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
