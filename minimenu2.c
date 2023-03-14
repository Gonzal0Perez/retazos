#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#define TRUE 1 
#define FALSE 0
typedef struct _not0 { int dato,alt,coori,coord,padr,apadr;
   struct _not0 *derecho; struct _not0 *izquierdo;} tipoNod0;
typedef tipoNod0 *pNot0, *arbo1;
typedef struct _not1 { int dato,alt,coori,coord,padr,apadr;
   struct _not1 *derecho; struct _not1 *izquierdo;} tipoNot1;
typedef tipoNot1 *pNot1, *Arbol;
int num=0,hojas,hoojas,coorizq,coorder,pa=0,cc=0,ccc=0,cccc=0,ccccc=0,ddd=0,hh=0,hhh=0,xy,d,ky,kd,alturas=0,det=0;char see[24][80];
void Insertar(arbo1 *a, int dat);void Borrar(arbo1 *a, int dat);int Buscar(arbo1 a, int dat);
int Vacio(arbo1 r);int EsHoja(pNot0 r);int Espadre(pNot0 r);int NumeroNodos(arbo1 a, int* c);
int Alturaarbol(arbo1 a, int* altura);int Altura(arbo1 a, int dat);void InOrden(arbo1, int num, void (*func)(int*));
void PreOrden(arbo1, int num, void (*func)(int*));void PostOrden(arbo1, int num, void (*func)(int*));
void Podar(arbo1 *a);void auxContador(arbo1 a, int*);int AuxContador(arbo1 a, int*,int dat,int ko);
int AuxContadir(arbo1 a, int*,int dit,int ki);void auxAltura(arbo1 a, int, int*);void Mostrar(int *d);
char items[][132]={" "};

int tree(){ arbo1 arbo1Int=NULL;int altura; int nnodos;char *etems=calloc(1,3);
   Insertar(&arbo1Int, 10); Insertar(&arbo1Int, 5);Insertar(&arbo1Int, 12);Insertar(&arbo1Int, 4);
   Insertar(&arbo1Int, 7); Insertar(&arbo1Int, 3); Insertar(&arbo1Int, 6);Insertar(&arbo1Int, 9);Insertar(&arbo1Int, 8);Insertar(&arbo1Int, 11);
   Insertar(&arbo1Int, 14);Insertar(&arbo1Int, 13);Insertar(&arbo1Int, 2);Insertar(&arbo1Int, 1);Insertar(&arbo1Int, 15);Insertar(&arbo1Int, 10);
   Insertar(&arbo1Int, 17); Insertar(&arbo1Int, 18);Insertar(&arbo1Int, 16);printf("Altura de arbol %d\n", Alturaarbol(arbo1Int, &altura));
   /* Mostrar el árbol en tres ordenes distintos: */
   printf("* InOrden: ");InOrden(arbo1Int, num, Mostrar);  printf("\n");
   printf("* PreOrden: ");PreOrden(arbo1Int, num, Mostrar); printf("\n");
   printf("* PostOrden: ");PostOrden(arbo1Int, num, Mostrar);printf("\n");
   alturas=Alturaarbol(arbo1Int, &altura);   printf("Altura de arbol %d\n", alturas); 
   printf("N nodos: %d\n", NumeroNodos(arbo1Int, &nnodos));
   cc=0;while (cc<=Alturaarbol(arbo1Int, &altura)+0){ccc=0;while (ccc<=(Alturaarbol(arbo1Int, &altura)*2)){if(see[cc][ccc]>0)printf(" %d",see[cc][ccc]);else printf(" ");ccc++;}printf("\n");cc++;}
   Borrar(&arbo1Int, 5); printf("Borrar 5: ");  /* Borraremos algunos elementos: */
   InOrden(arbo1Int,num, Mostrar); printf("\n"); Borrar(&arbo1Int, 8); printf("Borrar 8: ");
   InOrden(arbo1Int,num, Mostrar); printf("\n"); Borrar(&arbo1Int, 15);printf("Borrar 15: "); 
   InOrden(arbo1Int,num, Mostrar);printf("\n");  Borrar(&arbo1Int, 2);printf("Borrar 2: ");
   InOrden(arbo1Int,num, Mostrar);printf("\n");  Borrar(&arbo1Int, 4); printf("Borrar 4: ");
   InOrden(arbo1Int,num, Mostrar);printf("\n");  Borrar(&arbo1Int, 17);printf("Borrar 17: ");InOrden(arbo1Int,num, Mostrar);printf("\n");
   hh=0;while (hh<=cc){ddd=0;hhh=0;while (hhh<=ccc-1){ccccc=0;cccc=see[hh][hhh];if(cccc<10){;}else{while(cccc>=10){ cccc=cccc-10;ccccc++;}} 
                                              if(see[hh][hhh]>0){/*etems[0]=(char)32;*/etems[0]=(char)ccccc+48;etems[1]=(char)cccc+48;/*etems[3]=(char)32;*/etems[2]=(char)44;}
                                              else              {/*etems[0]=(char)32;*/etems[0]=(char)32;      etems[1]=(char)32;     /*etems[3]=(char)32;*/etems[2]=(char)44;} strcat(items[hh],etems);
                                              /*items[hh][ddd]=etems[0];items[hh][ddd+1]=etems[1];items[hh][ddd+2]=etems[2];*//*printf("e %s",etems);*/                                    
   /*if(see[hh][hhh]>0){printf("%c",items[hh][ddd]);printf("%c",items[hh][ddd+1]);printf("%c",items[hh][ddd+2]);}else printf(" ");*/hhh=hhh+1;ddd=ddd+4;}printf("\n");hh++;/*getchar();*/}
   Podar(&arbo1Int); getchar();/*system("PAUSE");*/return 0;
}

int maxisizeitem=0,horizon=0;/*={" Jose Perez , , clown , nose ", " Coso , tengo25 , , 0_bsf ", " 65535 , , 252423 "}*/
char *menu_select(char *utems,int o);char otems[64][128]/* ={""} */;int oo, uu=0;
void Podar(arbo1 *a){/* Algoritmo recursivo, recorrido en postorden borrar todos los nodos a partir de uno, incluido*/
   if(*a) {Podar(&(*a)->izquierdo); Podar(&(*a)->derecho);
           free(*a);                /* Eliminar nodo */ *a = NULL;} }

/* Insertar un dato en el árbol ABB */
void Insertar(arbo1 *a, int dat){pNot0 padre = NULL; pNot0 actual = *a;/* Buscar el dato en el árbol, manteniendo un puntero al nodo padre */
   while(!Vacio(actual) && dat != actual->dato) { padre = actual; if(dat < actual->dato) actual = actual->izquierdo;
                                                                  else if(dat > actual->dato) actual = actual->derecho;   }   
   if(!Vacio(actual)) return; /* Si se ha encontrado el elemento, regresar sin insertar */
   /* Si padre es NULL, entonces el árbol estaba vacío, el nuevo nodo será el nodo raiz */
   if(Vacio(padre)) { *a = (arbo1)malloc(sizeof(tipoNod0));(*a)->dato = dat; (*a)->alt =Altura(*a, dat);(*a)->izquierdo = (*a)->derecho = NULL; printf(" padre ");}   
   else if(dat < padre->dato){actual = (arbo1)malloc(sizeof(tipoNod0));printf(" entra x izq %d con %d %d ",dat,padre->dato,padre->alt);
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
   else if(dat > padre->dato){actual = (arbo1)malloc(sizeof(tipoNod0));printf(" entrad x der %d con %d %d",dat,padre->dato,padre->alt);
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

void Borrar(arbo1 *a, int dat){pNot0 padre = NULL;pNot0 actual;pNot0 nodo;int aux;actual = *a;/* Eliminar un elemento de un árbol ABB */  
   while(!Vacio(actual)) {
      if(dat == actual->dato) { /* Si el valor está en el nodo actual */
         if(EsHoja(actual)) { if(padre) {/* Si tiene padre (no es el nodo raiz) Anulamos el puntero que le hace referencia */
                                         if(padre->derecho == actual) padre->derecho = NULL;
                                         else if(padre->izquierdo == actual) padre->izquierdo = NULL;}free(actual);actual = NULL;return;}
         else {padre = actual; /* Buscar nodo más izquierdo de rama derecha */
               if(actual->derecho) { nodo = actual->derecho;while(nodo->izquierdo) { padre = nodo; nodo = nodo->izquierdo; }  }            
               else{nodo=actual->izquierdo;/*buscar nodo más derecho de rama izq*/while(nodo->derecho) { padre = nodo; nodo = nodo->derecho;}}
               /* nos aseguramos de que sólo se eliminan nodos hoja. */
               aux = actual->dato; actual->dato = nodo->dato; nodo->dato = aux;actual = nodo;}}
      else { /*seguir*/ padre = actual;if(dat > actual->dato) actual = actual->derecho;
                                       else if(dat < actual->dato) actual = actual->izquierdo;}  }  } 

void InOrden(arbo1 a, int num, void (*func)(int*)){(num)++; /* Recorrido de árbol en inorden, aplicamos la función func, que tiene el prototipo: void func(int*);*/
   if(a->izquierdo){InOrden(a->izquierdo, num, func);func(&(a->dato));}
   if(a->derecho)  InOrden(a->derecho, num ,func);   }

void PreOrden(arbo1 a, int num, void (*func)(int*)){(num)++;func(&a->dato);/* Recorrido de árbol en preorden, aplicamos la función func, que tiene el prototipo: void func(int*);*/
   if(a->izquierdo){PreOrden(a->izquierdo, num, func);}
   if(a->derecho)  {PreOrden(a->derecho, num, func);  }    }

void PostOrden(arbo1 a, int num, void (*func)(int*)){(num)++;/* Recorrido de árbol en postorden, aplicamos la función func, que tiene el prototipo: void func(int*);*/
   if(a->izquierdo)PostOrden(a->izquierdo, num,func);
   if(a->derecho) { PostOrden(a->derecho, num, func); func(&a->dato); }  }

int Buscar(arbo1 a, int dat){pNot0 actual = a;while(!Vacio(actual)) { if(dat == actual->dato) {printf("coori %d ",actual->coori);return actual->coori;} /* dato encontrado */
                                                                      else {if    (dat < actual->dato) actual = actual->izquierdo; /* Seguir */
                                                                            else if(dat > actual->dato) actual = actual->derecho;} }return 0; } 

int Altura(arbo1 a, int dat){ int altura = 0; pNot0 actual = a;/* Calcular la altura del nodo que contiene el dato dat */
   while(!Vacio(actual)) { if(dat == actual->dato) return altura; /* dato encontrado */
                           else {altura++; if(dat < actual->dato) actual = actual->izquierdo;
                                           else if(dat > actual->dato) actual = actual->derecho;}
   }return -1; /* No está en árbol, devolver -1 */} 

int NumeroNodos(arbo1 a, int *contador){*contador = 0;hojas=0; auxContador(a, contador); return /* *contador*/hojas;}/* Contar el número de nodos */ 
void auxContador(arbo1 nodo,int *c){(*c)++;if(Espadre(nodo))hojas++;pa=nodo->padr;
if(nodo->coori==0){xy=nodo->apadr+0;cc=xy;if(xy<0){ccc=(alturas+(nodo->coord+0))-0; printf("c** %d %d %d %d ",nodo->dato,nodo->coord,ccc,xy);} 
                                          else    {ccc=(alturas+nodo->coord)+xy; printf("y** %d %d %d %d ",nodo->dato,nodo->coord,ccc,xy);}}
else              {cc=nodo->alt-1;xy=nodo->padr-0;if(xy<=0) {ccc=((alturas+(nodo->coori-0))+0);printf("ccc %d %d %d %d ",nodo->dato,nodo->padr,nodo->coori,xy);}
                                                     else    {  ccc=((alturas-(nodo->coori-0))+0);printf("yyy %d %d %d %d ",nodo->dato,nodo->padr,nodo->coori,xy);}}
see[cc][ccc]=nodo->dato;
   if(nodo->izquierdo) {auxContador(nodo->izquierdo, c); } if(nodo->derecho)   {auxContador(nodo->derecho, c); } }
     
/* Calcular la altura del árbol, que es la altura del nodo de mayor altura. */
int Alturaarbol(arbo1 a, int *altura){ *altura = 0; auxAltura(a, 0, altura); return *altura;}
/* Función auxiliar recursiva que actualiza la altura sólo en nodos hojas de mayor altura de la máxima actual */
void auxAltura(pNot0 nodo, int a, int *altura){
   if(nodo->izquierdo) auxAltura(nodo->izquierdo, a+1, altura);
   if(nodo->derecho)   auxAltura(nodo->derecho, a+1, altura);
   if(EsHoja(nodo) && a > *altura) *altura = a;}

int Vacio(arbo1 r){return r==NULL;}/* Comprobar si un árbol es vacío */
int EsHoja(pNot0 r){return !r->derecho && !r->izquierdo;}/* Comprobar si un nodo es hoja */
int Espadre(pNot0 r){return r->derecho || r->izquierdo;}/* Comprobar si un nodo es padre */
void Mostrar(int *d){printf("%d, ", *d);}/* Función de prueba para recorridos del árbol */

char *menu_select(char *utems,int o){strcat(otems[uu],utems); int choice=0;char *choyce=" ";uu++;if(uu==o){/**/
                                     int i=0,cc=0,ii=0,gi=1,conti=0,contii=0,gcontii=0,y=0,yy=0,fuera=0,lencual=0,lencomo=0,lensize=strlen/*sizeof*/(otems),z=0,oo=0,choice_max=0,choyce_max=0;
                                     char *cual/*[1096]*/;char*ztems=calloc(1,lensize),*wtems=calloc(1,lensize),*ytems[lensize],xtems[lensize];
if (otems == NULL)return NULL; 	 
do {system("clear");for (i=0;i<o; i++){if(conti==i){  cual=strchr(otems[i],44);    
	                                            if(cual!=NULL){if(contii<0){contii=gcontii/*choyce_max*/;}        yy=0;while((yy<=contii)&&(contii>=0)) {
													            lencual=strlen(cual);lencomo=strlen(otems[i]);y=(lencomo-lencual);z=y;
 	                                                            strncpy(ytems,otems[i],lencomo);strncpy(xtems,ztems,lencomo);; strncpy(xtems,ytems,y-0);           
									                            if(otems[i][y]==(char)44){strcpy(wtems, ++cual ); ;}
									                            else                     { ;strcpy(wtems,cual);}  
									                            ii=strlen(ytems)-strlen(cual);strncpy(ytems,ztems,ii);    
											                    if((contii>0)&&(yy>0))   cual=strchr(wtems,44);/* */  
											                    if(cual!=NULL){ii=strlen(wtems)-strlen(cual);strncpy(ytems,wtems,ii);if(contii>=choyce_max){choyce_max++;}yy++;} 
											                    else           {choyce_max=contii;yy=contii+2;if(fuera==0)fuera=1;else {gcontii=contii;contii=-1;} }}  	                         
 	                                                            /*if(strlen(ytems<tamaño)){;}si es formularios validar caercania de un campo si no seguir de largo*/ 
 	                                                            /*printf("ztems %s ", ztems);printf("xtems %s ", xtems);printf("ytems %s ", ytems);printf("wtems %s ", wtems);printf("cual %s \n", *cual);*/
 	                                                            if( (cual==NULL)&&(yy<contii+2)) {printf(" %d)  < %s > \n", i + 1, otems);/*choyce = conti;*/choice=i; }
 	                                                            else{;if(contii==0 ){        printf(" %d) <%s> %s \n",i+1,xtems, wtems);                 choyce=xtems;choice=i;  }
 	                                                                  else {if(yy>=contii+2){printf(" %d) %s %s <%s> \n",i+1,xtems, ytems, wtems);strcpy(choyce,wtems);choice=i;}
												           	   			    else            {printf(" %d) %s <%s> %s \n",i+1,xtems, ytems, cual);       choyce=ytems;choice=i;    } } } } }
				                                else{  printf(" %d) %s \n", i + 1, otems[i]);     } choice_max = i;     /*conti=gi;*/            /*printf("fin %s \n",choyce); */}                       
		    system("stty cbreak -echo");oo=getchar();if (conti>=0){if (oo==66){if(conti<=choice_max-1)conti=conti+1;fuera=0;}  else{if (oo==65){if(conti>0)conti=conti-1;fuera=0;}
		                                                      else{if (oo==67){contii=contii+1;}else{if (oo==68){if(contii>0)contii=contii-1;else {if(contii==0){contii=choyce_max-0;}else {if(contii<0){contii=choyce_max ;printf("__ %d \n",contii);}   contii=contii-1;}}} else {if(oo==48){ break;}}}}}}  
		    gi=conti;/*choice = conti;*/ system("stty cooked echo");
} while ((conti<=choice_max) && (conti>=0));  }   return choyce; }  
int main(){int iy=0,hasta=0;iy=/*horizon*/cc;void *nada ;/*while(hasta<iy){printf("item :");scanf(" %s \n",litem[hasta]);strcat(items[hasta],litem[hasta]);hasta++;}*/iy=0;
    tree();hasta=cc+0/*sizeof(items)/sizeof(items[0])*/;    
    while(iy<hasta+0){if(strlen(otems[iy])>maxisizeitem)maxisizeitem=strlen(otems[iy])+0; printf("work |%s| %d \n",items[iy],hasta); nada=menu_select(items[iy],hasta);getchar(); iy++;};printf(" +-+-+-* %s *-+-+-+",nada);return 0;} 


