
#ifdef CONFIG_ITRACE
//iringbuf size
/*typedef struct ibuffer{
    //uint8_t *inst;
    char ch_inst[128];
    //vaddr_t pc;
    
    ibuffer(){
       memset(ch_inst,'\0',sizeof(ch_inst));
       pc=0;
    }
}ibuffer[IRTRACE];*/

#endif

#ifdef CONFIG_MTRACE
  

#endif

#define FUN_NAME_LEN 48
#define FUN_BUFF_SIZE 2048

#ifdef CONFIG_TRACE
typedef struct ftrace_buffer{
    char fun_name[FUN_NAME_LEN];
    paddr_t start;
    size_t size;
}ftrace;


extern ftrace funcINFO[FUN_BUFF_SIZE];
extern size_t ftrace_point;

typedef struct ftrace_link{
    paddr_t inst_addr;
    ftrace *dst;
    int type;
    struct ftrace_link* next;
}f_link;
#endif
//extern void init_ftrace(char *img_file);





