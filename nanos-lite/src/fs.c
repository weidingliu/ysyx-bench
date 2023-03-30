#include <fs.h>

extern size_t serial_write(const void *buf, size_t offset, size_t len);
extern size_t events_read(void *buf, size_t offset, size_t len);
extern size_t dispinfo_read(void *buf, size_t offset, size_t len);
extern size_t fb_write(const void *buf, size_t offset, size_t len);

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


enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB,FD_KEY,FD_DISPLYINFO};

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
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_FB] = {"/dev/fb",0,0,invalid_read, fb_write},//frame buff
  [FD_KEY]={"/dev/events",0,0,events_read,invalid_write},//keyboard
  [FD_DISPLYINFO] = {"/proc/dispinfo",0,0,dispinfo_read, invalid_write},//display_info
#include "files.h"
};

void init_fs() {
  AM_GPU_CONFIG_T fg;
  fg=io_read(AM_GPU_CONFIG);
  
  file_table[FD_FB].size=fg.width*fg.height*4;
}

int fs_close(int fd){
     #ifdef FTRACE
          printf("-----------> close file : %s\n",file_table[fd].name);
     #endif
    return 0;
}
int fs_open(const char *pathname, int flags, int mode){
    int num=sizeof(file_table)/sizeof(file_table[0]);
    for(int i=0;i<num;i++){
        if(!strcmp(file_table[i].name,pathname)){
            file_table[i].open_offset=0;
            #ifdef FTRACE
                printf("-----------> open file : %s\n",file_table[i].name);
            #endif
            return i;
        }
    }
    
    panic("open file fail!");
    
}

size_t fs_read(int fd, void *buf, size_t len){
    int num=sizeof(file_table)/sizeof(file_table[0]);
    //printf("fs_ %x %x\n",buf,len);
    if(fd>num || fd<0) panic("should not reach here");
    if(file_table[fd].read != NULL){ 
        return file_table[fd].read(buf,0,len);
    }
    //printf("%x  %x\n",file_table[fd].disk_offset+file_table[fd].open_offset+len,get_ramdisk_size());
    if( file_table[fd].disk_offset+file_table[fd].open_offset+len<0) panic("should not reach here");
    if(file_table[fd].open_offset>=file_table[fd].size) return 0;
    if(file_table[fd].open_offset+len>file_table[fd].disk_offset+file_table[fd].size) panic("should not reach here");
    
    size_t ret =0;
    //printf("%x %d %d\n",&buf,len,fd);
    if(file_table[fd].open_offset+len > file_table[fd].size){
        ret=ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].open_offset,file_table[fd].open_offset+len - file_table[fd].size);
        file_table[fd].open_offset+=file_table[fd].open_offset+len - file_table[fd].size;
    }
    else{
        //printf("%x %d %d\n",&buf,len,fd);
        //printf("%d  %d\n",file_table[fd].disk_offset+file_table[fd].open_offset,len);
        ret=ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len);
        file_table[fd].open_offset+=len;
    }
    
    return ret;
}
size_t fs_write(int fd, const void *buf, size_t len){
    int num=sizeof(file_table)/sizeof(file_table[0]);
    if(fd>num || fd<0) panic("should not reach here");
    if(file_table[fd].write != NULL){
        if(file_table[fd].size!=0){
            size_t ret=file_table[fd].write(buf,file_table[fd].open_offset,len);
            file_table[fd].open_offset+=ret;
            return ret;
        }
        else return file_table[fd].write(buf,0,len);
    }
    if(file_table[fd].disk_offset+file_table[fd].open_offset+len>get_ramdisk_size() || file_table[fd].disk_offset+file_table[fd].open_offset+len<0) panic("should not reach here");
    if(file_table[fd].open_offset+len>file_table[fd].disk_offset+file_table[fd].size) panic("should not reach here");
    size_t ret =ramdisk_write(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len);
    file_table[fd].open_offset+=len;
    return ret;
}

size_t fs_lseek(int fd, size_t offset, int whence){
    //printf("----%d  %d %d\n",offset,fd,whence);
    //printf("%d  %d\n",file_table[fd].open_offset,file_table[fd].size);
    switch(whence){
        case(SEEK_SET):{
            
            if(offset>file_table[fd].size || offset<0){
                
                return -1;
            }
            
            file_table[fd].open_offset=offset;
            break;
        }
        case(SEEK_CUR):{
            
            if(file_table[fd].open_offset+offset>file_table[fd].size || file_table[fd].open_offset+offset<0){
                
                return -1;
            }
            file_table[fd].open_offset+=offset;
            break;
        }
        case(SEEK_END):{
            
            if(offset+file_table[fd].size>file_table[fd].size || offset+file_table[fd].size<0){
                
                return -1;
            }
            file_table[fd].open_offset=offset+file_table[fd].size;
            break;
        }
        default: panic("should not reach here");
    }
    //printf("%d  %d\n",file_table[fd].open_offset,file_table[fd].size);
    return file_table[fd].open_offset;
}




