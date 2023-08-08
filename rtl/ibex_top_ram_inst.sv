`include "prim_assert.sv"
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
module ibex_top_ram_inst import ibex_pkg::*; #(
    parameter bit          SecureIbex        = 1'b0,
    parameter bit          ICache            = 1'b0,
    parameter bit          ICacheECC         = 1'b0,
    parameter bit          ICacheScramble    = 1'b0,
    parameter bit          MemECC            = SecureIbex,
    parameter int unsigned MemDataWidth      = MemECC ? 32 + 7 : 32,
    parameter int unsigned TagSizeECC        = ICacheECC ? (IC_TAG_SIZE + 6) : IC_TAG_SIZE,
    parameter int unsigned NumAddrScrRounds  = ICacheScramble ? 2 : 0,
    parameter int unsigned NumDiffRounds     = NumAddrScrRounds,
    parameter int unsigned BusSizeECC        = ICacheECC ? (BUS_SIZE + 7) : BUS_SIZE,
    parameter int unsigned LineSizeECC       = BusSizeECC * IC_LINE_BEATS
)(
    input  logic                         clk_i,
    input  logic                         rst_ni,
    input  logic [IC_NUM_WAYS-1:0]       ic_tag_req,
    output logic [TagSizeECC-1:0]        ic_tag_rdata [IC_NUM_WAYS],
    input  logic                         ic_tag_write,
    input  logic [IC_INDEX_W-1:0]        ic_tag_addr,
    input  logic [TagSizeECC-1:0]        ic_tag_wdata,
    input  logic [IC_NUM_WAYS-1:0]       ic_data_req,
    input  logic                         ic_data_write,
    input  logic [IC_INDEX_W-1:0]        ic_data_addr,
    input  logic [LineSizeECC-1:0]       ic_data_wdata,
    output logic [LineSizeECC-1:0]       ic_data_rdata [IC_NUM_WAYS],
    input  logic [SCRAMBLE_KEY_W-1:0]    scramble_key_i,
    input  prim_ram_1p_pkg::ram_1p_cfg_t ram_cfg_i,
    input  logic                         scramble_key_valid_i,
    input  logic [MemDataWidth-1:0]      data_wdata_core,
    output logic [31:0]                  data_wdata_o,
    output logic                         scramble_key_valid_d,
    output logic [SCRAMBLE_KEY_W-1:0]    scramble_key_q,
    output logic [SCRAMBLE_NONCE_W-1:0]  scramble_nonce_q,
    output logic                         scramble_key_valid_q,
    output logic [6:0]                   data_wdata_intg_o
);
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on UNDRIVEN */
  ////////////////////////
  // Rams Instantiation //
  ////////////////////////

  if (ICache) begin : gen_rams

    for (genvar way = 0; way < IC_NUM_WAYS; way++) begin : gen_rams_inner

      if (ICacheScramble) begin : gen_scramble_rams

        // SEC_CM: ICACHE.MEM.SCRAMBLE
        // Tag RAM instantiation
        prim_ram_1p_scr #(
          .Width            (TagSizeECC),
          .Depth            (IC_NUM_LINES),
          .DataBitsPerMask  (TagSizeECC),
          .EnableParity     (0),
          .DiffWidth        (TagSizeECC),
          .NumAddrScrRounds (NumAddrScrRounds),
          .NumDiffRounds    (NumDiffRounds)
        ) tag_bank (
          .clk_i,
          .rst_ni,

          .key_valid_i (scramble_key_valid_q),
          .key_i       (scramble_key_q),
          .nonce_i     (scramble_nonce_q),

          .req_i       (ic_tag_req[way]),

          .gnt_o       (),
          .write_i     (ic_tag_write),
          .addr_i      (ic_tag_addr),
          .wdata_i     (ic_tag_wdata),
          .wmask_i     ({TagSizeECC{1'b1}}),
          .intg_error_i(1'b0),

          .rdata_o     (ic_tag_rdata[way]),
          .rvalid_o    (),
          .raddr_o     (),
          .rerror_o    (),
          .cfg_i       (ram_cfg_i)
        );

        // Data RAM instantiation
        prim_ram_1p_scr #(
          .Width              (LineSizeECC),
          .Depth              (IC_NUM_LINES),
          .DataBitsPerMask    (LineSizeECC),
          .ReplicateKeyStream (1),
          .EnableParity       (0),
          .DiffWidth          (LineSizeECC),
          .NumAddrScrRounds   (NumAddrScrRounds),
          .NumDiffRounds      (NumDiffRounds)
        ) data_bank (
          .clk_i,
          .rst_ni,

          .key_valid_i (scramble_key_valid_q),
          .key_i       (scramble_key_q),
          .nonce_i     (scramble_nonce_q),

          .req_i       (ic_data_req[way]),

          .gnt_o       (),
          .write_i     (ic_data_write),
          .addr_i      (ic_data_addr),
          .wdata_i     (ic_data_wdata),
          .wmask_i     ({LineSizeECC{1'b1}}),
          .intg_error_i(1'b0),

          .rdata_o     (ic_data_rdata[way]),
          .rvalid_o    (),
          .raddr_o     (),
          .rerror_o    (),
          .cfg_i       (ram_cfg_i)
        );

        `ifdef INC_ASSERT
          // Sample scramble key whenever it is valid for use in the assertions below.  This may be
          // redundant with the sampling performed in the actual design, but that is okay because
          // the assertions exist to check the correct functioning of the design.
          logic [SCRAMBLE_KEY_W-1:0] sampled_scramble_key;
          always_ff @(posedge clk_i, negedge rst_ni) begin
            if (!rst_ni) begin
              sampled_scramble_key <= 'x;
            end else if (scramble_key_valid_i) begin
              sampled_scramble_key <= scramble_key_i;
            end
          end

          // Ensure that when a scramble key is received, it is correctly applied to the icache
          // scrambled memory primitives.  The upper bound in the cycle ranges below is not exact,
          // but it should not take more than 10 cycles.
          `ASSERT(ScrambleKeyAppliedAtTagBank_A,
                  scramble_key_valid_i
                  |-> ##[0:10]
                  tag_bank.key_valid_i && (tag_bank.key_i == sampled_scramble_key),
                  clk_i, !rst_ni
          )
          `ASSERT(ScrambleKeyAppliedAtDataBank_A,
                  scramble_key_valid_i
                  |-> ##[0:10]
                  data_bank.key_valid_i && (data_bank.key_i == sampled_scramble_key),
                  clk_i, !rst_ni
          )
        `endif

      end else begin : gen_noscramble_rams

        // Tag RAM instantiation
        prim_ram_1p #(
          .Width            (TagSizeECC),
          .Depth            (IC_NUM_LINES),
          .DataBitsPerMask  (TagSizeECC)
        ) tag_bank (
          .clk_i,

          .req_i       (ic_tag_req[way]),

          .write_i     (ic_tag_write),
          .addr_i      (ic_tag_addr),
          .wdata_i     (ic_tag_wdata),
          .wmask_i     ({TagSizeECC{1'b1}}),

          .rdata_o     (ic_tag_rdata[way]),
          .cfg_i       (ram_cfg_i)
        );

        // Data RAM instantiation
        prim_ram_1p #(
          .Width              (LineSizeECC),
          .Depth              (IC_NUM_LINES),
          .DataBitsPerMask    (LineSizeECC)
        ) data_bank (
          .clk_i,

          .req_i       (ic_data_req[way]),

          .write_i     (ic_data_write),
          .addr_i      (ic_data_addr),
          .wdata_i     (ic_data_wdata),
          .wmask_i     ({LineSizeECC{1'b1}}),

          .rdata_o     (ic_data_rdata[way]),
          .cfg_i       (ram_cfg_i)
        );

      end
    end

  end else begin : gen_norams

    prim_ram_1p_pkg::ram_1p_cfg_t unused_ram_cfg;
    logic unused_ram_inputs;

    assign unused_ram_cfg    = ram_cfg_i;
    assign unused_ram_inputs = (|ic_tag_req) & ic_tag_write & (|ic_tag_addr) & (|ic_tag_wdata) &
                               (|ic_data_req) & ic_data_write & (|ic_data_addr) & (|ic_data_wdata) &
                               (|scramble_key_q) & (|scramble_nonce_q) & scramble_key_valid_q &
                               scramble_key_valid_d & (|scramble_nonce_q) &
                               (|NumAddrScrRounds);

    assign ic_tag_rdata      = '{default:'b0};
    assign ic_data_rdata     = '{default:'b0};

  end

  assign data_wdata_o = data_wdata_core[31:0];

  if (MemECC) begin : gen_mem_wdata_ecc
    prim_buf #(.Width(7)) u_prim_buf_data_wdata_intg (
      .in_i (data_wdata_core[38:32]),
      .out_o(data_wdata_intg_o)
    );
  end else begin : gen_no_mem_ecc
    assign data_wdata_intg_o = '0;
  end

endmodule
