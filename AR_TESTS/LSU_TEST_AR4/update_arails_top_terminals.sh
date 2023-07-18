#!/bin/bash

verilog_dir=dut_verilog
verilator --timing --xml-only -Wno-fatal --relative-includes --top-module arails_top -f input.vc $verilog_dir/arails_top.v sim_main.cpp 2> /dev/null

rm -rf terminal_info 2> /dev/null

mkdir terminal_info
cp obj_dir/Varails_top.xml terminal_info/

rm -rf obj_dir

cd terminal_info
sed -ne '/<module /,$ p' Varails_top.xml | sed '/\/module/q' > arails_top_module.xml
sed -ne '/<module /,$ p' Varails_top.xml | sed '/\/module/q' > arails_top_module_sel.xml
grep -v "\<sel " arails_top_module_sel.xml > arails_top_module.xml
grep "var " arails_top_module.xml | grep -v "togcov" |  awk 'BEGIN { FS = "\"" } ; { print $4 }' | sort | uniq > all_terminals.txt
awk '/"out"/{getline; print}' arails_top_module.xml | awk 'BEGIN { FS = "\"" } ; { print $4 }' | sort | uniq > out_terminals.txt.1
awk '/"in"/{getline; print}' arails_top_module.xml | awk 'BEGIN { FS = "\"" } ; { print $4 }' | sort | uniq > in_terminals.txt.1
awk '/"inout"/{getline; print}' arails_top_module.xml | awk 'BEGIN { FS = "\"" } ; { print $4 }' | sort | uniq > inout_terminals.txt.1
cat inout_terminals.txt.1 >> inout_terminals.txt.2
comm -12 out_terminals.txt.1 in_terminals.txt.1 >> inout_terminals.txt.2
cat inout_terminals.txt.2 | sort | uniq > inout_terminals.txt
comm -32 out_terminals.txt.1 inout_terminals.txt > out_terminals.txt
comm -32 in_terminals.txt.1 inout_terminals.txt > in_terminals.txt
cd .. 

terminal_line="`ls -1 terminal_info/in_terminals.txt terminal_info/out_terminals.txt | xargs -I {} cat {} | tr '\n' ',' | sed "s/,$//g" | sed "s/,/, /g"`"
sed -i "s/^module[ ]\+arails_top.*$/module arails_top ($terminal_line);/g" $verilog_dir/arails_top_module.v

for terminal in `ls -1 terminal_info/in_terminals.txt terminal_info/out_terminals.txt | xargs -I {} cat {}` 
do
	prepend="input"
	prepend="input wire"
	if [[ -n "`grep "^$terminal$"  terminal_info/inout_terminals.txt`" ]]
	then
		prepend="inout"
	elif [[ -n "`grep "^$terminal$"  terminal_info/out_terminals.txt`" ]]
	then
		prepend="output reg"
	fi

	echo "setting up terminal $prepend $terminal"
	sed -i "s/^[ ]*wire[ ]\+\(\[[0-9]\+:[0-9]\+\][ ]\+\)\?$terminal[ ]*;.*$/$prepend \1$terminal;/g" $verilog_dir/arails_top_module.v
	sed -i "s/^[ ]*reg[ ]\+\(\[[0-9]\+:[0-9]\+\][ ]\+\)\?$terminal[ ]*;.*$/$prepend \1$terminal;/g" $verilog_dir/arails_top_module.v
done
