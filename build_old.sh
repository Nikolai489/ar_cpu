#! /bin/bash
# Eg: ./build.sh warp-v_ar
#     ./build.sh fib
set -e
mkdir -p out
sandpiper-saas -i $1.tlv -o $1.sv --outdir out --clkAlways --inlineGen --noline --bestsv --hdl verilog # --debugSigs
