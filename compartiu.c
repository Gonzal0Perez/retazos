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
void *read_from_pipe (int file){char texxt[2], letra[2], palabra[256]; FILE *stream,*ztream,*fp;int n,c; /*fp=open(ztream, O_CREAT | O_WRONLY | O_TRUNC , 0777);*/
						       /*dup2(fp, file); printf("this way \n");*/
				               stream = fdopen (fp, "r"); 			               
				               char devuelto[1024] ,*devuelta=calloc(1,1024); printf("stream %s %p\n",stream,stream);
                               //n= fread(palabra,1,strlen(palabra),stream);printf("palabra %d-%s-\n",n,palabra);
                               while ((c = fgetc (stream)) != EOF) { /* putchar (c);*/ sprintf(letra,"%c" ,(char)c);  strcat(palabra,letra);
                                                                    //if(c==44){ char *devuelve; strcpy(devuelve,subStr(palabra,0,strlen(palabra)) -0 );
																	//         strcat( devuelto , darlist(devuelve));devuelve=strchr(palabra,44);
																	//         strcpy(palabra,subStr(devuelve,1,strlen(devuelve)));}
																   }printf("palabra <<%s>> <<%p>>\n",palabra,palabra);getchar();
																   /*fclose (stream); printf("devuelvo <<%s>> \n",devuelto);*/ 
																   /*strcpy(devuelta,devuelto );printf("devuelve %s \n",devuelta);return devuelta;*/
																   }                    /*reviso el interprete para saberlo */
int main(int argc, char *argv[]){int segment, segment_Id;char* shared_memory;struct shmid_ds shmbuffer; char *y;
  int segment_size; int next[2]; const int shared_segment_size = 0x6400; segment_Id = atoi(argv[1]); 
  typedef struct _not{int dato,alt,coori,coord,padr,apadr;char s[256];struct _not *derecho;struct _not *izquierdo;}tipoNod;
  /*Determine size*/shmctl (segment_Id, IPC_STAT, &shmbuffer); segment_size=shmbuffer.shm_segsz;
  /*typedef*/ tipoNod *pNot, *arbo; //shared_memory = (char*) shmat(segment_Id,0/*(void*) 0x5000000*/, 0);
                                           arbo = (tipoNod*) shmat(segment_Id,0/*(void*) 0x5000000*/, 0);
  ;char *base;size_t offset;int *b,c=0;/*printf ("shared memory reattached at address %p con %d \n", shared_memory, segment_Id);*/
  printf ("shared memory <%s> \n", arbo->dato);
  strcat(arbo->s, " concatenale algo");  printf ("shared memory <%s> \n", arbo->s); 
  char texxt[2]=" ",palabra[5000];
  while(fread(texxt, 1/*sizeof(char)*/, 1, stdin)/* !=EOF*/>0/*||c<5000*/){strcat(palabra,texxt);c++;}  
  
  printf("%s\n",palabra);
  //read_from_pipe (STDIN_FILENO);
  shmdt(shared_memory);shmctl(segment_Id, IPC_RMID, 0);return 0;}

