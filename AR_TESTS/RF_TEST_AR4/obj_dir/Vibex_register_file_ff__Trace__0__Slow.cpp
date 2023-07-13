// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_register_file_ff__Syms.h"


VL_ATTR_COLD void Vibex_register_file_ff___024root__trace_init_sub__TOP__0(Vibex_register_file_ff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+32,"clk_i", false,-1);
    tracep->declBit(c+33,"rst_ni", false,-1);
    tracep->declBit(c+34,"test_en_i", false,-1);
    tracep->declBit(c+35,"dummy_instr_id_i", false,-1);
    tracep->declBit(c+36,"dummy_instr_wb_i", false,-1);
    tracep->declBus(c+37,"raddr_a_i", false,-1, 4,0);
    tracep->declBus(c+38,"rdata_a_o", false,-1, 31,0);
    tracep->declBus(c+39,"raddr_b_i", false,-1, 4,0);
    tracep->declBus(c+40,"rdata_b_o", false,-1, 31,0);
    tracep->declBus(c+41,"waddr_a_i", false,-1, 4,0);
    tracep->declBus(c+42,"wdata_a_i", false,-1, 31,0);
    tracep->declBit(c+43,"we_a_i", false,-1);
    tracep->declBit(c+44,"err_o", false,-1);
    tracep->pushNamePrefix("ibex_register_file_ff ");
    tracep->declBit(c+80,"RV32E", false,-1);
    tracep->declBus(c+81,"DataWidth", false,-1, 31,0);
    tracep->declBit(c+80,"DummyInstructions", false,-1);
    tracep->declBit(c+80,"WrenCheck", false,-1);
    tracep->declBus(c+82,"WordZeroVal", false,-1, 31,0);
    tracep->declBit(c+32,"clk_i", false,-1);
    tracep->declBit(c+33,"rst_ni", false,-1);
    tracep->declBit(c+34,"test_en_i", false,-1);
    tracep->declBit(c+35,"dummy_instr_id_i", false,-1);
    tracep->declBit(c+36,"dummy_instr_wb_i", false,-1);
    tracep->declBus(c+37,"raddr_a_i", false,-1, 4,0);
    tracep->declBus(c+38,"rdata_a_o", false,-1, 31,0);
    tracep->declBus(c+39,"raddr_b_i", false,-1, 4,0);
    tracep->declBus(c+40,"rdata_b_o", false,-1, 31,0);
    tracep->declBus(c+41,"waddr_a_i", false,-1, 4,0);
    tracep->declBus(c+42,"wdata_a_i", false,-1, 31,0);
    tracep->declBit(c+43,"we_a_i", false,-1);
    tracep->declBit(c+44,"err_o", false,-1);
    tracep->declBus(c+83,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+81,"NUM_WORDS", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+45+i*1,"rf_reg", true,(i+0), 31,0);
    }
    tracep->declBus(c+77,"we_a_dec", false,-1, 31,0);
    tracep->declBit(c+34,"unused_test_en", false,-1);
    tracep->pushNamePrefix("g_normal_r0 ");
    tracep->declBit(c+78,"unused_dummy_instr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[10] ");
    tracep->declBus(c+1,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[11] ");
    tracep->declBus(c+2,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[12] ");
    tracep->declBus(c+3,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[13] ");
    tracep->declBus(c+4,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[14] ");
    tracep->declBus(c+5,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[15] ");
    tracep->declBus(c+6,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[16] ");
    tracep->declBus(c+7,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[17] ");
    tracep->declBus(c+8,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[18] ");
    tracep->declBus(c+9,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[19] ");
    tracep->declBus(c+10,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[1] ");
    tracep->declBus(c+11,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[20] ");
    tracep->declBus(c+12,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[21] ");
    tracep->declBus(c+13,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[22] ");
    tracep->declBus(c+14,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[23] ");
    tracep->declBus(c+15,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[24] ");
    tracep->declBus(c+16,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[25] ");
    tracep->declBus(c+17,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[26] ");
    tracep->declBus(c+18,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[27] ");
    tracep->declBus(c+19,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[28] ");
    tracep->declBus(c+20,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[29] ");
    tracep->declBus(c+21,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[2] ");
    tracep->declBus(c+22,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[30] ");
    tracep->declBus(c+23,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[31] ");
    tracep->declBus(c+24,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[3] ");
    tracep->declBus(c+25,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[4] ");
    tracep->declBus(c+26,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[5] ");
    tracep->declBus(c+27,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[6] ");
    tracep->declBus(c+28,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[7] ");
    tracep->declBus(c+29,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[8] ");
    tracep->declBus(c+30,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_rf_flops[9] ");
    tracep->declBus(c+31,"rf_reg_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_no_wren_check ");
    tracep->declBit(c+79,"unused_strobe", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("we_a_decoder ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+81,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vibex_register_file_ff___024root__trace_init_top(Vibex_register_file_ff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root__trace_init_top\n"); );
    // Body
    Vibex_register_file_ff___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vibex_register_file_ff___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vibex_register_file_ff___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vibex_register_file_ff___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vibex_register_file_ff___024root__trace_register(Vibex_register_file_ff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vibex_register_file_ff___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vibex_register_file_ff___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vibex_register_file_ff___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vibex_register_file_ff___024root__trace_full_sub_0(Vibex_register_file_ff___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vibex_register_file_ff___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root__trace_full_top_0\n"); );
    // Init
    Vibex_register_file_ff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_register_file_ff___024root*>(voidSelf);
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vibex_register_file_ff___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vibex_register_file_ff___024root__trace_full_sub_0(Vibex_register_file_ff___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_register_file_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_register_file_ff___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+2,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+3,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+4,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+5,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+6,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+7,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+8,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+9,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+10,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+11,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+12,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+13,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+14,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+15,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+16,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+17,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+18,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+19,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+20,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+21,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+22,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+23,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+24,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+25,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+26,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+27,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+28,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+29,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+30,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+31,(vlSelf->ibex_register_file_ff__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q),32);
    bufp->fullBit(oldp+32,(vlSelf->clk_i));
    bufp->fullBit(oldp+33,(vlSelf->rst_ni));
    bufp->fullBit(oldp+34,(vlSelf->test_en_i));
    bufp->fullBit(oldp+35,(vlSelf->dummy_instr_id_i));
    bufp->fullBit(oldp+36,(vlSelf->dummy_instr_wb_i));
    bufp->fullCData(oldp+37,(vlSelf->raddr_a_i),5);
    bufp->fullIData(oldp+38,(vlSelf->rdata_a_o),32);
    bufp->fullCData(oldp+39,(vlSelf->raddr_b_i),5);
    bufp->fullIData(oldp+40,(vlSelf->rdata_b_o),32);
    bufp->fullCData(oldp+41,(vlSelf->waddr_a_i),5);
    bufp->fullIData(oldp+42,(vlSelf->wdata_a_i),32);
    bufp->fullBit(oldp+43,(vlSelf->we_a_i));
    bufp->fullBit(oldp+44,(vlSelf->err_o));
    bufp->fullIData(oldp+45,(vlSelf->ibex_register_file_ff__DOT__rf_reg[0]),32);
    bufp->fullIData(oldp+46,(vlSelf->ibex_register_file_ff__DOT__rf_reg[1]),32);
    bufp->fullIData(oldp+47,(vlSelf->ibex_register_file_ff__DOT__rf_reg[2]),32);
    bufp->fullIData(oldp+48,(vlSelf->ibex_register_file_ff__DOT__rf_reg[3]),32);
    bufp->fullIData(oldp+49,(vlSelf->ibex_register_file_ff__DOT__rf_reg[4]),32);
    bufp->fullIData(oldp+50,(vlSelf->ibex_register_file_ff__DOT__rf_reg[5]),32);
    bufp->fullIData(oldp+51,(vlSelf->ibex_register_file_ff__DOT__rf_reg[6]),32);
    bufp->fullIData(oldp+52,(vlSelf->ibex_register_file_ff__DOT__rf_reg[7]),32);
    bufp->fullIData(oldp+53,(vlSelf->ibex_register_file_ff__DOT__rf_reg[8]),32);
    bufp->fullIData(oldp+54,(vlSelf->ibex_register_file_ff__DOT__rf_reg[9]),32);
    bufp->fullIData(oldp+55,(vlSelf->ibex_register_file_ff__DOT__rf_reg[10]),32);
    bufp->fullIData(oldp+56,(vlSelf->ibex_register_file_ff__DOT__rf_reg[11]),32);
    bufp->fullIData(oldp+57,(vlSelf->ibex_register_file_ff__DOT__rf_reg[12]),32);
    bufp->fullIData(oldp+58,(vlSelf->ibex_register_file_ff__DOT__rf_reg[13]),32);
    bufp->fullIData(oldp+59,(vlSelf->ibex_register_file_ff__DOT__rf_reg[14]),32);
    bufp->fullIData(oldp+60,(vlSelf->ibex_register_file_ff__DOT__rf_reg[15]),32);
    bufp->fullIData(oldp+61,(vlSelf->ibex_register_file_ff__DOT__rf_reg[16]),32);
    bufp->fullIData(oldp+62,(vlSelf->ibex_register_file_ff__DOT__rf_reg[17]),32);
    bufp->fullIData(oldp+63,(vlSelf->ibex_register_file_ff__DOT__rf_reg[18]),32);
    bufp->fullIData(oldp+64,(vlSelf->ibex_register_file_ff__DOT__rf_reg[19]),32);
    bufp->fullIData(oldp+65,(vlSelf->ibex_register_file_ff__DOT__rf_reg[20]),32);
    bufp->fullIData(oldp+66,(vlSelf->ibex_register_file_ff__DOT__rf_reg[21]),32);
    bufp->fullIData(oldp+67,(vlSelf->ibex_register_file_ff__DOT__rf_reg[22]),32);
    bufp->fullIData(oldp+68,(vlSelf->ibex_register_file_ff__DOT__rf_reg[23]),32);
    bufp->fullIData(oldp+69,(vlSelf->ibex_register_file_ff__DOT__rf_reg[24]),32);
    bufp->fullIData(oldp+70,(vlSelf->ibex_register_file_ff__DOT__rf_reg[25]),32);
    bufp->fullIData(oldp+71,(vlSelf->ibex_register_file_ff__DOT__rf_reg[26]),32);
    bufp->fullIData(oldp+72,(vlSelf->ibex_register_file_ff__DOT__rf_reg[27]),32);
    bufp->fullIData(oldp+73,(vlSelf->ibex_register_file_ff__DOT__rf_reg[28]),32);
    bufp->fullIData(oldp+74,(vlSelf->ibex_register_file_ff__DOT__rf_reg[29]),32);
    bufp->fullIData(oldp+75,(vlSelf->ibex_register_file_ff__DOT__rf_reg[30]),32);
    bufp->fullIData(oldp+76,(vlSelf->ibex_register_file_ff__DOT__rf_reg[31]),32);
    bufp->fullIData(oldp+77,(vlSelf->ibex_register_file_ff__DOT__we_a_dec),32);
    bufp->fullBit(oldp+78,(((IData)(vlSelf->dummy_instr_id_i) 
                            ^ (IData)(vlSelf->dummy_instr_wb_i))));
    bufp->fullBit(oldp+79,((1U & vlSelf->ibex_register_file_ff__DOT__we_a_dec)));
    bufp->fullBit(oldp+80,(0U));
    bufp->fullIData(oldp+81,(0x20U),32);
    bufp->fullIData(oldp+82,(0U),32);
    bufp->fullIData(oldp+83,(5U),32);
}
