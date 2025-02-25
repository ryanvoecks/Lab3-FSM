#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f formula1_basic.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace formula1_basic.sv --exe formula1_basic_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vformula1_basic.mk Vformula1_basic

# run executable simulation file
obj_dir/Vformula1_basic
