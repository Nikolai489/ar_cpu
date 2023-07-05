#export VERILATOR_PATH = $(shell find /usr/local -name verilated.cpp)
OS := $(shell uname)

ifeq ($(OS),Linux)
  VERILATOR_PATH = /usr/local/share/verilator/include
else ifeq ($(OS),Darwin)
  VERILATOR_PATH = /opt/homebrew/Cellar/verilator/5.006/share/verilator/include
endif
export VERILATOR_BUILD_PATH = obj_dir
export DESIGN_SOURCE = ../../../src/dr32e

# CFLAGS := -DSIM_TIME=${SIM_TIME} -DSIM_TIME_STEP=${SIM_TIME_STEP} -DPROBE_DEPTH=${PROBE_DEPTH} -DTIME_UNIT=\"${TIME_UNIT}\" -DCLOCK_PERIOD=${CLOCK_PERIOD} -DTICK_MODE=${TICK_MODE}

.PHONY: all
.DELETE_ON_ERROR:

all: ${TOP}.vcd

${VERILATOR_BUILD_PATH}/V${TOP}.cpp: ${DESIGN_SOURCE}/${TOP}.sv
	@if [ "$(TRACE)" = "on" ]; then \
		verilator -I${DESIGN_SOURCE} -O3 -MMD -Wno-UNUSEDPARAM --trace -cc ${DESIGN_SOURCE}/${TOP}.sv; \
	else \
		verilator -O3 -MMD -Wall -cc ${DESIGN_SOURCE}/${TOP}.sv; \
	fi

${VERILATOR_BUILD_PATH}/V${TOP}__ALL.a: ${VERILATOR_BUILD_PATH}/V${TOP}.cpp
	make --no-print-directory -C ${VERILATOR_BUILD_PATH} -f V${TOP}.mk

${TOP}: ${TOP}_tb.cpp ${VERILATOR_BUILD_PATH}/V${TOP}__ALL.a components testb.h defines.h
	g++ -w -I ${VERILATOR_PATH} 															\
			-I ${VERILATOR_BUILD_PATH} 														\
			--std=c++11 																					\
			${VERILATOR_PATH}/verilated.cpp 											\
			${VERILATOR_PATH}/verilated_threads.cpp 							\
			${VERILATOR_PATH}/verilated_vcd_c.cpp 								\
			${TOP}_tb.cpp 																				\
			components/${TOP}_scoreboard.cpp											\
			components/${TOP}_driver.cpp													\
			components/${TOP}_monitor.cpp													\
			components/${TOP}_sequencer.cpp												\
			${VERILATOR_BUILD_PATH}/V${TOP}__ALL.a 								\
			-o ${TOP}.bin

test: ${TOP}.vcd

${TOP}.vcd: ${TOP}
	@clear
	@./${TOP}.bin

.PHONY: clean
clean:
	rm -rf ${VERILATOR_BUILD_PATH} *.vcd *.bin
