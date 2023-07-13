#!/bin/bash

#export VERILATOR_ROOT=""
export dut_name="`grep DUT_NAME defines.h | awk '{ print $3 }' | sed -e "s/\r//g"`"
echo "#include \"V$dut_name.h\"" > dut.h
echo "#define DUT_CLASS_NAME V$dut_name" >> dut.h

export vcd_file_name="`grep VCD_FILE_NAME defines.h | tr '"' ' ' | awk '{ print $3 }'`"
if [[ -z "$vcd_file_name" ]]
then
	export vcd_file_name="$dut_name"
fi

make clean
make
