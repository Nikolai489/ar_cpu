#include "dr32e_branch_predict_tbf.h"

BPScoreboard::BPScoreboard() {
  error_count_ = 0;
}
void BPScoreboard::writeIn(BPInTxn *tx) {
  in_q.push_back(tx);
}

void BPScoreboard::writeOut(BPOutTxn *tx) {
  uint32_t imm_b, imm_j, imm_cb, imm_cj, branch_imm, opcode;
  int branch_instr, jump_instr, cbranch_instr, cjump_instr, taken;

  if (in_q.empty()) {
    printf("Fatal error in BP Scoreboard: empty transaction queue");
    exit(1);
  }

  BPInTxn *in;
  in = in_q.front();
  in_q.pop_front();

  branch_instr = 0;
  jump_instr = 0;
  cbranch_instr = 0;
  cjump_instr = 0;
  opcode = in->instr & 0x7F;
  imm_b =
        ((in->instr & 0x80000000) ? 0xFFFF7000 : 0x0) |     
        ((in->instr & 0x40000000) >> 20) |     
        ((in->instr & 0x00000080) << 4) |      
        ((in->instr & 0x3E000000) >> 20) |     
        ((in->instr & 0x00000F00) >> 7) |      
        0x00000000;
  imm_j =
        ((in->instr & 0x80000000) ? 0xFFF00000 : 0x0) |
        ((in->instr & 0x000FF000)) |
        ((in->instr & 0x00100000) >> 9) |
        ((in->instr & 0x7FE00000) >> 20) |
        0x00000000;
  imm_cj = 
        ((in->instr & 0x1000)? 0xFFFFFC00 : 0x0) |
        ((in->instr & 0x100) << 1) |
        ((in->instr & 0x600) >> 2) |
        ((in->instr & 0x40)) |
        ((in->instr & 0x80) >> 2) |
        ((in->instr & 0x4) << 1) |
        ((in->instr & 0x800) >> 8) |
        ((in->instr & 0x38) >> 2) |
        0x00000000;
  imm_cb = 
        ((in->instr & 0x1000) ? 0xFFFFFF00 : 0x0) |
        ((in->instr & 0x60) << 1) |
        ((in->instr & 0x4) << 2) |
        ((in->instr & 0xC00) >> 7 ) |
        ((in->instr & 0x18) >> 2) |
        0x00000000;

  if((in->instr & 0x3) & (((in->instr & 0xE000) >> 13) == 0x6 | ((in->instr & 0xE000) >> 13) == 0x7)){
    cbranch_instr = 1;
    branch_imm = imm_cb;
  }
  else if((in->instr & 0x3) & (((in->instr & 0xE000) >> 13) == 0x5 | ((in->instr & 0xE000) >> 13) == 0x1)){
    cjump_instr = 1;
    branch_imm = imm_cj;
  }
  else if(opcode == BRANCH){
    branch_instr = 1;
    branch_imm = imm_b;
  }
  if(opcode == 0x6F){
    jump_instr = 1;
    branch_imm = imm_j;
  }
  taken = (branch_instr & (imm_b & 0x80000000)) | (cbranch_instr & (imm_cb & 0x80000000));
  if(tx->branch_taken == (in->valid & (jump_instr | cjump_instr | taken))){
    if(tx->branch_taken)
      printf(ANSI_COLOR_GREEN "BP SCOREBOARD : Branch prediction MATCH \t EXPECTED : TAKEN \t ACTUAL: TAKEN \t INSTR : %x\n" ANSI_COLOR_RESET,in->instr);
    else
      printf(ANSI_COLOR_GREEN "BP SCOREBOARD : Branch prediction MATCH \t EXPECTED : NOT TAKEN \t ACTUAL: NOT TAKEN \t INSTR : %x\n" ANSI_COLOR_RESET,in->instr);
  }
  else{
    if(tx->branch_taken)
      printf(ANSI_COLOR_RED "BP SCOREBOARD : Branch prediction MISMATCH \t EXPECTED : TAKEN \t ACTUAL: NOT TAKEN \t INSTR : %x\n" ANSI_COLOR_RESET,in->instr);
    else
      printf(ANSI_COLOR_RED "BP SCOREBOARD : Branch prediction MISMATCH \t EXPECTED : NOT TAKEN \t ACTUAL: TAKEN \t INSTR : %x\n" ANSI_COLOR_RESET,in->instr);
    error_count_++;
  }
  if(tx->branch_pc == in->pc + branch_imm)
    printf(ANSI_COLOR_GREEN "\t\tTarget PC MATCH \t EXPECTED : %x \t ACTUAL : %x\n\n" ANSI_COLOR_RESET, tx->branch_pc, in->pc + branch_imm);
  else{
    printf(ANSI_COLOR_RED "\t\tTarget PC MISMATCH \t EXPECTED : %x \t ACTUAL : %x\n\n" ANSI_COLOR_RESET, tx->branch_pc, in->pc + branch_imm);
    error_count_++;
  }
  if(main_stop_time__ - 9 == main_time__){
    if(error_count_ > 0)
    {
      printf(ANSI_COLOR_RED "BP SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
    else
    {
      printf(ANSI_COLOR_GREEN "BP SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
  }
  delete in;
  delete tx;
}
