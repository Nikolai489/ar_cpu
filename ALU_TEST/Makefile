export VERILATOR_PATH = /opt/homebrew/Cellar/verilator/5.006/share/verilator/include
export VERILATOR_BUILD_PATH = obj_dir

.PHONY: all
.DELETE_ON_ERROR:

all: ${TOP}.vcd

${VERILATOR_BUILD_PATH}/V${TOP}.cpp: ${TOP}.sv
	@if [ "$(TRACE)" = "on" ]; then \
		verilator -O3 -MMD -Wno-UNUSEDPARAM --trace -cc ${TOP}.sv; \
	else \
		verilator -O3 -MMD -Wall -cc ${TOP}.sv; \
	fi

${VERILATOR_BUILD_PATH}/V${TOP}__ALL.a: ${VERILATOR_BUILD_PATH}/V${TOP}.cpp
	make --no-print-directory -C ${VERILATOR_BUILD_PATH} -f V${TOP}.mk

${TOP}: ${TOP}_tb.cpp ${VERILATOR_BUILD_PATH}/V${TOP}__ALL.a
	g++ -I ${VERILATOR_PATH} 											\
			-I ${VERILATOR_BUILD_PATH} 								\
			--std=c++11 															\
			${VERILATOR_PATH}/verilated.cpp 					\
			${VERILATOR_PATH}/verilated_threads.cpp 	\
			${VERILATOR_PATH}/verilated_vcd_c.cpp 		\
			${TOP}_tb.cpp 														\
			${VERILATOR_BUILD_PATH}/V${TOP}__ALL.a 		\
			-o ${TOP}

test: ${TOP}.vcd

${TOP}.vcd: ${TOP}
	@clear
	@./${TOP}

.PHONY: clean
clean:
	rm -rf ${VERILATOR_BUILD_PATH} *.vcd 
	@rm -f $(shell ls | grep -vE '^\.$$|Makefile|.*\..+')
