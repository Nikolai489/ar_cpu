#include "dr32e_lsu_tbf.h"

int32_t prev_rdata, prev_wdata, prev_addr;
int offset;

LSUScoreboard::LSUScoreboard(){
  error_count_ = 0;
}

void LSUScoreboard::writeIn(LSUInTxn *tx) {
  in_q.push_back(tx);
}

void LSUScoreboard::writeOut(LSUOutTxn *tx) {
  if (in_q.empty()) {
    printf("Fatal error in LSU Scoreboard: empty transaction queue");
    exit(1);
  }
  LSUInTxn *in;
  in = in_q.front();
  in_q.pop_front();
  //printf("Data: %x \t %x \n", in->wdata, tx->wdata_o);
  if(in->rdata != 0){
    if(in->rdata == tx->rdata_o){
      printf(ANSI_COLOR_GREEN "LSU SCOREBOARD: Read Data MATCH \t Data In : %x \t Data Out : %x\n" ANSI_COLOR_RESET, in->rdata, tx->rdata_o);
    }
    else{
      printf(ANSI_COLOR_RED "LSU SCOREBOARD: Read Data MISMATCH \t Data In : %x \t Data Out : %x\n" ANSI_COLOR_RESET, in->rdata, tx->rdata_o);
      error_count_++;
    }
    if(in->adder_result != 0){
      if((in->adder_result & 0xFFFFFFFC) == tx->addr_o)
        printf(ANSI_COLOR_GREEN "\t\t Address WORD ALIGNED \t Addr : %x\n\n" ANSI_COLOR_RESET, tx->addr_o);
      else{
        printf(ANSI_COLOR_RED "\t\t Address WORD MISALIGNED \t Addr : %x\n\n" ANSI_COLOR_RESET, in->adder_result & 0xFFFFFFFC);
        error_count_++;
      }
      }
  }
  if(in->wdata != 0){
    offset = in->adder_result & 0x3;
    switch(offset){
      case 0: 
        break;
      case 1:
        in->wdata = ((in->wdata & 0xFFFFFF) << 8) | ((in->wdata & 0xFF000000) >> 24);
        break;
      case 2:
        in->wdata = ((in->wdata & 0xFFFF) << 16) | ((in->wdata & 0xFFFF0000) >> 16);
        break;
      case 3:
        in->wdata = ((in->wdata & 0xFF) << 24) | ((in->wdata & 0xFFFFFF00) >> 8);
        break;
    }
    if(in->wdata == tx->wdata_o)
      printf(ANSI_COLOR_GREEN "LSU SCOREBOARD: Write Data MATCH \t Write_Data In : %x \t Write_Data Out : %x \n" ANSI_COLOR_RESET, in->wdata, tx->wdata_o);
    else{
      printf(ANSI_COLOR_RED "LSU SCOREBOARD: Write Data MISMATCH \t Write_Data In : %x \t Write_Data Out : %x \n" ANSI_COLOR_RESET, in->wdata, tx->wdata_o);
      error_count_++;
    }
    if(in->adder_result != 0){
      if((in->adder_result & 0xFFFFFFFC) == tx->addr_o)
        printf(ANSI_COLOR_GREEN "\t\t Address WORD ALIGNED \t Addr : %x\n\n" ANSI_COLOR_RESET, tx->addr_o);
      else{
        printf(ANSI_COLOR_RED "\t\t Address WORD MISALIGNED \t Addr : %x\n\n" ANSI_COLOR_RESET, in->adder_result & 0xFFFFFFFC);
        error_count_++;
      }
      }
  }
  //prev_rdata = in->rdata;
  //prev_wdata = in->wdata;
  //prev_addr = in->adder_result;

    if(main_stop_time__ - 2 == main_time__){
    if(error_count_ > 0)
    {
      printf(ANSI_COLOR_RED "LSU SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
    else
    {
      printf(ANSI_COLOR_GREEN "LSU SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
  }
  delete in;
  delete tx;
}
