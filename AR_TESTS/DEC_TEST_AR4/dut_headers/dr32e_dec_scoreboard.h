#include "dr32e_dec_tbf.h"

DECScoreboard::DECScoreboard(){
  error_count_ = 0;
}
void DECScoreboard::writeIn(DECInTxn *tx) {
  in_q.push_back(tx);
}

void DECScoreboard::writeOut(DECOutTxn *tx) {
  if (in_q.empty()) {
    printf("Fatal error in DEC Scoreboard: empty transaction queue");
    exit(1);
  }
  int msb;
  uint32_t instr_opcode;
  int dtype;
  DECInTxn *in;
  in = in_q.front();
  in_q.pop_front();

  msb = (in->instr >> 31) & 1;
  instr_opcode = in->instr & 0x0000007F;
  if(((in->instr & 0x3000)>>12) == 0x0)
    dtype = 0x2;
  else if(((in->instr & 0x3000)>>12) == 0x2)
    dtype = 0x0;
  else
    dtype = 0x1;

  typedef enum op_b_sel{
  OP_B_REG_B,
  OP_B_IMM
  }op_b_sel_e;


  typedef enum imm_b_sel{
   IMM_B_I,
   IMM_B_S,
   IMM_B_B,
   IMM_B_U,
   IMM_B_J,
   IMM_B_INCR_PC,
   IMM_B_INCR_ADDR
  }imm_b_sel_e;

  typedef enum op_a_sel{
   OP_A_REG_A,
   OP_A_FWD,
   OP_A_CURRPC,
   OP_A_IMM
  }op_a_sel_e;

  typedef enum imm_a_sel{
   IMM_A_Z,
   IMM_A_ZERO
  }imm_a_sel_e;

  typedef enum Operation{
   // Arithmetics
   ALU_ADD,
   ALU_SUB,

   // Logics
   ALU_XOR,
   ALU_OR,
   ALU_AND,
   // RV32B
   ALU_XNOR,
   ALU_ORN,
   ALU_ANDN,

   // Shifts
   ALU_SRA,
   ALU_SRL,
   ALU_SLL,
   // RV32B
   ALU_SRO,
   ALU_SLO,
   ALU_ROR,
   ALU_ROL,
   ALU_GREV,
   ALU_GORC,
   ALU_SHFL,
   ALU_UNSHFL,
   ALU_XPERM_N,
   ALU_XPERM_B,
   ALU_XPERM_H,

   // Address Calculations
   // RV32B
   ALU_SH1ADD,
   ALU_SH2ADD,
   ALU_SH3ADD,

   // Comparisons
   ALU_LT,
   ALU_LTU,
   ALU_GE,
   ALU_GEU,
   ALU_EQ,
   ALU_NE,
   // RV32B
   ALU_MIN,
   ALU_MINU,
   ALU_MAX,
   ALU_MAXU,

   // Pack
   // RV32B
   ALU_PACK,
   ALU_PACKU,
   ALU_PACKH,

   // Sign-Extend
   // RV32B
   ALU_SEXTB,
   ALU_SEXTH,

   // Bitcounting
   // RV32B
   ALU_CLZ,
   ALU_CTZ,
   ALU_CPOP,

   // Set lower than
   ALU_SLT,
   ALU_SLTU,

   // Ternary Bitmanip Operations
   // RV32B
   ALU_CMOV,
   ALU_CMIX,
   ALU_FSL,
   ALU_FSR,

   // Single-Bit Operations
   // RV32B
   ALU_BSET,
   ALU_BCLR,
   ALU_BINV,
   ALU_BEXT,

   // Bit Compress / Decompress
   // RV32B
   ALU_BCOMPRESS,
   ALU_BDECOMPRESS,

   // Bit Field Place
   // RV32B
   ALU_BFP,

   // Carry-less Multiply
   // RV32B
   ALU_CLMUL,
   ALU_CLMULR,
   ALU_CLMULH,

   // Cyclic Redundancy Check
   ALU_CRC32_B,
   ALU_CRC32C_B,
   ALU_CRC32_H,
   ALU_CRC32C_H,
   ALU_CRC32_W,
   ALU_CRC32C_W
  }alu_op_e;

  op_b_sel_e bmux = ((in->instr & 0x4000) >> 14) ? op_b_sel::OP_B_REG_B : op_b_sel::OP_B_IMM;
  imm_b_sel_e imm_bmux = ((in->instr & 0x4000) >> 14) ? imm_b_sel_e::IMM_B_I : imm_b_sel_e::IMM_B_S;
  alu_op_e alu_op;

  switch((in->instr & 0x7000) >> 12){
    case 0: 
      alu_op = alu_op_e::ALU_ADD;
      break;
    case 1:
      alu_op = alu_op_e::ALU_SLL;
      break;
    case 2:
      alu_op = alu_op_e::ALU_SLT;
      break;
    case 3:
      alu_op = alu_op_e::ALU_SLTU;
      break;
    case 4:
      alu_op = alu_op_e::ALU_XOR;
      break;
    case 5:
      if(((in->instr & 0xF8000000) >> 27) == 0x0)
        alu_op = alu_op_e::ALU_SRL;
      else 
        alu_op = alu_op_e::ALU_SRA;
    case 6:
      alu_op = alu_op_e::ALU_OR;
      break;
    case 7:
      alu_op = alu_op_e::ALU_AND;
      break;
  }
  printf(ANSI_COLOR_TIME "Time: %ld %s\n" ANSI_COLOR_RESET,main_time__,TIME_UNIT);
  switch(instr_opcode){
    case JUMP_OP:
      if (tx->jump_set) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Jump instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
          if(tx->rf_ra ==  ((in->instr & 0x000F8000) >> 15)  &&  tx->rf_rb == ((in->instr & 0x1F00000) >> 20) && tx->rf_we == 1 && tx->rf_waddr == (in->instr & 0xF80) >> 7)
            printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t  rd : %x \t rf_we : %d\n" ANSI_COLOR_RESET, 
                   tx->rf_ra, tx->rf_rb, tx->rf_waddr, tx->rf_we);
          else{
            printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rd : %x \t rf_we : %d\n" ANSI_COLOR_RESET, 
                   tx->rf_ra, tx->rf_rb, tx->rf_waddr, tx->rf_we);
            error_count_++;
          }
          if(tx->imm_j == (msb ? 0xFFF00000 : 0x0) | ((in->instr & 0xFFF00000) >> 20))
            printf(ANSI_COLOR_GREEN "\t\tJump immediate values MATCH\t\t IMM_J -> 0x%x\n "  ANSI_COLOR_RESET, tx->imm_j);
          else{
            printf(ANSI_COLOR_RED "\t\tJump immediate values MISMATCH\t\t IMM_J -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_j);
            error_count_++;
          }
          if(tx->imm_b_sel_o == imm_b_sel_e::IMM_B_INCR_PC &&
              tx->op_a_sel_o == op_a_sel_e::OP_A_CURRPC && 
              tx->op_b_sel_o == op_b_sel_e::OP_B_IMM &&
              tx->op_o == alu_op_e::ALU_ADD){
            printf(ANSI_COLOR_GREEN "\t\tALU signals MATCH \t imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
          }
          else{
            printf(ANSI_COLOR_RED "\t\tALU signals MISMATCH \t imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
            error_count_++;
          }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a jump instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
        error_count_++;
      }
      break;
    case BRANCH_OP:
      if (tx->branch_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Branch instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra ==  ((in->instr & 0x000F8000) >> 15)  &&  tx->rf_rb == ((in->instr & 0x1F00000) >> 20))
            printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x\n" ANSI_COLOR_RESET, 
                   tx->rf_ra, tx->rf_rb);
        else{
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x\n" ANSI_COLOR_RESET, 
                  tx->rf_ra, tx->rf_rb);
          error_count_++;
        }
        if(tx->imm_b == (msb ? 0xFFFFE000 : 0x0) |
                                ((in->instr & 0x80) << 4) |
                                ((in->instr & 0x7E000000) >> 20) |
                                ((in->instr & 0xF00) >> 7) |
                                0x0)
          printf(ANSI_COLOR_GREEN "\t\tBranch immediate values MATCH\t\t IMM_B -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_b);
        else{
          printf(ANSI_COLOR_RED "\t\tBranch immediate values MISMATCH\t\t IMM_B -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_b);
          error_count_++;
        }
        if(tx->imm_b_sel_o == imm_b_sel_e::IMM_B_INCR_PC &&
              tx->op_a_sel_o == op_a_sel_e::OP_A_CURRPC && 
              tx->op_b_sel_o == op_b_sel_e::OP_B_IMM &&
              tx->op_o == alu_op_e::ALU_ADD){
            printf(ANSI_COLOR_GREEN "\t\tALU signals MATCH \t imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
          }
          else{
            printf(ANSI_COLOR_RED "\t\tALU signals MISMATCH \t imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
            error_count_++;
          }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a branch instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
        error_count_++;
      }
      break;
    case STORE_OP:
      if (tx->store_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Store instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra ==  ((in->instr & 0x000F8000) >> 15)  &&  tx->rf_rb == ((in->instr & 0x1F00000) >> 20))
            printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x\n" ANSI_COLOR_RESET, 
                   tx->rf_ra, tx->rf_rb);
        else{
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x\n" ANSI_COLOR_RESET, 
                  tx->rf_ra, tx->rf_rb);
                  error_count_++;
        }
        if(tx->imm_s == ((in->instr & 0x80000000) >> 11) |
                                ((in->instr & 0xFE00000) >> 20) |
                                ((in->instr & 0xF80) >> 7))
          printf(ANSI_COLOR_GREEN "\t\tStore immediate values MATCH\t\t IMM_S -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_s);
        else{
          printf(ANSI_COLOR_RED "\t\tStore immediate values MISMATCH\t\t IMM_S -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_s);
          error_count_++;
        }
        if(tx->imm_a_sel_o == imm_a_sel_e::IMM_A_ZERO &&
            tx->imm_b_sel_o == imm_bmux &&
            tx->op_a_sel_o == op_a_sel_e::OP_A_REG_A && 
            tx->op_b_sel_o == bmux &&
            tx->op_o == alu_op_e::ALU_ADD){
          printf(ANSI_COLOR_GREEN "\t\tALU signals MATCH \t imm_a_sel : %d  imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n"  ANSI_COLOR_RESET,
                  tx->imm_a_sel_o, tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
        }
        else{
          printf(ANSI_COLOR_RED "\t\tALU signals MISMATCH \t imm_a_sel : %d  imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n"  ANSI_COLOR_RESET,
                  tx->imm_a_sel_o, tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
                  error_count_++;
        }
        if(tx->data_req == 1 && tx->data_type == dtype && tx->data_we == 1 && tx->data_sign_ext == 0)
          printf(ANSI_COLOR_GREEN "\t\tData Signals MATCH\t data_req : %d data_type : %d data_we : %d data_sign_ext : %d\n\n"  ANSI_COLOR_RESET,
                 tx->data_req, tx->data_type, tx->data_we, tx->data_sign_ext);
        else{
          printf(ANSI_COLOR_RED "\t\tData Signals MISMATCH\t data_req : %d data_type : %d data_we : %d data_sign_ext : %d\n\n"  ANSI_COLOR_RESET,
                 tx->data_req, tx->data_type, tx->data_we, tx->data_sign_ext);
                 error_count_++;
        }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a store instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
        error_count_++;
      }
      break;
    case UTYPE_OP:
      if(tx->imm_u == (in->instr & 0xFFFFF000) | 0x0){
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: U-TYPE immediate values MATCH\t\t IMM_U -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_u);
        if(tx->rf_ra ==  ((in->instr & 0x000F8000) >> 15)  &&  tx->rf_rb == ((in->instr & 0x1F00000) >> 20) && tx->rf_we == 1 && tx->rf_waddr == (in->instr & 0xF80) >> 7)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t  rd : %x \t rf_we : %d\n" ANSI_COLOR_RESET, 
                  tx->rf_ra, tx->rf_rb, tx->rf_waddr, tx->rf_we);
        else{
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rd : %x \t rf_we : %d\n" ANSI_COLOR_RESET, 
                   tx->rf_ra, tx->rf_rb, tx->rf_waddr, tx->rf_we);
                   error_count_++;
        }
        if(tx->imm_a_sel_o == imm_a_sel_e::IMM_A_ZERO &&
            tx->imm_b_sel_o == imm_b_sel_e::IMM_B_U &&
            tx->op_a_sel_o == op_a_sel_e::OP_A_IMM && 
            tx->op_b_sel_o == op_b_sel_e::OP_B_IMM &&
            tx->op_o == alu_op_e::ALU_ADD){
          printf(ANSI_COLOR_GREEN "\t\tALU signals MATCH \t imm_a_sel : %d  imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_a_sel_o, tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
        }
        else{
          printf(ANSI_COLOR_RED "\t\tALU signals MISMATCH \t imm_a_sel : %d  imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_a_sel_o, tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
                  error_count_++;
        }
      }
      else{
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: U-TYPE immediate values MISMATCH\t\t IMM_U -> 0x%x \t %x\n\n"  ANSI_COLOR_RESET, tx->imm_u, ((in->instr & 0xFFFFF000) >> 12));
        error_count_++;
      }
      break;
    case ITYPE_OP:
      if(tx->imm_i == (msb ? 0xFFFFF000 : 0x0) |
                              ((in->instr & 0xFFF00000) >> 20)){
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: I-TYPE immediate values MATCH\t\t IMM_I -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_i);
        if(tx->rf_ra ==  ((in->instr & 0x000F8000) >> 15)  &&  tx->rf_rb == ((in->instr & 0x1F00000) >> 20) && tx->rf_we == 1 && tx->rf_waddr == (in->instr & 0xF80) >> 7)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t  rd : %x \t rf_we : %d\n" ANSI_COLOR_RESET, 
                  tx->rf_ra, tx->rf_rb, tx->rf_waddr, tx->rf_we);
        else{
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rd : %x \t rf_we : %d\n" ANSI_COLOR_RESET, 
                   tx->rf_ra, tx->rf_rb, tx->rf_waddr, tx->rf_we);
                   error_count_++;
        }
        if(tx->imm_a_sel_o == imm_a_sel_e::IMM_A_ZERO &&
            tx->imm_b_sel_o == imm_b_sel_e::IMM_B_I &&
            tx->op_a_sel_o == op_a_sel_e::OP_A_REG_A && 
            tx->op_b_sel_o == op_b_sel_e::OP_B_IMM &&
            tx->op_o == alu_op){
          printf(ANSI_COLOR_GREEN "\t\tALU signals MATCH \t imm_a_sel : %d  imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_a_sel_o, tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
        }
        else{
          printf(ANSI_COLOR_RED "\t\tALU signals MISMATCH \t imm_a_sel : %d  imm_b_sel : %d  op_a_sel : %d  op_b_sel : %d  op :%d\n\n"  ANSI_COLOR_RESET,
                  tx->imm_a_sel_o, tx->imm_b_sel_o, tx->op_a_sel_o, tx->op_b_sel_o, tx->op_o);
                  error_count_++;
        }
      }
      else{
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: I-TYPE immediate values MISMATCH\t\t IMM_I -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_i);
        error_count_++;
      }
      break;
      case LOAD_OP:
        if(tx->imm_i == (msb ? 0xFFFFF000 : 0x0) |
                              ((in->instr & 0xFFF00000) >> 20)){
          printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Load immediate values MATCH\t\t IMM_I -> 0x%x\n"  ANSI_COLOR_RESET, tx->imm_i);
        }
        else{
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Load immediate values MISMATCH\t\t IMM_I -> 0x%x\n\n"  ANSI_COLOR_RESET, tx->imm_i);
        error_count_++;
        }
      break;
  }


  switch (in->instr) {
    case ILLEGAL:
      if (tx->illegal_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Illegal instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x1F && tx->rf_rb == 0x1F && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else{
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          error_count_++;
        }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect an illegal instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
        error_count_++;
      }
      break;
    case WFI:
      if (tx->wfi_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: WFI instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x5 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else{
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          error_count_++;
        }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a WFI instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
        error_count_++;
      }
      break;
    case ECALL:
      if (tx->ecall_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Syscall instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x0 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else{
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          error_count_++;
        }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a syscall instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
        error_count_++;
      }
      break;
    case EBREAK:
      if (tx->ebreak_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Trap instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x1 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else{
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          error_count_++;
        }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a trap instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
        error_count_++;
      }
      break;
    case DEBUG:
      if (tx->debug_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Debug instruction successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x12 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else{
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          error_count_++;
        }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a debug type instruction\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
        error_count_++;
      }
      break;
    case MRET:
      if (tx->mret_instr) {
        printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: Return from exception successfully detected\t\t Input Instruction -> 0x%x\n" ANSI_COLOR_RESET, in->instr);
        if(tx->rf_ra == 0x0 && tx->rf_rb == 0x2 && tx->rf_we == 0)
          printf(ANSI_COLOR_GREEN "\t\tRF Signals MATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
        else{
          printf(ANSI_COLOR_RED "\t\tRF Signals MISMATCH \t rf_addr_a : %x \t rf_addr_b : %x \t rf_we : %d\n\n" ANSI_COLOR_RESET, tx->rf_ra, tx->rf_rb, tx->rf_we);
          error_count_++;
        }
      } else {
        printf(ANSI_COLOR_RED "DEC SCOREBOARD: Failed to detect a return from exception\t\t Input Instruction -> 0x%x\n\n" ANSI_COLOR_RESET, in->instr);
        error_count_++;
      }
      break;
  }

  if(main_stop_time__ - 9 == main_time__){
    if(error_count_ > 0)
    {
      printf(ANSI_COLOR_RED "DEC SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
    else
    {
      printf(ANSI_COLOR_GREEN "DEC SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
  }

  delete in;
  delete tx;
}
