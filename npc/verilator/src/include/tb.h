
#define MAX_MEM 480

#define is_batch_mode 0

#define MAX_SIM_TIME 2000

#define MAX_PRINT_STEP 10

#define IRTRACE 32 

#define RESET_VECTOR 0x80000000



enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

extern uint32_t mem[MAX_MEM];
extern uint32_t mem_size;

extern uint64_t *cpu_gpr;
extern uint32_t *Inst;




