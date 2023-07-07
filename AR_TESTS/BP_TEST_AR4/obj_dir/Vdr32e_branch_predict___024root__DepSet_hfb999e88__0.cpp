// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdr32e_branch_predict.h for the primary calling header

#include "verilated.h"

#include "Vdr32e_branch_predict__Syms.h"
#include "Vdr32e_branch_predict___024root.h"

void Vdr32e_branch_predict___024root___ico_sequent__TOP__0(Vdr32e_branch_predict___024root* vlSelf);

void Vdr32e_branch_predict___024root___eval_ico(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vdr32e_branch_predict___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vdr32e_branch_predict___024root___eval_act(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_act\n"); );
}

void Vdr32e_branch_predict___024root___eval_nba(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_nba\n"); );
}

void Vdr32e_branch_predict___024root___eval_triggers__ico(Vdr32e_branch_predict___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_branch_predict___024root___dump_triggers__ico(Vdr32e_branch_predict___024root* vlSelf);
#endif  // VL_DEBUG
void Vdr32e_branch_predict___024root___eval_triggers__act(Vdr32e_branch_predict___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_branch_predict___024root___dump_triggers__act(Vdr32e_branch_predict___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdr32e_branch_predict___024root___dump_triggers__nba(Vdr32e_branch_predict___024root* vlSelf);
#endif  // VL_DEBUG

void Vdr32e_branch_predict___024root___eval(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vdr32e_branch_predict___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vdr32e_branch_predict___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("verilog/dr32e_branch_predict.v", 20, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vdr32e_branch_predict___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vdr32e_branch_predict___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vdr32e_branch_predict___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("verilog/dr32e_branch_predict.v", 20, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vdr32e_branch_predict___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vdr32e_branch_predict___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("verilog/dr32e_branch_predict.v", 20, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vdr32e_branch_predict___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vdr32e_branch_predict___024root___eval_debug_assertions(Vdr32e_branch_predict___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdr32e_branch_predict__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdr32e_branch_predict___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->fetch_valid_i & 0xfeU))) {
        Verilated::overWidthError("fetch_valid_i");}
}
#endif  // VL_DEBUG
