// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

`include "dv_fcov_macros.svh"
`include "ibex_pmp_body.sv"
module ibex_pmp #(
  // Granularity of NAPOT access,
  // 0 = No restriction, 1 = 8 byte, 2 = 16 byte, 3 = 32 byte, etc.
  parameter int unsigned PMPGranularity = 0,
  // Number of access channels (e.g. i-side + d-side)
  parameter int unsigned PMPNumChan     = 2,
  // Number of implemented regions
  parameter int unsigned PMPNumRegions  = 4
) (
  // Interface to CSRs
  input  ibex_pkg::pmp_cfg_t      csr_pmp_cfg_i     [PMPNumRegions],
  input  logic [33:0]             csr_pmp_addr_i    [PMPNumRegions],
  input  ibex_pkg::pmp_mseccfg_t  csr_pmp_mseccfg_i,

  input  ibex_pkg::priv_lvl_e     priv_mode_i    [PMPNumChan],
  // Access checking channels
  input  logic [33:0]             pmp_req_addr_i [PMPNumChan],
  input  ibex_pkg::pmp_req_e      pmp_req_type_i [PMPNumChan],
  output logic                    pmp_req_err_o  [PMPNumChan]

);

  import ibex_pkg::*;

ibex_pmp_body #(
  .PMPGranularity(PMPGranularity),
  .PMPNumChan(PMPNumChan),
  .PMPNumRegions(PMPNumRegions)
)
pmp_body (
  // Interface to CSRs
.csr_pmp_cfg_i(csr_pmp_cfg_i),
.csr_pmp_addr_i(csr_pmp_addr_i),
.csr_pmp_mseccfg_i(csr_pmp_mseccfg_i),

.priv_mode_i(priv_mode_i),
// Access checking channels
.pmp_req_addr_i(pmp_req_addr_i),
.pmp_req_type_i(pmp_req_type_i),
.pmp_req_err_o(pmp_req_err_o)

);
endmodule
