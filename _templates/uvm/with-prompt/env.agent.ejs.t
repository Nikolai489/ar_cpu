---
to: dv/env/agent/<%= name %>_agent.sv
---
`ifndef <%= h.changeCase.upper(name) %>_AGENT
`define <%= h.changeCase.upper(name) %>_AGENT

// * ------------------------------------------------------------------------
// * Include Files
// * ------------------------------------------------------------------------
import uvm_pkg::uvm_agent;

//------------------------------------------------//
// create a custom class inherited from uvm_agent //
// regsister with factory and call new			  //
//------------------------------------------------//

class <%= name %>_agent extends uvm_agent;

  // * declare agent components
  
  <%= name %>_sequencer sqr;
  <%= name %>_driver	  dvr;
  <%= name %>_monitor	  mon;

  `uvm_component_utils(<%= name %>_agent) // ! regsiter to factory as component

  // * ------------------------------------------------------------------------
  // * Constructor
  // * ------------------------------------------------------------------------
  
  function new(string name="<%= name %>_agent", uvm_component parent=null);
    super.new(name, parent);
  endfunction
  
  // * ------------------------------------------------------------------------
  // * Build Phase
  // * ------------------------------------------------------------------------

  virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    sqr = <%= name %>_sequencer::type_id::create("sqr", this);
    dvr	= <%= name %>_driver::type_id::create("dvr", this);
    mon	= <%= name %>_monitor::type_id::create("mon", this);
  endfunction

  // * ------------------------------------------------------------------------
  // * Connect Phase
  // * ------------------------------------------------------------------------
  
  function void connect_phase(uvm_phase phase);
    dvr.seq_item_port.connect(sqr.seq_item_export); 
  endfunction
  
endclass
`endif
