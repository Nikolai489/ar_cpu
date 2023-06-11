lint:
	$(shell verilator -f src/dr32e/dr32e_core.f --lint-only -Wall src/dr32e/dr32e_alu.sv)

clean:
	rm -r out
