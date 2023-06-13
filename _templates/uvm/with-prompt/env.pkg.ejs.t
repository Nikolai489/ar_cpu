---
to: dv/env/<%= name %>_env_pkg.sv
---
`ifndef <%= h.changeCase.upper(name) %>_ENV_PKG
`define <%= h.changeCase.upper(name) %>_ENV_PKG
package <%= name %>_env_pkg;

import uvm_pkg::*;
`include "uvm_macros.svh"

//////////////////////////////////////////////////////////
// importing packages : agent,ref model, register ...
/////////////////////////////////////////////////////////
  
import <%= name %>_agent_pkg::*;

//////////////////////////////////////////////////////////
// include top env files /////////////////////////////////
//////////////////////////////////////////////////////////

`include "<%= name %>_scoreboard.sv"
`include "<%= name %>_environment.sv"

endpackage
`endif
