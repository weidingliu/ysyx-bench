

void init_difftest(char *ref_so_file, uint32_t img_size, int port, uint32_t *mem);


typedef void (*Ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction);
typedef void (*Ref_difftest_regcpy)(void *dut, bool direction);
typedef void (*Ref_difftest_exec)(uint64_t n);
typedef void (*Ref_difftest_raise_intr)(uint64_t NO);
typedef void (*Ref_difftest_init)(int port);

extern Ref_difftest_memcpy void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);
