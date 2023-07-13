// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_prefetch_buffer.h for the primary calling header

#include "verilated.h"

#include "Vibex_prefetch_buffer__Syms.h"
#include "Vibex_prefetch_buffer___024root.h"

void Vibex_prefetch_buffer___024root___ico_sequent__TOP__0(Vibex_prefetch_buffer___024root* vlSelf);

void Vibex_prefetch_buffer___024root___eval_ico(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vibex_prefetch_buffer___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vibex_prefetch_buffer___024root___eval_act(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_act\n"); );
}

void Vibex_prefetch_buffer___024root___nba_sequent__TOP__0(Vibex_prefetch_buffer___024root* vlSelf);
void Vibex_prefetch_buffer___024root___nba_sequent__TOP__1(Vibex_prefetch_buffer___024root* vlSelf);
void Vibex_prefetch_buffer___024root___nba_comb__TOP__0(Vibex_prefetch_buffer___024root* vlSelf);

void Vibex_prefetch_buffer___024root___eval_nba(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vibex_prefetch_buffer___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vibex_prefetch_buffer___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vibex_prefetch_buffer___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vibex_prefetch_buffer___024root___eval_triggers__ico(Vibex_prefetch_buffer___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_prefetch_buffer___024root___dump_triggers__ico(Vibex_prefetch_buffer___024root* vlSelf);
#endif  // VL_DEBUG
void Vibex_prefetch_buffer___024root___eval_triggers__act(Vibex_prefetch_buffer___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_prefetch_buffer___024root___dump_triggers__act(Vibex_prefetch_buffer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_prefetch_buffer___024root___dump_triggers__nba(Vibex_prefetch_buffer___024root* vlSelf);
#endif  // VL_DEBUG

void Vibex_prefetch_buffer___024root___eval(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vibex_prefetch_buffer___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vibex_prefetch_buffer___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("verilog/ibex_prefetch_buffer.v", 16, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vibex_prefetch_buffer___024root___eval_ico(vlSelf);
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
            Vibex_prefetch_buffer___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vibex_prefetch_buffer___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("verilog/ibex_prefetch_buffer.v", 16, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vibex_prefetch_buffer___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vibex_prefetch_buffer___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("verilog/ibex_prefetch_buffer.v", 16, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vibex_prefetch_buffer___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vibex_prefetch_buffer___024root___eval_debug_assertions(Vibex_prefetch_buffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_prefetch_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_prefetch_buffer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->req_i & 0xfeU))) {
        Verilated::overWidthError("req_i");}
    if (VL_UNLIKELY((vlSelf->branch_i & 0xfeU))) {
        Verilated::overWidthError("branch_i");}
    if (VL_UNLIKELY((vlSelf->ready_i & 0xfeU))) {
        Verilated::overWidthError("ready_i");}
    if (VL_UNLIKELY((vlSelf->instr_gnt_i & 0xfeU))) {
        Verilated::overWidthError("instr_gnt_i");}
    if (VL_UNLIKELY((vlSelf->instr_err_i & 0xfeU))) {
        Verilated::overWidthError("instr_err_i");}
    if (VL_UNLIKELY((vlSelf->instr_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("instr_rvalid_i");}
}
#endif  // VL_DEBUG
