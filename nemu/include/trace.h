
#ifdef CONFIG_ITRACE
#define IRTRACE 32 //iringbuf size
typedef struct {
    uint8_t *inst;
    char *ch_inst;
    vaddr_t pc;
}irbuf;
#endif
