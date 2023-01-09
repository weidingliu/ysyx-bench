
#ifdef CONFIG_ITRACE
#define IRTRACE 32 //iringbuf size
typedef struct {
    uint32_t inst;
    vaddr_t pc;
}irbuf;
#endif
