
#define MAX_MEM 0x4000000

#define is_batch_mode 0
#define mtrace 0
#define DIFFTEST 1


#define MAX_SIM_TIME 5000

#define MAX_PRINT_STEP 10

#define IRTRACE 32 

#define RESET_VECTOR 0x80000000

typedef struct reg_cpu{
    uint64_t reg[32];
    uint64_t pc;
    uint64_t mcause,mstatus, mepc,mtvec;
}cpu_state;

extern const char *reg_name[];


enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
enum {RUN,ABORT,END};

extern cpu_state cpu;

extern uint8_t mem[MAX_MEM];
extern uint32_t mem_size;

extern uint64_t *cpu_gpr;
extern uint32_t *Inst;
extern uint64_t *CSR;

extern uint32_t state;

extern bool is_skip_ref;

