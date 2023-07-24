# Entity: ibex_branch_predict

- **File**: ibex_branch_predict.sv

## Diagram

![Diagram](../svg/ibex_branch_predict.svg "Diagram")

## Ports

| Port name              | Direction | Type   | Description |
| ---------------------- | --------- | ------ | ----------- |
| clk_i                  | input     |        |             |
| rst_ni                 | input     |        |             |
| fetch_rdata_i          | input     | [31:0] |             |
| fetch_pc_i             | input     | [31:0] |             |
| fetch_valid_i          | input     |        |             |
| predict_branch_taken_o | output    |        |             |
| predict_branch_pc_o    | output    | [31:0] |             |

## Signals

| Name          | Type          | Description |
| ------------- | ------------- | ----------- |
| imm_j_type    | logic [31:0]  |             |
| imm_b_type    | logic [31:0]  |             |
| imm_cj_type   | logic [31:0]  |             |
| imm_cb_type   | logic [31:0]  |             |
| branch_imm    | logic [31:0]  |             |
| instr         | logic [31:0]  |             |
| instr_j       | logic         |             |
| instr_b       | logic         |             |
| instr_cj      | logic         |             |
| instr_cb      | logic         |             |
| instr_b_taken | logic         |             |
| assign        | fetch_valid_i |             |

## Processes

- unnamed: ( )
  - **Type:** always_comb
