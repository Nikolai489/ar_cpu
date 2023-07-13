// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_register_file_ff__Syms.h"


void Vibex_register_file_ff___024root__trace_chg_sub_0(Vibex_register_file_ff___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vibex_register_file_ff___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root__trace_chg_top_0\n"); );
    // Init
    Vibex_register_file_ff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_register_file_ff___024root*>(voidSelf);
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vibex_register_file_ff___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vibex_register_file_ff___024root__trace_chg_sub_0(Vibex_register_file_ff___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+1,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+2,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+3,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+4,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+5,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+6,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+7,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+8,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+9,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+10,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+11,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+12,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+13,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+14,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+15,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+16,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+17,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+18,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+19,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+20,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+21,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+22,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+23,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+24,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+25,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+26,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+27,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+28,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+29,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+30,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q),32);
    }
    bufp->chgBit(oldp+31,(vlSelf->clk_i));
    bufp->chgBit(oldp+32,(vlSelf->rst_ni));
    bufp->chgBit(oldp+33,(vlSelf->test_en_i));
    bufp->chgBit(oldp+34,(vlSelf->dummy_instr_id_i));
    bufp->chgBit(oldp+35,(vlSelf->dummy_instr_wb_i));
    bufp->chgCData(oldp+36,(vlSelf->raddr_a_i),5);
    bufp->chgIData(oldp+37,(vlSelf->rdata_a_o),32);
    bufp->chgCData(oldp+38,(vlSelf->raddr_b_i),5);
    bufp->chgIData(oldp+39,(vlSelf->rdata_b_o),32);
    bufp->chgCData(oldp+40,(vlSelf->waddr_a_i),5);
    bufp->chgIData(oldp+41,(vlSelf->wdata_a_i),32);
    bufp->chgBit(oldp+42,(vlSelf->we_a_i));
    bufp->chgBit(oldp+43,(vlSelf->err_o));
    bufp->chgIData(oldp+44,(vlSelf->ibex_register_file_ff__DOT__rf_reg[0]),32);
    bufp->chgIData(oldp+45,(vlSelf->ibex_register_file_ff__DOT__rf_reg[1]),32);
    bufp->chgIData(oldp+46,(vlSelf->ibex_register_file_ff__DOT__rf_reg[2]),32);
    bufp->chgIData(oldp+47,(vlSelf->ibex_register_file_ff__DOT__rf_reg[3]),32);
    bufp->chgIData(oldp+48,(vlSelf->ibex_register_file_ff__DOT__rf_reg[4]),32);
    bufp->chgIData(oldp+49,(vlSelf->ibex_register_file_ff__DOT__rf_reg[5]),32);
    bufp->chgIData(oldp+50,(vlSelf->ibex_register_file_ff__DOT__rf_reg[6]),32);
    bufp->chgIData(oldp+51,(vlSelf->ibex_register_file_ff__DOT__rf_reg[7]),32);
    bufp->chgIData(oldp+52,(vlSelf->ibex_register_file_ff__DOT__rf_reg[8]),32);
    bufp->chgIData(oldp+53,(vlSelf->ibex_register_file_ff__DOT__rf_reg[9]),32);
    bufp->chgIData(oldp+54,(vlSelf->ibex_register_file_ff__DOT__rf_reg[10]),32);
    bufp->chgIData(oldp+55,(vlSelf->ibex_register_file_ff__DOT__rf_reg[11]),32);
    bufp->chgIData(oldp+56,(vlSelf->ibex_register_file_ff__DOT__rf_reg[12]),32);
    bufp->chgIData(oldp+57,(vlSelf->ibex_register_file_ff__DOT__rf_reg[13]),32);
    bufp->chgIData(oldp+58,(vlSelf->ibex_register_file_ff__DOT__rf_reg[14]),32);
    bufp->chgIData(oldp+59,(vlSelf->ibex_register_file_ff__DOT__rf_reg[15]),32);
    bufp->chgIData(oldp+60,(vlSelf->ibex_register_file_ff__DOT__rf_reg[16]),32);
    bufp->chgIData(oldp+61,(vlSelf->ibex_register_file_ff__DOT__rf_reg[17]),32);
    bufp->chgIData(oldp+62,(vlSelf->ibex_register_file_ff__DOT__rf_reg[18]),32);
    bufp->chgIData(oldp+63,(vlSelf->ibex_register_file_ff__DOT__rf_reg[19]),32);
    bufp->chgIData(oldp+64,(vlSelf->ibex_register_file_ff__DOT__rf_reg[20]),32);
    bufp->chgIData(oldp+65,(vlSelf->ibex_register_file_ff__DOT__rf_reg[21]),32);
    bufp->chgIData(oldp+66,(vlSelf->ibex_register_file_ff__DOT__rf_reg[22]),32);
    bufp->chgIData(oldp+67,(vlSelf->ibex_register_file_ff__DOT__rf_reg[23]),32);
    bufp->chgIData(oldp+68,(vlSelf->ibex_register_file_ff__DOT__rf_reg[24]),32);
    bufp->chgIData(oldp+69,(vlSelf->ibex_register_file_ff__DOT__rf_reg[25]),32);
    bufp->chgIData(oldp+70,(vlSelf->ibex_register_file_ff__DOT__rf_reg[26]),32);
    bufp->chgIData(oldp+71,(vlSelf->ibex_register_file_ff__DOT__rf_reg[27]),32);
    bufp->chgIData(oldp+72,(vlSelf->ibex_register_file_ff__DOT__rf_reg[28]),32);
    bufp->chgIData(oldp+73,(vlSelf->ibex_register_file_ff__DOT__rf_reg[29]),32);
    bufp->chgIData(oldp+74,(vlSelf->ibex_register_file_ff__DOT__rf_reg[30]),32);
    bufp->chgIData(oldp+75,(vlSelf->ibex_register_file_ff__DOT__rf_reg[31]),32);
    bufp->chgIData(oldp+76,(vlSelf->ibex_register_file_ff__DOT__we_a_dec),32);
    bufp->chgBit(oldp+77,(((IData)(vlSelf->dummy_instr_id_i) 
                           ^ (IData)(vlSelf->dummy_instr_wb_i))));
    bufp->chgBit(oldp+78,((1U & vlSelf->ibex_register_file_ff__DOT__we_a_dec)));
}

void Vibex_register_file_ff___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root__trace_cleanup\n"); );
    // Init
    Vibex_register_file_ff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_register_file_ff___024root*>(voidSelf);
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
