BUILD_DIR = ./build
verilator_build_dir=./verilator/obj_dir
BPATH ?= ../am-kernels/tests/cpu-tests/

test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i __.test.runMain Vga_keyboard.Spec -td $(BUILD_DIR)

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR) 
	-rm -rf $(verilator_build_dir)

.PHONY: test verilog help compile bsp reformat checkformat clean wave count 


sim: 
	$(MAKE) -C $(BPATH) ARCH=riscv64-npc ALL=dummy
	$(MAKE) -C ./verilator
	 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."

wave: sim
	cd verilator;\
	gtkwave waveform.vcd

count:
	find . -not -path "./out/*" -not -path "./target/*" -name "*.scala" -or -name "*.[c]" -or -name "tb_CPUTop.cpp"  | xargs wc -l

include ../Makefile
##include ../am-kernels/tests/cpu-tests/Makefile
