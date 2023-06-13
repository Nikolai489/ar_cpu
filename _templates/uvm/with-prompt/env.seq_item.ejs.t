---
to: dv/env/agent/<%= name %>_seq_item.sv
---
`ifndef <%= h.changeCase.upper(name) %>_SEQ_ITEM
`define <%= h.changeCase.upper(name) %>_SEQ_ITEM

  // ? Optional: Define Enums

class <%= name %>_seq_item #(parameters) extends uvm_sequence_item;

  // TODO: ports

  `uvm_object_utils(<%= name %>_seq_item)`

  // * ------------------------------------------------------------------------
  // * Constructor
  // * ------------------------------------------------------------------------  

  function new(string name="<%= name %>_seq_item");
  	super.new(name);
  endfunction

	// ? Optional: Define constraints
endclass

`endif
