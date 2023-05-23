#! /bin/bash
# This script runs all commands.
set -e
mkdir -p out

# Args: <description>, <extra-iverilog-args>
function build {
  echo
  echo "Building $MODEL"
  echo
  
  ./build.sh $MODEL
}

function rtl_sim {
  echo
  echo "Compiling $MODEL"
  echo
  iverilog -g2012 -I -Wtimescale -D DUMPFILE=\"out/$MODEL.vcd\" -o out/$MODEL out/$MODEL.sv ./makerchip_tb.v $1
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
  vlib=""
  if [[ "$LIB" == "ar" ]]; then vlib="../extern/ARlogic.v"; fi
  if [[ "$LIB" == "cmos" ]]; then vlib="../warpv_cmos/cmos_cells.v"; fi
  echo
  echo "Synthesizing $MODEL"
  echo
  # Gate simulation
  $YOSYS synth.tcl
  if [ $1 ]; then
    echo
    echo "Compiling Gate-Level $MODEL in $LIB"
    echo
    cmd="iverilog -g2012 -I ../extern -Wtimescale -D DUMPFILE=\"out/${MODEL}_${LIB}.vcd\" -o out/${MODEL}_${LIB} out/${MODEL}_${LIB}.v ./makerchip_tb.v $vlib $2"
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

# YOSYS=yosys
# YOSYS=/home/steve/repos/warp-v/formal/env/bin/yosys
YOSYS=/opt/homebrew/bin/yosys


if true; then
export MODEL=fib
build
rtl_sim
export LIB=ar
export TOP=top
export FEV=no
gates true
fi

if true; then
export MODEL=dut
build
#rtl_sim
export LIB=ar
export TOP=top
export FEV=yes
gates
fi


if true; then
export MODEL=warp-v_for_sram
build
rtl_sim "warp-v_sram.v"
export LIB=ar
export TOP=cpu
export FEV=no
gates true "warp-v_sram.v"
export LIB=cmos
export TOP=cpu
export FEV=no
gates true "warp-v_sram.v"
fi
