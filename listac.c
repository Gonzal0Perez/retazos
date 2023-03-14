# include <stdio.h>
# include <stdlib.h>
typedef char TIPO_DATO;
struct lista {TIPO_DATO dato ;
    struct lista *sig, *ant, *nuevo,*primero,*recorre, *anterior, *siguiente,*ultimo;;};
typedef struct lista ELEMENTO;
typedef ELEMENTO *ENLACE;
void Opcion_1(ENLACE *, ENLACE *);
void aniadir(ENLACE *, ENLACE *, ENLACE,ENLACE,ENLACE); 
void Opcion_2(ENLACE *, ENLACE *);
ENLACE retirar(ENLACE *, ENLACE *);
ENLACE cadena(char *);
void Opcion_3(ENLACE *, ENLACE *, ENLACE, ENLACE *, ENLACE *);
void listar(ENLACE);
void leer_cadena(char *, int);
void mensaje(void), preguntar(void);
/*# define NULL 0*/
# define LONCAD 80
                                                               
void main()
{   ENLACE principio, fin,primero,ultimo;
    int seguir=1; char c; mensaje();
    principio=(ENLACE)malloc(sizeof(ELEMENTO));
    fin=(ENLACE)malloc(sizeof(ELEMENTO)); principio=fin=NULL;
    primero=(ENLACE)malloc(sizeof(ELEMENTO));primero=fin=NULL;
    ultimo=(ENLACE)malloc(sizeof(ELEMENTO));ultimo=fin=NULL;
    while ( seguir ) {preguntar();
         while ( (c=getchar()) == '\n' ) ; getchar();
         switch ( c ) {
            case '1' : Opcion_1 ( &principio, &fin );break;
            case '2' : Opcion_2 ( &principio, &fin );break;
            case '3' : Opcion_3 ( &principio, &fin,&principio,&primero,&ultimo );       break;
            case '5' : seguir=0;                     break;
            case '4' : otromain();                   break;   
            default : printf("Elija una opcion correcta %c\n",7);  } }
    printf("FIN DE LA EJECUCION\n");}

void otromain()
{      ENLACE principio;char s[80]; printf("Introducir una cadena: \n");scanf("%s", s);principio=cadena(s);
       lystar(principio); printf("\n");lystar(principio); printf("\n");}
        

void Opcion_1 (ENLACE *principio, ENLACE *fin)/*    Opcion_1    Se lee una cadena de caracteres y se añaden a la cola por el final con algoritmo iterativo.*/
{   ENLACE nuevo,anterior,primero,ultimo; 
    int i;char s[80],atras=calloc(1,1);printf("Introducir una cadena: "); int ii=0; 
    while ( (s[ii]=getchar()) != '\n' ) if ( ii<(LONCAD-1) ) ii++; s[ii]='\0';
    for (i=0; s[i] != '\0'; ++i) {
          nuevo=   (ENLACE)malloc(sizeof(ELEMENTO));
          anterior=(ENLACE)malloc(sizeof(ELEMENTO));
          primero= (ENLACE)malloc(sizeof(ELEMENTO));
          ultimo=  (ENLACE)malloc(sizeof(ELEMENTO));
          anterior->dato=atras;
          nuevo->dato=s[i];if(i==0){primero->dato=s[i];printf("primero: %s ",primero);}atras=s[i];nuevo->sig=NULL;
          aniadir(principio, fin, nuevo, anterior,ultimo);  printf("_ant %s nuevo %s ",anterior,nuevo);} }

void aniadir( ENLACE *principio, ENLACE *fin, ENLACE nuevo, ENLACE anterior, ENLACE ultimo)
{   if ( *fin ) {     nuevo->ant=anterior;       ;(*fin)->sig=nuevo; *fin = (*fin)->sig;
                                           /*(*principio)->ant=anterior;*principio=(*principio)->ant;*/}                                    
    else {*principio = *fin = nuevo;ultimo=*fin=nuevo;  (*principio)->ant=anterior;/* *principio=(*principio)->ant; */ }      }                                                           

/*void inserta_nodo(int urgencia){int b_post=0, b_ante=0; 
	siguiente=NULL;anterior=NULL; 
	if(primero==NULL) {	primero=nuevo;ultimo=nuevo;  }
	else 
	{	if(urgencia==1)
		{   recorre=primero; 
			do { if(recorre->urge==0) {anterior=recorre->ant; siguiente=recorre; b_post=1;}
				 else b_ante=1; 
				 recorre=recorre->sig;  }while(recorre!=NULL&&b_post==0);}		
		if(b_post==1&&b_ante==1) 
		{   nuevo->ant=anterior; nuevo->sig=siguiente;anterior->sig=nuevo;siguiente->ant=nuevo; }
		else if((b_post==0&&b_ante==1) || (urgencia==0)) {	nuevo->ant=ultimo; ultimo->sig=nuevo; ultimo=nuevo; }
		     else                                        {	primero->ant=nuevo; nuevo->sig=primero;	primero=nuevo; }
	}
}*/

/*Creacion de lista encadenada con algoritmo recursivo*/
ENLACE cadena(char s[ ]){       ENLACE principio;
       if ( s[0] == '\0' ) return(NULL);
       else {  principio=(ENLACE)malloc(sizeof(ELEMENTO));
               principio->dato=s[0]; principio->sig=cadena(s+1); return(principio);}}
/*     Se recorre una lista con algoritmo recursivo escribiendo los campos de datos.*/
void lystar(ENLACE principio) {if( principio == NULL ) printf("NULL");
                              else {  printf("%c", principio->dato); lystar(principio->sig);}}

/*   Opcion_2 Eliminar un elemento por el principio de cola.*/
void Opcion_2 (ENLACE *principio, ENLACE *fin)
{ENLACE nodo; if ( *principio ) {nodo = retirar (principio, fin);printf ("Elemento retirado: %c\n", nodo->dato); free(nodo);}
              else printf("No hay elementos en cola\n");}

ENLACE retirar ( ENLACE *principio, ENLACE *fin )
{ENLACE tope;tope= *principio; *principio= (*principio)->sig;
        if (*principio) tope->sig=NULL;
        else *fin=NULL; return (tope);}

void Opcion_3 (ENLACE *principio, ENLACE *fin, ENLACE p,ENLACE *primero, ENLACE *ultimo)
{  ENLACE tope;tope= *principio; ENLACE bott;bott= *fin; /*p=p->primero;*/
   printf("___principio %s fin %s primero %s ultimo %s ",*principio,*fin,*primero,*ultimo);
   if ( p==NULL ) printf("No hay elementos en cola\n");
   else {char *k=calloc(1,1); scanf("%s",k);while(*k!=48){if(*k==50){while ( p->sig != NULL) {printf("%c ",p->dato);if(p==*fin) {p=p->sig;
	                                                                                                                    printf("fin ");  p=*principio; p=p->primero;
	                                                                                                                    printf("%c", p->dato);getchar();}else {printf("sigue");}p=p->sig; }}
                                                     else{if(*k==56){while ( p->ant != NULL) {printf("%c ",p->dato);if (*principio){
														                                                                printf("principio ");p=*fin; p=p->ultimo;  
														                                                                printf("%c", p->dato);getchar();} else {printf("retro");}p=p->ant; }}}           
                                            if(p->sig==NULL){p=*principio; p=p->primero;      /* *principio= (*principio)->sig;*/}
                                            if(p->ant==NULL){p=*fin; p=p->ultimo;/*(*principio)->ant=p; *fin = (*fin)->ant;*/}
                                            printf("_ %c ant %s  sig %s", p->dato,p->ant,p->sig);scanf("%s",k);}                             
    printf("\n");}}

void mensaje()
{   printf("Programa COLA\n"); printf("Este programa permite manejar una Cola: ");
    printf("Lista encadenada\n");printf("con disciplina FIFO (primero en entrar, "); printf("primero en salir)\n");}
void preguntar(){printf("\nQue opcion ( 1-Aniadir, 2-Retirar, 3-Listar, 4-otromain 5-Terminar) ? \n");}
                                                             
