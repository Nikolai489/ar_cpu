# Usage:
# MODEL=dut TOP=top LIB=cmos FEV=yes yosys synth.tcl
yosys -import
# /home/steve/repos/warp-v/formal/env/bin/yosys

# TOP can be passed in or default to "top".
set top top
if { [info exists ::env(TOP)] } {
  set top $::env(TOP)
}

# LIB can be passed in or default to "ar".
# Legal values: ar, cmos, default
set lib ar
if { [info exists ::env(LIB)] } {
  set lib $::env(LIB)
}

set fev no
if { [info exists ::env(FEV)] } {
  set fev $::env(FEV)
}


# if { $lib == "cmos" } {
#   yosys read_liberty ../warpv_cmos/cmos_cells.lib
#   yosys design -save lib
# } elseif { $lib == "ar" } {
#   yosys read_liberty ../extern/ARlogic.yosys.lib
#   yosys design -save lib
# }

# ! Override liberty file set
yosys read_liberty lib/ARlogic.yosys.lib
yosys design -save lib

# Synthesize    read_verilog -sv out/fib.sv; hierarchy -top top; proc; clean; design -save gold; synth; design -stash gate; design -copy-from gold -as gold top; design -copy-from gate -as gate top; miter -equiv -make_assert -flatten gold gate miter
# Fib FEV: sat -seq 9 -prove-asserts -enable_undef -set-at 1 in_reset 1 -set-at 2 in_reset 1 -set-at 3 in_reset 1 -set-at 4 in_reset 0 -set-at 5 in_reset 0 -set-at 6 in_reset 0 -set-at 7 in_reset 0 -set-at 8 in_reset 0 -set-at 9 in_reset 0 -set-at 1 in_clk 0 -set-at 2 in_clk 1 -set-at 3 in_clk 0 -set-at 4 in_clk 1 -set-at 5 in_clk 0 -set-at 6 in_clk 1 -set-at 7 in_clk 0 -set-at 8 in_clk 1 -set-at 9 in_clk 0 -dump_vcd fib_sat.vcd miter
#          sat -show-all -seq 9 -prove-asserts -enable_undef  -dump_vcd fib_sat.vcd miter
# FIFO FEV: read_verilog -sv fifo.sv; hierarchy -top fifo; proc; clean; design -save gold; synth; design -stash gate; design -copy-from gold -as gold fifo; design -copy-from gate -as gate fifo; miter -equiv -make_assert -flatten gold gate miter
#           sat -show-all -seq 9 -prove-asserts -enable_undef  -dump_vcd fifo_sat.vcd miter
yosys read_verilog -sv out/$::env(MODEL).sv
yosys hierarchy -top $top
yosys proc
yosys clean
yosys design -save gold
yosys synth

# Old:
#yosys read_verilog -sv out/$::env(MODEL).sv
##yosys synth -top $top
#yosys hierarchy -check -top $top
#yosys proc
#yosys opt
#yosys fsm
#yosys opt
#yosys memory
#yosys opt
#yosys techmap
#yosys opt

# if { $lib == "cmos" } {
#   yosys dfflibmap -liberty ../warpv_cmos/cmos_cells.lib
#   yosys abc -liberty ../warpv_cmos/cmos_cells.lib
#   #yosys clean
# } elseif { $lib == "ar" } {
#   yosys dfflibmap -liberty ../extern/ARlogic.yosys.lib
#   yosys abc -liberty ../extern/ARlogic.yosys.lib
#   #yosys clean
# } elseif { $lib == "default" } {
#   # No liberty file.
# } else {
#   puts "Illegal library: $lib"
#   exit 1
# }
# yosys write_verilog out/$::env(MODEL)_$lib.v
# if { $lib == "cmos" } {
#   yosys techmap -map %lib
# } elseif { $lib == "ar" } {
#   yosys techmap -map %lib
# }

# ! Override liberty map set

yosys dfflibmap -liberty lib/ARlogic.yosys.lib
yosys abc -liberty lib/ARlogic.yosys.lib
yosys write_verilog out/$::env(MODEL)_$lib.v
yosys techmap -map %lib


# FEV:
if { $fev == "yes" } {
  yosys design -stash gate
  yosys design -copy-from gold -as gold $top
  yosys design -copy-from gate -as gate $top
  yosys miter -equiv -make_assert -flatten gold gate miter
  show miter
  # Must init states to 0 because initialization will be inconsistent between gold and gate otherwise and will mismatch during reset.
  # Force reset and cyc_cnt inputs. It would be better for testbench to do this based on $initstate.
  set sat_cmd "sat -show-all -seq 19 -prove-asserts -enable_undef -set-init-zero -set-at 1 in_reset 1 -set-at 1 in_cyc_cnt 0 -set-at 2 in_reset 1 -set-at 2 in_cyc_cnt 0 -set-at 3 in_reset 1 -set-at 3 in_cyc_cnt 0 -set-at 4 in_reset 1 -set-at 4 in_cyc_cnt 0 -set-at 5 in_reset 1 -set-at 5 in_cyc_cnt 0 -set-at 6 in_reset 0 -set-at 6 in_cyc_cnt 1 -set-at 7 in_reset 0 -set-at 7 in_cyc_cnt 2 -set-at 8 in_reset 0 -set-at 8 in_cyc_cnt 3 -set-at 9 in_reset 0 -set-at 9 in_cyc_cnt 4 -set-at 10 in_reset 0 -set-at 10 in_cyc_cnt 5 -set-at 11 in_reset 0 -set-at 11 in_cyc_cnt 6 -set-at 12 in_reset 0 -set-at 12 in_cyc_cnt 7 -set-at 13 in_reset 0 -set-at 13 in_cyc_cnt 8 -set-at 14 in_reset 0 -set-at 14 in_cyc_cnt 9 -set-at 15 in_reset 0 -set-at 15 in_cyc_cnt 10 -set-at 16 in_reset 0 -set-at 16 in_cyc_cnt 11 -set-at 17 in_reset 0 -set-at 17 in_cyc_cnt 12 -set-at 18 in_reset 0 -set-at 18 in_cyc_cnt 13 -set-at 20 in_reset 0 -set-at 20 in_cyc_cnt 14 -dump_vcd out/$::env(MODEL)_sat.vcd miter"
  puts $sat_cmd
  yosys $sat_cmd
}
exit
