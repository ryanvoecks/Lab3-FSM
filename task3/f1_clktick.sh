#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f *.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace f1_clktick.sv --exe f1_clktick_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vf1_clktick.mk Vf1_clktick

# run executable simulation file
echo "\nRunning simulation"
obj_dir/Vf1_clktick
echo "\nSimulation completed"

