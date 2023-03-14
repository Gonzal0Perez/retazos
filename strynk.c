#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h> 
#include <assert.h>
#include <ctype.h>     
#include <dirent.h>
#include <sys/types.h>   
#include <sys/socket.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <netdb.h> 
#include <termios.h> 
#include <time.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h> 

#define ASCENDENTE 1 
#define DESCENDENTE 0
struct CLas {char * name;size_t size;
		void * (* ctor) (void * self, va_list * app);
		void * (* equals) (const void * _CLas1, const void * _CLas2);
		void * (* dtor) (void * self);};
int CLas_equals(const void * _CLas1, const void * _CLas2);

int CLas_equals(const void * _CLas1, const void * _CLas2) {
	const struct CLas * CLas1 = _CLas1;printf("CLas1 %s ",CLas1->name);
	const struct CLas * CLas2 = _CLas2;printf("CLas2 %s ",CLas2->name);
	return strcmp(CLas1->name, CLas2->name) == 0 && CLas1->size == CLas2->size;}

#ifndef object_H_
#define object_H_
void * new (const void * type, ...);
int instanceof (const void * obj, const void * class);
void delete (void * obj); 
#endif 
void * new(const void * _CLas, ...) {const struct CLas * CLas = _CLas; void * p = calloc(1, CLas->size); 
                                     assert(p);  *(const struct CLas **) p = CLas;
                                     if (CLas->ctor) {va_list ap;va_start(ap, _CLas); p = CLas->ctor(p,&ap);va_end(ap);}
return p;}
int instanceof(const void * obj, const void * _CLas) {const struct CLas ** cp = &obj; const struct CLas * clas = _CLas;
                                                      return (strcmp((*cp)->name, clas->name) == 0 ) && ((*cp)->size == clas->size);}
void delete (void * self){const struct CLas ** cp = self;
    if ((self) && (* cp)  &&  ((* cp) -> dtor(self))) 
    self = (* cp) ->  dtor(self); free(self);}
#ifndef stryng_H_
#define stryng_H_
typedef struct tiponudo{struct tiponudo *adelante;struct tiponudo *atras;char *x[][64];}nudo;typedef nudo *tLista;typedef nudo *tPosicion;int Cont=0;
void insertar (tLista Cabeza,char *campo,char *entrada);tLista crearnodo();void ImprimeLista(nudo *ptr);
/*int buscar(char *Busca, nudo *Cabeza, nudo *ptr);*/int Borrar(char *Busca, nudo *Cabeza, nudo *ptr);char Kbzal0[][7]={"x","y","z"};

struct String {const void * CLas /* first */;struct tiponudo *Cinta;char * text;void (*puntery)(int,char); ;
	           char *(*pf1)(char*,int,char*(*)(char*,char*));void (*Fyle)(char *); struct StrinG * next;
	           int n0,alt,coori,coord,padr,apadr;struct StrinG *siguiente;struct StrinG *anterior;struct StrinG *derecho;struct StrinG *izquierdo;
	           unsigned count;};                                             
static struct String * ring;                                                                                                                                             
struct StringCLas {void * (* clone) (struct String *); int (* equals) (struct String *, struct String *);};
void * String_constructor (void * _Self, va_list * app);
void * String_destructor (void * _Self); ccr=1;
void * String_clone (void * _Self); 
int    String_equals (void * _Self, void * _other),cr=0;
 /*static*/ const struct CLas _StrinG = {"StrinG",sizeof(struct String), String_constructor, String_equals, String_destructor};
 const void * String = & _StrinG;
static const struct StringCLas StringCLas = {* String_clone,* String_equals};
#endif /* STRING_H_ */
/*char *cloone(char *msg,unsigned int lenmsg, char *(*copi)(char*,char*)){char *cadena=calloc(sizeof(char)*(++lenmsg),1);return copi(cadena,msg); }
char *(*pf1)(char*,int,char*(*)(char*,char*)) = cloone;*/
//char *klone(char *msg,unsigned int lenmsg, char *(*copi)(int*,char*)){int *cadena=calloc(/*sizeof(char)*(++lenmsg)*/1,1);return copi(cadena,msg); } 
//char *(*pf2)(char*,int,char*(*)(char*,char*)) = klone; 

/* anadir busquedas en trozos incompletos */ 
char *subStr(char* str_src,int pos_ini,int cant_mov){char *subst=calloc(1,cant_mov+2),*cual[1]; int cont_mov=0,cunt_mov=0,gcant_mov=0,ggcant_mov=0,gcont_mov=0,ggcont_mov=0,ci=0,cii=0,gci=0,ggci=0,ggcii=0,gcii=0,trig=0;
*cual=strchr(str_src,46);if(*cual!=NULL){gci= (strlen(str_src)-strlen(*cual))+1;ggci=  (str_src[gci])-48;*cual=*cual+1;  
*cual=strchr(*cual,46);  if(*cual!=NULL){gcii=(strlen(str_src)-strlen(*cual))+1;ggcii= (str_src[gcii])-48;}}gcont_mov=strlen(str_src);
             while(cont_mov<=gcont_mov+0){ if(cont_mov>=pos_ini){if(cunt_mov<=cant_mov){ subst[cont_mov-pos_ini]=*str_src;cunt_mov++;} } 
				                                                 *str_src++;cont_mov++;}return subst;}     

char *replc(char *str_rsrc,char *str_reste,char *str_raquel){int cant_mov=0; char *subst=calloc(1,cant_mov+2),*repla=calloc(1, str_raquel), *leftt=calloc(1,1), *rright[1],xcual[256],*cual[1]; 
int cont_mov=0,cunt_mov=0,gcant_mov=0,ggcant_mov=0,gcont_mov=0,ggcont_mov=0,ci=0,cii=0,gci=0,ggci=0,ggcii=0,gcii=0,trig=0;
printf("\n BEGINING REPLC mycaden %s este -%s- por este -%s- \n",str_rsrc,str_reste,str_raquel);
*cual=strchr(str_rsrc,46);if(*cual!=NULL){strcpy(xcual,*cual);gci= (strlen(str_rsrc)-strlen(xcual))+1;ggci=  (str_rsrc[gci])-48;*cual=*cual+1; 
*cual=strchr(*cual,46);  if(*cual!=NULL){strcpy(xcual,*cual);gcii=(strlen(str_rsrc)-strlen(xcual))+1;ggcii= (str_rsrc[gcii])-48;}}gcont_mov=strlen(str_rsrc);  cont_mov=0;
             while(cont_mov<=gcont_mov-(strlen(str_reste) )){cont_mov++;
				                                             if(strcmp(subStr(str_rsrc,cont_mov,strlen(str_reste)-1 ),str_reste)==0){printf("working %s \n",leftt);
						                                        if (cont_mov <= strlen(str_reste) - 1 ){strcpy(leftt,subStr(str_rsrc,0,(cont_mov - 1 ))); printf("_w0rk1ng_ %s cont_mov %d\n",leftt,cont_mov);} 
				                                                else { if(cont_mov>= gcont_mov-(strlen(str_raquel) ) ) { printf("TRABAJANDO AQUI -%s- \n",subStr(str_rsrc,(cont_mov),0));
																	                                                     if(strcmp(subStr(str_rsrc,(cont_mov),0)," ")==0){printf("_w0rk1ng_1-A %s \n",leftt); 
																	                                                          strcat(leftt,subStr(str_rsrc,0,(cont_mov - 0))); printf("_w0rk1ng_1-A %s \n",leftt);} 
																	                                                     else {strcat(leftt,subStr(str_rsrc,0,(cont_mov - 1)));printf("_w0rk1ng_1   %s \n",leftt); ;} }
																	   else                                            { if(str_rsrc[cont_mov-1]==(char)32)if(str_raquel[0]==(char)32)strcpy(leftt,subStr(str_rsrc,0,(cont_mov-2))) ;
																		                                                                                   else                       strcpy(leftt,subStr(str_rsrc,0,(cont_mov-1))) ;      
																		                                                 else                              strcpy(leftt,subStr(str_rsrc,0,(cont_mov-1))) ;
																		                                                 printf("_w0rk1ng_2 -%s- \n",leftt);} }
				                                                if(str_raquel[0]==(char)32){;} else {if(leftt[strlen(leftt)-1]==(char)32){;} /*else strcat(leftt," ");-*/}
				                                                printf("wOrKiNg leftt -%s- str_raquel -%s- \n",leftt,str_raquel);
				                                                printf("CADENA DE MIERDA -%s- \n",subStr(str_rsrc,cont_mov+(strlen(str_reste) + 0 ) + 0,strlen(str_rsrc)-0));
				                                                strcat(leftt,str_raquel);printf("not wOrKiNg leftt -%s- str_raquel -%s- leftt[strlen(leftt)-1] -%c-  \n",leftt,str_raquel,leftt[strlen(leftt)-1]);
				                                                if(leftt[strlen(leftt)-1]==(char)32){strcat(leftt,subStr(str_rsrc,cont_mov+(strlen(str_reste) + 0 ) + 1,strlen(str_rsrc)-0));} 
				                                                else                                {if(str_rsrc[cont_mov+(strlen(str_reste))]!=(char)32)strcat(leftt," ");strcat(leftt,subStr(str_rsrc,cont_mov+(strlen(str_reste) + 0 ) - 0,strlen(str_rsrc)-0));}
				                                                printf("WORKING %s \n",leftt);  
				                                           } 				                                           				                                
				 /*if(cont_mov>=pos_ini){if(cunt_mov<=cant_mov){   subst[cont_mov-pos_ini]=*str_rsrc;cunt_mov++;} }*str_rsrc++;*/ 
				    /* */}printf("D O N E *%s* \n", leftt ); return leftt ;}
 				       
/* str_rsrce por stdin y un solo argumento 4132 la posicion es la que deseo y el numero es la posicion actual*/ 
/* construir una abstraccion para que cada uno de los elementos de una lista conozca  su posicion            */		                                                                                 
 
int rordr(char* str_rsrce,char* list,char* dlist){  	   
	     int cant_mov=0,cont_mob=0,cunt_mob=0,cuntmob=0,cunt_mub=0, cumt_mub=0, comt_mob=0, cont_mov=0,cont_muv=0,cunt_mov=0, cunt_muv=0, kont_aquel=0, gcant_mov=0,ggcant_mov=0,gcont_mov=0, gcont_muv=0, ggcont_mov=0,
	     ci=0,cii=0,gci=0,ggci=0,qgci=0 ,dgci=0,qggci=0,dggci=0,ggcii=0,gcii=0,qgcii=0,wgci=0,wgcii=0,dgcii=0,trig=0, marcador=0;
	         char *subst=calloc(1,cant_mov+2),xcual[256],*cual[1],xquien[256], *quien[1],xwquien[256], *wquien[1],xdquien[256], *dquien[1], *str_rest[strlen(str_rsrce)], *str_aux[1] , *str_awx=calloc(1,strlen(str_rsrce)) , str_rakel[256],
              *str_rdes=calloc(1,strlen(str_rsrce)),*str_sdes=calloc(1,strlen(str_rsrce)),*str_tdes=calloc(1,strlen(str_rsrce)),*str_rsorce=calloc(1,strlen(str_rsrce)) ; strcpy(str_rdes,str_rsrce); strcpy(str_sdes,str_rsrce); gcont_mov=strlen(str_rsrce);strcpy(str_rsorce,str_rsrce);
              /*while(cunt_muv>=){ cunt_muv-- ;}*/*quien=*quien+1;*quien=strchr(list,32); 
			  while(*quien!=NULL){  strcpy(xquien,*quien);
					                        if(*quien!=NULL){qgci=(strlen(list)-strlen(xquien))+0;*quien=*quien+1;*quien=strchr(*quien,32);
											                 if(*quien!=NULL){ strcpy(xquien,*quien);qgcii= (strlen(list)-strlen(xquien))+0; }											                 
											                } cunt_muv++; cunt_mub=atoi( subStr(list,qgci,qgcii-qgci) ) ; 
				*cual=strchr(str_rsrce,32); 
                while(*cual!=NULL){ 	                        				                                         
                                  if(cont_mov<=gcont_mov+0){  //printf("EXTERNO cual -%s\- cual -%s- str_rsrce -%s-\n",xcual,*cual,str_rsrce);
				                            if(*cual!=NULL){strcpy(xcual,*cual);ci= (strlen(str_rsrce)-strlen(xcual)) + 1 ;*cual=*cual+1; *cual=strchr(*cual,32);  
					                               if(*cual!=NULL){strcpy(xcual,*cual);gcii=(strlen(str_rsrce)-strlen(xcual)) + 0;}  marcador=gcii; }
					                        cunt_mov++;	      
				                            printf(" en LIST %s  pedazo <%d> cunt_mov %d que sea igual a cunt_mub %d PEDAZO BUSCADO %s\n ",*quien, cunt_mub, cunt_mov, cunt_muv,subStr(list,qgci,qgcii-qgci)); 
				                            if (cunt_mov==cunt_mub){  printf("ERROR? str_rsrce %s \n", str_rsrce ); strcpy(str_rest, subStr(str_rsrce, ci,(gcii - ci) - 1 )); 
												cont_muv=0;gcont_muv = strlen(list);cunt_mob=0;
				                                while(cont_muv<=gcont_muv){ cunt_mob=0; printf("voy por %d str_rdes %s de str_rsrce %s CON str_rest -%s- \n ", cunt_muv , str_rdes, str_rsrce,str_rest) ;
								  					                       *dquien=strchr(dlist,32);  
												                            while(*dquien!=NULL){ strcpy(xdquien,*dquien);
																				if(*dquien!=NULL){dgci= (strlen(dlist)-strlen(xdquien))+0;*dquien=*dquien+1;
																				*dquien=strchr(*dquien,32); if(*dquien!=NULL){strcpy(xdquien,*dquien);dgcii=(strlen(dlist)-strlen(xdquien))+0;} }  																			
																				cumt_mub=atoi( subStr(dlist,dgci,dgcii-dgci) );cont_mob++;printf("ahora dlist <%s> HAY cunt_mob %d ESTE cunt_mub -%d- por ESTE OTRO cumt_mub <%d> VEO cont_mob %d y busco a cunt_muv <%d> \n ",dlist,cunt_mob,cunt_mub,cumt_mub,cont_mob,cunt_muv,cont_mob,cunt_muv) ;
																				if (cont_mob==cunt_muv){ 
																					                    while(cunt_mob<=gcont_mov){ *wquien=strchr(str_rdes,32); 
																				 	                              while (*wquien!=NULL) {strcpy(xwquien,*wquien);
																				                                    if(*wquien!=NULL){if(cumt_mub==1) wgci=(strlen(str_rdes)-strlen(xwquien))+1;
																														              else wgci=(strlen(str_rdes)-strlen(xwquien))+0;   
																														              *wquien=*wquien+1;*wquien=strchr(*wquien,32); 
																										  		  	                  if(*wquien!=NULL){strcpy(xwquien,*wquien);wgcii=(strlen(str_rdes)-strlen(xwquien)) - 0 ;} }
																										  		  	                  printf("SACANDO ESTE -%s- cuanto -wquien- -%s- len? %d str_rdes -%s- \n",*wquien,xwquien,strlen(xwquien),str_rdes);comt_mob++;	
																					                                if(comt_mob==cumt_mub){ printf(" ENTRE  dlist >%s> wquien <%s> str_rdes -%s-  comt_mob <%d> cumt_mub <%d>  wgci %d wgcii-wgci %d\n", dlist, *wquien, str_rdes,comt_mob, cumt_mub ,wgci,wgcii-wgci ); 
																										  		     	      strcpy(str_rakel, subStr(str_rdes,wgci,(wgcii-wgci) - 1 )); 
																										  		     	      strcpy(str_aux, str_rakel); strcpy(str_awx, "00") ; printf("todavia str_rakel <%s> str_rdes <%s> \n", str_rakel,str_rdes); 	  getchar();																												  																						                                  
																					                                          strcpy(str_rdes, replc( str_rdes, str_rakel , str_awx ) );    printf("todavia No   str_rdes <%s>  str_rakel -%s- str_awx %s \n", str_rdes, str_rakel , str_awx);           getchar();
																					                                          strcpy(str_sdes, replc( str_rdes, str_rest , str_rakel ) );   printf("todavia NNOO   str_rdes <%s> str_rest <%s> str_rakel <%s> \n",  str_rdes ,str_rest , str_rakel);getchar();
																					                                          strcpy(str_tdes, replc( str_sdes, str_awx , str_rest ) );    printf("todavia NNNN    OOOOOOOO  str_rdes %s str_tdes %s \n",  str_rdes , str_tdes);getchar();
																					                                          printf(" YYYYEEEESSSS--3 str_rdes -%s- wquien <%s> p_rakel <%s> str_rakel %s str_awx %s str_rest %s \n ",str_rdes,xwquien, subStr(str_rdes,wgci,wgcii-wgci), str_rakel, str_awx , str_rest);getchar();
																					                                          printf(" final %s en %s con str_rdes %s str_sdes %s \n", str_tdes , *cual, str_rdes, str_sdes); 
																					                                          strcpy(str_rdes,str_rsorce); strcpy(str_sdes,str_rsorce); printf("QUEDA str_rdes -%s- str_rsrce -%s- \n ", str_rdes,str_rsrce);
																					                                          while (gci>0){ gci--;*str_rsrce--; printf("retrocede str_rsrce <%s> \n ", str_rsrce );}  
																					                                          printf("str_rdes antes de while <%s> str_rsrce <%s>  \n ", str_rdes, str_rsrce );
																					                                          printf ("andando %s str_rdes <%s> \n", str_rsrce, str_rdes); getchar();
																					                                          cont_mov=gcont_mov+1;cont_mob=0;cunt_mov=0;cont_mob=0;cont_mov=0;cont_muv=gcont_muv+1;comt_mob=0;cunt_mob=gcont_mov+1;
																					                                          *cual=NULL;*dquien=NULL;*wquien=NULL;break;
																					                                }  
																					                                *wquien=*wquien+1; 
																					                                printf("QUIEN SUPO? -%s- comt_mob %d cumt_mub %d str_rest -%s- rakel -%s- \n", *wquien,comt_mob,cumt_mub,str_rest,subStr(str_rdes,wgci,(wgcii-wgci)-1) );  
																					                                }cunt_mob++;}   	  
																		                               if (wgci>= 0 ){if(cunt_mob>=gcont_mov+1){;} 
																									   	              else                     {while (wgci>=0){ *str_rdes++;wgci--;printf("HOHOHOHOHOHO str_rdes %s \n ", str_rdes); /*getchar()*/; } } } 
																		                               else {*str_rdes=*str_rdes+2 ; printf("HaOaHaOaHaOaHaOaHaOsa str_rdes %s \n ", str_rdes); /*getchar()*/; }	 
																		                             } 
																		        else{ ;}  
																		        
																				if (dgci>= 0 ){ while (dgci>=0){  dgci--; } } else {*dlist=*dlist+2 ;printf("dAQUI se cumple %s\n",qgci) ;}		}													                          
										        cont_muv++;}  } 
										    else { printf("sigue qgci %d %s \n",gcii,*cual );}										                                 
										    //if (gcii>= 0 ){ while (gcii>=0){ gcii--; } } else {*cual=*cual+2 ; printf("AQUI se cumple %d\n",gcii) ;}
								  }   		
								  else{break;}		                                  		                            
				                  printf(" cont_mov %d \n",cont_mov); cont_mov=cont_mov+(strlen(str_rsrce)-strlen(cual));} 
				                  //while(cunt_mov>0){ *list-- ;cunt_mov--; printf("AQUI se cumplio \n",cunt_muv);} 
				                  cont_mov= 0;
			    /*while (ci >= 0){  cii--;}; printf(" va____%s str_rdes <%s> \n",str_rsrce, str_rdes); */ }  
				return cunt_muv ;}
/*  */	  
 
//void (*func_tcble[])()= {rordr};     
void read_from_pipe (int fiile){;char /*texxt[2], */ PalabrA[2048], devuelvE[256],list0[][256]={"background"},texxt[2], Letra[2], *cuales,pAlabra[64][256],palAbra[64][256]={" "}; memset(devuelvE,0,256);; memset(PalabrA,0,2048);
                               FILE *STream,*ztream,*fd,*fp,*fo;int cnn=0,ccnn=0,m=0,n=0,nn=0,nnn=0,nnnn=0,qqq=0,qq=0,qqqq=0,qk[64]={0},ck=0; DIR *peDyr;struct dirent *pant=NULL;/* */peDyr=opendir(".");
						       if(peDyr==NULL){ /*printf("ERroRDIR %s\n",Devuelve); return;*/; } 
                               while(pant=readdir(peDyr)) {if (strcmp(pant->d_name,"..")==0||strcmp(pant->d_name,".")==0){;} 
                                                           else{ if (pant->d_type==4||pant->d_type==10){/* */;}
                                                                 else                                  { cuales=strchr(pant->d_name, 46);
                                                                                                       if(cuales==NULL){ strcpy(list0[qq],pant->d_name);/*strcat(listO,",") printf("listO %s\n",listO[qq])*/;;qq++;} }
							 		                            ;}   }closedir(peDyr);nnnn=qq;                                      
                               strcpy(PalabrA,"");/*lee la cadena y la ordena con él mismo de ultimo*/
                               while ((ck = fgetc (stdin)) != EOF ){ /* printf("%c",ck); */ if((ck>=32)&&(ck<=126)){ if(n==0){;} ;sprintf(Letra,"%c",(char)ck);if(n>0){if(ck!=44){strcat(pAlabra[nnn],Letra);} }else{strcpy(pAlabra,Letra);} 
                                                                                                 if(ck==/*47*/62){n=0;
																									             qq=0; while(qq<=nnn){ /*printf("%s %s\n",pAlabra[nnn],pAlabra[qq]);*/   /*qqq=0;while(qqq<strlen(pAlabra[nnn]) ){ devuelvE[qqq]=pAlabra[nnn][qqq];}*/ strcpy(devuelvE ,pAlabra[nnn]);
																													                 cuales=strchr(devuelvE,47); if(cuales!=NULL){nn=0;while (nn<sizeof(list0)/sizeof(list0[0])){ /*printf("%d %s in +%s+ \n",nn,list0[nn],devuelve)*/ ; if(strstr(devuelvE,list0[nn])!=NULL){;/*strcat(PaLAbrA,devuelve); printf("*%s* \n",PaLAbrA) */; nn=256;;} ;nn++;} if(nn!=256){
																																		                                          *cuales++; nn=(strlen(devuelvE)-strlen(cuales))-1 ;qqqq=strlen(devuelvE/*cuales-2*/); /* printf("M %d\n",m);*/  m = 0;
																																		                                          while(nn<qqqq-2){ palAbra[nnn][m]=cuales[0];;*cuales++;; nn++;m++;} /* printf("%d %d devuelvE/ - %s * %s \n",qq, nnn,palAbra[nnn],palAbra[qq]);*/ 
																																		                                               if(strcmp(palAbra[qq],palAbra[nnn])==0){m=0;while(m<nnn){ if(qk[m]==1){ if(qk[m+1]==0){ /*printf("qk %d\n",qk[m])*/ ;qk[m]=0; /* printf("eye %d %d %d %d %d %d %d\n",m,qk[0],qk[1],qk[2],qk[3],qk[4],qk[5])*/ ; if(m==0)qq=qq+20;;break;};}
																																														                                                       m++;}nn=qqqq;};/* ;if(m>=nnn+1){nn=qqqq;   break ;} */
																																														                                                       ;}}
																																		                         else            { m=0;nn=1 ;qqqq=strlen(devuelvE); /* */;;
																																									              while(nn<qqqq-1){palAbra[nnn][m]=devuelvE[nn];/* */;nn++;m++;} /* printf("devuelvE - %s * %s\n", palAbra[nnn],palAbra[qq]);*/    
																																									                  ;m=0;while(m<nnn){ if(qk[m]==1 || qk[m+1]==1 ){ ;} else {qk[m]=1; /* printf("aja %d %d %d %d %d %d %d\n",m,qk[0],qk[1],qk[2],qk[3],qk[4],qk[5]);*/;nn=qqqq;/*m=nnn+1;*/;break;} 
																																													   m++;}; /* if(m>=nnn+1){nn=qqqq;   }*/ }     /* break ;*/
																													                 /*if(strcmp(pAlabra[nnn],pAlabra[qq])==0) {; n++; printf("%d\n",n); if(n>1){qq=qq+20;printf("\n");break;} }*/; qq++; if(nn>=qqqq){ qq=nnn;break;}  }
																									                                 if( /*m<=*/(qq>nnn/2) && qq<=12 ){ /*printf("entra %d %d %s a %s \n",qq,nnn,pAlabra[nnn], PalabrA)*/;strcat(PalabrA,pAlabra[nnn]);;} 																									                                   
																									                                 nnn++;n=0,nn=0;
				                                                                                 
				                                                                                 ;}
				                                                                                 /* *********************INTENTAMOS AQUI ******************** */
				                                                                                 
				                                                                                 /* ********************************************************* */
				                                                                                 else { ;} 
				                                                                                 n++;};} if(nnn/2>=nnnn-1){ if(strlen(PalabrA)>=7){  /* */;} ;}
				                                                                                            else           { ; } /*fflush(stdin);*/ /*strcat(PalabrA,"</HTML>");*/                       printf("%s\n",PalabrA); 
				                                                                                 ;}
				                                                                                       			   				                                                 
void * String_constructor (void * _self, va_list * app){struct String * self = _self;const char * text = va_arg(* app, const char *); /*self -> pf1 = cloone;char miw[]="232";*/int cr=0; char rsource[]=" aaa bbb ccc asdf ",list[]=" 2 1 4 3 ",dlist[]=" 1 4 3 2 " ;/* ccr=(sizeof(func_tcble)/sizeof(func_tcble[0]))-1;*/ 				                                       
				                                         /*self->pf1 = malloc(sizeof(pf1));  assert(self->pf1);                                                       
                                                        while (cr<=ccr){self -> puntery=func_tcble[cr];  printf("%s \n",self -> puntery); cr++;}pf1((char*)miw,1, self -> puntery);  } 
                                                        self->text = malloc(strlen(text) + 1); assert(self->text);strcpy(self->text, text);*/  
                                                        rordr(rsource, list,dlist );
                                                        /* self->ursok = ursok( self-> text,"127.0.0.1",7891) ; */                                                                          
                                                        if (ring){struct String * p = ring;printf("p_ring %d ",p->count);
                                                           do{if (strcmp(p -> text, text) == 0){++ p -> count;free(self);return p;}}  while ((p = p -> next) != ring);}
                                                        else ring = self;
													    self -> next = ring -> next, ring -> next = self; self -> count = 1; return self;}
void * String_destructor (void * _self){struct String * self = _self;
                                        if (--self -> count > 0) return 0;  assert(ring);
                                        if (ring == self) ring = self -> next;
                                        if (ring == self) ring = 0;   else{struct String * p = ring;
                                                                           while (p -> next != self) p = p -> next;{ assert(p != ring);}
                                                                           p -> next = self -> next;}
free(self->text), self->text = NULL;return self;}
void * String_clone(void * _self){struct String * self = _self;void *q=calloc(1,sizeof(self));q= new(self->CLas, self->text);return q;} 
int String_equals (void * _self, void * _other){struct String * str1 = _self;struct String * str2 = _other;return strcmp(str1->text, str2->text) == 0;}


int main(void) {int method();/*DIR *dip;DIR *dp;struct dirent *dit;*/int i=0;char *mystr[256];
struct String *str = new(String, "*.c");
/*struct String *aux = StringClas.clone(str);
/*printf("%d\n", StringClas.equals(str,aux)); */
printf("count %d ",ring->count);delete(str);
return EXIT_SUCCESS;} 
