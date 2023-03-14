#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/mman.h>
#include <netinet/in.h>
#include <errno.h>
#include <assert.h>
#include <stdbool.h>
#include <signal.h>
#include <sched.h>
#include <sys/io.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#define MAPPED_SIZE //place the size here
#define DDR_RAM_PHYS //place the physical address here
main(){int i=0;
int _fdmem;int *map = NULL;const char memDevice[] = "/dev/mem";_fdmem = open( memDevice, O_RDWR | O_SYNC );
if (_fdmem < 0){printf("Failed to open the /dev/mem !\n"); return 0;}
else           {printf("open /dev/mem successfully !\n");}
map= (int *)(mmap(0,MAPPED_SIZE,PROT_READ|PROT_WRITE,MAP_SHARED,_fdmem,DDR_RAM_PHYS));/* use 'map' pointer to access the mapped area! */
for (i=0,i<100;i++)printf("content: 0x%x\n",*(map+i)); /* unmap the area & error checking */
if (munmap(map,MAPPED_SIZE)==-1){perror("Error un-mmapping the file");}close(_fdmem);}

