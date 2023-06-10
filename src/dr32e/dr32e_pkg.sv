package dr32e_pkg;

  ////////////////////
  // ALU operations //
  ////////////////////

typedef enum logic [6:0] {
  // Arithmetics
  ALU_ADD,
  ALU_SUB,

  // Logics
  ALU_XOR,
  ALU_OR,
  ALU_AND,

  // Shifts
  ALU_SRA,
  ALU_SRL,
  ALU_SLL,

  // Comparisons
  ALU_LT,
  ALU_LTU,
  ALU_GE,
  ALU_GEU,
  ALU_EQ,
  ALU_NE,

  // Set lower than
  ALU_SLT,
  ALU_SLTU
} alu_op_e;

endpackage
