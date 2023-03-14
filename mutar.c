#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <pthread.h>
#include <signal.h>
#define NTHREADS 5 
const char target[] = "METHINKS IT IS LIKE A WEASEL";
const char tbl[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";      
#define CHOICE (sizeof(tbl) - 1)
#define MUTATE 15 
#define COPIES 30
int irand(n)int n;{int r,rand_max = RAND_MAX-(RAND_MAX % n);/*random int from 0 to n-1*/while((r=rand())>=rand_max);return r/(rand_max/n);} 
int unfitness(const char *a, const char *b){int i, sum = 0;for (i = 0; a[i]; i++)  sum += (a[i] != b[i]); return sum;} /*1/MUTATE chance of differing from a */                                             
void mutate(const char *a, char *b){int i; for (i = 0; a[i]; i++)b[i] = irand(MUTATE) ? a[i] : tbl[irand(CHOICE)]; b[i] = '\0';}
void sig_func(int sig){ write(1, "Caught signal 11\n", 17); signal(SIGSEGV,sig_func);}

void *go(void *x){ pthread_t tid ; tid= *((int *) x)  ; int s, i, best_i, unfit, best, iters = 0,yy=0/*,ya=0*/;	char specimen[COPIES][sizeof(target) / sizeof(char)]; void *zx;	
	for (i = 0; target[i]; i++)	{specimen[0][i] = tbl[irand(CHOICE)];} /* */specimen[0][i] = 0; 
	do {for(i=1;i<COPIES;i++)mutate(specimen[0],specimen[i]);		
		for (best_i=i=0;i<COPIES;i++){unfit=unfitness(target,specimen[i]);/* find best fitting string */
			                         if(unfit<best || !i){best =unfit;best_i=i;}  } 
		if (best_i){strcpy(specimen[0],specimen[best_i]);}printf("ID %d iter %d, score %d: %s\n", tid,iters++, best, specimen[0]);
		if(best==0){/*while(x>=tid){ */printf("finalizando %d \n",tid);s=pthread_kill(x,SIGSEGV);/*zx=pthread_cancel(x) ;if(zx!=0)*/ if(s!=0) {printf("cancelando<  %d %d \n",tid,s); /* break;*/ }
						                                                                           else      {printf("buscando< %d %d  \n",tid ,s );} ;/* x--; };*/ 
			    /* */
		  				                                                        s = pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);printf("s %d\n",s);
		  				                                                         /* sleep(1);pthread_kill(tid,SIGKILL); return &zx;  pthread_exit(&zx);*/ return tid; }
	    else       { ;}
	} while(best);return tid;}
 
int main(int argc,char *argv[]){pthread_t threads[NTHREADS];int thread_args[NTHREADS],rc,i;void *NULLa;/* spawn the threads */
  signal(SIGSEGV/*SIGKILL*/,sig_func);
  for (i=0;i<NTHREADS;++i){thread_args[i]=i;printf("spawning thread %d\n", i);
                           rc= pthread_create(&threads[i], NULL, go, (void *) &thread_args[i]);}
  for (i=0;i<NTHREADS;++i){rc= pthread_join(threads[i], &NULLa);  printf("my rc %d %d \n",rc, NULLa);} 
return 1;}
