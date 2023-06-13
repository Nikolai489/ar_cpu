---
to: dv/tests/sequence_lib/<%= name %>_seq.sv
---
`ifndef <%= h.changeCase.upper(name) %>_SEQ
`define <%= h.changeCase.upper(name) %>_SEQ

class <%= name %>_seq extends uvm_sequence #(<%= name %>_seq_item);


// * Declaration of Sequence utils /////////////////////////////////////////////

`uvm_object_utils(<%= name %>_seq)
// <%= name %>_seq_cfg cfg_m;

// * Sequence constructor //////////////////////////////////////////////////////

function new(string name="<%= name %>_seq");
    super.new(name);
endfunction

// ? Optional: Define Constraint Randomizer

// * Body of sequence to send randomized transaction through ///////////////////

virtual task body();
    <%= name %>_seq_item item;
    repeat(5) begin 
        item = new;
        start_item(item);
        finish_item(req);
    end
endtask
endclass

`endif
