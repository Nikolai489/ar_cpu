---
to: dv/tests/sequence_lib/<%= name %>_seq_list.sv
---
`ifndef <%= h.changeCase.upper(name) %>_SEQ_LIST
`define <%= h.changeCase.upper(name) %>_SEQ_LIST

package <%= name %>_seq_list;

import uvm_pkg::*;
`include "uvm_macros.svh"

import <%= name %>_agent_pkg::*;
import <%= name %>_env_pkg::*;

`include "<%= name %>_seq.sv"

// TODO: Include more sequences

endpackage 

`endif
