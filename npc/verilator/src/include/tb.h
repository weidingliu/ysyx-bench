
#define MAX_MEM 0x2000000

#define is_batch_mode 1
#define mtrace 0

#define MAX_SIM_TIME 4000

#define MAX_PRINT_STEP 10

#define IRTRACE 32 

#define RESET_VECTOR 0x80000000

typedef struct reg_cpu{
    uint64_t reg[32];
    uint64_t pc;
}cpu_state;

extern const char *reg_name[];


enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
enum {RUN,ABORT,END};

extern uint8_t mem[MAX_MEM];
extern uint32_t mem_size;

extern uint64_t *cpu_gpr;
extern uint32_t *Inst;

extern uint32_t state;

extern bool is_skip_ref;

