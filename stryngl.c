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
//#include "strynjj.h" 
#define ASCENDENTE 1 
#define DESCENDENTE 0
struct Clas {char * name;size_t size;
		void * (* ctor) (void * self, va_list * app);
		void * (* equals) (const void * _Clas1, const void * _Clas2);
		void * (* dtor) (void * self);};
int Clas_equals(const void * _Clas1, const void * _Clas2);

int Clas_equals(const void * _Clas1, const void * _Clas2) {
	const struct Clas * Clas1 = _Clas1;printf("clas1 %s ",Clas1->name);
	const struct Clas * Clas2 = _Clas2;printf("clas2 %s ",Clas2->name);
	return strcmp(Clas1->name, Clas2->name) == 0 && Clas1->size == Clas2->size;}

#ifndef object_H_
#define object_H_
void * new (const void * type, ...);
int instanceOf (const void * obj, const void * class);
void delete (void * obj); 
#endif /* OBJECT_H_ */
void * new(const void * _Clas, ...) {const struct Clas * Clas = _Clas; void * p = calloc(1, Clas->size); 
                                     assert(p);  *(const struct Clas **) p = Clas;
                                     if (Clas->ctor) {va_list ap;va_start(ap, _Clas); p = Clas->ctor(p,&ap);va_end(ap);}
return p;}
int instanceOf(const void * obj, const void * _Clas) {const struct Clas ** cp =  &obj ; const struct Clas * clas = _Clas;
                                                      return (strcmp((*cp)->name, clas->name) == 0 ) && ((*cp)->size == clas->size);}
void delete (void * self){const struct Clas ** cp = self;
    if ((self) && (* cp)  &&  ((* cp) -> dtor(self))) 
    self = (* cp) ->  dtor(self); free(self);}

#ifndef stryng_H_
#define stryng_H_
typedef struct tipoNudo{struct tipoNudo *adelante;struct tipoNudo *atras;char *x[][64];}Nudo;typedef Nudo *Tlista;typedef Nudo *Tposicion;int Cont=0;
void insertar (Tlista Cabeza,char *campo,char *entrada);Tlista CrearNudo();void ImprimeLista(Nudo *ptr);
/*int buscar(char *Busca, Nudo *Cabeza, Nudo *ptr);*/int Borrar(char *Busca, Nudo *Cabeza, Nudo *ptr);char Kbzal0[][7]={"x","y","z"};

struct String {const void * Clas /* first */;struct tipoNudo *Cinta;char * text;void (*puntery)(int,char); ;
	           char *(*Pf1)(char*,int,char*(*)(char*,char*));void (*Fyle)(char *); struct String * next;
	           int n0,alt,coori,coord,padr,apadr;struct String *siguiente;struct String *anterior;struct String *derecho;struct String *izquierdo;
	           unsigned count;};                                             
static struct String * Ring;                                                                                                                                             
struct StringClas {void * (* clone) (struct String *); int (* equals) (struct String *, struct String *);};
void * String_constructor (void * _Self, va_list * app);
void * String_destructor (void * _Self); //ccr=1;
void * String_clone (void * _Self); 
int    String_equals (void * _Self, void * _other),cr=0;
 /*static*/ const struct Clas _String = {"String",sizeof(struct String), String_constructor, String_equals, String_destructor};
 const void * String = & _String;
static const struct StringClas StringClas = {* String_clone,* String_equals};
#endif /* STRING_H_ */
//char *Cloone(char *msg,unsigned int lenmsg, char *(*copi)(char*,char*)){char *cadena=calloc(sizeof(char)*(++lenmsg),1);return copi(cadena,msg); }
//char *(*Pf1)(char*,int,char*(*)(char*,char*)) = Cloone;
//char kbzal1[][64]={"codl2","codl1","Clas","text","pf1","puntery","n0","dato","alt","coori","coord","padr","apadr","id","codl1","siguiente","anterior","derecho","izquierdo","count","String","kbsal1"};
	int buscar(char *busca,Nudo *Cabeza){int k=0,kk=0; Tposicion ptr ;/* printf("%s \n",Cabeza->Nudo);*/ 
										 if(ptr!=NULL){printf("ERROR ? \n");   strcpy( Cabeza , ptr->adelante ) ; 
										 do{if(strcmp(Cabeza->x,&busca)==0)k++;strcpy(Cabeza,Cabeza->adelante ) ;kk++; }
										 while(/*Cabeza=*/!ptr/*->adelante*/); } 
										 else{printf("No Hay elementos \n");} return k;}

	void insertar(Tposicion Cabeza, char *campo, char *entrada){int C=0,c=0;Tposicion nuevo;nuevo=(Tposicion)malloc(sizeof(Nudo))+16000;if(nuevo==NULL)printf("ERROR\n");
	                                                            /*c=buscar(entrada,Cabeza) ;*/ if (c==0) {strcpy(nuevo->x,entrada);}
	                                                            if(c==0){nuevo->adelante=Cabeza;nuevo->atras=Cabeza->atras;Cabeza->atras->adelante=nuevo;Cabeza->atras=nuevo;} }  

	Tlista crearNodo(){Tlista L;L=(Tlista)malloc(sizeof(Nudo));if(L==NULL)printf("Error \n");L->adelante=L->atras=L;return L;}

	void ImprimeLista(Nudo *ptr){Nudo *p;int k=0;if(ptr!=NULL){printf("\n");p=ptr->adelante;
		                                                      do{k++;printf("\t\t\t* %s *\n", p->x);p=p->adelante;}while(p!=ptr->adelante);}
	                                             else{printf("No Hay elementos en la Lista\n");}}	                    
	
	int inter(){char myfunc[65535];strcpy(myfunc,"void insertar(Tposicion Cabeza, char *campo){int C=0,c=1;Tposicion nuevo;nuevo=(Tposicion)malloc(sizeof(Nodo));c=buscar(entrada,Cabeza, Cabeza) ;if (c==0) {strcpy(nuevo->Nodo,entrada);}if(c==0){nuevo->adelante=Cabeza;nuevo->atras=Cabeza->atras;Cabeza->atras->adelante=nuevo;Cabeza->atras=nuevo;} };");
		        Tposicion Cabeza;Cabeza=crearNodo();printf("ERROR ?? \n");insertar(Cabeza,"Nodo",myfunc);Tlista Nudo; /*printf(" %p2 %s \n", Nodo->Nodo, Nodo->Nodo);*/
		        ImprimeLista( Cabeza);}
                                                                                                                                                                                     
static int one (const struct dirent *unused){ return 1;}  

//{ if (isatty(fileno(stdin))) puts("stdin is connected to a terminal"); 
//  else puts("stdin is NOT connected to a terminal");}
char tree(){ String/*arbo0*/ * arbo0Int;int altura,cc=0,ccc=0, nnodos,indicizq=255,indicder=255,parseindic=0;char *etems=calloc(1,3), *items=calloc(24,80); /*armarb archivo com indic y parseindic*/
   if (parseindic==0){;}else{if (parseindic<0){;}else{if (parseindic>0){;} } }   
   Insertar(&arbo0Int, 10); Insertar(&arbo0Int, 5);Insertar(&arbo0Int, 12);Insertar(&arbo0Int, 4);   
   Insertar(&arbo0Int, 7); Insertar(&arbo0Int, 3); Insertar(&arbo0Int, 6);Insertar(&arbo0Int, 9);Insertar(&arbo0Int, 8);Insertar(&arbo0Int, 11);
   Insertar(&arbo0Int, 14);Insertar(&arbo0Int, 13);Insertar(&arbo0Int, 2);Insertar(&arbo0Int, 1);Insertar(&arbo0Int, 15);Insertar(&arbo0Int, 10);
   Insertar(&arbo0Int, 17); Insertar(&arbo0Int, 18);Insertar(&arbo0Int, 16);printf("Altura de arbol %d\n", Alturaarbol(arbo0Int, &altura));
   /*  inorden(); preorden(); postorden();   alturas=;*/   printf("Altura de arbol %d\n", Alturaarbol(arbo0Int, &altura)); 
   printf("N nodos: %d\n", NumeroNodos(arbo0Int, &nnodos));
   cc=0;while (cc<=Alturaarbol(arbo0Int, &altura)+0){ccc=0;while (ccc<=(Alturaarbol(arbo0Int, &altura)*2)){if(see[cc][ccc]>0)printf(" %d",see[cc][ccc]);else printf(" %c ",(char)32);ccc++;}printf("\n");cc++;}
   Borrar(&arbo0Int, 5); printf("Borrar 5: "); InOrden(arbo0Int,num, Mostrar); printf("\n");Borrar(&arbo0Int, 8); printf("Borrar 8: "); InOrden(arbo0Int,num, Mostrar); printf("\n"); 
   Borrar(&arbo0Int, 15);printf("Borrar 15: ");InOrden(arbo0Int,num, Mostrar);printf("\n"); Borrar(&arbo0Int, 2);printf("Borrar 2: ");  InOrden(arbo0Int,num, Mostrar);printf("\n");  
   Borrar(&arbo0Int, 4); printf("Borrar 4: "); InOrden(arbo0Int,num, Mostrar);printf("\n"); Borrar(&arbo0Int, 17);printf("Borrar 17: ");InOrden(arbo0Int,num, Mostrar);printf("\n"); 
   hh=0;while (hh<cc){ddd=0;hhh=0;while (hhh<=ccc-1){ccccc=0;cccc=see[hh][hhh];if(cccc<10){;}else{while(cccc>=10){ cccc=cccc-10;ccccc++;}}
                                                    if(see[hh][hhh]>0){etems[0]=(char)ccccc+48;etems[1]=(char)cccc+48;etems[2]=(char)44;}
                                                    else              {etems[0]=(char)32;      etems[1]=(char)32;     etems[2]=(char)44;}hhh++;ddd=ddd+4;strcat(items[hh],etems);printf("%d %d %d %s \n",hh,ccccc,cccc,items[hh]);getchar();}
                     printf("%d %s \n",hh,items[hh]);hh++;}getchar();Podar(&arbo0Int); return items;}
                 
void Podar(String *a){/* Algoritmo recursivo, recorrido en postorden borrar todos los nodos a partir de uno, incluido*/
   if(*a) {Podar(&(*a)->izquierdo); Podar(&(*a)->derecho);
           free(*a);                /* Eliminar nodo */ *a = NULL;} }
           
int maxisizeitem=0,horizon=0;/* */

void Insertar(String /*arbo0*/ *a, int dat ){pNot0 padre = NULL; pNot0 actual = *a;/* Insertar un dato en el árbol ABB *//* Buscar el dato en el árbol, manteniendo un puntero al nodo padre */
   while(!Vacio(actual) && dat != actual->dato) { padre = actual; if(dat < actual->dato) actual = actual->izquierdo;
                                                                  else if(dat > actual->dato) actual = actual->derecho;   }   
   if(!Vacio(actual)) return; /* Si se ha encontrado el elemento, regresar sin insertar */
   /* Si padre es NULL, entonces el árbol estaba vacío, el nuevo nodo será el nodo raiz */
   if(Vacio(padre)) { *a = (arbo0)malloc(sizeof(tipoNod0));(*a)->dato = dat; (*a)->alt =Altura(*a, dat);(*a)->izquierdo = (*a)->derecho = NULL; printf(" padre ");}   
   else if(dat < padre->dato){actual = (arbo0)malloc(sizeof(tipoNod0));printf(" entra x izq %d con %d %d ",dat,padre->dato,padre->alt);
                             padre->izquierdo = actual; actual->dato = dat;printf("pad_coori %d ",padre->coori);printf("pad_coord %d ",padre->coord);                             
                             if((padre->coord==0 && padre->coori!=0)||(padre->coori==0 && padre->coord==0)){
								                if(padre->coori<=0){actual->padr= padre->coori;coorizq=actual->padr-0;}else {actual->padr= -1*padre->coori;coorizq=actual->padr+0;}   
                                                /*coorizq=Buscaralti(*a,Altura(*a,dat));*/printf("pad %d ",actual->padr);
                                                if(coorizq<=0)coorizq=coorizq-1;else coorizq=coorizq+1;actual->coori=coorizq; printf("coorizq %d \n",coorizq);actual->coord=0;}                             
                             else               {if(padre->coord<0){actual->padr= padre->coord;coorder=actual->padr-0;}else {actual->padr= -1*padre->coord;coorder=actual->padr+0;}                                                          
                                                printf("padr %d ",actual->padr);/*largo de las ramas hijas + o - */                                                      
                                                if(coorder<0)coorder=coorder-1  ;else coorder=coorder+1;  actual->coord=coorder; printf("coorder %d \n",coorder);actual->coori=0;}                                                                                 
                             actual->alt =Altura(*a, dat);actual->apadr=Altura(*a, padre->dato);
                             actual->izquierdo = actual->derecho = NULL;printf("DATO %d %d %d %d \n",dat,actual->alt,actual->coori,actual->coord);   }   
   else if(dat > padre->dato){actual = (arbo0)malloc(sizeof(tipoNod0));printf(" entrad x der %d con %d %d",dat,padre->dato,padre->alt);
                             padre->derecho = actual; actual->dato = dat;printf("padr_coori %d ",padre->coori);printf("padr_coord %d ",padre->coord);                             
                             if(((padre->coori==0) && (padre->coord!=0))||((padre->coori==0) && (padre->coord==0))){
								                if(padre->coord<=0){actual->padr= padre->coord;coorder=actual->padr-0;}else {actual->padr= -1*padre->coori;coorder=actual->padr+0;}                                                           
                                                /*coorder=Buscaraltd(*a,Altura(*a,dat));*/printf("pad %d ",actual->padr);   
                                                if(coorder<0)coorder=coorder-1;else coorder=coorder+1;actual->coord=coorder;  printf("coorder %d \n",coorder);actual->coori=0;  }                             
                             else               {if(padre->coori<0){actual->padr= padre->coord;coorizq=actual->padr-0;}else {actual->padr= -1*padre->coord;coorizq=actual->padr+0;}    
                                                printf("padr %d ",actual->padr);/*largo de las ramas hijas + o - */  
                                                if(coorizq<0)coorizq=coorizq-1 ;else coorizq=coorizq+1;  actual->coori=coorizq;  printf("coorizq %d \n",coorizq);actual->coord=0;  } 
                             actual->alt =Altura(*a, dat); actual->apadr=Altura(*a, padre->dato); 
                             actual->izquierdo = actual->derecho = NULL;printf("DATO %d %d %d %d \n",dat,actual->alt,actual->coori,actual->coord);   }
/*NumeroNodos(*a, &nonodo);*/}

void Borrar(String/*arbo0*/ *a, int dat){pNot0 padre = NULL;pNot0 actual;pNot0 nodo;int aux;actual = *a;  /* Eliminar un elemento de un árbol ABB */  
   while(!Vacio(actual)) {
      if(dat == actual->dato) { /* Si el valor está en el nodo actual */
         if(EsHoja(actual)) { if(padre) {/* Si tiene padre (no es el nodo raiz) Anulamos el puntero que le hace referencia */
                                         if(padre->derecho == actual) padre->derecho = NULL;
                                         else if(padre->izquierdo == actual) padre->izquierdo = NULL;}
                            free(actual); /* Borrar el nodo */ actual = NULL; return;      }
         else { padre = actual; /* Buscar nodo más izquierdo de rama derecha */
                if(actual->derecho) { nodo = actual->derecho;
                                    while(nodo->izquierdo) { padre = nodo; nodo = nodo->izquierdo; }  }            
               else { nodo = actual->izquierdo;/* O buscar nodo más derecho de rama izquierda */
                                    while(nodo->derecho) { padre = nodo; nodo = nodo->derecho; }      }
               /* nos aseguramos de que sólo se eliminan nodos hoja. */
               aux = actual->dato; actual->dato = nodo->dato; nodo->dato = aux;actual = nodo;     }
      }
      else { /*seguir buscando */ padre = actual;if(dat > actual->dato) actual = actual->derecho;
                                                 else if(dat < actual->dato) actual = actual->izquierdo;}
   }  }

void InOrden(String arbo0 a, int num, void (*func)(int*)){(num)++; /* Recorrido de árbol en inorden, aplicamos la función func, que tiene el prototipo: void func(int*);*/
   if(a->izquierdo)InOrden(a->izquierdo, num, func);func(&(a->dato)); 
   if(a->derecho)  InOrden(a->derecho, num ,func);   }

void PreOrden(String /*arbo0*/ a, int num, void (*func)(int*)){(num)++;func(&a->dato);/* Recorrido de árbol en preorden, aplicamos la función func, que tiene el prototipo: void func(int*);*/
   if(a->izquierdo){PreOrden(a->izquierdo, num, func);}
   if(a->derecho)  {PreOrden(a->derecho, num, func);  }    }

void PostOrden(String /*arbo0*/ a, int num, void (*func)(int*)){(num)++;/* Recorrido de árbol en postorden, aplicamos la función func, que tiene el prototipo: void func(int*);*/
   if(a->izquierdo)PostOrden(a->izquierdo, num,func);
   if(a->derecho)  PostOrden(a->derecho, num, func); func(&a->dato);   }

int Buscar(String /*arbo0*/ a, int dat){pNot0 actual = a;while(!Vacio(actual)) { if(dat == actual->dato) {printf("coori %d ",actual->coori);return actual->coori;} /* dato encontrado */
                                                                      else {if    (dat < actual->dato) actual = actual->izquierdo; /* Seguir */
                                                                            else if(dat > actual->dato) actual = actual->derecho;} }return 0; } 

int Altura(String /*arbo0*/ a, int dat){ int altura = 0; pNot0 actual = a;/* Calcular la altura del nodo que contiene el dato dat */
   while(!Vacio(actual)) { if(dat == actual->dato) return altura; /* dato encontrado */
                           else {altura++; if(dat < actual->dato) actual = actual->izquierdo;
                                           else if(dat > actual->dato) actual = actual->derecho;}
   }return -1; /* No está en árbol, devolver -1 */} 

int NumeroNodos(String /*arbo0*/ a, int *contador){*contador = 0;hojas=0; auxContador(a, contador); return /* *contador*/hojas;}/* Contar el número de nodos */ 
void auxContador(arbo0 nodo,int *c){(*c)++;if(Espadre(nodo))hojas++;pa=nodo->padr;
if(nodo->coori==0){xy=nodo->apadr+0;cc=xy;if(xy<0){ccc=(alturas+(nodo->coord+0))-0; printf("c** %d %d %d %d ",nodo->dato,nodo->coord,ccc,xy);} 
                                          else    {ccc=(alturas+nodo->coord)+xy; printf("y** %d %d %d %d ",nodo->dato,nodo->coord,ccc,xy);}}
else              {cc=nodo->alt-1;xy=nodo->padr-0;if(xy<=0) {ccc=((alturas+(nodo->coori-0))+0);printf("ccc %d %d %d %d ",nodo->dato,nodo->padr,nodo->coori,xy);}
                                                     else      ccc=((alturas-(nodo->coori-0))+0);printf("yyy %d %d %d %d ",nodo->dato,nodo->padr,nodo->coori,xy);}
see[cc][ccc]=nodo->dato;
   if(nodo->izquierdo) {auxContador(nodo->izquierdo, c); } if(nodo->derecho)   {auxContador(nodo->derecho, c); } }
     
/* Calcular la altura del árbol, que es la altura del nodo de mayor altura. */
int Alturaarbol(String /*arbo0*/ a, int *altura){ *altura = 0; auxAltura(a, 0, altura); return *altura;}
/* Función auxiliar recursiva que actualiza la altura sólo en nodos hojas de mayor altura de la máxima actual */
void auxAltura(pNot0 nodo, int a, int *altura){
   if(nodo->izquierdo) auxAltura(nodo->izquierdo, a+1, altura);
   if(nodo->derecho)   auxAltura(nodo->derecho, a+1, altura);
   if(EsHoja(nodo) && a > *altura) *altura = a;}

int Vacio(String /*arbo0*/ r){return r==NULL;}/* Comprobar si un árbol es vacío */
int EsHoja(pNot0 r){return !r->derecho && !r->izquierdo;}/* Comprobar si un nodo es hoja */
int Espadre(pNot0 r){return r->derecho || r->izquierdo;}/* Comprobar si un nodo es padre */
void Mostrar(int *d){printf("%d, ", *d);}/* Función de prueba para recorridos del árbol */

char *menu_select(char *utems,int o){strcat(otems[uu],utems);int choice=0;char *choyce=" ";uu++;if(uu==o){/**/
                                     int i=0,cc=0,ii=0,gi=1,conti=0,contii=0,gcontii=0,y=0,yy=0,fuera=0,lencual=0,lencomo=0,lensize=strlen/*sizeof*/(otems),z=0,oo=0,choice_max=0,choyce_max=0;
                                     char *cual[1],*ztems=calloc(1,lensize),*wtems=calloc(1,lensize),*ytems[lensize],xtems[lensize];
if (otems == NULL)return NULL;  	 
do {system("clear");for (i=0;i<o; i++){if(conti==i){ *cual=strchr(otems[i],44);
	                                            if(*cual!=NULL){if(contii<0){contii=gcontii/*choyce_max*/;}          yy=0;while((yy<=contii)&&(contii>=0)) {
													            lencual=strlen(*cual);lencomo=strlen(otems[i]);y=(lencomo-lencual);z=y;
 	                                                            strncpy(ytems,otems[i],lencomo);strncpy(xtems,ztems,lencomo); strncpy(xtems,ytems,y-0);        
									                            if(otems[i][y]==(char)44)strcpy(wtems,++*cual);else strcpy(wtems,*cual); ii=strlen(ytems)-strlen(*cual);strncpy(ytems,ztems,ii);      
											                    if((contii>0)&&(yy>0))*cual=strchr(wtems,44);/*else {;}*/ 
											                    if(*cual!=NULL){ii=strlen(wtems)-strlen(*cual);strncpy(ytems,wtems,ii);if(contii>=choyce_max){choyce_max++;}yy++;} 
											                    else           {choyce_max=contii;yy=contii+2;if(fuera==0)fuera=1;else {gcontii=contii;contii=-1;} } }  	                         
 	                                                            /*if(strlen(ytems<tamano)){;}si es formularios validar caercania de un campo si no seguir de largo*/ 
 	                                                            /*printf("ztems %s ", ztems);printf("xtems %s ", xtems);printf("ytems %s ", ytems);printf("wtems %s ", wtems);printf("cual %s \n", *cual);*/
 	                                                            if( (*cual==NULL)&&(yy<contii+2)) {printf(" %d)  < %s > \n", i + 1, otems);/*choyce = conti;*/choice=i; }
 	                                                            else{;if(contii==0 ){        printf(" %d) <%s> %s \n",i+1,xtems, wtems);                 choyce=xtems;choice=i;  }
 	                                                                  else {if(yy>=contii+2){printf(" %d) %s %s <%s> \n",i+1,xtems, ytems, wtems);strcpy(choyce,wtems);choice=i;}
												           	   			    else            {printf(" %d) %s <%s> %s \n",i+1,xtems, ytems, *cual);       choyce=ytems;choice=i;    } } } } }
				                                else{  printf(" %d) %s \n", i + 1, otems[i]);     } choice_max = i;     /*conti=gi;*/            /*printf("fin %s \n",choyce); */}                       
		    system("stty cbreak -echo");oo=getchar();if (conti>=0){if (oo==66){if(conti<=choice_max-1)conti=conti+1;fuera=0;}  else{if (oo==65){if(conti>0)conti=conti-1;fuera=0;}
		                                                      else{if (oo==67){contii=contii+1;}else{if (oo==68){if(contii>0)contii=contii-1;else {if(contii==0){contii=choyce_max-0;}else {if(contii<0){contii=choyce_max ;printf("__ %d \n",contii);}   contii=contii-1;}}} else {if(oo==48){ break;}}}}}}  
		    gi=conti;/*choice = conti;*/ system("stty cooked echo");
} while ((conti<=choice_max) && (conti>=0));}  return choyce; }  
int main(){int iy=0,hasta=0,cc=5;iy=/*horizon*/cc;char *nada[1];/*while(hasta<iy){printf("item :");scanf(" %s \n",litem[hasta]);strcat(items[hasta],litem[hasta]);hasta++;}*/iy=0;
    tree();hasta=cc-1/*sizeof(items)/sizeof(items[0])*/;    
    while(iy<hasta){if(strlen(otems[iy])>maxisizeitem)maxisizeitem=strlen(otems[iy]);/*printf("work %s \n",  items[iy]);*/*nada=menu_select(items[iy],hasta); iy++;};printf(" +-+-+-* %s *-+-+-+",*nada);return 0;} 
