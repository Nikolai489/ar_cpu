---
to: dv/env/<%= name %>_env.sv
---
`ifndef <%= h.changeCase.upper(name) %>_ENVIRONMENT
`define <%= h.changeCase.upper(name) %>_ENVIRONMENT

//----------------------------------------------//
// create a custom class inherited from uvm_env //
// regsister with factory and call new			    //
//----------------------------------------------//

class <%= name %>_env extends uvm_env;
  // * declare environmnet components

  <%= name %>_agent			                        agnt;
  <%= name %>_scoreboard	                      scrbd;
  
  `uvm_component_utils(<%= name %>_env)   // ! register to factory as component

  // * ------------------------------------------------------------------------
  // * Constructor
  // * ------------------------------------------------------------------------
  
  function new (string name="<%= name %>_env", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  // * ------------------------------------------------------------------------
  // * Build Phase
  // * ------------------------------------------------------------------------
  
  virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    // * instantiate environment components

    agnt	= <%= name %>_agent::type_id::create("agnt", this);
    scrbd	= <%= name %>_scoreboard::type_id::create("scrbd", this);

  endfunction
  
  // * ------------------------------------------------------------------------
  // * Connect Phase
  // * ------------------------------------------------------------------------

  virtual function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    agnt.mon.mon2sb_port.connect(scrbd.rm2sb_export);
  endfunction
    
endclass
  
`endif
