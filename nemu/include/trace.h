
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

typedef struct ftrace_buffer{
    char fun_name[48];
    paddr_t start;
    size_t size;
}ftrace;

ftrace funcINFO[512];
size_t ftrace_point=0;

void init_ftrace(char *img_file);


