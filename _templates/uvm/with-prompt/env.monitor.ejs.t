---
to: dv/env/agent/<%= name %>_monitor.sv
---
// The user-defined monitor is extended from uvm_monitor, uvm_monitor is inherited by uvm_component
// A monitor is a passive entity that samples the DUT signals through the virtual interface and converts the signal level activity to the transaction level
// Monitor samples DUT signals but does not drive them
// The monitor should have an analysis port (TLM port) and a virtual interface handle that points to DUT signals.

`ifndef <%= h.changeCase.upper(name) %>_MONITOR
`define <%= h.changeCase.upper(name) %>_MONITOR

class <%= name %>_monitor extends uvm_monitor;

  `uvm_component_utils(<%= name %>_monitor)
  // * Declare virtual interface
  virtual <%= name %>_interface <%= name %>_vif;

  uvm_analysis_port #(<%= name %>_seq_item) mon2sb_port;
  // * Used as a place holder for sampled signal activity
  <%= name %>_seq_item tx_collected;

  // * ------------------------------------------------------------------------
  // * Constructor
  // * ------------------------------------------------------------------------  
    
  function new(string name="<%= name %>_monitor", uvm_component parent=null); 
      super.new(name, parent);
      tx_collected =  new();
      mon2sb_port = new("mon2sb_port", this);
  endfunction

  // * ------------------------------------------------------------------------
  // * Build Phase
  // * ------------------------------------------------------------------------

  function void build_phase(uvm_phase phase); 
      super.build_phase(phase);
      // * Connect interface to Virtual interface by using get method
      if(! uvm_config_db #(virtual <%= name %>_interface)::get(this, "", "<%= name %>_interface", <%= name %>_vif)) begin
          `uvm_fatal (get_type_name(), "Didnt get handle to virtual interface <%= name %>_vif");
      end
  endfunction

  // * ------------------------------------------------------------------------
  // * Run Phase
  // * ------------------------------------------------------------------------

  virtual task run_phase(uvm_phase phase); 
      // using the write method send the sampled transaction packet to the scoreboard
      forever begin
        collect_tx();
        mon2sb_port.write(tx_collected);
      end
  endtask

  task collect_tx();
    // TODO: complete task
    tx_collected.print();
  endtask
endclass

`endif
