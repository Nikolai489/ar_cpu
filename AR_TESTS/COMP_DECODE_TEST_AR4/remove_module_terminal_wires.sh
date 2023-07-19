#!/bin/bash

file=$1
new_file=$2
module=$3
terminals_file=$4

rm $new_file

current_module_name=""

while IFS= read -r line
do
	new_module_name="`echo  $line | grep "module " | sed "s/^.*module[ ]\+\([^ ]\+\)[ ]\+.*$/\1/g"`"
	new_wire_name="`echo  $line | grep "\(wire\)\|\(reg\)" | sed "s/^.*[ ]\+\([^ ]\+\)[ ]*;.*$/\1/g"`"
	if [[ -n "$new_module_name" ]]; then
		echo "found module $new_module_name"
		current_module_name="$new_module_name"
	fi
	if [[ -n "$new_wire_name" ]]; then
		echo "found wire $new_wire_name"
	fi

	if [[ "$module" != "$current_module_name" ]] || [[ -z "$new_wire_name" ]] || [[ -z "`grep "^$new_wire_name$" $terminals_file`" ]]
	then
		echo $line >> $new_file	
		#echo $line
	fi
done < "$file"
