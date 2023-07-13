#include <iostream>
#include <random>
#include <string>

#include "Vibex_compressed_decoder.h"
// #include "Vibex_compressed_decoder___024unit.h"
#include "ibex_compressed_decoder_tbf.h"
#include "testb.h"

std::string generateBinary(int len, bool avoidAllZeros = false) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0, 1);

  std::string randomString;
  bool allZeros = true;
  do {
    randomString.clear();
    allZeros = true;
    for (int i = 0; i < len; ++i) {
      int randomDigit = dis(gen);
      randomString += std::to_string(randomDigit);
      if (randomDigit != 0) {
        allZeros = false;
      }
    }
  } while (avoidAllZeros && allZeros);

  return randomString;
}

CompressedDecDriver::CompressedDecDriver(TESTB<Vibex_compressed_decoder> *dut) {
  this->dut = dut;
}

void CompressedDecDriver::drive(CompressedDecInTxn *tx) {
  if (tx != NULL) {
    if (CompressedDecInTxn::C_ADDI4SPN <= tx->instr && tx->instr <= CompressedDecInTxn::C_SWSP) {
      switch (tx->instr) {
        case CompressedDecInTxn::C_ADDI4SPN:
          dut->m_core->instr_i = std::stoi("000" + generateBinary(8, true) + generateBinary(3) + "00", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_ADDI4SPN;
          break;
        case CompressedDecInTxn::C_LW:
          dut->m_core->instr_i = std::stoi("010" + generateBinary(11) + "00", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_LW;
          break;
        case CompressedDecInTxn::C_SW:
          dut->m_core->instr_i = std::stoi("110" + generateBinary(11) + "00", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_SW;
          break;
        case CompressedDecInTxn::C_NOP:
          dut->m_core->instr_i = std::stoi("000" + generateBinary(1) + "00000" + generateBinary(5) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_NOP;
          break;
        case CompressedDecInTxn::C_ADDI:
          dut->m_core->instr_i = std::stoi("000" + generateBinary(1) + generateBinary(5, true) + generateBinary(5) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_ADDI;
          break;
        case CompressedDecInTxn::C_JAL:
          dut->m_core->instr_i = std::stoi("001" + generateBinary(11) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_JAL;
          break;
        case CompressedDecInTxn::C_J:
          dut->m_core->instr_i = std::stoi("101" + generateBinary(11) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_J;
          break;
        case CompressedDecInTxn::C_LI:
          dut->m_core->instr_i = std::stoi("010" + generateBinary(1) + generateBinary(5, true) + generateBinary(5) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_LI;
          break;
        case CompressedDecInTxn::C_LUI:
          dut->m_core->instr_i = std::stoi("011" + generateBinary(1) + generateBinary(5, true) + generateBinary(5, true) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_LUI;
          break;
        case CompressedDecInTxn::C_ADDI16SP:
          dut->m_core->instr_i = std::stoi("011" + generateBinary(1) + "00010" + generateBinary(5, true) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_ADDI16SP;
          break;
        case CompressedDecInTxn::C_SRLI:
          dut->m_core->instr_i = std::stoi("100000" + generateBinary(3) + generateBinary(5, true) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_SRLI;
          break;
        case CompressedDecInTxn::C_SRAI:
          dut->m_core->instr_i = std::stoi("100001" + generateBinary(3) + generateBinary(5, true) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_SRAI;
          break;
        case CompressedDecInTxn::C_ANDI:
          dut->m_core->instr_i = std::stoi("100" + generateBinary(1) + "10" + generateBinary(3) + generateBinary(5) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_ANDI;
          break;
        case CompressedDecInTxn::C_SUB:
          dut->m_core->instr_i = std::stoi("100011" + generateBinary(3) + "00" + generateBinary(3) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_SUB;
          break;
        case CompressedDecInTxn::C_XOR:
          dut->m_core->instr_i = std::stoi("100011" + generateBinary(3) + "01" + generateBinary(3) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_XOR;
          break;
        case CompressedDecInTxn::C_OR:
          dut->m_core->instr_i = std::stoi("100011" + generateBinary(3) + "10" + generateBinary(3) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_OR;
          break;
        case CompressedDecInTxn::C_AND:
          dut->m_core->instr_i = std::stoi("100011" + generateBinary(3) + "11" + generateBinary(3) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_AND;
          break;
        case CompressedDecInTxn::C_BEQZ:
          dut->m_core->instr_i = std::stoi("110" + generateBinary(11) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_BEQZ;
          break;
        case CompressedDecInTxn::C_BNEZ:
          dut->m_core->instr_i = std::stoi("111" + generateBinary(11) + "01", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_BNEZ;
          break;
        case CompressedDecInTxn::C_SLLI:
          dut->m_core->instr_i = std::stoi("0000" + generateBinary(5) + generateBinary(5, true) + "10", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_SLLI;
          break;
        case CompressedDecInTxn::C_LWSP:
          dut->m_core->instr_i = std::stoi("0100" + generateBinary(5, true) + generateBinary(5) + "10", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_LWSP;
          break;
        case CompressedDecInTxn::C_MV:
          dut->m_core->instr_i = std::stoi("1000" + generateBinary(5) + generateBinary(5, true) + "10", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_MV;
          break;
        case CompressedDecInTxn::C_JR:
          dut->m_core->instr_i = std::stoi("1000" + generateBinary(5, true) + "0000010", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_JR;
          break;
        case CompressedDecInTxn::C_ADD:
          dut->m_core->instr_i = std::stoi("1001" + generateBinary(5) + generateBinary(5, true) + "10", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_ADD;
          break;
        case CompressedDecInTxn::C_EBREAK:
          dut->m_core->instr_i = std::stoi("1001000000000010", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_EBREAK;
          break;
        case CompressedDecInTxn::C_JALR:
          dut->m_core->instr_i = std::stoi("1001" + generateBinary(5, true) + "0000010", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_JALR;
          break;
        case CompressedDecInTxn::C_SWSP:
          dut->m_core->instr_i = std::stoi("1100" + generateBinary(5, true) + generateBinary(5) + "10", nullptr, 2);
          dut->m_core->enum_dpi = CompressedDecInTxn::C_SWSP;
          break;
        default:
          break;
      }
    } else if (CompressedDecInTxn::C_FLD <= tx->instr <= CompressedDecInTxn::C_SDSP) {
      switch (tx->instr) {
        case CompressedDecInTxn::C_FLD:
        case CompressedDecInTxn::C_LQ:
          dut->m_core->instr_i = std::stoi("001" + generateBinary(11) + "00", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::C_FLW:
        case CompressedDecInTxn::C_LD:
          dut->m_core->instr_i = std::stoi("011" + generateBinary(11) + "00", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::C_FSD:
        case CompressedDecInTxn::C_SQ:
          dut->m_core->instr_i = std::stoi("101" + generateBinary(11) + "00", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::C_FSW:
        case CompressedDecInTxn::C_SD:
          dut->m_core->instr_i = std::stoi("111" + generateBinary(11) + "00", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::C_SUBW:
          dut->m_core->instr_i = std::stoi("100111" + generateBinary(3) + "00" + generateBinary(3) + "01", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::C_ADDW:
          dut->m_core->instr_i = std::stoi("100111" + generateBinary(3) + "01" + generateBinary(3) + "01", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::C_FLDSP:
        case CompressedDecInTxn::C_LQSP:
          dut->m_core->instr_i = std::stoi("001" + generateBinary(11) + "10", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::C_FLWSP:
        case CompressedDecInTxn::C_LDSP:
          dut->m_core->instr_i = std::stoi("011" + generateBinary(11) + "10", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::C_FSDSP:
        case CompressedDecInTxn::C_SQSP:
          dut->m_core->instr_i = std::stoi("101" + generateBinary(11) + "10", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::C_FSWSP:
        case CompressedDecInTxn::C_SDSP:
          dut->m_core->instr_i = std::stoi("111" + generateBinary(11) + "10", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        default:
          break;
      }
    } else {
      switch (tx->instr) {
        case CompressedDecInTxn::ILLEGAL0:
          dut->m_core->instr_i = std::stoi("0000000000000000", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::ILLEGAL1:
          dut->m_core->instr_i = std::stoi("1000000000000000", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::ILLEGAL2:
          dut->m_core->instr_i = std::stoi("0110" + generateBinary(5) + "0000001", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::ILLEGAL3:
          dut->m_core->instr_i = std::stoi("1001" + generateBinary(10) + "01", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::ILLEGAL4:
          dut->m_core->instr_i = std::stoi("1001110001000001", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::ILLEGAL5:
          dut->m_core->instr_i = std::stoi("1001110001100001", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::ILLEGAL6:
          dut->m_core->instr_i = std::stoi("0001" + generateBinary(10) + "10", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::ILLEGAL7:
          dut->m_core->instr_i = std::stoi("010000000" + generateBinary(5) + "10", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::ILLEGAL8:
          dut->m_core->instr_i = std::stoi("1000000000000010", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::ILLEGAL9:
          dut->m_core->instr_i = std::stoi("00000000000" + generateBinary(3) + "00", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        case CompressedDecInTxn::UNCOMPRESSED:
          dut->m_core->instr_i = std::stoi(generateBinary(14) + "11", nullptr, 2);
          dut->m_core->enum_dpi = tx->instr;
          break;
        default:
          break;
      }
    }
  }
}
