
#ifdef CONFIG_ITRACE
#define IRTRACE 32 //iringbuf size
typedef struct {
    char *info;
    vaddr_t pc;
}irbuf;
#endif
