BUILD_DIR = ./build
verilator_build_dir=./verilator/obj_dir
BPATH ?= ../am-kernels/tests/cpu-tests/
SCALAPATH := ./src/main/scala/One_cycle
SCSRC := $(wildcard $(SCALAPATH)/*.scala)
test:
	mill -i __.test

verilog: $(SCSRC)
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i __.test.runMain Pipline_CPU.Spec -td $(BUILD_DIR)

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

.PHONY: test verilog help compile bsp reformat checkformat clean wave count all


sim: verilog
	#$(MAKE) -C $(BPATH) 
	cp -f ./build/CoreTop.v ./verilator/vsrc
	cp -f ./src/main/scala/Pipline_CPU/backend/div.v ./verilator/vsrc
	$(info  $(IMG))
	$(MAKE) -C ./verilator IMG=$(IMG) WTRACE=$(WTRACE)
	
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."

wave:
	cd verilator;\
	gtkwave waveform.vcd
all: wave
	

count:
	find . -not -path "./out/*" -not -path "./target/*" -name "*.scala" -or -name "*.[c]" -or -name "tb_CPUTop.cpp"  | xargs wc -l

include ../Makefile
##include ../am-kernels/tests/cpu-tests/Makefile
