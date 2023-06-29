---
to: dv/tests/src/<%= name %>_base_test.sv
---
`ifndef <%= h.changeCase.upper(name) %>_BASE_TEST
`define <%= h.changeCase.upper(name) %>_BASE_TEST

//---------------------------------------------------------------------//
// create custom class inheriting from uvm_test, register with factory //
// and call function new											                         //
// Use base test to extend other tests, to create test cases.		       //
//---------------------------------------------------------------------//

class base_test extends uvm_test;
  
  `uvm_component_utils(base_test) // ! Registering to factory for Re-usable test

  // * ------------------------------------------------------------------------
  // * Constructor
  // * ------------------------------------------------------------------------  
  
  function new (string name = "base_test", uvm_component parent=null);
    super.new(name, parent);
  endfunction
  
// * Declare other environments and verification components and build them
  <%= name %>_env       env;
  <%= name %>_seq       seq;
  <%= name %>_seq_cfg   cnfg;

  // * ------------------------------------------------------------------------
  // * Build Phase
  // * ------------------------------------------------------------------------

  virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env  = <%= name %>_env::type_id::create("env", this);
    seq  = <%= name %>_seq::type_id::create("seq", this);

    //cnfg = <%= name %>_env_cfg::type_id::create("cnfg", this);
    //uvm_config_db #(cnfg)::set(this, "env.agnt", "cnfg", cnfg);
  endfunction

  // * ------------------------------------------------------------------------
  // * Run Phase
  // * ------------------------------------------------------------------------

// start virtual sequence
  virtual task run_phase(uvm_phase phase);
    // create and instantiate sequence
    phase.raise_objection(this);
    seq.start(env.agnt.sqr);
    uvm_top.print_topology();
    phase.drop_objection(this);
  endtask

endclass

`endif
