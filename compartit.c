#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h> 
#include <assert.h>
#include <ctype.h>     
#include <dirent.h>
#include <sys/types.h>   
#include <sys/socket.h> 
#include <netdb.h> 
#include <termios.h> 
#include <time.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h> 
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/shm.h>
typedef struct file{char shmPtr[256];} file_entry;
int main (void){int shmid;int n;file_entry *entries;
    if (fork()==0){if ((shmid = shmget(20441, sizeof(file_entry), 0666)) == -1){printf("NOOO JAJAJA");exit(2);}
        entries = (file_entry*) shmat(shmid, 0, 0);
        if (entries->shmPtr == (char *) -1) {printf("problem2"); exit(2);}
        printf("\nChild Reading ....\n\n");
        printf("%s\n", entries->shmPtr[0]);
        printf("%s\n", entries->shmPtr[1]);
        printf("Done\n");} 
    else {if ((shmid = shmget(20441, sizeof(file_entry), IPC_CREAT | 0666)) == -1) {printf("problem3"); exit(2);}
        entries = (file_entry*) shmat(shmid, 0, 0);
        if (entries->shmPtr==(char *) -1) {printf("problem4"); exit(2);}
        printf("done attachment");  
        entries->shmPtr[0]="a";
        entries->shmPtr[1]="b";
        printf("%s\n", entries->shmPtr[0]);
        printf("%s\n", entries->shmPtr[1]);
        putchar('\n'); wait(0);shmdt(&shmid);}
    exit(0);}
