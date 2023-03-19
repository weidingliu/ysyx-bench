#include <fs.h>



typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;


enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

int fs_close(int fd){
    
    return 0;
}
int fs_open(const char *pathname, int flags, int mode){
    int num=sizeof(file_table)/sizeof(file_table[0]);
    for(int i=0;i<num;i++){
        if(!strcmp(file_table[i].name,pathname)){
            file_table[i].open_offset=0;
            return i;
        }
    }
    
    panic("open file fail!");
    
}

size_t fs_read(int fd, void *buf, size_t len){
    printf("%d  %d\n",file_table[fd].disk_offset+file_table[fd].open_offset,get_ramdisk_size());
    if(file_table[fd].disk_offset+file_table[fd].open_offset+len>get_ramdisk_size() || file_table[fd].disk_offset+file_table[fd].open_offset+len<0) panic("should not reach here");
    if(file_table[fd].open_offset+len>file_table[fd].disk_offset+file_table[fd].size) panic("should not reach here");
    file_table[fd].open_offset+=len;
    size_t ret=ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len);
    printf("%d\n",ret);
    return ret;
}
size_t fs_write(int fd, const void *buf, size_t len){
    if(file_table[fd].disk_offset+file_table[fd].open_offset+len>get_ramdisk_size() || file_table[fd].disk_offset+file_table[fd].open_offset+len<0) panic("should not reach here");
    if(file_table[fd].open_offset+len>file_table[fd].disk_offset+file_table[fd].size) panic("should not reach here");
    file_table[fd].open_offset+=len;
    return ramdisk_write(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len);
}

size_t fs_lseek(int fd, size_t offset, int whence){
    switch(whence){
        case(SEEK_SET):{
            file_table[fd].open_offset=offset;
            break;
        }
        case(SEEK_CUR):{
            file_table[fd].open_offset+=offset;
            break;
        }
        case(SEEK_END):{
            file_table[fd].open_offset=offset+file_table[fd].size;
            break;
        }
        default: panic("should not reach here");
    }
    return file_table[fd].open_offset;
}




