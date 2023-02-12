bin_path = $(subst nemu,am-kernels/tests/cpu-tests/build/,$(NEMU_HOME))
SO_PATH = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so

NPC_HOME = $(subst nemu,npc,$(NEMU_HOME))

vpath %.v vsrc
vpath %.c %.cpp src

VSRC :=$(wildcard vsrc/*.v)
##CFLAGS := include
CSRC :=$(wildcard src/*.cpp src/util/*.cc src/difftest/*.c)
LDFLAGS=-LDFLAGS "$(shell llvm-config-13 --libs) -ldl" -LDFLAGS -lreadline
CFLAGS=-CFLAGS "-I $$NPC_HOME/verilator/src/include -I /usr/lib/llvm-13/include" 
CFLAGS+=-CFLAGS $(shell llvm-config-13 --cxxflags) -fPIE

vcd:	
	
	verilator -Wno-fatal --trace -cc  $(VSRC) --top-module CPUTop   --exe $(CSRC) $(LDFLAGS) $(CFLAGS)
	$(MAKE) -C obj_dir -f VCPUTop.mk VCPUTop 
	./obj_dir/VCPUTop $(bin_path)$(ALL)-$(ARCH).bin $(SO_PATH)

.PHONY: vcd


