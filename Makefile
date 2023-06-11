build:
	export DR32E_SRC=src/dr32e
	verilator -f ${DR32E_SRC}/dr32e_core.f --lint-only -Wall ${DR32E_SRC}/dr32e_alu.sv

clean: 
	rm -r out