#include "Vdr32e_branch_predict.h"
// #include "Vdr32e_branch_predict___024unit.h"
#include <chrono>
#include <ctime>
#include <random>
#include "../testb.h"
#include "Vdr32e_branch_predict_dr32e_pkg.h"
#include "dr32e_branch_predict_tbf.h"
using namespace std;
uint32_t getRandomOpcode(){
  int arr[7] = {JAL, BEQ, BNE, BLT, BGE, BLTU, BGEU};
  int index = rand() % 7;
  return arr[index];
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
  if(inst == JAL){
    randomBits3 = dis3(gen) << 12;
    result = (result & 0xFFFFE0FF) | randomBits3;
  }
  return result;
}

BPSequencer::BPSequencer() {}

BPInTxn *BPSequencer::generateTxn(int clocks) {
  BPInTxn *tx = new BPInTxn();
  uint32_t opcode;
  opcode = getRandomOpcode();
  tx->instr = getScrambledInstr(opcode);
  tx->pc = ((clocks / 10) + 1) * 4;
  tx->valid = 1;
}
