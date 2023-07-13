// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_compressed_decoder.h for the primary calling header

#include "verilated.h"

#include "Vibex_compressed_decoder__Syms.h"
#include "Vibex_compressed_decoder___024root.h"

VL_ATTR_COLD void Vibex_compressed_decoder___024root___eval_static(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vibex_compressed_decoder___024root___eval_initial__TOP(Vibex_compressed_decoder___024root* vlSelf);

VL_ATTR_COLD void Vibex_compressed_decoder___024root___eval_initial(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___eval_initial\n"); );
    // Body
    Vibex_compressed_decoder___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vibex_compressed_decoder___024root___eval_final(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vibex_compressed_decoder___024root___eval_triggers__stl(Vibex_compressed_decoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_compressed_decoder___024root___dump_triggers__stl(Vibex_compressed_decoder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vibex_compressed_decoder___024root___eval_stl(Vibex_compressed_decoder___024root* vlSelf);

VL_ATTR_COLD void Vibex_compressed_decoder___024root___eval_settle(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vibex_compressed_decoder___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vibex_compressed_decoder___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("verilog/ibex_compressed_decoder.v", 17, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vibex_compressed_decoder___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_compressed_decoder___024root___dump_triggers__stl(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vibex_compressed_decoder___024root___ico_sequent__TOP__0(Vibex_compressed_decoder___024root* vlSelf);

VL_ATTR_COLD void Vibex_compressed_decoder___024root___eval_stl(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vibex_compressed_decoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_compressed_decoder___024root___dump_triggers__ico(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_compressed_decoder___024root___dump_triggers__act(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_compressed_decoder___024root___dump_triggers__nba(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_compressed_decoder___024root___ctor_var_reset(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->valid_i = VL_RAND_RESET_I(1);
    vlSelf->instr_i = VL_RAND_RESET_I(32);
    vlSelf->enum_dpi = VL_RAND_RESET_I(16);
    vlSelf->instr_o = VL_RAND_RESET_I(32);
    vlSelf->is_compressed_o = VL_RAND_RESET_I(1);
    vlSelf->illegal_instr_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_compressed_decoder__DOT__unused_signals = VL_RAND_RESET_I(17);
    vlSelf->ibex_compressed_decoder__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_compressed_decoder__DOT____Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->ibex_compressed_decoder__DOT____Vtogcov__valid_i = VL_RAND_RESET_I(1);
    vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_i = VL_RAND_RESET_I(32);
    vlSelf->ibex_compressed_decoder__DOT____Vtogcov__enum_dpi = VL_RAND_RESET_I(16);
    vlSelf->ibex_compressed_decoder__DOT____Vtogcov__instr_o = VL_RAND_RESET_I(32);
    vlSelf->ibex_compressed_decoder__DOT____Vtogcov__is_compressed_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_compressed_decoder__DOT____Vtogcov__illegal_instr_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_compressed_decoder__DOT____Vtogcov__unused_signals = VL_RAND_RESET_I(17);
}
