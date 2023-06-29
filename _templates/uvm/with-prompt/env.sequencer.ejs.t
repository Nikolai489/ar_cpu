---
to: dv/env/agent/<%= name %>_sequencer.sv
---
`ifndef <%= h.changeCase.upper(name) %>_SEQUENCER
`define <%= h.changeCase.upper(name) %>_SEQUENCER

class <%= name %>_sequencer extends uvm_sequencer#(<%= name %>_seq_item);

  // * Register to factory
  `uvm_component_utils(<%= name %>_sequencer)

  // * ------------------------------------------------------------------------
  // * Constructor
  // * ------------------------------------------------------------------------  

  function new(string name="<%= name %>_sequencer", uvm_component parent=null);
    super.new(name, parent);
  endfunction

endclass

`endif
