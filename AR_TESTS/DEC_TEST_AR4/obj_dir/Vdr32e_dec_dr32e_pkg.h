// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdr32e_dec.h for the primary calling header

#ifndef VERILATED_VDR32E_DEC_DR32E_PKG_H_
#define VERILATED_VDR32E_DEC_DR32E_PKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vdr32e_dec__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdr32e_dec_dr32e_pkg final : public VerilatedModule {
  public:

    // ENUMS (that were declared public)
    enum rv32b_e {
        RV32BNone = 0U,
        RV32BBalanced = 1U,
        RV32BOTEarlGrey = 2U,
        RV32BFull = 3U
    };
    enum opcode_e {
        OPCODE_LOAD = 3U,
        OPCODE_MISC_MEM = 0x0fU,
        OPCODE_OP_IMM = 0x13U,
        OPCODE_AUIPC = 0x17U,
        OPCODE_STORE = 0x23U,
        OPCODE_OP = 0x33U,
        OPCODE_LUI = 0x37U,
        OPCODE_BRANCH = 0x63U,
        OPCODE_JALR = 0x67U,
        OPCODE_JAL = 0x6fU,
        OPCODE_SYSTEM = 0x73U
    };
    enum alu_op_e {
        ALU_ADD = 0U,
        ALU_SUB = 1U,
        ALU_XOR = 2U,
        ALU_OR = 3U,
        ALU_AND = 4U,
        ALU_XNOR = 5U,
        ALU_ORN = 6U,
        ALU_ANDN = 7U,
        ALU_SRA = 8U,
        ALU_SRL = 9U,
        ALU_SLL = 0x0aU,
        ALU_SRO = 0x0bU,
        ALU_SLO = 0x0cU,
        ALU_ROR = 0x0dU,
        ALU_ROL = 0x0eU,
        ALU_GREV = 0x0fU,
        ALU_GORC = 0x10U,
        ALU_SHFL = 0x11U,
        ALU_UNSHFL = 0x12U,
        ALU_XPERM_N = 0x13U,
        ALU_XPERM_B = 0x14U,
        ALU_XPERM_H = 0x15U,
        ALU_SH1ADD = 0x16U,
        ALU_SH2ADD = 0x17U,
        ALU_SH3ADD = 0x18U,
        ALU_LT = 0x19U,
        ALU_LTU = 0x1aU,
        ALU_GE = 0x1bU,
        ALU_GEU = 0x1cU,
        ALU_EQ = 0x1dU,
        ALU_NE = 0x1eU,
        ALU_MIN = 0x1fU,
        ALU_MINU = 0x20U,
        ALU_MAX = 0x21U,
        ALU_MAXU = 0x22U,
        ALU_PACK = 0x23U,
        ALU_PACKU = 0x24U,
        ALU_PACKH = 0x25U,
        ALU_SEXTB = 0x26U,
        ALU_SEXTH = 0x27U,
        ALU_CLZ = 0x28U,
        ALU_CTZ = 0x29U,
        ALU_CPOP = 0x2aU,
        ALU_SLT = 0x2bU,
        ALU_SLTU = 0x2cU,
        ALU_CMOV = 0x2dU,
        ALU_CMIX = 0x2eU,
        ALU_FSL = 0x2fU,
        ALU_FSR = 0x30U,
        ALU_BSET = 0x31U,
        ALU_BCLR = 0x32U,
        ALU_BINV = 0x33U,
        ALU_BEXT = 0x34U,
        ALU_BCOMPRESS = 0x35U,
        ALU_BDECOMPRESS = 0x36U,
        ALU_BFP = 0x37U,
        ALU_CLMUL = 0x38U,
        ALU_CLMULR = 0x39U,
        ALU_CLMULH = 0x3aU,
        ALU_CRC32_B = 0x3bU,
        ALU_CRC32C_B = 0x3cU,
        ALU_CRC32_H = 0x3dU,
        ALU_CRC32C_H = 0x3eU,
        ALU_CRC32_W = 0x3fU,
        ALU_CRC32C_W = 0x40U
    };
    enum csr_op_e {
        CSR_OP_READ = 0U,
        CSR_OP_WRITE = 1U,
        CSR_OP_SET = 2U,
        CSR_OP_CLEAR = 3U
    };
    enum op_a_sel_e {
        OP_A_REG_A = 0U,
        OP_A_FWD = 1U,
        OP_A_CURRPC = 2U,
        OP_A_IMM = 3U
    };
    enum imm_a_sel_e {
        IMM_A_Z = 0U,
        IMM_A_ZERO = 1U
    };
    enum op_b_sel_e {
        OP_B_REG_B = 0U,
        OP_B_IMM = 1U
    };
    enum imm_b_sel_e {
        IMM_B_I = 0U,
        IMM_B_S = 1U,
        IMM_B_B = 2U,
        IMM_B_U = 3U,
        IMM_B_J = 4U,
        IMM_B_INCR_PC = 5U,
        IMM_B_INCR_ADDR = 6U
    };

    // INTERNAL VARIABLES
    Vdr32e_dec__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdr32e_dec_dr32e_pkg(Vdr32e_dec__Syms* symsp, const char* v__name);
    ~Vdr32e_dec_dr32e_pkg();
    VL_UNCOPYABLE(Vdr32e_dec_dr32e_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
