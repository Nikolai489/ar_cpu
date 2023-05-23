#export ECE745_PROJECT_HOME ?= $(PWD)/../../..

#include $(ECE745_PROJECT_HOME)/verification_ip/interface_packages/wb_pkg/Makefile
#include $(ECE745_PROJECT_HOME)/verification_ip/interface_packages/i2c_pkg/Makefile
clean: 
	rm -rf work *.wlf transcript

comp_bench:
	vlog top.sv
	vlog fpga_multiplier_tb.sv

optimize:
	vopt +acc top.sv -o optimized_debug_top_tb

compile: comp_bench optimize

sim:
	vsim  -i -classdebug -msgmode both -do "set NoQuitOnFinish 1; run -a"
simulate:
	vsim  -i -classdebug -msgmode both -do "set NoQuitOnFinish 1; run -a" optimized_debug_top_tb

debug: clean compile simulate
