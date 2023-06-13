---
to: dv/env/agent/<%= name %>_agent_pkg.sv
---
`ifndef <%= h.changeCase.upper(name) %>_AGENT_PKG
`define <%= h.changeCase.upper(name) %>_AGENT_PKG

package <%= name %>_agent_pkg;

  import uvm_pkg::*;
  `include "uvm_macros.svh"

   //////////////////////////////////////////////////////////
   // include Agent components : driver,monitor,sequencer
   /////////////////////////////////////////////////////////

  `include "<%= name %>_seq_item.sv"
  `include "<%= name %>_sequencer.sv"
  `include "<%= name %>_driver.sv"
  `include "<%= name %>_monitor.sv"
  `include "<%= name %>_agent.sv"


endpackage

`endif
