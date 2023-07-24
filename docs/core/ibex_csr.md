# Entity: ibex_csr

- **File**: ibex_csr.sv

## Diagram

![Diagram](../svg/ibex_csr.svg "Diagram")

## Generics

| Generic name | Type            | Value | Description |
| ------------ | --------------- | ----- | ----------- |
| Width        | int unsigned    | 32    |             |
| ShadowCopy   | bit             | 1'b0  |             |
| Width        | bit [Width-1:0] | '0    |             |

## Ports

| Port name  | Direction | Type        | Description |
| ---------- | --------- | ----------- | ----------- |
| clk_i      | input     |             |             |
| rst_ni     | input     |             |             |
| wr_data_i  | input     | [Width-1:0] |             |
| wr_en_i    | input     |             |             |
| rd_data_o  | output    | [Width-1:0] |             |
| rd_error_o | output    |             |             |

## Signals

| Name    | Type              | Description |
| ------- | ----------------- | ----------- |
| rdata_q | logic [Width-1:0] |             |

## Processes

- unnamed: ( @(posedge clk_i or negedge rst_ni) )
  - **Type:** always_ff
