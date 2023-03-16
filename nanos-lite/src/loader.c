#include <proc.h>
#include <elf.h>
#include <common.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#elif defined(__ISA_X86_64__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_X86_64
#else
# error Unsupported ISA
#endif

static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf_Ehdr elf_head;
  size_t o __attribute__((unused));
  o=ramdisk_read(&elf_head,0,sizeof(Elf_Ehdr));
  assert(o);
  //printf("%x\n",*(uint32_t *)elf_head.e_ident);
  assert(*(uint32_t *)elf_head.e_ident == 0x464c457f);
  printf("%d\n",elf_head.e_machine);
  
  assert(elf_head.e_machine == EXPECT_TYPE);
  Elf_Phdr *phdr = (Elf_Phdr*)malloc(sizeof(Elf_Phdr) * elf_head.e_phnum);
  o=ramdisk_read(phdr,elf_head.e_phoff,sizeof(Elf_Phdr) * elf_head.e_phnum);
  assert(o);
  for(int i=0;i<elf_head.e_phnum;i++){
      if(phdr[i].p_type == 1){
          //printf("%x\n",phdr[i].p_vaddr);
          if(phdr[i].p_memsz==0) continue;
          char buf[phdr[i].p_memsz];
          //printf("%d  %d\n",sizeof(buf),phdr[i].p_memsz);
          ramdisk_read(buf,phdr[i].p_offset,phdr[i].p_memsz);
          memcpy((void *)phdr[i].p_vaddr,buf,phdr[i].p_memsz);
          assert(phdr[i].p_memsz-phdr[i].p_filesz>=0);
          //printf("%x  %x  %x\n",phdr[i].p_vaddr+phdr[i].p_filesz,phdr[i].p_vaddr,phdr[i].p_filesz);
          memset((void *)(phdr[i].p_vaddr+phdr[i].p_filesz),0,phdr[i].p_memsz-phdr[i].p_filesz);
      }
  }
  return elf_head.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

