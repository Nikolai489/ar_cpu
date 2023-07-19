#!/bin/bash

source ~/arails/arails_base/arails.shrc

second_call="$1"
if [[ -n "$VERILATOR_SCL_ENABLE_COMMAND" ]] && [[ "$second_call" != "y" ]]
then
        $VERILATOR_SCL_ENABLE_COMMAND "./run.sh y"
	exit
fi

#export VERILATOR_ROOT=""
export dut_name="`grep DUT_NAME dut_headers/defines.h | awk '{ print $3 }' | sed -e "s/\r//g"`"
echo "#include \"V$dut_name.h\"" > dut.h
echo "#define DUT_CLASS_NAME V$dut_name" >> dut.h

export vcd_file_name="`grep VCD_FILE_NAME dut_headers/defines.h | tr '"' ' ' | awk '{ print $3 }'`"
if [[ -z "$vcd_file_name" ]]
then
	export vcd_file_name="$dut_name"
fi

make clean
make -j4
