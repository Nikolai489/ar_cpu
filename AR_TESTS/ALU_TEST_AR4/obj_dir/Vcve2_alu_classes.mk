# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcve2_alu.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vcve2_alu \
	Vcve2_alu___024root__DepSet_h816c53e2__0 \
	Vcve2_alu___024root__DepSet_hc9904c15__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcve2_alu___024root__Slow \
	Vcve2_alu___024root__DepSet_h816c53e2__0__Slow \
	Vcve2_alu___024root__DepSet_h816c53e2__1__Slow \
	Vcve2_alu___024root__DepSet_hc9904c15__0__Slow \
	Vcve2_alu___024unit__Slow \
	Vcve2_alu___024unit__DepSet_h8b8836d3__0__Slow \
	Vcve2_alu_cve2_pkg__Slow \
	Vcve2_alu_cve2_pkg__DepSet_h38d7ab24__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcve2_alu__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcve2_alu__Syms \
	Vcve2_alu__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
