---
to: dv/env/agent/<%= name %>_driver.sv
---
`ifndef <%= h.changeCase.upper(name) %>_DRIVER
`define <%= h.changeCase.upper(name) %>_DRIVER

//-----------------------------------------------------------------------//
// create custom class inheriting from uvm_driver, register with factory //
// and call function new											                           //
// Use base class to extend other class, to create user defined classes  //
//-----------------------------------------------------------------------//

class <%= name %>_driver extends uvm_driver #(<%= name %>_seq_item);
  virtual <%= name %>_interface <%= name %>_vif;
  <%= name %>_seq_item item;

  `uvm_component_utils(<%= name %>_driver)

  function new(string name="<%= name %>_driver", uvm_component parent);
    super.new(name, parent);
  endfunction
  
//------------------------------------------------//
// Declare vif handle and get them in build phase //
//------------------------------------------------//
  
  virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if(! uvm_config_db #(virtual <%= name %>_interface)::get(this, "", "<%= name %>_interface", <%= name %>_vif)) begin
      `uvm_fatal (get_type_name(), "Didnt get handle to virtual interface <%= name %>_vif");
    end
  endfunction

//-------------------------------------------------------//
// Code the run phase 									                 //
// This is main piece of driver code					           //
// Transaction level objects pin wiggle at DUT interface //
//-------------------------------------------------------//
  
  virtual task run_phase (uvm_phase phase); 
    
    super.run_phase(phase);

    // TODO: Add reset task for DUT
    
    forever begin 
    `uvm_info (get_type_name(), $sformatf("Waiting for data from sequencer"), UVM_MEDIUM)
    seq_item_port.get_next_item(item);

    // TODO: Data from sequencer

    seq_item_port.item_done();
    end
  endtask
endclass
`endif
