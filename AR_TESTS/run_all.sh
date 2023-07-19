#!/bin/bash

testbenches="`ls -1 | grep -v logs`"

if [[ -d logs ]]
then
	rm -rf logs
fi
mkdir logs

for testbench in $testbenches
do
	cd $testbench
	echo "Started running $testbench"
	./run.sh &> ../logs/${testbench}.log
	./clean.sh
	echo "Finished running $testbench"
	cd ..
done
