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
#include <sys/wait.h> 
#include <arpa/inet.h>
#include <netinet/in.h> 
#include <netdb.h>   
char *subStr(char* str_src,int pos_ini,int cant_mov){char *subst=calloc(1,cant_mov+2),*cual[1]; int cont_mov=0,cunt_mov=0,gcant_mov=0,ggcant_mov=0,gcont_mov=0,ggcont_mov=0,ci=0,cii=0,gci=0,ggci=0,ggcii=0,gcii=0,trig=0;
*cual=strchr(str_src,46);if(*cual!=NULL){gci= (strlen(str_src)-strlen(*cual))+1;ggci=  (str_src[gci])-48;*cual=*cual+1;  
*cual=strchr(*cual,46);  if(*cual!=NULL){gcii=(strlen(str_src)-strlen(*cual))+1;ggcii= (str_src[gcii])-48;}}gcont_mov=strlen(str_src);
             while(cont_mov<=gcont_mov+0){ if(cont_mov>=pos_ini){if(cunt_mov<=cant_mov){ subst[cont_mov-pos_ini]=*str_src;cunt_mov++;} } 
				                                                 *str_src++;cont_mov++;}return subst;}     
       
void doprocessing(int sock){int gsock=0,mycont=0,qe=0,n=0,nn=0,nnn=0,n1=0,n2,n3=0,n4=0,n5=0,leei,leeo=0,cuant_memoria=1248577; 
  FILE *ff, *fo, fv,fw;;char lee[2],*zx,*za,*zb,*zc, az[1248577],*vuffer=calloc(1,256)/*[1248577]*/;
  unsigned char *nam,*nami, buffer[1248577],*namo,shared_segment_size=1248577; time_t seconds=time(NULL);struct tm *now=localtime(&seconds);
  int pip[2],seg, segment_id,segment_size,segment_size2,cpid ;;n=0;n2=0; 
  
  struct stat *estat;struct shmid_ds shmbuffer; int *p ,next[2];   
  segment_id=shmget(IPC_PRIVATE,shared_segment_size,IPC_CREAT | IPC_EXCL | S_IRUSR | S_IWUSR);if(segment_id<0) perror('nosecreo\n');else printf("segment %d en %d\n",segment_id,sock);
  shmctl(segment_id,IPC_STAT,&shmbuffer);segment_size=shmbuffer.shm_segsz; if(segment_id<=0)perror("no se declaro \n");
  nam= (void*)shmat(segment_id,NULL/*0*/,0/*SHM_RDONLY*/);if(nam==-1)perror("no se hizo \n");//}
  n=recv(sock,nam,cuant_memoria,MSG_DONTWAIT);
  while(n>0){ 
	 if(strstr(nam,"GET / HTTP/1.1")!=NULL){strcat(nam,"HTTP/1.1 200 OK\nContent-Type: text/html\nContent-Length:     \n\n<!DOCTYPE HTML\n\n ><HTML>"); /*PUBLIC -//W3C//DTD XHTML 1.0 Strict//EN*/ 
	    printf("In %s\n",nam);nn= now->tm_sec;while(strstr(nam,"</HTML>")==NULL){sleep(0.5); time_t siconds = time(NULL);struct tm *now = localtime(&siconds);nnn=now->tm_sec;
			                                                                     //printf("||%s||%d \n \n ",nam,segment_id);
			                                                                     if(strstr(nam,"</HTML>")==NULL){if(nn+14 < now->tm_sec){printf("ESPERO %d \n",now->tm_sec-nn);nam=subStr(nam,0,;break;}}
			                                                                                                     else {;break;}} 
	    
	    printf("Out %s \n len %d\n ",nam,strlen(nam));za=strstr(nam,"HTTP/1.1 200 OK\n");if(za!=NULL) {strcpy(nam,za);;n2=write(sock,nam,strlen(nam)+0);
	    if(n2>=strlen(nam))printf("RESULT %s \n ",nam); 
	    else printf("NO ENVIADO n2 %d %s>",n2,nam);}break;}
	 else {if(strstr (nam ,"GET /")!=NULL){ 
		       strcat(nam,"HTTP/1.1 200 OK\nContent-Type: image/   \nContent-Length:     \n\r\n\r\n");
	           leei=strlen(nam);printf("In %s\n",nam);while(strstr(nam,"image/  " )!=NULL){sleep(0.5);} ;
               zx=strstr(nam,"Content-Length"); 
               if(zx!=NULL){za= strchr(zx,58);
		                    if(za!=NULL){;zb=strstr(za,"Content-Type");
					                     if(zb!=NULL){;leeo=0;strcpy(az,subStr(za,1,strlen(za)- strlen(zb)-2));leeo=atoi(az);};};} 
               zc= strchr(zb,59);
               if(zc!=NULL){//strcpy(vuffer,subStr(nam,0, strlen(nam)-0));printf("vuffer %s \n",vuffer);} 
                  printf("leer nam -%s- leeo %d zb +%s+ zc +%s+ substr<**%s**> \n",nam, leeo,zb,zc,subStr(nam,strlen(nam)-strlen(zc)+1,strlen(nam))); 
                  strcpy(vuffer,subStr(nam,strlen(nam)-strlen(zc)+1,strlen(nam)));     
                  while(mycont<=4){ *vuffer++;mycont++;}printf("BUSCAR2 -%s- %d \n",vuffer,strlen(vuffer));
                  ff=fopen(vuffer,"rb");if(!ff)perror("no se abrio archivo \n"); //else printf("si se abrio archivo %d\n",ff);//rewind(ff);n1=0;
                  n3=fread(lee,1,1,ff);if(n3==0)perror("no se leyo archivo \n");//else printf("si se leyo archivo %d\n",n3);//n5=write(sock,nam,strlen(nam)-1);
                  while(n3>0){ //if(n1==0){n2=write(sock,nam,strlen(nam));}
					         n5=write(sock,lee,n3); n3 = fread(lee,1,1, ff);n1++;}       
                  ;printf("FUNCIONANDO %d %d %d %d %d \n",leeo,n1,n2,n3,n5);  
                  if(n1==leeo){;} else printf("FALLO n2 %d \n",n2);if(n1==leeo){;} else {printf("FALLO n3 %d \n",n3);break;}
                  sleep(0.5);shmdt(nam);printf("result %d %d\n ",n2,n3);close(sock); 
                  printf ("%d <<<", getpid()); kill(getpid(), SIGTERM);kill(getpid(), SIGKILL);fflush(stdout); } 
           break;}
           else { if(strstr (nam ,"POST")!=NULL){/*POST /path HTTP/1.0\r\n
												   Content-Type: text/plain\r\n
												   Content-Length: 12\r\n
												   \r\n
												   query_string */
			   
			                                   /* sprintf(message,"%s %s HTTP/1.0\r\nHost: %s\r\n", strlen(argv[3])>0?argv[3]:"POST", path,host); 
                                                  for(i=6;i<argc;i++)  {strcat(message,argv[i]);strcat(message,"\r\n");}
                                                  if(argc>5) sprintf(message+strlen(message),"Content-Length: %d\r\n",(int)strlen(argv[5]));
                                                  strcat(message,"\r\n");  */        
			   
			                                         ;} 
			      else                          { ;} } 
           if(n>0){ ;}else {printf("NO FUNCIONA\n");break;}
     }  
  if(n<=0||n==632){sleep(0.5);shmdt(nam);close(sock);printf("cerrando %d\n",getpid()); 
	               kill(getpid(), SIGTERM); kill(getpid(), SIGKILL);fflush(stdout);  exit(0);}                
  sleep(0.5);shmdt(nam);printf("result %d %d\n ",n2,n3);close(sock);
  kill(getpid(), SIGTERM); kill(getpid(), SIGKILL);fflush(stdout);
  exit(0);} 

int main( int argc, char *argv[] ) {int sockfd=0,newsockfd=0,Newsockfd=0,cont=0, portno=0, clilen=0,n=0, pid=0;
  struct sockaddr_in serv_addr, cli_addr;sockfd=socket(AF_INET,SOCK_STREAM,0);
  if (sockfd < 0) {perror("ERROR opening socket"); exit(1);}portno = 5001; 
  while(1) { bzero((char *) &serv_addr, sizeof(serv_addr));
     serv_addr.sin_family = AF_INET;serv_addr.sin_addr.s_addr = INADDR_ANY;
     serv_addr.sin_port = htons(portno); 
     if (bind(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr))<0){portno++;;} 
     else {break;}  }
  listen(sockfd,5);clilen = sizeof(cli_addr); 
  while (1) { ;printf("%i ESPERANDO \n", getpid()); 
     newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen); 
     if (newsockfd < 0) {perror("ERROR on accept"); exit(1);} pid = fork();
     if (pid<0) { perror("ERROR on fork"); exit(1);}
     if (pid==0){close(sockfd); doprocessing(newsockfd);exit(0);}
     else {/*printf("%i cierra %i\n",getpid(),newsockfd )*/;close(newsockfd);} } 
}
