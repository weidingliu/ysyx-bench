bin_path = $(subst nemu,am-kernels/tests/cpu-tests/build/,$(NEMU_HOME))

vpath %.v vsrc
vpath %.c %.cpp src

VSRC :=$(wildcard vsrc/*.v)
CFLAGS := include
CSRC :=$(wildcard src/*.cpp)

vcd:	
	verilator -Wno-fatal --trace -cc  $(VSRC) --top-module CPUTop   --exe $(CSRC) ##-CFLAGS $(CFLAGS)
	$(MAKE) -C obj_dir -f VCPUTop.mk VCPUTop -lreadline
	./obj_dir/VCPUTop $(bin_path)$(ALL)-$(ARCH).bin

.PHONY: vcd


