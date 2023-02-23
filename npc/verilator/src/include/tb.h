
#define MAX_MEM 0x2000000

#define is_batch_mode 0
#define mtrace 1

#define MAX_SIM_TIME 4000

#define MAX_PRINT_STEP 10

#define IRTRACE 32 

#define RESET_VECTOR 0x80000000

typedef struct reg_cpu{
    uint64_t reg[32];
    uint64_t pc;
}cpu_state;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
enum {RUN,ABORT,END};

extern uint8_t mem[MAX_MEM];
extern uint32_t mem_size;

extern uint64_t *cpu_gpr;
extern uint32_t *Inst;

extern uint32_t state;



