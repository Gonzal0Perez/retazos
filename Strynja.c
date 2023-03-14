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
void * New (const void * type, ...);
int instanceof (const void * obj, const void * class);
void Delete (void * obj); 
#endif 
void * New(const void * _CLas, ...) {const struct CLas * CLas = _CLas; void * p = calloc(1, CLas->size); 
                                     assert(p);  *(const struct CLas **) p = CLas;
                                     if (CLas->ctor) {va_list ap;va_start(ap, _CLas); p = CLas->ctor(p,&ap);va_end(ap);}
return p;}
int instanceof(const void * obj, const void * _CLas) {const struct CLas ** cp = &obj; const struct CLas * clas = _CLas;
                                                      return (strcmp((*cp)->name, clas->name) == 0 ) && ((*cp)->size == clas->size);}
void Delete (void * self){const struct CLas ** cp = self;
    if ((self) && (* cp)  &&  ((* cp) -> dtor(self))) 
    self = (* cp) ->  dtor(self); free(self);}
#ifndef stryng_H_
#define stryng_H_
typedef struct tiponudo{struct tiponudo *adelante;struct tiponudo *atras;void *x; }nudo;typedef nudo *tLista;typedef nudo *tPosicion;int Cont=0;
tPosicion insertar (tLista Cabeza,char *campo,char *entrada);tLista crearnodo();void ImprimeLista(nudo *ptr);
/*int buscar(char *Busca, nudo *Cabeza, nudo *ptr);*/int Borrar(char *Busca, nudo *Cabeza, nudo *ptr);

struct StrinG {const void * CLas /* first */;struct tiponudo *Cinta;char * text; struct StrinG *next;;
	           int n0,alt,coori,coord,padr,apadr;struct StrinG *siguiente;struct StrinG *anterior;struct StrinG *derecho;struct StrinG *izquierdo;
	           unsigned count;};                                             
static struct StrinG * Ring;                                                                                                                                                
struct StrinGCLas {void * (* clone) (struct StrinG *); int (* equals) (struct StrinG *, struct StrinG *);};
void * StrinG_constructor (void * _Self, va_list * app);
void * StrinG_destructor (void * _Self); ccr=1;
void * StrinG_clone (void * _Self); 
int    StrinG_equals (void * _Self, void * _other),cr=0;
 /*static*/ const struct CLas _StrinG = {"StrinG",sizeof(struct StrinG), StrinG_constructor, StrinG_equals, StrinG_destructor};
 const void * StrinG = & _StrinG;
static const struct StrinGCLas StrinGCLas = {* StrinG_clone,* StrinG_equals};
#endif /* StrinG_H_ */


char *subStr(char* str_src,int pos_ini,int cant_mov){char *subst=calloc(1,cant_mov+2),*cual[1]; int cont_mov=0,cunt_mov=0,gcant_mov=0,ggcant_mov=0,gcont_mov=0,ggcont_mov=0,ci=0,cii=0,gci=0,ggci=0,ggcii=0,gcii=0,trig=0;
*cual=strchr(str_src,46);if(*cual!=NULL){gci= (strlen(str_src)-strlen(*cual))+1;ggci=  (str_src[gci])-48;*cual=*cual+1;  
*cual=strchr(*cual,46);  if(*cual!=NULL){gcii=(strlen(str_src)-strlen(*cual))+1;ggcii= (str_src[gcii])-48;}}gcont_mov=strlen(str_src);
             while(cont_mov<=gcont_mov+0){ if(cont_mov>=pos_ini){if(cunt_mov<=cant_mov){ subst[cont_mov-pos_ini]=*str_src;cunt_mov++;} } 
				                                                 *str_src++;cont_mov++;}return subst;}
				                                                 
int buscar(char *busca,nudo *Cabeza){int k=0,kk=0; tPosicion ptr ;/* printf("%s \n",Cabeza->nudo);*/ 
									 if(ptr!=NULL){printf("ERROR ? \n");   strcpy( Cabeza , ptr->adelante ) ; 
									 do{if(strcmp(Cabeza->x,&busca)==0)k++;strcpy(Cabeza,Cabeza->adelante ) ;kk++; }
								     while(/*Cabeza=*/!ptr/*->adelante*/); } 
								     else{printf("No Hay elementos \n");} return k;}

tPosicion insertar(tPosicion Cabeza, char *campo, char *entrada){int C=0,c=0;char *Entrada=" ";tPosicion nuevo;nuevo=(tPosicion)malloc(sizeof(nudo))+160;if(nuevo==NULL)printf("ERROR\n");
	                                                            /*c=buscar(entrada,Cabeza) ;*/  nuevo->x=entrada ; printf("entro -%s-\n",nuevo->x);//if (c==0) {strcpy(nuevo->x,entrada);} 
	                                                            if(c==0){nuevo->adelante=Cabeza;nuevo->atras=Cabeza->atras;Cabeza->atras->adelante=nuevo;Cabeza->atras=nuevo;} 
	                                                            printf("entr0 -%s- -%s-\n",nuevo->x,Cabeza->x);
	                                                            int k=0;if(Cabeza!=NULL){printf("Lista d Guardados: %s %s\n",nuevo->x,Cabeza->x);;nuevo=Cabeza->adelante;
		                                                        do{k++;printf("\t* %s *\n", nuevo->x);nuevo=nuevo->adelante;}while(nuevo!=Cabeza->adelante);}
	                                                            else{printf("No Hay elementos en la Lista\n");}return nuevo;}  

tLista crearnodo(){tLista L;L=(tLista)malloc(sizeof(nudo));if(L==NULL)printf("Error \n");L->adelante=L->atras=L;return L;}

void Imprimelista(tPosicion ptr){;tPosicion p;p=(tPosicion)malloc(sizeof(nudo))+160;if(p==NULL)printf("ERROR\n");
	                             int k=0;if(ptr!=NULL){printf("Lista d Guardados: %s %s\n",p->x,ptr->x);;p=ptr->adelante;
		                                                   do{k++;printf("\t* %s *\n", p->x);p=p->adelante;}while(p!=ptr->adelante);}
	                                         else{printf("No Hay elementos en la Lista\n");}}	                    
	
//{ if (isatty(fileno(stdin))) puts("stdin is connected to a terminal");//  else puts("stdin is NOT connected to a terminal");}*/

int vorn( /* */ ){ 
char plant0[][512]={" archivo/datos/plant0/systema/lista/data/codl1=0000-id1=archivo"," archivo/datos/plant0/systema/lista/data/codl1=0002-id1=leer",
                    " archivo/datos/plant0/systema/lista/data/codl1=0003-id1=escribir"," archivo/datos/plant0/systema/lista/data/codl1=0004-id1=periferico",
                    " archivo/datos/plant0/systema/lista/data/codl1=0005-id1=palabra"," lista/data/codl1=0006-id1=accion"," archivo/datos/plant0/systema/lista/data/codl1=0007-id1=leer",/*evento*/
                    " archivo/datos/plant0/systema/lista/data/codl1=0008-id1=comportamiento"," archivo/datos/plant0/systema/lista/data/codl2=0030-id1=analizar"             },
       
                   letr[2],text[512],*cee[256],/* *gzaaw=calloc(1,512)*/ zaaw[64][1024]={" "},saaw[64][1024]={" "} ,/* *sub[1];*/ poner[256]/*(512)*/, separa[16]="",cri[64][1024]/* */;int punto[32],recno=0,cpunto=0,cpunta=0,stupid=0,nojoda=0;char seedit[1024],*seeded=calloc(1,512);                                                         
int n,nn,cn=0,gcn=0,ggcn=0,gggcn=0,cont,cncon1,cont_cri,cncont_cri,cont_seedit=0,gcont_seedit=0,cdato=0,gcncont=0,ccn=0,xccn=0,xxccn=1,xxxccn=0,cnn=0,cccn=0,ccnn=0,cccnn=0,cbuf=512,ccbuf=0,cccbuf=0,tamplant0=sizeof(plant0)/sizeof(plant0[0]),/* */tamponer=0,tamseedit=0;                  
ccn=0;while(cdato<8) { memset(saaw,32,strlen(saaw[cdato]));cdato++;};
              while(ccn<tamplant0){ strcpy(poner,plant0[ccn]);gcn=cn;cn=0;; 
                          while(cn<=strlen(poner)){ /*(char)58*/                                                                         
	                           if((poner[cn]==/*(char)*/   47 )|| (poner[cn]==/*(char)*/ 45)){cncont_cri=cn,cont_cri++; gggcn++;;/* */ }
	                           //if(poner[cn]==(char)    58/*44*/   )       { ggcn=cn;gggcn=0;*saw=subStr(plant0[ccn],cncont_cri+1,(cn-cncon1));  ;}                                               
	                           if((poner[cn]==/*(char) */   61       )     /* ||(cn>=strlen(poner))*/){gcncont++;gcn=ggcn, nojoda=cn; /* por cada cadena completa */ ;
	                                 if (strlen(subStr(plant0[ccn],gcn+1,gggcn-2))>0) { *cee= /*subStr(plant0[ccn],cncont_cri+1,cn)*/subStr(poner,cncont_cri + 1 , (cn-cncont_cri)-2 ); /* */;/* */;}
	                                 else                                             { *cee= subStr(plant0[ccn],cncont_cri + 1 /*gcn + 1*/ ,(cn-cncont_cri)-2 ); /* */; } 
	                                 strcpy(zaaw[ccn],*cee);/* */ gggcn=0;ggcn=cn; if(ccn<1){/* */;}  xxxccn=0;
                                     cccn=0; while(cccn<tamplant0){nn=0;cccbuf=0;
                                                                       while(cccbuf<=strlen(plant0[cccn])){/*printf(" - \n");*/
                                                                                   if((plant0[cccn][cccbuf]==zaaw[ccn][nn])/*&&(zaaw[ccn][nn]!=(char)32)*/){  /* printf("_work_ %d <%c> nn %d <%c> \n",cccbuf,plant0[cccn][cccbuf],nn,zaaw[ccn][nn]); */ 
				 		                                                               if(nn>0){/*printf("nn %d cccbuf %d  <%c> \n",nn,cccbuf,plant0[cccn][cccbuf-1])*/;
				 		                                                                   if(plant0[cccn][cccbuf-1]==zaaw[ccn][nn-1]){seedit[nn]=plant0[cccn][cccbuf-0];nn++; /* printf("seeeing <%s> %d %s\n",seedit,strlen(seedit),zaaw[ccn] );*/
                                                                                              if((nn==strlen(zaaw[ccn])-0)&& (plant0[cccn][cccbuf+1]==(char)61)){/* */cont_seedit=cccbuf;
                                                                                                                          while(cont_seedit<=strlen(plant0[cccn])){																					   	   									   
																					   	   		                             if( (plant0[cccn][cont_seedit]==(char)61)){ gcont_seedit=cont_seedit; }  /* por cada igual */
																					   	   		                             else{if( (plant0[cccn][cont_seedit]==(char)45) || cont_seedit==strlen(plant0[cccn])){ /* su valor*/ 
																					   	   									        strcpy(seeded,subStr(plant0[cccn],gcont_seedit  + 1 ,(cont_seedit-gcont_seedit)-2));
																					   	   									        /*printf(" seeded %s \n", seeded );    */    cont_seedit=512/* */;}} cont_seedit++;}  
																					   	   		                             cpunto=0; bzero(text,strlen(text));                   /* */
																					   	   		                             while(cpunto<=ccn+2){if(strcmp(zaaw[ccn],saaw[cpunto])==0){cpunta=0;while(cpunta<=strlen(cri[cpunto])){if(cri[cpunto][cpunta]==(char)44 || cpunta==strlen(cri[cpunto])){if(strcmp(seeded, text )==0){memset(text," ",strlen(text)) ;    break;}
																															                                                                                                                                                                      else{if(cpunta>=strlen(cri[cpunto])){if(strlen(cri[cpunto])>0)strcat(cri[cpunto],",");;strcat(cri[cpunto],seeded);break;};} ; 
																															                                                                                                                                                                      bzero(text,strlen(text));cpunta++;};
																															                                                                                                                                           sprintf(letr,"%c",cri[cpunto][cpunta]);strcat(text,letr);;cpunta++;} ; 
																															                                                           ;stupid=1; /* */ break;} 
																					   	   		                                                  else                                {if (strlen(saaw[cpunto])==0){if(cpunto>ccn){cpunta=cpunto-0;while(cpunta>=0){if( (strlen(cri[cpunta])<=1) || (cri[cpunta][0]==(char)32)){;}else {cpunto=cpunta+1;break;} ;cpunta--;}
																																						                                                                           bzero(saaw[cpunto],strlen(saaw[cpunto])); strcpy(saaw[cpunto],zaaw[ccn]);strcpy(cri[cpunto],seeded);;stupid=0 ; /* */;break;}
																																						                                                           else          {/* */} ;}
																																						                              else
																																						                              if(cpunto>=ccn){ if(cpunto==0){ bzero(saaw[cpunto],strlen(saaw[cpunto])); /*cpunto++;*/ strcpy(saaw[cpunto],zaaw[ccn]);strcpy(cri[cpunto],seeded);/* */;stupid=0 ;/* */     ;break;} 
																																												   	                   else         {cpunto++;bzero(saaw[cpunto],strlen(saaw[cpunto]));strcpy(saaw[cpunto],zaaw[ccn]);
																																																	   stupid=0 ;break;}}} 
																					   	   		                                                  cpunto++;}; 
																					   	   		                          if(stupid==0){ stupid=1;} 
																					   	   		                          else         {xxxccn++;/* */sprintf(separa,"%d", xxxccn); };
																					   	    	                          ;cccbuf=512/* */;memset(seedit,32,strlen(seedit));strcpy(seeded," ");/*cccn++;*/}}
                                                                                           else{nn=-1;      }}
                                                                                       else {seedit[0]=plant0[cccn][cccbuf]; ; nn++;} } 
                                                                                   else{if(cccbuf==strlen(plant0[cccn])){ /*if(Ring->dato==0){*/ if(stupid==0){/*strcpy(cri,"new");;*/ /*strcpy(zaaw[ccn],gzaaw);*/; }
                                                                                                                                                 else         {/*strcpy(cri,"no"); ;*/ }
                                                                                                                         nn=512/*strlen(zaaw[ccn])+1*/; cont_seedit=0;memset(seedit,32,strlen(seedit));;}else{nn=0;}}                 
                                                                        if(cccbuf==strlen(plant0[cccn])) cccbuf=strlen(plant0[cccn])+2; cccbuf++; }                   
                                                                        cccn++;if (cccn==tamplant0 ){recno=0; }   
                                                                        } /*getchar();*/ }                           
                           cn++;}if(stupid==0)stupid=1;ccn++;gcncont=0;}
                          cpunto=0; while(cpunto<=ccn+2){  printf(" resumen <%s><%s>\n",saaw[cpunto],cri[cpunto]);cpunto++;} return 0; } 
                                     			   				                                                 
void * StrinG_constructor (void * _Self, va_list * app){struct StrinG * Self = _Self;const char * text = va_arg(* app, const char *); 
				                                        nudo pttr;tPosicion Cabeza;Cabeza=crearnodo();Self->Cinta=insertar(Cabeza, "x", text);
				                                        printf("PASO? %s \n",Self->Cinta->x); vorn();printf("nodocreado \n");//Imprimelista(Cabeza); 
                                                        ;printf("cinta hecha\n");                                                        
                                                        if (Ring){ struct StrinG * p = Ring;printf("p_Ring %d ",p->count);
                                                           do{if (strcmp(p -> text, text) == 0){++ p -> count;free(Self);return p;}}  while ((p = p -> next) != Ring);}
                                                        else {Ring = Self;Self -> count = 1;}
													    Self -> next = Ring -> next, Ring -> next = Self; printf("no Ring %d  \n", Self -> count); return Self ;  }
void * StrinG_destructor (void * _Self){printf("fin Ring \n");struct StrinG * Self = _Self;  
                                        if (--Self -> count > 0) return 0;  assert(Ring);
                                        if (Ring == Self) Ring = Self -> next;
                                        if (Ring == Self) Ring = 0;   else{struct StrinG * p = Ring;
                                                                           while (p -> next != Self) {p = p -> next;};{ assert(p != Ring);}
                                                                           p -> next = Self -> next;}  
free(Self->text), Self->text = NULL; return Self;}
void * StrinG_clone(void * _Self){ printf("NO JODAS \n");struct StrinG * Self = _Self;void *q=calloc(1,sizeof(Self));q= New(Self->CLas, Self->text);return q;} 
int StrinG_equals (void * _Self, void * _other){struct StrinG * str1 = _Self;struct StrinG * str2 = _other;return strcmp(str1->text, str2->text) == 0;}

int main(void) {int method();struct StrinG *Str = New(StrinG, "z");//printf("%d\n", StringClas.equals(str,aux));//printf("count %d ",Ring->count); 
Delete(Str);return EXIT_SUCCESS;} 



