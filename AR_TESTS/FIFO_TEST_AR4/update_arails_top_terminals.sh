#!/bin/bash

verilator --xml-only -Wno-fatal --relative-includes --top-module arails_top -f input.vc arails_top.v sim_main.cpp 2> /dev/null

rm -rf terminal_info 2> /dev/null

mkdir terminal_info
cp obj_dir/Varails_top.xml terminal_info/

rm -rf obj_dir

cd terminal_info
sed -ne '/<module /,$ p' Varails_top.xml | sed '/\/module/q' > arails_top_module.xml
grep "var fl=" arails_top_module.xml | grep -v "togcov" |  awk 'BEGIN { FS = "\"" } ; { print $4 }' | sort | uniq > all_terminals.txt
awk '/"out"/{getline; print}' arails_top_module.xml | awk 'BEGIN { FS = "\"" } ; { print $4 }' | sort | uniq > out_terminals.txt
awk '/"inout"/{getline; print}' arails_top_module.xml | awk 'BEGIN { FS = "\"" } ; { print $4 }' | sort | uniq > inout_terminals.txt
comm -32 all_terminals.txt out_terminals.txt > in_terminals.txt.1
comm -32 in_terminals.txt.1 inout_terminals.txt > in_terminals.txt
echo -n "input `cat in_terminals.txt | tr '\n' ' ' | sed  "s/ /, input /g" | sed "s/, input $//g"`, " > terminal_line.txt
echo -n "output `cat out_terminals.txt | tr '\n' ' ' | sed  "s/ /, output /g" | sed "s/, output $//g"`, " >> terminal_line.txt
echo "inout `cat inout_terminals.txt | tr '\n' ' ' | sed  "s/ /, inout /g" | sed "s/, inout $//g"`" >> terminal_line.txt
sed -i "s/, $//g" terminal_line.txt
sed -i "s/, $//g" terminal_line.txt
cd ..
sed -i "s/\(arails_top\s\+\)([)]*)/\1($(cat terminal_info/terminal_line.txt))/g" include/*
