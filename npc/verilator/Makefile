##alias make = make -j $(nproc)
##bin_path = $(subst nemu,am-kernels/tests/cpu-tests/build/,$(NEMU_HOME))
SO_PATH = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so

NPC_HOME = $(subst nemu,npc,$(NEMU_HOME))

vpath %.v vsrc
vpath %.c %.cpp src

VSRC :=$(wildcard vsrc/*.v)
##CFLAGS := include
CSRC :=$(wildcard src/*.cpp src/util/*.cc src/difftest/*.c src/memory/*.c src/system/*.c src/device/*.c)
LDFLAGS=-LDFLAGS "$(shell llvm-config-13 --libs) -ldl" -LDFLAGS -lreadline -LDFLAGS "-lSDL2 -lSDL2_image"
CFLAGS=-CFLAGS "-I $$NPC_HOME/verilator/src/include -I /usr/lib/llvm-13/include"
ifeq ('$(WTRACE)','y')
CFLAGS+= -CFLAGS -D WTRACE
endif
##CFLAGS+=-CFLAGS $(shell llvm-config-13 --cxxflags) -CFLAGS -fPIE

vcd:	
	
	verilator -Wno-fatal --trace -j $(nproc) -compiler clang -cc  $(VSRC) --top-module CPUTop   --exe $(CSRC) $(LDFLAGS) $(CFLAGS)
	$(MAKE) -C obj_dir -f VCPUTop.mk VCPUTop 
	##$(info $(bin_path)$(ALL)-$(ARCH).bin)
	./obj_dir/VCPUTop $(IMG) $(SO_PATH)

.PHONY: vcd


