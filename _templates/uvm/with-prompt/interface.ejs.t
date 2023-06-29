---
to: dv/top/<%= name %>_interface.sv
---
`ifndef <%= h.changeCase.upper(name) %>_INTERFACE
`define <%= h.changeCase.upper(name) %>_INTERFACE

interface <%= name %>_interface #(parameters) (
    // TODO: ports
);

    // TODO: logic

modport DUT (
  // TODO: ports
  );

  ////////////////////////////////////////////////////////////////////////////
  // clocking block and modport declaration for driver 
  ////////////////////////////////////////////////////////////////////////////

clocking dr_cb@(posedge clk);
    // TODO: ports
endclocking

modport driver (clocking dr_cb, input clk, rst);

clocking rc_cb@(negedge clk); 
    // TODO: ports
endclocking

modport monitor(clocking rc_cb, input clk, rst);

endinterface
`endif
