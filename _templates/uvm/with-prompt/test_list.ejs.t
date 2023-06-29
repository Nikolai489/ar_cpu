---
to: dv/tests/src/<%= name %>_test_list.sv
---
`ifndef <%= h.changeCase.upper(name) %>_TEST_LIST
`define <%= h.changeCase.upper(name) %>_TEST_LIST 

package <%= name %>_test_list;

 import uvm_pkg::*;
 `include "uvm_macros.svh"

 import <%= name %>_env_pkg::*;
 import <%= name %>_seq_list::*;

 //////////////////////////////////////////////////////////////////////////////
 // including <%= name %> test list
 //////////////////////////////////////////////////////////////////////////////

 `include "<%= name %>_base_test.sv"
  
// TODO: Include more tests

endpackage 

`endif
