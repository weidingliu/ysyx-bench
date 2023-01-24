bin_path = $(subst nemu,am-kernels/tests/cpu-tests-build/,$(NEMU_HOME))

vcd:	
	verilator -Wno-fatal --trace -cc CPUTop.v --exe tb_CPUTop.cpp; 
	$(MAKE) -C obj_dir -f VCPUTop.mk VCPUTop; 
	./obj_dir/VCPUTop $(bin_path)$(ALL)-$(ARCH).bin

.PHONY: vcd


