##alias make = make -j $(nproc)
##bin_path = $(subst nemu,am-kernels/tests/cpu-tests/build/,$(NEMU_HOME))
SO_PATH = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so

NPC_HOME = $(subst nemu,npc,$(NEMU_HOME))

vpath %.v vsrc
vpath %.c %.cpp src

VSRC :=$(wildcard vsrc/*.v)
##CFLAGS := include
CSRC :=$(wildcard src/*.cpp src/util/*.cc src/difftest/*.c src/memory/*.c src/system/*.c src/device/*.c)
LDFLAGS=-LDFLAGS "$(shell llvm-config-13 --libs) -ldl" -LDFLAGS -lreadline -LDFLAGS "-lSDL2 -lSDL2_image" -LDFLAGS -fprofile-generate
CFLAGS=-CFLAGS "-I $$NPC_HOME/verilator/src/include -I /usr/lib/llvm-13/include" -CFLAGS -Wno-tautological-compare -CFLAGS -O3 -CFLAGS -fprofile-generate -CFLAGS -static

ifeq ("$(WTRACE)","y")
CFLAGS += -CFLAGS "-D WTRACE"
endif
##CFLAGS+=-CFLAGS $(shell llvm-config-13 --cxxflags) -CFLAGS -fPIE

verilator_FLAGS = -Wno-fatal --compiler clang --trace ##-j 8 ##--prof-cfuncs

vcd:	
	@echo $(CFLAGS)
	verilator $(verilator_FLAGS) -cc  $(VSRC) --top-module CoreTop  -O3 --exe $(CSRC) $(LDFLAGS) $(CFLAGS)
	$(MAKE) OPT_FAST="-O3 -march=native"  OPT_SLOW="-O3 -march=native" -C obj_dir -f VCoreTop.mk VCoreTop 
	##$(info $(bin_path)$(ALL)-$(ARCH).bin)
	./obj_dir/VCoreTop $(IMG) $(SO_PATH)

.PHONY: vcd


