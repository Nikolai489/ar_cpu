#! /bin/bash

display_usage() {
    echo "Usage: $0 [options] <tlv_src> <top_module_name> <yes/no for FEV> <true/false for gate level simulation> <gate_level_simulation_file.v>"
    echo "Options:"
    echo "  -h  Display this help message"
    # Add additional options and their descriptions here
}

# Check if the script was called with the -h option
if [[ $1 == "-h" ]]; then
    display_usage
    exit 0
fi

# This script runs all commands.
set -e
mkdir -p out

# Args: <description>, <extra-iverilog-args>
function build_tlv {
  echo
  echo "Building $MODEL"
  echo

  sandpiper-saas -i src/$MODEL.tlv -o $MODEL.sv --outdir out --clkAlways --inlineGen --noline --bestsv --hdl verilog # --debugSigs
}

function rtl_sim {
  echo
  echo "Compiling $MODEL"
  echo
  iverilog -g2012 -I -Wtimescale -D DUMPFILE=\"out/$MODEL.vcd\" -o out/$MODEL out/$MODEL.sv ./generic_tb.v $1
  echo
  echo "Simulating $MODEL"
  echo
  out/$MODEL
  sleep 2
}

# Synthesize and, if $1, simulate.
# $1: simulate
# $2: additional verilog files (e.g. gate library)
function gates {
  vlib="lib/ARlogic.v"
  # if [[ "$LIB" == "ar" ]]; then vlib="/lib/ARlogic.v"; fi
  # if [[ "$LIB" == "cmos" ]]; then vlib="../warpv_cmos/cmos_cells.v"; fi
  echo
  echo "Synthesizing $MODEL"
  echo
  # Gate simulation
  $YOSYS synth.tcl
  if [ $1 ]; then
    echo
    echo "Compiling Gate-Level $MODEL in $LIB"
    echo
    cmd="iverilog -g2012 -I ../extern -Wtimescale -D DUMPFILE=\"out/${MODEL}_${LIB}.vcd\" -o out/${MODEL}_${LIB} out/${MODEL}_${LIB}.v ./generic_tb.v $vlib $2"
    echo "$cmd"
    $cmd
    echo
    echo "Simulating Gate-Level $LIB $MODEL"
    echo
    out/fib_ar
    # gtkwave out/${MODEL}_${LIB}.vcd &
  fi
  sleep 3
}

#! update yosys path
YOSYS=/opt/homebrew/bin/yosys

export MODEL=$1
build_tlv
rtl_sim
export LIB=ar
export TOP=$2
export FEV=$3
gates $4 $5

# if true; then
# export MODEL=fib
# build
# rtl_sim
# export LIB=ar
# export TOP=top
# export FEV=no
# gates true
# fi

# if true; then
# export MODEL=dut
# build
# #rtl_sim
# export LIB=ar
# export TOP=top
# export FEV=yes
# gates
# fi


# if true; then
# export MODEL=warp-v_for_sram
# build
# rtl_sim "warp-v_sram.v"
# export LIB=ar
# export TOP=cpu
# export FEV=no
# gates true "warp-v_sram.v"
# export LIB=cmos
# export TOP=cpu
# export FEV=no
# gates true "warp-v_sram.v"
# fi
