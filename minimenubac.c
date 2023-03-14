#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h> 
#include <unistd.h>
#include <assert.h>
#include <ctype.h>     
#include <dirent.h>
#include <sys/types.h>   
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h> 
#include <termios.h>
char *menu_select(/*const*/ char *items, char prompt); 
char *menu_select(/*const*/ char *items, char prompt){int i,ii,gi=1,conti=0,contii=0,y=0,yy=0,gyy=0,fuera=0,lencual=0,lencomo=0,lensize=sizeof(items),z=0,choice=0,oo=0,choice_max;
                                                                      char *cual[/*lensize*/1],*ztems[lensize],ytens[lensize][lensize],ytems[lensize],xtems[lensize],wtems[lensize];
if (items == NULL)return NULL; 	                                                                                      
 	do {    for (i = 0; i<=(sizeof(items)/sizeof(items[0]))+1; i++) { strcpy( ytens, items); *cual=strchr(ytens,44);
		                                                            if(conti==i){*cual=strchr(ytens,44); /*  strcpy(*cual,strchr(items,44));*/ /*printf("%s\n",strchr(items,44));*/
 	                                                                              if(*cual!=NULL){yy=0;while((yy<=contii)&&(contii>=0)) {lencual=strlen(*cual);lencomo=strlen(ytens/*[i]*/);y=(lencomo-lencual);z=y;printf("items <%s> <%s> <%s> \n " ,ytens, items , *cual);
 	                                                                                                   strcpy(ytems,ytens[i] ); 
 	                                                                                                   strncpy(xtems,/* * */ztems,lencomo); strncpy(xtems,ytems,y-0); printf("pasand0... -%s- <%s> <%s> %d \n",*cual,ytems,xtems,lencomo);              
																			                           strcpy(wtems, ++*cual); strncpy(ytems,/* * */ ztems,lencomo); printf("pasando... -%s- <%s> <%s> %d \n",*cual,wtems,ztems,ii);
																			                           if((contii>0) && (yy>0))*cual=strchr(wtems,44);if(*cual!=NULL){ ii=strlen(wtems)-strlen(*cual);printf("pasando... -%s- <%s> %d \n",*cual,wtems,ii);strncpy(ytems,wtems,ii);yy++;}
																			                                                                          else {yy=contii+2;if(fuera==0)fuera=1;else contii=-1;} } } 
 	                                                                                              if( (*cual==NULL)&&(yy<contii+2)) {printf(" %d)  < %s > \n", i + 1, items/*[i]*/);choice = conti;}
 	                                                                                              else{;if(contii==0 ){printf(" %d) < %s > %s \n",i+1,xtems,wtems);choice = xtems;}
 	                                                                                                            else {if(yy>=contii+2){printf(" %d) %s %s < %s > \n",i+1,xtems, ytems, wtems);choice = wtems;}
																										   			         else  printf(" %d) %s < %s >  %s  \n",i+1,xtems, ytems, *cual/*wtems*/);choice = ytems;}}}
 	                                                                else{ printf(" %d)  %s \n", i + 1, ytens/* [i] */);}} 
 	        choice_max = i;conti=gi;
		    if (prompt != NULL)   printf("%s \n", prompt); else printf("Choice? ");
		    system("stty cbreak -echo");oo=getchar();if (conti>=0){if (oo==66){if(conti<choice_max-1)conti=conti+1;fuera=0;}  else{if (oo==65){if(conti>0)conti=conti-1;fuera=0;}
		                                                      else{if (oo==67){contii=contii+1;}else{if (oo==68){if(contii>0)contii=contii-1;} else {if(oo==48) break;}}}}}  system("stty cooked echo");
		                                             gi=conti;choice = conti;
	} while ((conti<=choice_max) && (conti>=0));return choice;}

int main(){ const char items[][32] = {"Jose Perez , clown , nose", "Coso , tengo25, 0_bsf , 2", "65535 , 252423"}; char *prompt = "Which is from the three pigs?"; 
 	printf("You chose < %s >", menu_select( items, prompt));
 	return EXIT_SUCCESS;}
