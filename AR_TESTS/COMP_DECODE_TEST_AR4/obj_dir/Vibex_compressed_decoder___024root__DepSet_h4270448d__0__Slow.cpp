// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_compressed_decoder.h for the primary calling header

#include "verilated.h"

#include "Vibex_compressed_decoder__Syms.h"
#include "Vibex_compressed_decoder__Syms.h"
#include "Vibex_compressed_decoder___024root.h"

VL_ATTR_COLD void Vibex_compressed_decoder___024root___eval_initial__TOP(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_compressed_decoder___024root___dump_triggers__stl(Vibex_compressed_decoder___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_compressed_decoder___024root___eval_triggers__stl(Vibex_compressed_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_compressed_decoder___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vibex_compressed_decoder___024root___configure_coverage(Vibex_compressed_decoder___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vibex_compressed_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_compressed_decoder___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "verilog/ibex_compressed_decoder.v", 18, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "verilog/ibex_compressed_decoder.v", 19, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "verilog/ibex_compressed_decoder.v", 20, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "valid_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "verilog/ibex_compressed_decoder.v", 21, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "verilog/ibex_compressed_decoder.v", 22, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "enum_dpi[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "verilog/ibex_compressed_decoder.v", 23, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "instr_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "verilog/ibex_compressed_decoder.v", 24, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "is_compressed_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "verilog/ibex_compressed_decoder.v", 25, 23, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "illegal_instr_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "verilog/ibex_compressed_decoder.v", 32, 16, ".ibex_compressed_decoder", "v_toggle/ibex_compressed_decoder", "unused_signals[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "verilog/ibex_compressed_decoder.v", 53, 13, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "verilog/ibex_compressed_decoder.v", 53, 14, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "verilog/ibex_compressed_decoder.v", 49, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "49,51-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "verilog/ibex_compressed_decoder.v", 56, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "56,58-59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "verilog/ibex_compressed_decoder.v", 62, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "62,64-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "verilog/ibex_compressed_decoder.v", 73, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "73-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "verilog/ibex_compressed_decoder.v", 77, 11, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "77-78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "verilog/ibex_compressed_decoder.v", 47, 12, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "47-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "verilog/ibex_compressed_decoder.v", 90, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "90,93-94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "verilog/ibex_compressed_decoder.v", 97, 25, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "97,100-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "verilog/ibex_compressed_decoder.v", 105, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "105,108-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "verilog/ibex_compressed_decoder.v", 117, 13, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "117,119-120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "verilog/ibex_compressed_decoder.v", 117, 14, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "verilog/ibex_compressed_decoder.v", 123, 13, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "verilog/ibex_compressed_decoder.v", 123, 14, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "verilog/ibex_compressed_decoder.v", 112, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "112,115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "verilog/ibex_compressed_decoder.v", 135, 17, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "verilog/ibex_compressed_decoder.v", 135, 18, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "verilog/ibex_compressed_decoder.v", 129, 20, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "129,133-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "verilog/ibex_compressed_decoder.v", 138, 20, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "138,140-141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "verilog/ibex_compressed_decoder.v", 146, 25, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "146,148-149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "verilog/ibex_compressed_decoder.v", 152, 25, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "152,154-155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "verilog/ibex_compressed_decoder.v", 158, 25, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "158,160-161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "verilog/ibex_compressed_decoder.v", 164, 25, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "164,166-167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "verilog/ibex_compressed_decoder.v", 173, 25, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "173,176");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "verilog/ibex_compressed_decoder.v", 179, 19, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "179-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "verilog/ibex_compressed_decoder.v", 144, 20, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "144-145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "verilog/ibex_compressed_decoder.v", 185, 15, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "185-186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "verilog/ibex_compressed_decoder.v", 126, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "126-127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "verilog/ibex_compressed_decoder.v", 191, 25, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "191,194-196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "verilog/ibex_compressed_decoder.v", 199, 11, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "199-200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "verilog/ibex_compressed_decoder.v", 88, 12, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "88-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "verilog/ibex_compressed_decoder.v", 216, 13, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "verilog/ibex_compressed_decoder.v", 216, 14, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "verilog/ibex_compressed_decoder.v", 212, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "212,215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "verilog/ibex_compressed_decoder.v", 223, 13, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "verilog/ibex_compressed_decoder.v", 223, 14, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "verilog/ibex_compressed_decoder.v", 219, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "219,221-222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "verilog/ibex_compressed_decoder.v", 235, 17, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "verilog/ibex_compressed_decoder.v", 235, 18, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "verilog/ibex_compressed_decoder.v", 228, 15, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "228,231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "verilog/ibex_compressed_decoder.v", 228, 16, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "232,234");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "verilog/ibex_compressed_decoder.v", 243, 17, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "243,245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "verilog/ibex_compressed_decoder.v", 243, 18, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "246,248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "verilog/ibex_compressed_decoder.v", 238, 15, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "238,241");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "verilog/ibex_compressed_decoder.v", 238, 16, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "242");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "verilog/ibex_compressed_decoder.v", 227, 13, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "if", "227");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "verilog/ibex_compressed_decoder.v", 227, 14, ".ibex_compressed_decoder", "v_branch/ibex_compressed_decoder", "else", "237");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "verilog/ibex_compressed_decoder.v", 226, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "226");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "verilog/ibex_compressed_decoder.v", 254, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "254,256-257");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "verilog/ibex_compressed_decoder.v", 263, 17, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "263-264");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "verilog/ibex_compressed_decoder.v", 267, 11, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "267-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "verilog/ibex_compressed_decoder.v", 210, 12, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "210-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "verilog/ibex_compressed_decoder.v", 274, 12, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "274");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "verilog/ibex_compressed_decoder.v", 276, 7, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "case", "276-277");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "verilog/ibex_compressed_decoder.v", 39, 3, ".ibex_compressed_decoder", "v_line/ibex_compressed_decoder", "block", "39,41-42,45");
}
