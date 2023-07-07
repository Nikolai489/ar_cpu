#include "dr32e_dec_tbf.h"
#include <random>
#include "Vdr32e_dec.h"
//#include "Vdr32e_dec___024unit.h"
#include "Vdr32e_dec_dr32e_pkg.h"
//#define TIMEUNIT 10
using namespace std;

uint32_t getRandomOp(){
  uint32_t arr1[] = {ILLEGAL, WFI, ECALL, EBREAK, DEBUG, MRET};
  uint32_t arr2[] = {JUMP, BRANCH, STORE, UTYPE, ITYPE, LOAD};
  int index = rand() % 6;
  if(main_time__ % 200 == 0)
    return arr1[index];
  else
    return arr2[index];
}

uint32_t getScrambledInstr(uint32_t inst){
  unsigned int randomBits1, randomBits2, randomBits3, result;
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<unsigned int> dis1(0, 0xFFFF);
  uniform_int_distribution<unsigned int> dis2(0, 0x1F);
  uniform_int_distribution<unsigned int> dis3(0, 0x7);
  randomBits1 = dis1(gen) << 15;
  result = (inst & 0x00007FFF) | randomBits1;
  randomBits2 = dis2(gen) << 7;
  result = (result & 0xFFFF83FF) | randomBits2;
  randomBits3 = dis3(gen) << 12;
  if(main_time__ % 200 == 0)
    result = inst;
  else{
    switch (inst & 0x0000007F)
    {
    case JUMP_OP:
      result = (result & 0xFFFFE0FF) | randomBits3;
      break;
    case UTYPE_OP:
      result = (result & 0xFFFFE0FF) | randomBits3;
      break;
    case BRANCH_OP:
      if(randomBits3 == 0x2000 || randomBits3 == 0x3000){
        randomBits3 = 0x1000;
      }
      result = (result & 0xFFFFE0FF) | randomBits3;
      break;
    case ITYPE_OP:
      if(randomBits3 == 0x1000 || randomBits3 == 0x5000)
        randomBits3 = 0x3000;
      result = (result & 0xFFFFE0FF) | randomBits3;
      break;
    case LOAD_OP:
      if(randomBits3 == 0x3000 || randomBits3 == 0x6000 || randomBits3 == 0x7000)
        randomBits3 = 0x4000;
      result = (result & 0xFFFFE0FF) | randomBits3;
      break;
    case STORE_OP:
      if(randomBits3 > 0x2000)
        randomBits3 = 0x2000;
      result = (result & 0xFFFFE0FF) | randomBits3; 
      break;
    }
  }
  return result;
}
DECSequencer::DECSequencer() {}

DECInTxn *DECSequencer::generateTxn() {
  DECInTxn *tx = new DECInTxn();
  int instr_type;
  instr_type = getRandomOp();
  tx->instr = getScrambledInstr(instr_type);
  return tx;
}