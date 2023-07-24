# Entity: ibex_compressed_decoder

- **File**: ibex_compressed_decoder.sv

## Diagram

![Diagram](../svg/ibex_compressed_decoder.svg "Diagram")

## Ports

| Port name       | Direction | Type   | Description |
| --------------- | --------- | ------ | ----------- |
| clk_i           | input     |        |             |
| rst_ni          | input     |        |             |
| valid_i         | input     |        |             |
| instr_i         | input     | [31:0] |             |
| instr_o         | output    | [31:0] |             |
| is_compressed_o | output    |        |             |
| illegal_instr_o | output    |        |             |

## Signals

| Name         | Type  | Description |
| ------------ | ----- | ----------- |
| unused_valid | logic |             |

## Processes

- unnamed: ( )
  - **Type:** always_comb
