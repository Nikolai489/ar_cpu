// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VDR32E_DEC_H_
#define VERILATED_VDR32E_DEC_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vdr32e_dec__Syms;
class Vdr32e_dec___024root;
class VerilatedVcdC;
class Vdr32e_dec_dr32e_pkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vdr32e_dec VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vdr32e_dec__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_OUT8(&illegal_insn_o,0,0);
    VL_OUT8(&ebrk_insn_o,0,0);
    VL_OUT8(&mret_insn_o,0,0);
    VL_OUT8(&dret_insn_o,0,0);
    VL_OUT8(&ecall_insn_o,0,0);
    VL_OUT8(&wfi_insn_o,0,0);
    VL_OUT8(&jump_set_o,0,0);
    VL_IN8(&branch_taken_i,0,0);
    VL_OUT8(&icache_inval_o,0,0);
    VL_IN8(&instr_first_cycle_i,0,0);
    VL_IN8(&illegal_c_insn_i,0,0);
    VL_OUT8(&imm_a_mux_sel_o,0,0);
    VL_OUT8(&imm_b_mux_sel_o,2,0);
    VL_OUT8(&bt_a_mux_sel_o,1,0);
    VL_OUT8(&bt_b_mux_sel_o,2,0);
    VL_OUT8(&rf_wdata_sel_o,0,0);
    VL_OUT8(&rf_we_o,0,0);
    VL_OUT8(&rf_raddr_a_o,4,0);
    VL_OUT8(&rf_raddr_b_o,4,0);
    VL_OUT8(&rf_waddr_o,4,0);
    VL_OUT8(&rf_ren_a_o,0,0);
    VL_OUT8(&rf_ren_b_o,0,0);
    VL_OUT8(&alu_operator_o,6,0);
    VL_OUT8(&alu_op_a_mux_sel_o,1,0);
    VL_OUT8(&alu_op_b_mux_sel_o,0,0);
    VL_OUT8(&alu_multicycle_o,0,0);
    VL_OUT8(&mult_en_o,0,0);
    VL_OUT8(&div_en_o,0,0);
    VL_OUT8(&mult_sel_o,0,0);
    VL_OUT8(&div_sel_o,0,0);
    VL_OUT8(&multdiv_operator_o,1,0);
    VL_OUT8(&multdiv_signed_mode_o,1,0);
    VL_OUT8(&csr_access_o,0,0);
    VL_OUT8(&csr_op_o,1,0);
    VL_OUT8(&data_req_o,0,0);
    VL_OUT8(&data_we_o,0,0);
    VL_OUT8(&data_type_o,1,0);
    VL_OUT8(&data_sign_extension_o,0,0);
    VL_OUT8(&jump_in_dec_o,0,0);
    VL_OUT8(&branch_in_dec_o,0,0);
    VL_IN(&instr_rdata_i,31,0);
    VL_IN(&instr_rdata_alu_i,31,0);
    VL_OUT(&imm_i_type_o,31,0);
    VL_OUT(&imm_s_type_o,31,0);
    VL_OUT(&imm_b_type_o,31,0);
    VL_OUT(&imm_u_type_o,31,0);
    VL_OUT(&imm_j_type_o,31,0);
    VL_OUT(&zimm_rs1_type_o,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vdr32e_dec_dr32e_pkg* const __PVT__dr32e_pkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vdr32e_dec___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vdr32e_dec(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vdr32e_dec(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vdr32e_dec();
  private:
    VL_UNCOPYABLE(Vdr32e_dec);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
