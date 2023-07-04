#include "cve2_dec_tbf.h"
#include "Vcve2_dec.h"
#include "Vcve2_dec___024unit.h"
#include "Vcve2_dec_cve2_pkg.h"
#include "testb.h"
DECSequencer::DECSequencer() {}

DECInTxn *DECSequencer::generateTxn() {
  DECInTxn *tx = new DECInTxn();
  vluint64_t cycle_num = main_time__;
  switch(cycle_num){
    case 20:
        tx->instr = ILLEGAL;
        break;
    case 40:
        tx->instr = JUMP;
        break;
    case 60:
        tx->instr = BRANCH;
        break;
    case 80:
        tx->instr = WFI;
        break;
    case 100: 
        tx->instr = ECALL;
        break;
    case 120:
        tx->instr = EBREAK;
        break;
    case 140:
        tx->instr = DEBUG;
        break;
    case 160:
        tx->instr = MRET;
        break;
    case 180:
        tx->instr = CSR;
        break;
    case 200:
        tx->instr = STORE;
        break;
  }
  //tx->op = DECInTxn::Operation(getRandomValue());
  /*if(tx->op == DECInTxn::Operation::sltu || tx->op == DECInTxn::Operation::geu || tx->op == DECInTxn::Operation::ltu){
    tx->a = genUnsignedRandom() % UNSIGNED_CEIL;
    tx->b = genUnsignedRandom() % UNSIGNED_CEIL;
  }
  else{
    tx->a = genSignedRandom() % SIGNED_CEIL;
    tx->b = genSignedRandom() % SIGNED_CEIL;
  }*/
  return tx;
}