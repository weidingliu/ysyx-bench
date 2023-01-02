BUILD_DIR = ./build
#VPATH = ./verilator
vpath %.v ./verilator
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

.PHONY: test verilog help compile bsp reformat checkformat clean wave

sim:
	cd verilator;\
	sudo verilator -Wno-fatal --trace -cc CPUTop.v --exe tb_CPUTop.cpp; \
	make -C obj_dir -f VCPUTop.mk VCPUTop; 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."

wave:
	cd verilator;\
	./obj_dir/VCPUTop; \
	gtkwave waveform.vcd



include ../Makefile
