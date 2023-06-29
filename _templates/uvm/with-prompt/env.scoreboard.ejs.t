---
to: dv/env/<%= name %>_scoreboard.sv
---
`ifndef <%= h.changeCase.upper(name) %>_SCOREBOARD
`define <%= h.changeCase.upper(name) %>_SCOREBOARD

class <%= name %>_scoreboard extends uvm_scoreboard;

  `uvm_component_utils(<%= name %>_scoreboard)

  uvm_analysis_imp#(<%= name %>_seq_item, <%= name %>_scoreboard) mon2sb_imp;

  // * ------------------------------------------------------------------------
  // * Constructor
  // * ------------------------------------------------------------------------

  function new(string name="<%= name %>_scoreboard", uvm_component parent); 
    super.new(name, parent);
  endfunction

  // * ------------------------------------------------------------------------
  // * Build Phase
  // * ------------------------------------------------------------------------

  function void build_phase(uvm_phase phase); 
    super.build_phase(phase);
    mon2sb_imp = new("mon2sb_imp", this);
  endfunction

  // * ------------------------------------------------------------------------
  // * Connect Phase
  // * ------------------------------------------------------------------------

  function void connect_phase(uvm_phase phase); 
    super.connect_phase(phase);
  endfunction

  // * ------------------------------------------------------------------------
  // * Run Phase
  // * ------------------------------------------------------------------------

  virtual function void write(<%= name %>_seq_item item);
    `uvm_info("SCO", // TODO: add info);
    if(item.rst == 1'b1)
      `uvm_info("SCO", "System Reset", UVM_NONE)
    else if(// TODO: Set proper condition)
      `uvm_info("SCO", "Test Passed", UVM_NONE)
    else
      `uvm_info("SCO", "Test Failed", UVM_NONE)
    $display("----------------------------------------------------------------");
    endfunction

  

endclass
`endif
