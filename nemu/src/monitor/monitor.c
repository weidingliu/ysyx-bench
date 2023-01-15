/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <trace.h>
#include <elf.h>


void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  /*Log("Exercise: Please remove me in the source code and compile NEMU again.");
  assert(0);*/
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

size_t ftrace_point=0;
ftrace funcINFO[512];

void init_ftrace(){
    if(img_file == NULL){
        printf("ftrace close!\n");
        return;
    } 
    
    char elf_path[360];
    size_t o __attribute__((unused));
    strcpy(elf_path,img_file);
    elf_path[strlen(img_file)-1]='f';
    elf_path[strlen(img_file)-2]='l';
    elf_path[strlen(img_file)-3]='e';
    
    FILE *fp = fopen(elf_path, "rb");
    Assert(fp, "Can not open '%s'", elf_path);
    
    fseek(fp, 0, SEEK_SET);//set start of ELF
    Elf64_Ehdr elf_head;
    //printf("-------------%s\n",fp->_ptr);
    
    o=fread(&elf_head,sizeof(Elf64_Ehdr),1,fp);//loader elf head
    //printf("--------------%ld\n",(long) elf_head.e_shoff);
    //printf("%d\n",elf_head.e_shentsize);
    Assert(o,"ELF head fail!");
    Assert(elf_head.e_shoff,"ELF Don't have section header!");
    
    Elf64_Shdr *elf_section_head=(Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * elf_head.e_shnum);//loader section header
    Assert(elf_section_head,"memory allocation fail!");
    fseek(fp, elf_head.e_shoff, SEEK_SET);
    
    Assert(fp,"Can't find section head");
    
    //printf("-------------%d\n",elf_head.e_shnum);
    
    o=fread(elf_section_head,sizeof(Elf64_Shdr) * elf_head.e_shnum,1,fp);
    //printf("--------------%d\n",elf_section_head->sh_name);
    
    Assert(o,"ELF section head fail!");
    //Assert(elf_section_head.sh_type,"ELF section fail!");
    //printf("%ld",elf_section_head[elf_head.e_shstrndx].sh_offset);
    //Elf64_Sym sym_table;
    rewind(fp);
    fseek(fp,elf_section_head[elf_head.e_shstrndx].sh_offset, SEEK_SET);
    
    char sectiontab[elf_section_head[elf_head.e_shstrndx].sh_size];
    
    o=fread(sectiontab,elf_section_head[elf_head.e_shstrndx].sh_size,1,fp);
    Assert(o,"sectiontab fail!");
    
    size_t symtab_offset ,symtab_size ,strtab_offset,strtab_size,sym_size;
    
    for (int i=0;i<elf_head.e_shnum;i++){
        if(strcmp(sectiontab+elf_section_head[i].sh_name,".strtab")==0){
            strtab_offset=elf_section_head[i].sh_offset;
            strtab_size=elf_section_head[i].sh_size;
            
        }
        if(strcmp(sectiontab+elf_section_head[i].sh_name,".symtab")==0){
            symtab_offset=elf_section_head[i].sh_offset;
            symtab_size=elf_section_head[i].sh_size;
            sym_size=elf_section_head[i].sh_entsize;
        }
        //printf("----------%s\n",sectiontab+elf_section_head[i].sh_name);
    }
    
    char strtab[strtab_size];
    Elf64_Sym symtab[symtab_size/sym_size];
    //printf("%ld\n",symtab_size/sym_size);
    rewind(fp);//read strtab
    fseek(fp,strtab_offset,SEEK_SET);
    o=fread(strtab,strtab_size,1,fp);
    Assert(o,"strtab fail!");
    
    rewind(fp);//read strtab
    fseek(fp,symtab_offset,SEEK_SET);
    o=fread(symtab,symtab_size,1,fp);
    Assert(o,"symtab fail!");
    printf("%lx\n",symtab[1].st_value);
    
    strcpy(funcINFO[ftrace_point].fun_name,"hello");
    funcINFO[ftrace_point].start=0x80000004;
    
    
    printf("\033[40;34mftrace: \033[0m \033[40;32mON\033[0m\n");
    fclose(fp);
    free(elf_section_head);
    return;

}

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }
  //printf("%s\n",img_file);
  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  //printf("is parse_args\n");
  
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    //printf("%d  \n",o);
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: {img_file = optarg; init_ftrace(img_file); return 0;}
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  //printf("%s\n",argv[0]);
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
