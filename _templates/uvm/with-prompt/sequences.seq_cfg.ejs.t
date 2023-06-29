---
to: dv/tests/sequence_lib/<%= name %>_seq_cfg.sv
---
`ifndef <%= h.changeCase.upper(name) %>_SEQ_CFG
`define <%= h.changeCase.upper(name) %>_SEQ_CFG

class <%= name %>_seq_cfg extends uvm_object;

  `uvm_object_utils(<%= name %>_seq_cfg)

  rand int num_trans_m;

  // ! Constraint can be modified
  constraint c_num_trans {
    num_trans_m inside {[1:50]};
  }

  function new (string name="<%= name %>_seq_cfg");
    super.new(name);
  endfunction : new
endclass
`endif
