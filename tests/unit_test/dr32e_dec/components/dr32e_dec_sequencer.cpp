#include "dr32e_dec_tbf.h"

#include "Vdr32e_dec.h"
//#include "Vdr32e_dec___024unit.h"
#include "Vdr32e_dec_dr32e_pkg.h"
#include "../testb.h"
#define TIMEUNIT 10
DECSequencer::DECSequencer() {}

DECInTxn *DECSequencer::generateTxn(int clocks) {
  DECInTxn *tx = new DECInTxn();
  uint32_t seqData[12] = {ILLEGAL, JUMP, BRANCH, WFI, ECALL, EBREAK, DEBUG, MRET, CSR, STORE, UTYPE, ITYPE};
  vluint64_t cycle_num = clocks / TIMEUNIT;
  tx->instr = seqData[cycle_num];
  return tx;
}