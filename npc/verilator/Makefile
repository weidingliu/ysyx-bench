bin_path = $(subst nemu,am-kernels/tests/cpu-tests/build/,$(NEMU_HOME))

vpath %.v vsrc
vpath %.c %.cpp src

VSRC=$(wildcard vsrc/*.v)

vcd:	
	verilator -Wno-fatal --trace -cc  $(VSRC) --top-module CPUTop   --exe tb_CPUTop.cpp; 
	$(MAKE) -C obj_dir -f VCPUTop.mk VCPUTop; 
	./obj_dir/VCPUTop $(bin_path)$(ALL)-$(ARCH).bin

.PHONY: vcd


