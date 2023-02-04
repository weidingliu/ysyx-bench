bin_path = $(subst nemu,am-kernels/tests/cpu-tests/build/,$(NEMU_HOME))

vpath %.v vsrc
vpath %.c %.cpp src

VSRC :=$(wildcard vsrc/*.v)
##CFLAGS := include
CSRC :=$(wildcard src/*.cpp src/util/*.cc)

cflag= $(shell llvm-config-13 --cxxflags) -fPIE
lib= $(shell llvm-config-13 --libs)
vcd:	
	verilator -Wno-fatal --trace -cc  $(VSRC) --top-module CPUTop   --exe $(CSRC) -LDFLAGS -lreadline 
	$(MAKE) -C obj_dir -f VCPUTop.mk VCPUTop 
	./obj_dir/VCPUTop $(bin_path)$(ALL)-$(ARCH).bin

.PHONY: vcd


