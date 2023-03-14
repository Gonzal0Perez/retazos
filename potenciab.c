#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
   
int main(){int www=0;
char xsstr[8]="00000000",ysstr[4]="0000",oysstr[6]="      ",zsstr[4]="0000",ozsstr[2]="  ",psstr[8]="        ",qsstr[4]="    ",rsstr[4]="    ";
int level2[96]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int level21[96]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int  CCC[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; int CCC1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int xCCC[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int xCCC1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int yCCC[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int yCCC1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int zCCC[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int zCCC1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int CCaC[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int CCaC1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int DDD[96]= {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int DDD1[96]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int xDDD[16]= {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int xDDD1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int yDDD[16]= {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int yDDD1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int nDDD[16]= {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int nDDD1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int AAA[16]= {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int BBB[16]= {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int xAAA[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int xBBB[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int yAAA[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int yBBB[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int zAAA[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int zBBB[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int GAAA[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int GBBB[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int buf0[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},gbuf0[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int buf1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},gbuf1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int buf2[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},gbuf2[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int buf3[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},gbuf3[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int bwf0[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}},gbwf0[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
int bwf1[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}},gbwf1[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
int AAA1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int BBB1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; 
int xAAA1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int xBBB1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int yAAA1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int yBBB1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int zAAA1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int zBBB1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int GAAA1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int GBBB1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int buf10[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},gbuf10[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int buf11[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},gbuf11[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int buf12[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},gbuf12[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int buf13[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},gbuf13[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int bwf10[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}},gbwf10[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
int bwf11[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}},gbwf11[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
/*char aconx[]="                ";char xaconx[16]="                ";char yaconx[16]="                "; 
char a1conx[]="                "; char xa1conx[16]="                ";char ya1conx[16]="                "; */
int aconx[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int xaconx[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int yaconx[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int gaconx[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int a1conx[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int xa1conx[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int ya1conx[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};int ga1conx[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
char  dicc[96]="                                                                                               ";
char dicc1[96]="                                                                                               ";
int  Ldicc[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
int  GLdicc[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
int Ldicc1[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
int GLdicc1[16][16]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};int cn=0,cnn=0;
int  Bdicc[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; char dicc9[8][8];cn=0;cnn=0;while (cn<=7){cnn=0;while(cnn<=7){dicc9[cn][cnn]=(char)48;cnn++;};cn++;}
int ddd[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; char dicc19[8][8];cn=0;cnn=0;while (cn<=7){cnn=0;while(cnn<=7){dicc19[cn][cnn]=(char)48;cnn++;};cn++;}
int ddd1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int ael[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int ael1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int el[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int el1[16]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int byes[16][16]; int byes1[16][16]; int xbyes[16][16]; int ybyes[16][16]; int xbyes1[16][16]; int ybyes1[16][16]; 
int xo=0,cont_vueltas=0,cont_caras=0,cont_falsoa=-1,cont_falsoa1=-1,cont_menos=0,cont_menos1=0,cont_rep=1,cont_rep1=1,gcont_rep=1,gcont_rep1=1,ggcont_rep=1,ggcont_rep1=1,xcont_rep=1,xcont_rep1=1,cont_vueltas1=0,cont_caras1=0,u=0,instanciasdelemento=0,instanciasdelemento1=0,xinstanciasdelemento=0,xinstanciasdelemento1=0,yinstanciasdelemento=0,yinstanciasdelemento1=0,repeticiones=0,repeticiones1=0,mitadbwf=0,mitadbwf1=0,mayor=0,mayor1=0,gelementos=0,gelementos1=0,gkienera=0,gkienera1=0,salida=0,salida1=0,gmasalto=0,gacmasalto=0,gacmasalto1=0,gmasalto1=0,ccc=0,ccc2=0,ccc3=0,estironveces=0,estiradsdaki=0,mitaad=0,dicclleno=0,dicclleno1=0,cont_rellena=0,cont_rellena1=0,ndos=0,subi=0,subi1=0;
int trellenando=0,trellenando1=0,gtrellenando=0,gtrellenando1=0,trigg_ldicc=0,trigg_ldicc1=0,gmayor=0,gvmicero=0,gmgax=0,gmgbx=0,gmayor1=0,gvmicero1=0,ggaax=0,ggaax1=0,gmgax1=0,gmgbx1=0,  llisto=0,llisto1=0,cont_d=0,cont_d1=0,gcont_d=0,gcont_d1=0,xcont_d=0,xcont_d1=0,falsoa=-1,falsoa1=-1,glentra=0,glentra1=0,gglentra=0,gglentra1=0,cbv=0,fin=0,contaray=0,gcontaray=0,trcontaray=0,contaray1=0,gcontaray1=0,trcontaray1=0,bax=0,bax1=0,erescero=0,erescero1=0,elementos=0,elementos1=0,uno=0,uno1=0,tr=0,ultreyeno=0,pultreyeno=0,tr1=0,ultreyeno1=0,pultreyeno1=0,VALOR_A_CAMBIAR=0,VALOR_A_CAMBIAR1=0,gax=0,gaax=0,gabx=0,gax1=0,gaax1=0,gabx1=0,b1=0,e1=0,p=0,acumulador=0,acumulador1=0,gacumulador=0,gacumulador1=0,aacumulador=0,aacumulador1=0,intocable=0,intocable1=0,masalto=0,masbajo=0,segmasbajo=0,segmasbajo1=0,masbajo1=0,masalto1=0,kienera=-1,kienera1=-1,vmicero=0,vmicero1=0,ax=0,bx=0,cvb=0,mgax=0,mgax1=0,acmasalto=0,acmasalto1=0,mgbx=0,mgbx1=0,bye=0;
int scont_caras1=0,	mmaximo=0,mminimo,mmaximo1=0,mminimo1,nobxx=1,xmayor=0,xmayor1=0,xgelementos=0,xgelementos1=0,xfalsoa=-1,xfalsoa1=-1,xcont_falsoa=-1,xcont_falsoa1=-1,xglentra=0,xglentra1=0,xgglentra=0,xgglentra1=0,xcbv=0,xfin=0,xcontaray=0,xgcontaray=0,xtrcontaray=0,xcontaray1=0,xgcontaray1=0,xtrcontaray1=0,xbax=0,xbax1=0,xerescero=0,xerescero1=0,xelementos=0,xelementos1=0,xuno=0,xuno1=0,xtr=0,xultreyeno=0,xpultreyeno=0,xtr1=0,xultreyeno1=0,xpultreyeno1=0,xVALOR_A_CAMBIAR=0,xVALOR_A_CAMBIAR1=0,xgax=0,xgaax=0,xgabx=0,xgax1=0,xgaax1=0,xgabx1=0,xacumulador=0,xacumulador1=0,xaacumulador=0,xaacumulador1=0,xintocable=0,xintocable1=0,xmasalto=0,xmasbajo=0,xsegmasbajo=0,xsegmasbajo1=0,xmasbajo1=0,xmasalto1=0,xkienera=0,xkienera1=0,xvmicero=0,xvmicero1=0,xcvb=0,xmgax=0,xmgax1=0,xacmasalto=0,xacmasalto1=0,xmgbx=0,xmgbx1=0;
int ycont_rep=1,ycont_rep1=1,ymayor=0,ymayor1=0,ygelementos=0,ygelementos1=0,yfalsoa=-1,yfalsoa1=-1,ycont_falsoa=-1,ycont_falsoa1=-1,yglentra=0,yglentra1=0,ygglentra=0,ygglentra1=0,ycbv=0,yfin=0,ycontaray=0,ygcontaray=0,ytrcontaray=0,ycontaray1=0,ygcontaray1=0,ytrcontaray1=0,ybax=0,ybax1=0,yerescero=0,yerescero1=0,yelementos=0,yelementos1=0,yuno=0,yuno1=0,ytr=0,yultreyeno=0,ypultreyeno=0,ytr1=0,yultreyeno1=0,ypultreyeno1=0,yVALOR_A_CAMBIAR=0,yVALOR_A_CAMBIAR1=0,ygax=0,ygaax=0,ygabx=0,ygax1=0,ygaax1=0,ygabx1=0,yacumulador=0,yacumulador1=0,yaacumulador=0,yaacumulador1=0,yintocable=0,yintocable1=0,ymasalto=0,ymasbajo=0,ysegmasbajo=0,ysegmasbajo1=0,ymasbajo1=0,ymasalto1=0,ykienera=0,ykienera1=0,yvmicero=0,yvmicero1=0,ycvb=0,ymgax=0,ymgax1=0,yacmasalto=0,yacmasalto1=0,ymgbx=0,ymgbx1=0;
int zcont_vueltas=0,zcont_caras=0,zcont_vueltas1=0,zcont_caras1=0,zcont_rep=1,zcont_rep1=1,zmayor=0,zmayor1=0,zgelementos=0,zgelementos1=0,zfalsoa=-1,zfalsoa1=-1,zcont_falsoa=-1,zcont_falsoa1=-1,zglentra=0,zglentra1=0,zgglentra=0,zgglentra1=0,zcbv=0,zfin=0,zcontaray=0,zgcontaray=0,ztrcontaray=0,zcontaray1=0,zgcontaray1=0,ztrcontaray1=0,zbax=0,zbax1=0,zerescero=0,zerescero1=0,zelementos=0,zelementos1=0,zuno=0,zuno1=0,ztr=0,zultreyeno=0,zpultreyeno=0,ztr1=0,zultreyeno1=0,zpultreyeno1=0,zVALOR_A_CAMBIAR=0,zVALOR_A_CAMBIAR1=0,zgax=0,zgaax=0,zgabx=0,zgax1=0,zgaax1=0,zgabx1=0,zacumulador=0,zacumulador1=0,zaacumulador=0,zaacumulador1=0,zintocable=0,zintocable1=0,zmasalto=0,zmasbajo=0,zsegmasbajo=0,zsegmasbajo1=0,zmasbajo1=0,zmasalto1=0,zkienera=0,zkienera1=0,zvmicero=0,zvmicero1=0,zcvb=0,zmgax=0,zmgax1=0,zacmasalto=0,zacmasalto1=0,zmgbx=0,zmgbx1=0;
int jji=0,jja=0,jju=1,jji1=0,jja1=0,jju1=1,bye1=0,ra=0,tanteoes=0,cmm=0,om=0,om1=0,bbx=0,soycero=-1, soycero1=-1, comunlisto=0, comprimiendo=0,CONTADORDPASOS=0,forget=0,suma=0,sumb=0,tram=0,xu=0,yu=0,xforget=0,yforget=0,xsumb=0,ysumb=0,xrepeticiones=0,yrepeticiones=0,xbye=0,ybye=0,condicvale=0,condicvale1=0,xcondicvale=0,xcondicvale1=0,ycondicvale=0,ycondicvale1=0,bxx=0,xestironveces=0,xestiradsdaki=0,yestironveces=0,yestiradsdaki=0,xestironveces1=0,xestiradsdaki1=0,yestironveces1=0,yestiradsdaki1=0,cota1=0,cota2=0,noveo=0,guno=0,guno1=0; 
int btod(char *parametro){char *parametr1=parametro,parametr0[4]="    ";int p=0,y=3;strncpy(parametr0,parametr1,4);
while((((int)(parametr0[y]-48))>=0)  & (y>=0)){int j=1,ji=3,base=1,h=(int)(parametr0[y]-48); 
                         while(j<=ji-y){base=base*2;j++;}h=h*base;p=p+h;y=y-1;};return p;
}
int btod8(char *parametro){char *parametr1=parametro,parametr0[8]="        ";int p=0,y=7,ccm=0;strncpy(parametr0,parametr1,8);
/*while(ccm<=7){parametr0[ccm]=parametr1[ccm];ccm++;}*/printf("parametr0 %c %c %c %c %c %c %c %c ",parametr0[0],parametr0[1],parametr0[2],parametr0[3],parametr0[4],parametr0[5],parametr0[6],parametr0[7]);
while((((int)(parametr0[y]-48))>=0) & (y>=0)){int j=1,ji=7,base=1,h=(int)(parametr0[y]-48); 
                         while(j<=ji-y){base=base*2;j++;}h=h*base;p=p+h;y=y-1;} return p;
}
char btoh(char *parametro){
         char *parametr1=parametro,parametr0[4]="    ",*letrica=" ";int p=0,y=3;strncpy(parametr0,parametr1,4);
            while(((int)(parametr0[y]-48))>=0){int j=1,ji=3,base=1,h=(int)(parametr0[y]-48); 
                         while(j<=ji-y){base=base*2;j++;}h=h*base;p=p+h;if (p>9){if (p==10){*letrica=(char)65;}else if (p==11){*letrica=(char)66;}else if (p==12){*letrica=(char)67;}else if (p==13){*letrica=(char)68;}else if (p==14){*letrica=(char)69;}else if (p==15){*letrica=(char)70;} }else {*letrica=(char)(p+48);}                         
                         y=y-1;};return *letrica; 
} 
char zparame(int iii,int iiii){int gi=iii,cu0=0,cu1=0,az=0,baz=0,caz=0,aa=(iiii-1),aa0=5,aa1=1;printf("i %d ii %d \n",iii,iiii);
if(iii==0){while (aa>=0){xsstr[aa]=(char)48;aa--;}
oysstr[0]=(char)48;oysstr[1]=(char)48;oysstr[2]=(char)48;oysstr[3]=(char)48;oysstr[4]=(char)48;oysstr[5]=(char)48;
ozsstr[0]=(char)48;ozsstr[1]=(char)48;}         
else{if(iii==1){xsstr[7]=(char)49;aa--;ozsstr[1]=(char)49;aa1--;}  
   	 else    {while (iii>=1){az=iii/2;baz=az*2;caz=iii-baz;xsstr[aa]=(char)(caz+48);aa--;  iii=az;
   	 if (aa1<0){oysstr[aa0]=(char)(caz+48);aa0--;}  else {ozsstr[aa1]=(char)(caz+48);aa1--;}  } }
             az=iii/2;baz=az*2;caz=iii-baz;iii=az;xsstr[aa]=(char)(caz+48); if (aa1<0){oysstr[aa0]=(char)(caz+48);}else {ozsstr[aa1]=(char)(caz+48);} 
             while(aa>=0){xsstr[aa]=(char)48;aa--;}
             while(aa0>=0){oysstr[aa0]=(char)48;aa0--;}
             while(aa1>=0){ozsstr[aa1]=(char)48;aa1--;}}
             printf("xsstr: %c%c%c%c%c%c%c%c\n",xsstr[0],xsstr[1],xsstr[2],xsstr[3],xsstr[4],xsstr[5],xsstr[6],xsstr[7]);
             printf("oysstr: %c%c%c%c%c%c \n",oysstr[0],oysstr[1],oysstr[2],oysstr[3],oysstr[4],oysstr[5]);
             printf("ozsstr: %c%c\n",ozsstr[0],ozsstr[1]);
return 0;} 
char nzparame(int i,int ii){int gi=i,cu0=0,cu1=0,a=0,ba=0,ca=0,aa=(ii-1),aa0=4,aa1=2;printf("i %d ii %d \n",i,ii);
if(i==0){while (aa>=0){xsstr[aa]=(char)48;aa--;}oysstr[0]=(char)48;oysstr[1]=(char)48;oysstr[2]=(char)48;oysstr[3]=(char)48;oysstr[4]=(char)48;ozsstr[0]=(char)48;ozsstr[1]=(char)48;ozsstr[2]=(char)48;}        
else{if(i==1){xsstr[7]=(char)49;aa--;ozsstr[2]=(char)49;aa1--;} 
   	 else    {while (i>=1){a=i/2;ba=a*2;ca=i-ba;if(i==gi){if(ca==0)ca=1;}  i=a;xsstr[aa]=(char)(ca+48);aa--;if (aa1<0){oysstr[aa0]=(char)(ca+48);aa0--;}else {ozsstr[aa1]=(char)(ca+48);aa1--;} if((i<3)&(gi==10)){gi=0;i=10;}if((i<3)&(gi==7)){gi=0;i=3;}if((i<2)&(gi==2)){gi=0;i=3;}if((i<2)&(gi==3)){gi=0;i=3;}if((i<2)&(gi==5)){gi=0;i=3;}if((i<2)&(gi==13)){gi=0;i=3;}if((i<2)&(gi==14)){gi=0;i=3;}if((i<2)&(gi==8)){gi=0;i=3;}if((i<2)&(gi==15)){gi=0;i=3;}if((i<2)&(gi==9)){gi=0;i=3;}if((i<2)&(gi==12)){gi=0;i=3;}if((i<2)&(gi==4)){gi=0;i=3;}}}
             a=i/2;ba=a*2;ca=i-ba;i=a;xsstr[aa]=(char)(ca+48); if (aa1<0){oysstr[aa0]=(char)(ca+48);}else {ozsstr[aa1]=(char)(ca+48);} 
             while(aa>=0){xsstr[aa]=(char)48;aa--;}
             while(aa0>=0){oysstr[aa0]=(char)48;aa0--;}
             while(aa1>=0){ozsstr[aa1]=(char)48;aa1--;}
             printf("xsstr: %c%c%c%c%c%c%c%c\n",xsstr[0],xsstr[1],xsstr[2],xsstr[3],xsstr[4],xsstr[5],xsstr[6],xsstr[7]);
             printf("ysstr: %c%c%c%c%c \n",oysstr[0],oysstr[1],oysstr[2],oysstr[3],oysstr[4]);
             printf("zsstr: %c%c\n",ozsstr[0],ozsstr[1]);}
return 0;}   
char parame(int i,int ii){int gi=i,cu0=0,cu1=0,a=0,ba=0,ca=0,aa=(ii-1),gaa=aa,aa0=3,aa1=3;printf("i %d",gi);/*while (aa>=0){xsstr[aa]= (char)48;aa--;}while(aa0>=0){ysstr[aa0]=(char)48;aa0--;}while(aa1>=0){zsstr[aa1]=(char)48;aa1--;}aa=ii-1,aa0=3,aa1=3;*/
while (gaa>=0){ysstr[gaa]=(char)48;gaa--;}while (gaa>=0){zsstr[gaa]=(char)48;gaa--;}
if(gi==0){while (aa>=0){xsstr[aa]=(char)48;aa--;} while (aa0>=0){ysstr[aa0]=(char)48;aa0--;} while (aa1>=0){zsstr[aa1]=(char)48;aa1--;}}  
else if(gi==1){xsstr[7]=(char)49;aa--;zsstr[3]=(char)49;aa1--;}  
     else     {while (i>=1){a=i/2;ba=a*2;ca=i-ba;/*if(i==gi){if(ca==0)ca=1;}*/ xsstr[aa]=(char)(ca+48);  
     if ((aa-4)<0){ysstr[aa]=(char)(ca+48);}else {zsstr[aa-4]=(char)(ca+48);/* if(aa1==3){if(){}} */;} aa--;  i=a;}
             a=i/2;ba=a*2;ca=i-ba;i=a;xsstr[aa]=(char)(ca+48); if ((aa-4)<0){ysstr[aa]=(char)(ca+48);}else {zsstr[aa-4]=(char)(ca+48);} /**/
             while(aa>=0){xsstr[aa]=(char)48;aa--;}   
             if(zsstr[3]==xsstr[7]){;}else zsstr[3]=xsstr[7];}
             printf("xsstr: %c%c%c%c%c%c%c%c\n",xsstr[0],xsstr[1],xsstr[2],xsstr[3],xsstr[4],xsstr[5],xsstr[6],xsstr[7]);
             printf("ysstr: %c%c%c%c\n",ysstr[0],ysstr[1],ysstr[2],ysstr[3]);
             printf("zsstr: %c%c%c%c\n",zsstr[0],zsstr[1],zsstr[2],zsstr[3]);
return 0;} 
int MINMAX(){  
  #define MIN(a,b) ((a < b) ? a : b)
  #define MAX(c,d) ((c > d) ? c : d) 
  int i=0, ii=0,tam=0, suma=0, minimo=BBB[0], maximo=BBB[0];tam=sizeof(BBB)/sizeof(int);
  if (om==0){while (i<=tam)
  {if(i==intocable){;}else {if (i==kienera){;}else {maximo=MAX(maximo,BBB[i]);printf("max_ %d",maximo);}}printf("i %d ",i);i=i+1;}
  ii=0;while(ii<=15){if(u<=0){if (BBB[ii]==-1){;}else {if(BBB[ii]>=maximo-136){minimo=MIN(minimo,BBB[ii]);}}}ii++;}
  ii=0;while(ii<=15){if(BBB[ii]==minimo)masbajo=ii;ii++;} 
  ii=0;while(ii<=15){if(BBB[ii]==maximo){intocable=ii;printf("in %d ",ii);}ii++;}} maximo=BBB[0];
  i=0; if(intocable==0){i=1;maximo=BBB[1];};while (i<=15) {if(i==intocable){;}else {if (i==kienera){;}else {maximo=MAX(maximo,BBB[i]);printf("ii %d ",i);}}i=i+1;}  
  ii=0;if(intocable==0) ii=1;while (ii<=15){if(BBB[ii]==maximo){masalto=ii;printf("iii %d ",ii);}ii++;}  
  return 0;     
}  
int nMINMAX(){
  #define MIN(a,b) ((a < b) ? a : b)
  #define MAX(c,d) ((c > d) ? c : d)
  int i=0, ii=0,tam=0, suma=0, minimo=BBB[0], maximo=BBB[0];tam=sizeof(BBB)/sizeof(int);
  while (i<tam) 
  {/*zparame(BBB[i],8); if(btod8(oysstr)>=0){*/minimo=MIN(minimo,yBBB[i]);maximo=MAX(maximo,yBBB[i]);i=i+1;printf("i %d ",i);}
  ii=0;while (ii<=15){if(yBBB[ii]==minimo)masbajo=ii;ii++;} 
  ii=0;while (ii<=15){if(yBBB[ii]==maximo)intocable=ii;ii++;} maximo=yBBB[0];
  i=0; while (i<tam) {if(i==intocable){;}else maximo=MAX(maximo,yBBB[i]);i=i+1;}  
  ii=0;while (ii<=15){if(yBBB[ii]==maximo)masalto=ii;ii++;}  
  return 0; 
} 
int mMINMAX(){
  #define MIN(a,b) ((a < b) ? a : b)
  #define MAX(c,d) ((c > d) ? c : d)
  int i=0, ii=0,tam=0, suma=0, minimo=BBB[0], maximo=BBB[0];tam=sizeof(BBB)/sizeof(int);
  while (i<tam) 
  {parame(BBB[i],8); if(btod8(ysstr)>=0){minimo=MIN(minimo,BBB[i]);maximo=MAX(maximo,BBB[i]);i=i+1;printf("i %d ",i);}}
  ii=0;while (ii<=15){if(BBB[ii]==minimo)masbajo=ii;ii++;} 
  ii=0;while (ii<=15){if(BBB[ii]==maximo)intocable=ii;ii++;} maximo=BBB[0];
  i=0; while (i<tam) {if(i==intocable){;}else maximo=MAX(maximo,BBB[i]);i=i+1;}  
  ii=0;while (ii<=15){if(BBB[ii]==maximo)masalto=ii;ii++;}  
  return 0; 
} 
int MINMAX1(){   
  #define MIN1(a,b) ((a < b) ? a : b)
  #define MAX1(c,d) ((c > d) ? c : d)
  int i=0, ii=0, tam1=0, suma1=0, minimo1=BBB1[0], maximo1=BBB1[0];tam1=sizeof(BBB1)/sizeof(int);   
  if (om1==0){while (i<=tam1)
  {if(i==intocable1){;}else {if (i==kienera1){;}else {maximo1=MAX1(maximo1,BBB1[i]);printf("max_ %d",maximo1);}}printf("i %d ",i);i=i+1;}
  ii=0;while(ii<=15){if(u<=0){if (BBB1[ii]==-1){;}else {if(BBB1[ii]>=maximo1-136){minimo1=MIN1(minimo1,BBB1[ii]);}}}ii++;}
  ii=0;while(ii<=15){if(BBB1[ii]==minimo1)masbajo1=ii;ii++;} 
  ii=0;while(ii<=15){if(BBB1[ii]==maximo1){intocable1=ii;printf("in %d ",ii);}ii++;}}maximo1=BBB1[0];
  i=0;if(intocable1==0) {i=1;maximo1=BBB1[1];} while(i<=15){ if(i==intocable1){;}else {if (i==kienera1){;}else {maximo1=MAX1(maximo1,BBB1[i]);printf("max_ %d",maximo1);printf("ii %d ",i);}}i=i+1;}
  ii=0;if(intocable1==0) ii=1;while(ii<=15){if(BBB1[ii]==maximo1){masalto1=ii;printf("iii %d ",ii);}ii++;}    
  return 0;  
} 
int nMINMAX1(){ 
  #define MIN1(a,b) ((a < b) ? a : b)
  #define MAX1(c,d) ((c > d) ? c : d)
  int i=0, ii=0, tam1=0, suma1=0, minimo1=BBB1[0], maximo1=BBB1[0];tam1=sizeof(BBB1)/sizeof(int);   
  while (i<tam1)
  {minimo1=MIN1(minimo1,yBBB1[i]);maximo1=MAX1(maximo1,yBBB1[i]);i=i+1;printf("i %d ",i);}
  ii=0;while(ii<=15){if(yBBB1[ii]==minimo1)masbajo1=ii;ii++;} 
  ii=0;while(ii<=15){if(yBBB1[ii]==maximo1)intocable1=ii;ii++;} maximo1=yBBB1[0];
  i=0; while(i<tam1){if(i==intocable1){;}else maximo1=MAX1(maximo1,yBBB1[i]);i=i+1;}
  ii=0;while(ii<=15){if(yBBB1[ii]==maximo1)masalto1=ii;ii++;}    
  return 0; 
}
int mMINMAX1(){ 
  #define MIN1(a,b) ((a < b) ? a : b)
  #define MAX1(c,d) ((c > d) ? c : d)
  int i=0, ii=0, tam1, suma1=0, minimo1=BBB1[0], maximo1=BBB1[0];tam1=sizeof(BBB1)/sizeof(int);   
  while (i<tam1)
  {parame(BBB1[i],8); if(btod8(ysstr)>=0){minimo1=MIN1(minimo1,BBB1[i]);maximo1=MAX1(maximo1,BBB1[i]);i=i+1;printf("i %d ",i);}}
  ii=0;while(ii<=15){if(BBB1[ii]==minimo1)masbajo1=ii;ii++;} 
  ii=0;while(ii<=15){if(BBB1[ii]==maximo1)intocable1=ii;ii++;} maximo1=BBB1[0];
  i=0; while(i<tam1){if(i==intocable1){;}else maximo1=MAX1(maximo1,BBB1[i]);i=i+1;}
  ii=0;while(ii<=15){if(BBB1[ii]==maximo1)masalto1=ii;ii++;}    
  return 0;  
}
int leebwf(int bf,int mitadbwf){int cbf=bf,gbf=0,vbf=0;while (cbf>10){cbf=cbf/10;gbf++;}
                                                if(mitadbwf==1)vbf=cbf;else vbf=gbf; return vbf; 
	} 
void barajea(int bax){    int BAx=bax,bbx=0;intocable=BAx;VALOR_A_CAMBIAR=AAA[BAx];printf("CAMBIAR_?: %d  x  %d\n",BAx,VALOR_A_CAMBIAR);
	while(bbx<=15){if(AAA[bbx]>=0){if(bbx!=BAx){if (AAA[bbx]==VALOR_A_CAMBIAR){AAA[bbx]=AAA[bbx]+1;printf("CAMBIAR: %d  x  %d\n",BAx,bbx);}}}bbx++;}
	}
void barajea1(int bax1){int BAx1=bax1,bbx1=0;intocable1=BAx1;VALOR_A_CAMBIAR1=AAA1[BAx1];printf("CAMBIAR1_?: %d  x  %d\n",BAx1,VALOR_A_CAMBIAR1);
	while(bbx1<=15){if(AAA1[bbx1]>=0){if(bbx1!=BAx1){if (AAA1[bbx1]==VALOR_A_CAMBIAR1){AAA1[bbx1]=AAA1[bbx1]+1;printf("CAMBIAR1: %d  x  %d\n",BAx1,bbx1);}}}bbx1++;}
	}
void xbarajea(int bax){  int BAx=bax;bx=0;xintocable=BAx;xVALOR_A_CAMBIAR=xAAA[BAx];printf("CAMBIAR_?: %d  x  %d\n",BAx,xVALOR_A_CAMBIAR);
	while(bx<=15){if(xAAA[bx]>=0){if(bx!=BAx){if (xAAA[bx]==xVALOR_A_CAMBIAR){xAAA[bx]=xAAA[bx]+1;printf("CAMBIAR: %d  x  %d\n",BAx,bx);}}}bx++;}
	}
void xbarajea1(int bax1){int BAx1=bax1;bx=0;xintocable1=BAx1;xVALOR_A_CAMBIAR1=xAAA1[BAx1];printf("CAMBIAR1_?: %d  x  %d\n",BAx1,xVALOR_A_CAMBIAR1);
	while(bx<=15){if(xAAA1[bx]>=0){if(bx!=BAx1){if (xAAA1[bx]==xVALOR_A_CAMBIAR1){xAAA1[bx]=xAAA1[bx]+1;printf("CAMBIAR1: %d  x  %d\n",BAx1,bx);}}}bx++;}
	}
void ybarajea(int bax){  int BAx=bax;bx=0;yintocable=BAx;yVALOR_A_CAMBIAR=yAAA[BAx];printf("CAMBIAR_?: %d  x  %d\n",BAx,yVALOR_A_CAMBIAR);
	while(bx<=15){if(yAAA[bx]>=0){if(bx!=BAx){if (yAAA[bx]==yVALOR_A_CAMBIAR){yAAA[bx]=yAAA[bx]+1;printf("CAMBIAR: %d  x  %d\n",BAx,bx);}}}bx++;}
	}
void ybarajea1(int bax1){int BAx1=bax1;bx=0;yintocable1=BAx1;yVALOR_A_CAMBIAR1=yAAA1[BAx1];printf("CAMBIAR1_?: %d  x  %d\n",BAx1,yVALOR_A_CAMBIAR1);
	while(bx<=15){if(yAAA1[bx]>=0){if(bx!=BAx1){if (yAAA1[bx]==yVALOR_A_CAMBIAR1){yAAA1[bx]=yAAA1[bx]+1;printf("CAMBIAR1: %d  x  %d\n",BAx1,bx);}}}bx++;}
	}	
void zbarajea(int bax){  int BAx=bax;bx=0;zintocable=BAx;zVALOR_A_CAMBIAR=zAAA[BAx];printf("CAMBIAR_?: %d  x  %d\n",BAx,zVALOR_A_CAMBIAR);
	while(bx<=15){if(zAAA[bx]>=0){if(bx!=BAx){if (zAAA[bx]==zVALOR_A_CAMBIAR){zAAA[bx]=zAAA[bx]+1;printf("CAMBIAR: %d  x  %d\n",BAx,bx);}}}bx++;}
	}
void zbarajea1(int bax1){int BAx1=bax1;bx=0;zintocable1=BAx1;zVALOR_A_CAMBIAR1=zAAA1[BAx1];printf("CAMBIAR1_?: %d  x  %d\n",BAx1,zVALOR_A_CAMBIAR1);
	while(bx<=15){if(zAAA1[bx]>=0){if(bx!=BAx1){if (zAAA1[bx]==zVALOR_A_CAMBIAR1){zAAA1[bx]=zAAA1[bx]+1;printf("CAMBIAR1: %d  x  %d\n",BAx1,bx);}}}bx++;}
	}	
   
int less(int parametrx/*,char uno2*/){ 
    int v=0,aa=0,aq=1,i=0,z=0,zz=0,bq=1,be=1,ce=1,e=0,f=0,dtparametru=parametrx;printf("dtparametrx: %d\n",dtparametru);
    if(dtparametru>=0){
    while (z<=8){z=z+1;aq=aq*2;};aq=(aq/2);while (bq<=dtparametru){zz=zz+1;bq=bq*2;};bq=(bq/2);
    while (be*2<=dtparametru+1){be=be*2;f=f+1;ce=0;       
       while (ce<be){ce=ce+1;e=e+1;	
    	 if (e>=dtparametru){         
            if (ce>0){int i=(ce-0);if(i<=0)i=0;dtparametru=i;parame(i,f);/* */printf("bq: %d",bq);}else {printf("be: %d",be);}             
            if(dtparametru<=0){ce=2048;be=2048;}else{ce=dtparametru*1024;be=dtparametru*1024;}printf("lessdtparametru2: %d",dtparametru);
            } 
       }} 
     }     
   return dtparametru; 
}  
int more(int parametrxx,int donde){ 
    int aq=1,z=0,be=1,ce=1,e=0,f=0,vei=0,dtparametrq=parametrxx+0,i=0;
     while (/*aq<dtparametrq*/z<=donde){z=z+1;aq=aq*2;};char sstr[z-1],ssstr[z-1], horrify[z];be=0;aq=1;be=1;printf("%d dtparametrq: ",dtparametrq);printf("%d z: ",z);
     strcpy(sstr,"000000000");strcpy(ssstr,"000000000");strcpy(horrify,"000000000");parame(dtparametrq,8);
     while (/*be<dtparametrq+1*/f<donde){be=be*2; printf("f %d e %d be %d ce %d dtparametrq %d ",f,e,be,ce,dtparametrq);if(ce==1024)ce=1;else {ce=0;} getchar();
        while (ce<be-0){ce=ce+1;e=e+1;
    	    if ((ce>=dtparametrq)/*&(f<=donde)*//*&(be>=dtparametrq+1)*/){
		       if (ce>0){if(vei==0){i=(e-0);dtparametrq=i+be;vei=1;}else{dtparametrq=dtparametrq+(be/2);i=dtparametrq;}printf("i: %d ",i);printf("be %d dtparametrq_aumenta %d ",be,dtparametrq);ce=1024;getchar();} else {i=e;}; if(f>donde){be=2048;} }
            else {if (f>donde){if (ce==dtparametrq*1024) {be=dtparametrq*1024;printf("break2");}}}}f=f+1; }dtparametrq=i;  return dtparametrq; 
}
int potencia(int b, int e) {
 if (e == 0) return(1);else return(b*potencia(b, e-1));}	 
void verlo(){ 
     printf("aconx %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",aconx[0],aconx[1],aconx[2],aconx[3],aconx[4],aconx[5],aconx[6],aconx[7],aconx[8],aconx[9],aconx[10],aconx[11],aconx[12],aconx[13],aconx[14],aconx[15]);     
     printf("AAA: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",AAA[0],AAA[1],AAA[2],AAA[3],AAA[4],AAA[5],AAA[6],AAA[7],AAA[8],AAA[9],AAA[10],AAA[11],AAA[12],AAA[13],AAA[14],AAA[15]);       
     printf("BBB: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",BBB[0],BBB[1],BBB[2],BBB[3],BBB[4],BBB[5],BBB[6],BBB[7],BBB[8],BBB[9],BBB[10],BBB[11],BBB[12],BBB[13],BBB[14],BBB[15]);  
     printf("a1conx %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",a1conx[0],a1conx[1],a1conx[2],a1conx[3],a1conx[4],a1conx[5],a1conx[6],a1conx[7],a1conx[8],a1conx[9],a1conx[10],a1conx[11],a1conx[12],a1conx[13],a1conx[14],a1conx[15]);     
     printf("AAA1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",AAA1[0],AAA1[1],AAA1[2],AAA1[3],AAA1[4],AAA1[5],AAA1[6],AAA1[7],AAA1[8],AAA1[9],AAA1[10],AAA1[11],AAA1[12],AAA1[13],AAA1[14],AAA1[15]);  
     printf("BBB1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",BBB1[0],BBB1[1],BBB1[2],BBB1[3],BBB1[4],BBB1[5],BBB1[6],BBB1[7],BBB1[8],BBB1[9],BBB1[10],BBB1[11],BBB1[12],BBB1[13],BBB1[14],BBB1[15]);  
     printf("Buf0: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf0[0],buf0[1],buf0[2],buf0[3],buf0[4],buf0[5],buf0[6],buf0[7],buf0[8],buf0[9],buf0[10],buf0[11],buf0[12],buf0[13],buf0[14],buf0[15]);  
     printf("Buf1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf1[0],buf1[1],buf1[2],buf1[3],buf1[4],buf1[5],buf1[6],buf1[7],buf1[8],buf1[9],buf1[10],buf1[11],buf1[12],buf1[13],buf1[14],buf1[15]);  
     printf("Buf2: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf2[0],buf2[1],buf2[2],buf2[3],buf2[4],buf2[5],buf2[6],buf2[7],buf2[8],buf2[9],buf2[10],buf2[11],buf2[12],buf2[13],buf2[14],buf2[15]);  
     printf("Buf3: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf3[0],buf3[1],buf3[2],buf3[3],buf3[4],buf3[5],buf3[6],buf3[7],buf3[8],buf3[9],buf3[10],buf3[11],buf3[12],buf3[13],buf3[14],buf3[15]);  
     printf("Buf10: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf10[0],buf10[1],buf10[2],buf10[3],buf10[4],buf10[5],buf10[6],buf10[7],buf10[8],buf10[9],buf10[10],buf10[11],buf10[12],buf10[13],buf10[14],buf10[15]);  
     printf("Buf11: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf11[0],buf11[1],buf11[2],buf11[3],buf11[4],buf11[5],buf11[6],buf11[7],buf11[8],buf11[9],buf11[10],buf11[11],buf11[12],buf11[13],buf11[14],buf11[15]);  
     printf("Buf12: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf12[0],buf12[1],buf12[2],buf12[3],buf12[4],buf12[5],buf12[6],buf12[7],buf12[8],buf12[9],buf12[10],buf12[11],buf12[12],buf12[13],buf12[14],buf12[15]);  
     printf("Buf13: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf13[0],buf13[1],buf13[2],buf13[3],buf13[4],buf13[5],buf13[6],buf13[7],buf13[8],buf13[9],buf13[10],buf13[11],buf13[12],buf13[13],buf13[14],buf13[15]);  
     printf("Bwf0: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n", bwf0[0][0],bwf0[0][1],bwf0[0][2],bwf0[0][3],bwf0[0][4],bwf0[0][5],bwf0[0][6],bwf0[0][7],bwf0[0][8],bwf0[0][9],bwf0[0][10],bwf0[0][11],bwf0[0][12],bwf0[0][13],bwf0[0][14],bwf0[0][15]);  
     printf("Bwf0: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n", bwf0[1][0],bwf0[1][1],bwf0[1][2],bwf0[1][3],bwf0[1][4],bwf0[1][5],bwf0[1][6],bwf0[1][7],bwf0[1][8],bwf0[1][9],bwf0[1][10],bwf0[1][11],bwf0[1][12],bwf0[1][13],bwf0[1][14],bwf0[1][15]);  
     printf("Bwf0: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n", bwf0[2][0],bwf0[2][1],bwf0[2][2],bwf0[2][3],bwf0[2][4],bwf0[2][5],bwf0[2][6],bwf0[2][7],bwf0[2][8],bwf0[2][9],bwf0[2][10],bwf0[2][11],bwf0[2][12],bwf0[2][13],bwf0[2][14],bwf0[2][15]);  
     
     printf("Bwf1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n", bwf1[0][0],bwf1[0][1],bwf1[0][2],bwf1[0][3],bwf1[0][4],bwf1[0][5],bwf1[0][6],bwf1[0][7],bwf1[0][8],bwf1[0][9],bwf1[0][10],bwf1[0][11],bwf1[0][12],bwf1[0][13],bwf1[0][14],bwf1[0][15]);  
     printf("Bwf1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n", bwf1[1][0],bwf1[1][1],bwf1[1][2],bwf1[1][3],bwf1[1][4],bwf1[1][5],bwf1[1][6],bwf1[1][7],bwf1[1][8],bwf1[1][9],bwf1[1][10],bwf1[1][11],bwf1[1][12],bwf1[1][13],bwf1[1][14],bwf1[1][15]);  
     printf("Bwf1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n", bwf1[2][0],bwf1[2][1],bwf1[2][2],bwf1[2][3],bwf1[2][4],bwf1[2][5],bwf1[2][6],bwf1[2][7],bwf1[2][8],bwf1[2][9],bwf1[2][10],bwf1[2][11],bwf1[2][12],bwf1[2][13],bwf1[2][14],bwf1[2][15]);  
    
     printf("Bwf10: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",bwf10[0][0],bwf10[0][1],bwf10[0][2],bwf10[0][3],bwf10[0][4],bwf10[0][5],bwf10[0][6],bwf10[0][7],bwf10[0][8],bwf10[0][9],bwf10[0][10],bwf10[0][11],bwf10[0][12],bwf10[0][13],bwf10[0][14],bwf10[0][15]);  
     printf("Bwf10: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",bwf10[1][0],bwf10[1][1],bwf10[1][2],bwf10[1][3],bwf10[1][4],bwf10[1][5],bwf10[1][6],bwf10[1][7],bwf10[1][8],bwf10[1][9],bwf10[1][10],bwf10[1][11],bwf10[1][12],bwf10[1][13],bwf10[1][14],bwf10[1][15]);  
     printf("Bwf10: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",bwf10[2][0],bwf10[2][1],bwf10[2][2],bwf10[2][3],bwf10[2][4],bwf10[2][5],bwf10[2][6],bwf10[2][7],bwf10[2][8],bwf10[2][9],bwf10[2][10],bwf10[2][11],bwf10[2][12],bwf10[2][13],bwf10[2][14],bwf10[2][15]);  
     
     printf("Bwf11: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",bwf11[0][0],bwf11[0][1],bwf11[0][2],bwf11[0][3],bwf11[0][4],bwf11[0][5],bwf11[0][6],bwf11[0][7],bwf11[0][8],bwf11[0][9],bwf11[0][10],bwf11[0][11],bwf11[0][12],bwf11[0][13],bwf11[0][14],bwf11[0][15]); 
     printf("Bwf11: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",bwf11[1][0],bwf11[1][1],bwf11[1][2],bwf11[1][3],bwf11[1][4],bwf11[1][5],bwf11[1][6],bwf11[1][7],bwf11[1][8],bwf11[1][9],bwf11[1][10],bwf11[1][11],bwf11[1][12],bwf11[1][13],bwf11[0][14],bwf11[1][15]); 
     printf("Bwf11: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",bwf11[2][0],bwf11[2][1],bwf11[2][2],bwf11[2][3],bwf11[2][4],bwf11[2][5],bwf11[2][6],bwf11[2][7],bwf11[2][8],bwf11[2][9],bwf11[2][10],bwf11[2][11],bwf11[2][12],bwf11[2][13],bwf11[0][14],bwf11[2][15]); 
    
     printf("Ldicc: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",Ldicc[0][0],Ldicc[0][1],Ldicc[0][2],Ldicc[0][3],Ldicc[0][4],Ldicc[0][5],Ldicc[0][6],Ldicc[0][7],Ldicc[0][8],Ldicc[0][9],Ldicc[0][10],Ldicc[0][11],Ldicc[0][12],Ldicc[0][13],Ldicc[0][14],Ldicc[0][15]/*,Ldicc[16],Ldicc[17],Ldicc[18],Ldicc[19],Ldicc[20],Ldicc[21],Ldicc[22],Ldicc[23],Ldicc[24],Ldicc[25],Ldicc[26],Ldicc[27],Ldicc[28],Ldicc[29],Ldicc[30],Ldicc[31]*/); 
     printf("Ldicc: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",Ldicc[1][0],Ldicc[1][1],Ldicc[1][2],Ldicc[1][3],Ldicc[1][4],Ldicc[1][5],Ldicc[1][6],Ldicc[1][7],Ldicc[1][8],Ldicc[1][9],Ldicc[1][10],Ldicc[1][11],Ldicc[1][12],Ldicc[1][13],Ldicc[1][14],Ldicc[1][15]/*,Ldicc[16],Ldicc[17],Ldicc[18],Ldicc[19],Ldicc[20],Ldicc[21],Ldicc[22],Ldicc[23],Ldicc[24],Ldicc[25],Ldicc[26],Ldicc[27],Ldicc[28],Ldicc[29],Ldicc[30],Ldicc[31]*/);      
     printf("Ldicc: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",Ldicc[2][0],Ldicc[2][1],Ldicc[2][2],Ldicc[2][3],Ldicc[2][4],Ldicc[2][5],Ldicc[2][6],Ldicc[2][7],Ldicc[2][8],Ldicc[2][9],Ldicc[2][10],Ldicc[2][11],Ldicc[2][12],Ldicc[2][13],Ldicc[2][14],Ldicc[2][15]/*,Ldicc[16],Ldicc[17],Ldicc[18],Ldicc[19],Ldicc[20],Ldicc[21],Ldicc[22],Ldicc[23],Ldicc[24],Ldicc[25],Ldicc[26],Ldicc[27],Ldicc[28],Ldicc[29],Ldicc[30],Ldicc[31]*/);      
     
     printf("Ldicc1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",Ldicc1[0][0],Ldicc1[0][1],Ldicc1[0][2],Ldicc1[0][3],Ldicc1[0][4],Ldicc1[0][5],Ldicc1[0][6],Ldicc1[0][7],Ldicc1[0][8],Ldicc1[0][9],Ldicc1[0][10],Ldicc1[0][11],Ldicc1[0][12],Ldicc1[0][13],Ldicc1[0][14],Ldicc1[0][15]/*,Ldicc1[16],Ldicc1[17],Ldicc1[18],Ldicc1[19],Ldicc1[20],Ldicc1[21],Ldicc1[22],Ldicc1[23],Ldicc1[24],Ldicc1[25],Ldicc1[26],Ldicc1[27],Ldicc1[28],Ldicc1[29],Ldicc1[30],Ldicc1[31]*/); 
     printf("Ldicc1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",Ldicc1[1][0],Ldicc1[1][1],Ldicc1[1][2],Ldicc1[1][3],Ldicc1[1][4],Ldicc1[1][5],Ldicc1[1][6],Ldicc1[1][7],Ldicc1[1][8],Ldicc1[1][9],Ldicc1[1][10],Ldicc1[1][11],Ldicc1[1][12],Ldicc1[1][13],Ldicc1[1][14],Ldicc1[1][15]/*,Ldicc1[16],Ldicc1[17],Ldicc1[18],Ldicc1[19],Ldicc1[20],Ldicc1[21],Ldicc1[22],Ldicc1[23],Ldicc1[24],Ldicc1[25],Ldicc1[26],Ldicc1[27],Ldicc1[28],Ldicc1[29],Ldicc1[30],Ldicc1[31]*/); 
     printf("Ldicc1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",Ldicc1[2][0],Ldicc1[2][1],Ldicc1[2][2],Ldicc1[2][3],Ldicc1[2][4],Ldicc1[2][5],Ldicc1[2][6],Ldicc1[2][7],Ldicc1[2][8],Ldicc1[2][9],Ldicc1[2][10],Ldicc1[2][11],Ldicc1[2][12],Ldicc1[2][13],Ldicc1[2][14],Ldicc1[2][15]/*,Ldicc1[16],Ldicc1[17],Ldicc1[18],Ldicc1[19],Ldicc1[20],Ldicc1[21],Ldicc1[22],Ldicc1[23],Ldicc1[24],Ldicc1[25],Ldicc1[26],Ldicc1[27],Ldicc1[28],Ldicc1[29],Ldicc1[30],Ldicc1[31]*/); 

}
void xverlo(){ 
     printf("xAAA: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",  xAAA[0],xAAA[1],xAAA[2],xAAA[3],xAAA[4],xAAA[5],xAAA[6],xAAA[7],xAAA[8],xAAA[9],xAAA[10],xAAA[11],xAAA[12],xAAA[13],xAAA[14],xAAA[15]); 
     printf("xBBB: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",  xBBB[0],xBBB[1],xBBB[2],xBBB[3],xBBB[4],xBBB[5],xBBB[6],xBBB[7],xBBB[8],xBBB[9],xBBB[10],xBBB[11],xBBB[12],xBBB[13],xBBB[14],xBBB[15]);  
     printf("xAAA1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",xAAA1[0],xAAA1[1],xAAA1[2],xAAA1[3],xAAA1[4],xAAA1[5],xAAA1[6],xAAA1[7],xAAA1[8],xAAA1[9],xAAA1[10],xAAA1[11],xAAA1[12],xAAA1[13],xAAA1[14],xAAA1[15]);  
     printf("xBBB1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",xBBB1[0],xBBB1[1],xBBB1[2],xBBB1[3],xBBB1[4],xBBB1[5],xBBB1[6],xBBB1[7],xBBB1[8],xBBB1[9],xBBB1[10],xBBB1[11],xBBB1[12],xBBB1[13],xBBB1[14],xBBB1[15]);  
}
void yverlo(){ 
     printf("yAAA: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",  yAAA[0],yAAA[1],yAAA[2],yAAA[3],yAAA[4],yAAA[5],yAAA[6],yAAA[7],yAAA[8],yAAA[9],yAAA[10],yAAA[11],yAAA[12],yAAA[13],yAAA[14],yAAA[15]); 
     printf("yBBB: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",  yBBB[0],yBBB[1],yBBB[2],yBBB[3],yBBB[4],yBBB[5],yBBB[6],yBBB[7],yBBB[8],yBBB[9],yBBB[10],yBBB[11],yBBB[12],yBBB[13],yBBB[14],yBBB[15]);  
     printf("yAAA1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",yAAA1[0],yAAA1[1],yAAA1[2],yAAA1[3],yAAA1[4],yAAA1[5],yAAA1[6],yAAA1[7],yAAA1[8],yAAA1[9],yAAA1[10],yAAA1[11],yAAA1[12],yAAA1[13],yAAA1[14],yAAA1[15]);  
     printf("yBBB1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",yBBB1[0],yBBB1[1],yBBB1[2],yBBB1[3],yBBB1[4],yBBB1[5],yBBB1[6],yBBB1[7],yBBB1[8],yBBB1[9],yBBB1[10],yBBB1[11],yBBB1[12],yBBB1[13],yBBB1[14],yBBB1[15]);  
}
void zverlo(){ 
     printf("zAAA: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",  zAAA[0],zAAA[1],zAAA[2],zAAA[3],zAAA[4],zAAA[5],zAAA[6],zAAA[7],zAAA[8],zAAA[9],zAAA[10],zAAA[11],zAAA[12],zAAA[13],zAAA[14],zAAA[15]); 
     printf("zBBB: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",  zBBB[0],zBBB[1],zBBB[2],zBBB[3],zBBB[4],zBBB[5],zBBB[6],zBBB[7],zBBB[8],zBBB[9],zBBB[10],zBBB[11],zBBB[12],zBBB[13],zBBB[14],zBBB[15]);  
     printf("zAAA1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",zAAA1[0],zAAA1[1],zAAA1[2],zAAA1[3],zAAA1[4],zAAA1[5],zAAA1[6],zAAA1[7],zAAA1[8],zAAA1[9],zAAA1[10],zAAA1[11],zAAA1[12],zAAA1[13],zAAA1[14],zAAA1[15]);  
     printf("zBBB1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",zBBB1[0],zBBB1[1],zBBB1[2],zBBB1[3],zBBB1[4],zBBB1[5],zBBB1[6],zBBB1[7],zBBB1[8],zBBB1[9],zBBB1[10],zBBB1[11],zBBB1[12],zBBB1[13],zBBB1[14],zBBB1[15]);  
}
void verlon(){printf("contaray %d contaray1 %d \n",contaray,contaray1);
     printf("n2_16: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level2[0], level2[1], level2[2], level2[3], level2[4], level2[5], level2[6], level2[7], level2[8], level2[9], level2[10],level2[11],level2[12],level2[13],level2[14],level2[15]);  
     printf("n2_32: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level2[16],level2[17],level2[18],level2[19],level2[20],level2[21],level2[22],level2[23],level2[24],level2[25],level2[26],level2[27],level2[28],level2[29],level2[30],level2[31]);  
     printf("n2_48: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level2[32],level2[33],level2[34],level2[35],level2[36],level2[37],level2[38],level2[39],level2[40],level2[41],level2[42],level2[43],level2[44],level2[45],level2[46],level2[47]);  
     printf("n2_64: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level2[48],level2[49],level2[50],level2[51],level2[52],level2[53],level2[54],level2[55],level2[56],level2[57],level2[58],level2[59],level2[60],level2[61],level2[62],level2[63]);  
     printf("n2116: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n", level21[0],level21[1], level21[2], level21[3], level21[4], level21[5], level21[6], level21[7], level21[8], level21[9], level21[10],level21[11],level21[12],level21[13],level21[14],level21[15]);  
     printf("n2132: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level21[16],level21[17],level21[18],level21[19],level21[20],level21[21],level21[22],level21[23],level21[24],level21[25],level21[26],level21[27],level21[28],level21[29],level21[30],level21[31]);  
     printf("n2148: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level21[32],level21[33],level21[34],level21[35],level21[36],level21[37],level21[38],level21[39],level21[40],level21[41],level21[42],level21[43],level21[44],level21[45],level21[46],level21[47]);  
     printf("n2164: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level21[48],level21[49],level21[50],level21[51],level21[52],level21[53],level21[54],level21[55],level21[56],level21[57],level21[58],level21[59],level21[60],level21[61],level21[62],level21 [63]);  
     printf("nBwf0: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level2[64],level2[65],level2[66],level2[67],level2[68],level2[69],level2[70],level2[71],level2[72],level2[73],level2[74],level2[75],level2[76],level2[77],level2[78],level2[79]);  
     printf("nBwf1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level2[80],level2[81],level2[82],level2[83],level2[84],level2[85],level2[86],level2[87],level2[88],level2[89],level2[90],level2[91],level2[92],level2[93],level2[94],level2[95]);  
     printf("nBwf10: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level21[64],level21[65],level21[66],level21[67],level21[68],level21[69],level21[70],level21[71],level21[72],level21[73],level21[74],level21[75],level21[76],level21[77],level21[78],level21[79]); 
     printf("nBwf11: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",level21[80],level21[81],level21[82],level21[83],level21[84],level21[85],level21[86],level21[87],level21[88],level21[89],level21[90],level21[91],level21[92],level21[93],level21[94],level21[95]);  
	
}
void verlod(){   
     printf("aconx %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",aconx[0],aconx[1],aconx[2],aconx[3],aconx[4],aconx[5],aconx[6],aconx[7],aconx[8],aconx[9],aconx[10],aconx[11],aconx[12],aconx[13],aconx[14],aconx[15]);
     printf("AAA: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",  AAA[0],AAA[1],AAA[2],AAA[3],AAA[4],AAA[5],AAA[6],AAA[7],AAA[8],AAA[9],AAA[10],AAA[11],AAA[12],AAA[13],AAA[14],AAA[15]); 
     printf("BBB: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",  BBB[0],BBB[1],BBB[2],BBB[3],BBB[4],BBB[5],BBB[6],BBB[7],BBB[8],BBB[9],BBB[10],BBB[11],BBB[12],BBB[13],BBB[14],BBB[15]);  
     printf("a1conx %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",a1conx[0],a1conx[1],a1conx[2],a1conx[3],a1conx[4],a1conx[5],a1conx[6],a1conx[7],a1conx[8],a1conx[9],a1conx[10],a1conx[11],a1conx[12],a1conx[13],a1conx[14],a1conx[15]);
     printf("AAA1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",AAA1[0],AAA1[1],AAA1[2],AAA1[3],AAA1[4],AAA1[5],AAA1[6],AAA1[7],AAA1[8],AAA1[9],AAA1[10],AAA1[11],AAA1[12],AAA1[13],AAA1[14],AAA1[15]);  
     printf("BBB1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",BBB1[0],BBB1[1],BBB1[2],BBB1[3],BBB1[4],BBB1[5],BBB1[6],BBB1[7],BBB1[8],BBB1[9],BBB1[10],BBB1[11],BBB1[12],BBB1[13],BBB1[14],BBB1[15]);  
     printf("Buf0: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf0[0],buf0[1],buf0[2],buf0[3],buf0[4],buf0[5],buf0[6],buf0[7],buf0[8],buf0[9],buf0[10],buf0[11],buf0[12],buf0[13],buf0[14],buf0[15]);  
     printf("Buf1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf1[0],buf1[1],buf1[2],buf1[3],buf1[4],buf1[5],buf1[6],buf1[7],buf1[8],buf1[9],buf1[10],buf1[11],buf1[12],buf1[13],buf1[14],buf1[15]);  
     printf("Buf2: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf2[0],buf2[1],buf2[2],buf2[3],buf2[4],buf2[5],buf2[6],buf2[7],buf2[8],buf2[9],buf2[10],buf2[11],buf2[12],buf2[13],buf2[14],buf2[15]);  
     printf("Buf3: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf3[0],buf3[1],buf3[2],buf3[3],buf3[4],buf3[5],buf3[6],buf3[7],buf3[8],buf3[9],buf3[10],buf3[11],buf3[12],buf3[13],buf3[14],buf3[15]);  
     printf("Buf10: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf10[0],buf10[1],buf10[2],buf10[3],buf10[4],buf10[5],buf10[6],buf10[7],buf10[8],buf10[9],buf10[10],buf10[11],buf10[12],buf10[13],buf10[14],buf10[15]);  
     printf("Buf11: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf11[0],buf11[1],buf11[2],buf11[3],buf11[4],buf11[5],buf11[6],buf11[7],buf11[8],buf11[9],buf11[10],buf11[11],buf11[12],buf11[13],buf11[14],buf11[15]);  
     printf("Buf12: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf12[0],buf12[1],buf12[2],buf12[3],buf12[4],buf12[5],buf12[6],buf12[7],buf12[8],buf12[9],buf12[10],buf12[11],buf12[12],buf12[13],buf12[14],buf12[15]);  
     printf("Buf13: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",buf13[0],buf13[1],buf13[2],buf13[3],buf13[4],buf13[5],buf13[6],buf13[7],buf13[8],buf13[9],buf13[10],buf13[11],buf13[12],buf13[13],buf13[14],buf13[15]);  
     printf("Bwf0: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",bwf0[0],bwf0[1],bwf0[2],bwf0[3],bwf0[4],bwf0[5],bwf0[6],bwf0[7],bwf0[8],bwf0[9],bwf0[10],bwf0[11],bwf0[12],bwf0[13],bwf0[14],bwf0[15]);  
     printf("Bwf1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",bwf1[0],bwf1[1],bwf1[2],bwf1[3],bwf1[4],bwf1[5],bwf1[6],bwf1[7],bwf1[8],bwf1[9],bwf1[10],bwf1[11],bwf1[12],bwf1[13],bwf1[14],bwf1[15]);  
     printf("Bwf10: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",bwf10[0],bwf10[1],bwf10[2],bwf10[3],bwf10[4],bwf10[5],bwf10[6],bwf10[7],bwf10[8],bwf10[9],bwf10[10],bwf10[11],bwf10[12],bwf10[13],bwf10[14],bwf10[15]);  
     printf("Bwf11: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",bwf11[0],bwf11[1],bwf11[2],bwf11[3],bwf11[4],bwf11[5],bwf11[6],bwf11[7],bwf11[8],bwf11[9],bwf11[10],bwf11[11],bwf11[12],bwf11[13],bwf11[14],bwf11[15]); 
     printf("Ldicc: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",Ldicc[0],Ldicc[1],Ldicc[2],Ldicc[3],Ldicc[4],Ldicc[5],Ldicc[6],Ldicc[7],Ldicc[8],Ldicc[9],Ldicc[10],Ldicc[11],Ldicc[12],Ldicc[13],Ldicc[14],Ldicc[15]); 
     printf("Ldicc1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",Ldicc1[0],Ldicc1[1],Ldicc1[2],Ldicc1[3],Ldicc1[4],Ldicc1[5],Ldicc1[6],Ldicc1[7],Ldicc1[8],Ldicc1[9],Ldicc1[10],Ldicc1[11],Ldicc1[12],Ldicc1[13],Ldicc1[14],Ldicc1[15]); 
     printf("Bdicc: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",Bdicc[0],Bdicc[1],Bdicc[2],Bdicc[3],Bdicc[4],Bdicc[5],Bdicc[6],Bdicc[7],Bdicc[8],Bdicc[9],Bdicc[10],Bdicc[11],Bdicc[12],Bdicc[13],Bdicc[14],Bdicc[15]);  
     printf("CCC: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",CCC[0],CCC[1],CCC[2],CCC[3],CCC[4],CCC[5],CCC[6],CCC[7],CCC[8],CCC[9],CCC[10],CCC[11],CCC[12],CCC[13],CCC[14],CCC[15]);  
     printf("CCC1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",CCC1[0],CCC1[1],CCC1[2],CCC1[3],CCC1[4],CCC1[5],CCC1[6],CCC1[7],CCC1[8],CCC1[9],CCC1[10],CCC1[11],CCC1[12],CCC1[13],CCC1[14],CCC1[15]);  
     printf("CCaC: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",CCaC[0],CCaC[1],CCaC[2],CCaC[3],CCaC[4],CCaC[5],CCaC[6],CCaC[7],CCaC[8],CCaC[9],CCaC[10],CCaC[11],CCaC[12],CCaC[13],CCaC[14],CCaC[15]);  
     printf("CCaC1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",CCaC1[0],CCaC1[1],CCaC1[2],CCaC1[3],CCaC1[4],CCaC1[5],CCaC1[6],CCaC1[7],CCaC1[8],CCaC1[9],CCaC1[10],CCaC1[11],CCaC1[12],CCaC1[13],CCaC1[14],CCaC1[15]);           
     printf("DDD: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD[0],DDD[1],DDD[2],DDD[3],DDD[4],DDD[5],DDD[6],DDD[7],DDD[8],DDD[9],DDD[10],DDD[11],DDD[12],DDD[13],DDD[14],DDD[15]);  
     printf("DDD: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD[16],DDD[17],DDD[18],DDD[19],DDD[20],DDD[21],DDD[22],DDD[23],DDD[24],DDD[25],DDD[26],DDD[27],DDD[28],DDD[29],DDD[30],DDD[31]);
     printf("DDD: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD[32],DDD[33],DDD[34],DDD[35],DDD[36],DDD[37],DDD[38],DDD[39],DDD[40],DDD[41],DDD[42],DDD[43],DDD[44],DDD[45],DDD[46],DDD[47]);
     printf("DDD: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD[48],DDD[49],DDD[50],DDD[51],DDD[52],DDD[53],DDD[54],DDD[55],DDD[56],DDD[57],DDD[58],DDD[59],DDD[60],DDD[61],DDD[62],DDD[63]);
     printf("DDD: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD[64],DDD[65],DDD[66],DDD[67],DDD[68],DDD[69],DDD[70],DDD[71],DDD[72],DDD[73],DDD[74],DDD[75],DDD[76],DDD[77],DDD[78],DDD[79]);
     printf("DDD: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD[80],DDD[81],DDD[82],DDD[83],DDD[84],DDD[85],DDD[86],DDD[87],DDD[88],DDD[89],DDD[90],DDD[91],DDD[92],DDD[93],DDD[94],DDD[95]);
     printf("DDD1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD1[0],DDD1[1],DDD1[2],DDD1[3],DDD1[4],DDD1[5],DDD1[6],DDD1[7],DDD1[8],DDD1[9],DDD1[10],DDD1[11],DDD1[12],DDD1[13],DDD1[14],DDD1[15]);  
     printf("DDD1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD1[16],DDD1[17],DDD1[18],DDD1[19],DDD1[20],DDD1[21],DDD1[22],DDD1[23],DDD1[24],DDD1[25],DDD1[26],DDD1[27],DDD1[28],DDD1[29],DDD1[30],DDD1[31]);
     printf("DDD1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD1[32],DDD1[33],DDD1[34],DDD1[35],DDD1[36],DDD1[37],DDD1[38],DDD1[39],DDD1[40],DDD1[41],DDD1[42],DDD1[43],DDD1[44],DDD1[45],DDD1[46],DDD1[47]);
     printf("DDD1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD1[48],DDD1[49],DDD1[50],DDD1[51],DDD1[52],DDD1[53],DDD1[54],DDD1[55],DDD1[56],DDD1[57],DDD1[58],DDD1[59],DDD1[60],DDD1[61],DDD1[62],DDD1[63]);
     printf("DDD1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD1[64],DDD1[65],DDD1[66],DDD1[67],DDD1[68],DDD1[69],DDD1[70],DDD1[71],DDD1[72],DDD1[73],DDD1[74],DDD1[75],DDD1[76],DDD1[77],DDD1[78],DDD1[79]);
     printf("DDD1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",DDD1[80],DDD1[81],DDD1[82],DDD1[83],DDD1[84],DDD1[85],DDD1[86],DDD1[87],DDD1[88],DDD1[89],DDD1[90],DDD1[91],DDD1[92],DDD1[93],DDD1[94],DDD1[95]);
     printf("el: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",el[0],el[1],el[2],el[3],el[4],el[5],el[6],el[7],el[8],el[9],el[10],el[11],el[12],el[13],el[14],el[15]);  
     printf("el1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",el1[0],el1[1],el1[2],el1[3],el1[4],el1[5],el1[6],el1[7],el1[8],el1[9],el1[10],el1[11],el1[12],el1[13],el1[14],el1[15]);  
     printf("ael: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",ael[0],ael[1],ael[2],ael[3],ael[4],ael[5],ael[6],ael[7],ael[8],ael[9],ael[10],ael[11],ael[12],ael[13],ael[14],ael[15]);  
     printf("ael1: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",ael1[0],ael1[1],ael1[2],ael1[3],ael1[4],ael1[5],ael1[6],ael1[7],ael1[8],ael1[9],ael1[10],ael1[11],ael1[12],ael1[13],ael1[14],ael1[15]);  
     
}
int ysumalo(yaex){int Ax=yaex;printf("Ax: %d\n",Ax);
	if (yBBB[Ax]==-1){if (yuno==0){yuno=1;yAAA[Ax]=1;yBBB[Ax]=1;ymayor=1;ymasalto=1;yvmicero=1;yacumulador=1;ymgax=0;ymgbx=0;yacmasalto=0;}
	              else if ((yAAA[Ax]==ymasalto) & (ymasalto>0) ){if (ymasalto+yAAA[Ax]>(136+yacmasalto)) {yacmasalto=yacumulador;ymasalto=1;}
					  yAAA[Ax]=yAAA[Ax]-1;ygax=yAAA[Ax];yBBB[Ax]=yacmasalto+ymasalto+yAAA[Ax];ymgax=0;ymgbx=0;ybarajea(Ax);		
					  }else {if (ymasalto+yAAA[Ax]>(136+yacmasalto)) {yacmasalto=yacumulador;ymasalto=1;}else ymayor=ymayor+1;yAAA[Ax]=ymayor;
					   ygax=yAAA1[Ax];ymgax=0;ymgbx=0; ymasalto=ymasalto+yAAA[Ax];yBBB[Ax]=yacmasalto+ymasalto;yvmicero=0;ybarajea(Ax);	
					   }yacumulador=yBBB1[Ax];ycont_rep=1;ytr=0;
	} else {if (yAAA[Ax]==1) {if (ymasalto+yAAA[Ax]>(136+yacmasalto)) {yacmasalto=yacumulador;ymasalto=1;}yerescero=1; if(yvmicero==1)
	                                                                                                                        {if(ytr==1){yBBB[Ax]=yacmasalto+ymasalto+(ymayor+1);ytr=ytr+1;}  
	                                                                                                                              else{if(ytr>1){yfalsoa=0;ycont_falsoa=yfalsoa;ycont_rep=ycont_rep+1;ytr=ytr+1;} else{yBBB[Ax]=yacmasalto+ymasalto+yAAA[Ax];yvmicero=1;}}printf("repeticion de uno: %d ",yAAA[Ax]);}
	                                                                                                           else{yBBB[Ax]=yacmasalto+ymasalto+(ymayor+1);if(ymayor<yelementos){printf("error");}yvmicero=1;ytr=1;ycont_rep=1;}ymgax=0;ymgbx=0;}
	  else {yerescero=0;if (ymasalto+yAAA[Ax]>(136+yacmasalto)) {yacmasalto=yacumulador;ymasalto=1;}ytr=1;yAAA[Ax]=yAAA[Ax]-1;                                                                           /*+32+*/  
	       if((ygax==yAAA[Ax]+1) & (ygaax==Ax)){printf("este se repite________________mgax: %d\n",ymgax1);if(ymgax==1){ycvb=0;while (ycvb<=15){if (yAAA[Ax]+ygax==yAAA[cvb]){yBBB[Ax]=yacmasalto+ymasalto+yAAA[Ax];ymasalto=ymasalto+yAAA[ycvb];yvmicero=0;printf("FALSOA: %d",yAAA[ycvb]);yfalsoa=ycvb-0;ycont_falsoa=yfalsoa;ycont_rep=ycont_rep+1;ycvb=17;}
	                                         /*cbv=0;while (cbv<=15){printf("mayor : %d",mayor);if ((BBB[cbv]==-1) & (cbv+1==mayor+1)){mayor=mayor+1;AAA[cbv]=mayor;gax=AAA[cbv];mgax=0;mgbx=0; BBB[cbv]=acmasalto+masalto;}cbv++;}*/
	                                         ycvb++;}printf("cvb: %d",ycvb);}/**/}if(ycvb==16){yBBB[Ax]=yacmasalto+ymasalto+yAAA[Ax];ygabx=0;printf("repeticion tricky no encontrada %d ",yAAA[Ax]);ybarajea(Ax);}else if(ycvb==18){printf("sumo de mas a: %d",yAAA[Ax]);}
	       else if (ygax==yAAA[Ax]+1 || ygax==yAAA[Ax]-1){yBBB[Ax]=yacmasalto+ymasalto+yAAA[Ax];ygabx=0;printf("valor se queda pegado** %d",yAAA[Ax]);ybarajea(Ax);ygax=AAA[Ax];ygaax=Ax;}
	                                 else if (ymgbx==1){if (ygabx>=2){ypultreyeno=yultreyeno;yultreyeno=Ax;yBBB[Ax]=yacmasalto+ymasalto+yAAA[Ax];printf("valor= %d",yAAA[Ax]);ybarajea(Ax);}
													   else{yBBB[Ax]=yacmasalto+ymasalto+yAAA[Ax];ypultreyeno=yultreyeno;yultreyeno=Ax;printf("valorw %d",yAAA[Ax]);if (ypultreyeno==Ax)printf("tapado %d",Ax);ycvb=0;while(ycvb<=15){if (ycvb==Ax){printf("AAA tapado %d",yAAA[Ax]);}else if (yAAA[ycvb]==yAAA[Ax]) {ygabx=ygabx+1;}ycvb++;}}ybarajea(Ax);}
										  else{printf("valorinic %d",AAA[Ax]);BBB[Ax]=yacmasalto+ymasalto+yAAA[Ax];ypultreyeno=yultreyeno;yultreyeno=Ax;printf("mgbx %d",ymgbx);printf("gabx %d",ygabx);printf("valorz %d",yAAA[Ax]);printf("BBB %d",yBBB[Ax]);ybarajea(Ax);ycont_rep=1;}ygax=yAAA[Ax];ygaax=Ax;yvmicero=0;ymgax=1;ymgbx=1;printf("Ax %d",Ax);printf("valor %d",yAAA[Ax]);
	}}ymasalto=yBBB[Ax]-yacmasalto;yacumulador=yBBB[Ax];printf("acmasalto: %d\n",yacmasalto);yfalsoa=Ax;ycont_falsoa=yfalsoa;return(yacumulador);}
int ysumalo1(yaex1){int Ax1=yaex1;printf("Ax1: %d\n",Ax1);
	if (yBBB1[Ax1]==-1){if (yuno1==0){yuno1=1;yAAA1[Ax1]=1;yBBB1[Ax1]=1;ymayor1=1;ymasalto1=1;yvmicero1=1;yacumulador1=1;ymgax1=0;mgbx1=0;yacmasalto1=0;}
	              else if ((yAAA1[Ax1]==ymasalto1) & (ymasalto1>0) ){if (ymasalto1+yAAA1[Ax1]>(136+yacmasalto1)) {yacmasalto1=yacumulador1;ymasalto1=1;}
					  yAAA1[Ax1]=yAAA1[Ax1]-1;ygax=yAAA1[Ax1];yBBB1[Ax1]=yacmasalto1+ymasalto1+yAAA1[Ax1];ymgax1=0;ymgbx1=0;ybarajea1(Ax1);		
					  }else {if (ymasalto1+yAAA1[Ax1]>(136+yacmasalto1)) {yacmasalto1=yacumulador1;ymasalto1=1;}else ymayor1=ymayor1+1;yAAA1[Ax1]=ymayor1;
					   ygax=yAAA1[Ax1];ymgax1=0;ymgbx1=0; ymasalto1=ymasalto1+yAAA1[Ax1];yBBB1[Ax1]=yacmasalto1+ymasalto1;yvmicero1=0;ybarajea1(Ax1);	
					   }yacumulador1=yBBB1[Ax1];tr1=0;ycont_rep1=1;
	} else{if(yAAA1[Ax1]==1){if(ymasalto1+yAAA1[Ax1]>(136+yacmasalto1)){yacmasalto1=yacumulador1;ymasalto1=1;}yerescero1=1; if(yvmicero1==1)
	                                                                                                                                   {if(ytr1==1){yBBB1[Ax1]=yacmasalto1+ymasalto1+(ymayor1+1);ytr1=ytr1+1;}
	                                                                                                                                          else{if(ytr1>1){yfalsoa1=0;ycont_falsoa1=yfalsoa1;ycont_rep1=ycont_rep1+1;tr1=tr1+1;} else{yBBB1[Ax1]=yacmasalto1+ymasalto1+yAAA1[Ax1];yvmicero1=1;}printf("repeticion de uno1: %d",yAAA1[Ax1]);}}
	                                                                                                                     else{yBBB1[Ax1]=yacmasalto1+ymasalto1+(ymayor1+1);if(ymayor1<yelementos1){printf("error");}yvmicero1=1;ytr1=1;ycont_rep1=1;}ymgax1=0;ymgbx1=0;}
	  else {yerescero1=0;if (ymasalto1+yAAA1[Ax1]>(136+yacmasalto1)) {yacmasalto1=yacumulador1;ymasalto1=1;}ytr1=1;yAAA1[Ax1]=yAAA1[Ax1]-1; 
	       if((ygax1==yAAA1[Ax1]+1) & (ygaax1==Ax1)){printf("este se repite________________mgax1: %d\n",ymgax1);if(ymgax1==1){ycvb=0;while (ycvb<=15){if (yAAA1[Ax1]+ygax1==yAAA1[ycvb]){yBBB1[Ax1]=yacmasalto1+ymasalto1+yAAA1[Ax1];ymasalto1=ymasalto1+yAAA1[ycvb];yvmicero1=0; printf("FALSOA1: %d",yAAA1[ycvb]);yfalsoa1=ycvb-0;ycont_falsoa1=yfalsoa1;ycont_rep1=ycont_rep1+1;ycvb=17;}
	                                              /*cbv=0;while (cbv<=15){printf("mayor1 : %d",mayor1);if ((BBB1[cbv]==-1) & (cbv+1==mayor1+1)){mayor1=mayor1+1;AAA1[cbv]=mayor1;gax1=AAA1[cbv];mgax1=0;mgbx1=0; BBB1[cbv]=acmasalto1+masalto1; }cbv++;}*/       
			                                      ycvb++;}printf("cvb: %d",ycvb);}/**/}if(ycvb==16){yBBB1[Ax1]=yacmasalto1+ymasalto1+yAAA1[Ax1];ygabx1=0;printf("repeticion1 tricky no encontrada %d",yAAA1[Ax1]);ybarajea1(Ax1);}else if(ycvb==18){printf("sumo de mas a: %d",yAAA1[Ax1]);}
	       else if (ygax1==yAAA1[Ax1]+1 || ygax1==yAAA1[Ax1]-1){BBB1[Ax1]=yacmasalto1+ymasalto1+yAAA1[Ax1];ygabx1=0;printf("valor se queda pegado1 %d",yAAA1[Ax1]);ybarajea1(Ax1);ygax1=yAAA1[Ax1];ygaax1=Ax1;}
	                                 else if (ymgbx1==1){if (ygabx1>=2){pultreyeno1=ultreyeno1;ultreyeno1=Ax1;BBB1[Ax1]=acmasalto1+ymasalto1+AAA1[Ax1];printf("valor= %d",yAAA1[Ax1]);ybarajea1(Ax1);}
													   else{yBBB1[Ax1]=yacmasalto1+ymasalto1+yAAA1[Ax1];ypultreyeno1=yultreyeno1;yultreyeno1=Ax1;printf("valorw %d",yAAA1[Ax1]);if (ypultreyeno1==Ax1)printf("tapado1 %d",Ax1);ycvb=0;while(ycvb<=15){if (ycvb==Ax1){printf("AAA tapado %d",yAAA1[Ax1]);}else if (yAAA1[ycvb]==yAAA1[Ax1]) {ygabx1=ygabx1+1;}ycvb++;}}ybarajea1(Ax1);}
										  else{printf("valorinic %d",yAAA1[Ax1]);yBBB1[Ax1]=yacmasalto1+ymasalto1+yAAA1[Ax1];printf("acmasalto1 %d masalto1 %d AAA1 %d",yacmasalto1,ymasalto1,yAAA1[Ax1]);ypultreyeno1=yultreyeno1;yultreyeno1=Ax1;printf("mgbx1 %d",ymgbx1);printf("gabx1 %d",ygabx1);printf("valorz %d",yAAA1[Ax1]);printf("BBB1 %d",BBB1[Ax1]);ybarajea1(Ax1);ycont_rep1=1;}ygax1=yAAA1[Ax1];ygaax1=Ax1;yvmicero1=0;ymgax1=1;ymgbx1=1;printf("Ax1 %d",Ax1);printf("valor %d",yAAA1[Ax1]);
	}}ymasalto1=yBBB1[Ax1]-yacmasalto1;yacumulador1=yBBB1[Ax1];printf("acmasalto1: %d\n",yacmasalto1);yfalsoa1=Ax1;ycont_falsoa1=yfalsoa1;return(yacumulador1);}
int xsumalo(xaex){int Ax=xaex;printf("Ax: %d\n",Ax); 
	if (xBBB[Ax]==-1){if (xuno==0){xuno=1;xAAA[Ax]=1;xBBB[Ax]=1;xmayor=1;xmasalto=1;xvmicero=1;xacumulador=1;xmgax=0;xmgbx=0;xacmasalto=0;}
	              else if ((xAAA[Ax]==xmasalto) & (xmasalto>0) ){if (xmasalto+xAAA[Ax]>(136+xacmasalto)) {xacmasalto=xacumulador;xmasalto=1;}
					  xAAA[Ax]=xAAA[Ax]-1;xgax=xAAA[Ax];xBBB[Ax]=xacmasalto+xmasalto+xAAA[Ax];xmgax=0;xmgbx=0;xbarajea(Ax);		
					  }else {if (xmasalto+xAAA[Ax]>(136+xacmasalto)) {xacmasalto=xacumulador;xmasalto=1;}else xmayor=xmayor+1;xAAA[Ax]=xmayor;
					   xgax=xAAA1[Ax];xmgax=0;xmgbx=0; xmasalto=xmasalto+xAAA[Ax];xBBB[Ax]=xacmasalto+xmasalto;xvmicero=0;xbarajea(Ax);	
					   }xacumulador=xBBB1[Ax];xcont_rep=1;xtr=0;
	} else {if (xAAA[Ax]==1) {if (xmasalto+xAAA[Ax]>(136+xacmasalto)) {xacmasalto=xacumulador;xmasalto=1;}xerescero=1; if(xvmicero==1)
	                                                                                                                        {if(xtr==1){xBBB[Ax]=xacmasalto+xmasalto+(xmayor+1);xtr=xtr+1;}  
	                                                                                                                              else{if(xtr>1){xfalsoa=0;xcont_falsoa=xfalsoa;xcont_rep=xcont_rep+1;xtr=xtr+1;} else{xBBB[Ax]=xacmasalto+xmasalto+xAAA[Ax];xvmicero=1;}}printf("repeticion de uno: %d ",xAAA[Ax]);}
	                                                                                                           else{xBBB[Ax]=xacmasalto+xmasalto+(xmayor+1);if(xmayor<xelementos){printf("error");}xvmicero=1;xtr=1;xcont_rep=1;}xmgax=0;xmgbx=0;}
	  else {xerescero=0;if (xmasalto+xAAA[Ax]>(136+xacmasalto)) {xacmasalto=xacumulador;xmasalto=1;}xtr=1;xAAA[Ax]=xAAA[Ax]-1; 
	       if((xgax==xAAA[Ax]+1) & (xgaax==Ax)){printf("este se repite________________mgax: %d\n",xmgax1);if(xmgax==1){xcvb=0;while (xcvb<=15){if (xAAA[Ax]+xgax==xAAA[cvb]){xBBB[Ax]=xacmasalto+xmasalto+xAAA[Ax];xmasalto=xmasalto+xAAA[xcvb];xvmicero=0;printf("FALSOA: %d",xAAA[xcvb]);xfalsoa=xcvb-0;xcont_falsoa=xfalsoa;xcont_rep=xcont_rep+1;xcvb=17;}
	                                         /*cbv=0;while (cbv<=15){printf("mayor : %d",mayor);if ((BBB[cbv]==-1) & (cbv+1==mayor+1)){mayor=mayor+1;AAA[cbv]=mayor;gax=AAA[cbv];mgax=0;mgbx=0; BBB[cbv]=acmasalto+masalto;}cbv++;}*/
	                                         xcvb++;}printf("cvb: %d",xcvb);}/**/}if(xcvb==16){xBBB[Ax]=xacmasalto+xmasalto+xAAA[Ax];xgabx=0;printf("repeticion tricky no encontrada %d ",xAAA[Ax]);xbarajea(Ax);}else if(xcvb==18){printf("sumo de mas a: %d",xAAA[Ax]);}
	       else if (xgax==xAAA[Ax]+1 || xgax==xAAA[Ax]-1){xBBB[Ax]=xacmasalto+xmasalto+xAAA[Ax];xgabx=0;printf("valor se queda pegado** %d",xAAA[Ax]);xbarajea(Ax);xgax=AAA[Ax];xgaax=Ax;}
	                                 else if (xmgbx==1){if (xgabx>=2){xpultreyeno=xultreyeno;xultreyeno=Ax;xBBB[Ax]=xacmasalto+xmasalto+xAAA[Ax];printf("valor= %d",xAAA[Ax]);xbarajea(Ax);}
													   else{xBBB[Ax]=xacmasalto+xmasalto+xAAA[Ax];xpultreyeno=xultreyeno;xultreyeno=Ax;printf("valorw %d",xAAA[Ax]);if (xpultreyeno==Ax)printf("tapado %d",Ax);xcvb=0;while(xcvb<=15){if (xcvb==Ax){printf("AAA tapado %d",xAAA[Ax]);}else if (xAAA[xcvb]==xAAA[Ax]) {xgabx=xgabx+1;}xcvb++;}}xbarajea(Ax);}
										  else{printf("valorinic %d",AAA[Ax]);BBB[Ax]=xacmasalto+xmasalto+xAAA[Ax];xpultreyeno=xultreyeno;xultreyeno=Ax;printf("mgbx %d",xmgbx);printf("gabx %d",xgabx);printf("valorz %d",xAAA[Ax]);printf("BBB %d",xBBB[Ax]);xbarajea(Ax);xcont_rep=1;}xgax=xAAA[Ax];xgaax=Ax;xvmicero=0;xmgax=1;xmgbx=1;printf("Ax %d",Ax);printf("valor %d",xAAA[Ax]);
	}}xmasalto=xBBB[Ax]-xacmasalto;xacumulador=xBBB[Ax];printf("acmasalto: %d\n",xacmasalto);xfalsoa=Ax;xcont_falsoa=xfalsoa;return(xacumulador);}
int xsumalo1(xaex1){int Ax1=xaex1;printf("Ax1: %d\n",Ax1); 
	if (xBBB1[Ax1]==-1){if (xuno1==0){xuno1=1;xAAA1[Ax1]=1;xBBB1[Ax1]=1;xmayor1=1;xmasalto1=1;xvmicero1=1;xacumulador1=1;xmgax1=0;mgbx1=0;xacmasalto1=0;}
	              else if ((xAAA1[Ax1]==xmasalto1) & (xmasalto1>0) ){if (xmasalto1+xAAA1[Ax1]>(136+xacmasalto1)) {xacmasalto1=xacumulador1;xmasalto1=1;}
					  xAAA1[Ax1]=xAAA1[Ax1]-1;xgax=xAAA1[Ax1];xBBB1[Ax1]=xacmasalto1+xmasalto1+xAAA1[Ax1];xmgax1=0;xmgbx1=0;xbarajea1(Ax1);		
					  }else {if (xmasalto1+xAAA1[Ax1]>(136+xacmasalto1)) {xacmasalto1=xacumulador1;xmasalto1=1;}else xmayor1=xmayor1+1;xAAA1[Ax1]=xmayor1;
					   xgax=xAAA1[Ax1];xmgax1=0;xmgbx1=0; xmasalto1=xmasalto1+xAAA1[Ax1];xBBB1[Ax1]=xacmasalto1+xmasalto1;xvmicero1=0;xbarajea1(Ax1);	
					   }xacumulador1=xBBB1[Ax1];tr1=0;xcont_rep1=1;
	} else {if (xAAA1[Ax1]==1) {if (xmasalto1+xAAA1[Ax1]>(136+xacmasalto1)) {xacmasalto1=xacumulador1;xmasalto1=1;}xerescero1=1; if(xvmicero1==1)
	                                                                                                                                   {if(xtr1==1){xBBB1[Ax1]=xacmasalto1+xmasalto1+(xmayor1+1);xtr1=xtr1+1;}
	                                                                                                                                          else{if(xtr1>1){xfalsoa1=0;xcont_falsoa1=xfalsoa1;xcont_rep1=xcont_rep1+1;tr1=tr1+1;} else{xBBB1[Ax1]=xacmasalto1+xmasalto1+xAAA1[Ax1];xvmicero1=1;}printf("repeticion de uno1: %d",xAAA1[Ax1]);}}
	                                                                                                                     else{xBBB1[Ax1]=xacmasalto1+xmasalto1+(xmayor1+1);if(xmayor1<xelementos1){printf("error");}xvmicero1=1;xtr1=1;xcont_rep1=1;}xmgax1=0;xmgbx1=0;}
	  else {xerescero1=0;if (xmasalto1+xAAA1[Ax1]>(136+xacmasalto1)) {xacmasalto1=xacumulador1;xmasalto1=1;}xtr1=1;xAAA1[Ax1]=xAAA1[Ax1]-1; 
	       if((xgax1==xAAA1[Ax1]+1) & (xgaax1==Ax1)){printf("este se repite________________mgax1: %d\n",xmgax1);if(xmgax1==1){xcvb=0;while (xcvb<=15){if (xAAA1[Ax1]+xgax1==xAAA1[xcvb]){xBBB1[Ax1]=xacmasalto1+xmasalto1+xAAA1[Ax1];xmasalto1=xmasalto1+xAAA1[xcvb];xvmicero1=0; printf("FALSOA1: %d",xAAA1[xcvb]);xfalsoa1=xcvb-0;xcont_falsoa1=xfalsoa1;xcont_rep1=xcont_rep1+1;xcvb=17;}
	                                              /*cbv=0;while (cbv<=15){printf("mayor1 : %d",mayor1);if ((BBB1[cbv]==-1) & (cbv+1==mayor1+1)){mayor1=mayor1+1;AAA1[cbv]=mayor1;gax1=AAA1[cbv];mgax1=0;mgbx1=0; BBB1[cbv]=acmasalto1+masalto1; }cbv++;}*/       
			                                      xcvb++;}printf("cvb: %d",xcvb);}/**/}if(xcvb==16){xBBB1[Ax1]=xacmasalto1+xmasalto1+xAAA1[Ax1];xgabx1=0;printf("repeticion1 tricky no encontrada %d",xAAA1[Ax1]);xbarajea1(Ax1);}else if(xcvb==18){printf("sumo de mas a: %d",xAAA1[Ax1]);}
	       else if (xgax1==xAAA1[Ax1]+1 || xgax1==xAAA1[Ax1]-1){BBB1[Ax1]=xacmasalto1+xmasalto1+xAAA1[Ax1];xgabx1=0;printf("valor se queda pegado1 %d",xAAA1[Ax1]);xbarajea1(Ax1);xgax1=xAAA1[Ax1];xgaax1=Ax1;}
	                                 else if (xmgbx1==1){if (xgabx1>=2){pultreyeno1=ultreyeno1;ultreyeno1=Ax1;BBB1[Ax1]=acmasalto1+xmasalto1+AAA1[Ax1];printf("valor= %d",xAAA1[Ax1]);xbarajea1(Ax1);}
													   else{xBBB1[Ax1]=xacmasalto1+xmasalto1+xAAA1[Ax1];xpultreyeno1=xultreyeno1;xultreyeno1=Ax1;printf("valorw %d",xAAA1[Ax1]);if (xpultreyeno1==Ax1)printf("tapado1 %d",Ax1);xcvb=0;while(xcvb<=15){if (xcvb==Ax1){printf("AAA tapado %d",xAAA1[Ax1]);}else if (xAAA1[xcvb]==xAAA1[Ax1]) {xgabx1=xgabx1+1;}xcvb++;}}xbarajea1(Ax1);}
										  else{printf("valorinic %d",xAAA1[Ax1]);xBBB1[Ax1]=xacmasalto1+xmasalto1+xAAA1[Ax1];printf("acmasalto1 %d masalto1 %d AAA1 %d",xacmasalto1,xmasalto1,xAAA1[Ax1]);xpultreyeno1=xultreyeno1;xultreyeno1=Ax1;printf("mgbx1 %d",xmgbx1);printf("gabx1 %d",xgabx1);printf("valorz %d",xAAA1[Ax1]);printf("BBB1 %d",BBB1[Ax1]);xbarajea1(Ax1);xcont_rep1=1;}xgax1=xAAA1[Ax1];xgaax1=Ax1;xvmicero1=0;xmgax1=1;xmgbx1=1;printf("Ax1 %d",Ax1);printf("valor %d",xAAA1[Ax1]);
	}}xmasalto1=xBBB1[Ax1]-xacmasalto1;xacumulador1=xBBB1[Ax1];printf("acmasalto1: %d\n",xacmasalto1);xfalsoa1=Ax1;xcont_falsoa1=xfalsoa1;return(xacumulador1);}
void rellenando1(){int repit=0,rpit=0,xcv=1; 
    						                            byes[intocable][u]=(BBB[intocable]-BBB[masalto])-elementos;
    						                            if (BBB[intocable]-byes[intocable][u]<BBB[masalto]){
    						                               repit=byes[intocable][u];rpit=byes[intocable][u];    						                               
    						                               while (BBB[intocable]-repit<BBB[masalto]){
    						                                  rpit=rpit+1;if (rpit>=u) rpit=rpit+BBB[intocable];else repit=repit+rpit;}
    						                               BBB[intocable]=BBB[intocable]-repit;AAA[intocable]=repit-BBB[intocable]; }  						                               
    						                            else{
    						                               if (elementos==u){
    						                                  xcv=0;while (xcv<=15){
    						                                          if (aconx[xcv]==1){if (AAA[xcv]==elementos){;/*marcar b[xcv] y listo*/}}xcv=xcv+1;}
    						                                  DDD[u]=elementos;}        
    						                               else{
    						                                  if (byes[intocable][u]>elementos){;}                    
    						                                  else{
    						                                     if (BBB[intocable]-byes[intocable][u]==BBB[masalto]+elementos){
    						                                        BBB[intocable]=BBB[intocable]-byes[intocable][u];AAA[intocable]=byes[intocable][u];DDD[u]=AAA[intocable];  
    						                                        if (byes[intocable][u]+1<elementos)DDD[u-1]=elementos;       						                                           
    						                                        else{if (byes[intocable][u]==elementos+1)DDD[u-1]=1;    						                                              
    						                                           else{if (BBB[intocable]-BBB[masalto]==elementos+1){DDD[u-1]=1;repeticiones=repeticiones-1; }
    						                                               else{if (BBB[intocable]-BBB[masalto]==elementos+0)DDD[u-1]=elementos;}}}      						                                             						                                              
    						                                        u=u-1;}  
    						                                     else{
    						                                        BBB[intocable]=BBB[intocable]-elementos;AAA[intocable]=elementos;DDD[u]=elementos;
    						                                        if (byes[intocable][u]+1<elementos)DDD[u-1]=byes[intocable][u];        						                                           
    						                                        else{if (byes[intocable][u]+1==elementos)DDD[u-1]=1;}u=u-1;}     						                                        
    	                           					   	         cvb=1;while (cvb<=16){if (AAA[cvb]==AAA[intocable]+1){;}cvb=cvb+1;}}}}  	                           					   	         
}
void rellenando11(){int repit=0,rpit=0,xcv=1; printf("rellenando11");
    						                            byes[intocable1][/*u*/bxx]=(BBB1[intocable1]-BBB1[masalto1])-elementos1;/*fortalecer esta condicion podria ser util*/
    						                            if (BBB[intocable1]-byes[intocable1][/*u*/bxx]<BBB1[masalto1]){repit=byes[intocable1][/*u*/bxx];rpit=byes[intocable1][bxx/*u*/];      						                                 						                               
    						                               while (BBB1[intocable1]-repit<BBB1[masalto1]){
    						                                  rpit=rpit+1;if (rpit>=bxx/*u*/) {rpit=rpit+BBB1[intocable1];}else repit=repit+rpit;}printf("repit %d rpit %d ", repit,rpit);
    						                               BBB1[intocable1]=BBB1[intocable1]-repit;AAA1[intocable1]=repit-BBB1[intocable1];DDD1[u]=repit;u=u-1; } 
    						                               if (BBB1[intocable1]>BBB1[masalto1]) {printf("terminando_ intocable1 %d masalto1 %d ",BBB1[intocable1],BBB1[masalto1]);
    						                                                                    AAA1[intocable1]=(BBB1[intocable1]-BBB1[masalto1]);BBB1[intocable1]=-1;DDD1[u]=AAA1[intocable1];
    						                                                                    verlod();getchar();}		 				                               
    						                            else{
    						                               if (elementos1==/*u*/bxx){
    						                                  xcv=0;while (xcv<=15){
    						                                          if (a1conx[xcv]==1){if (AAA1[xcv]==elementos1){;/*marcar b[xcv] y listo*/}}xcv=xcv+1;}
    						                                  DDD1[u]=elementos1;}        
    						                               else{
    						                                  if (byes[intocable1][/*u*/bxx]>elementos1){;}                    
    						                                  else{
    						                                     if (BBB1[intocable1]-byes[intocable1][/*u*/bxx]==BBB1[masalto1]+elementos1){
    						                                        BBB1[intocable1]=BBB1[intocable1]-byes[intocable1][/*u*/bxx];AAA1[intocable1]=byes[intocable1][bxx];DDD1[u]=AAA1[intocable1];  
    						                                        if (byes[intocable1][bxx/*u*/]+1<elementos1)DDD1[u-1]=elementos1;       						                                           
    						                                        else{if (byes[intocable1][/*u*/bxx]==elementos1+1)DDD1[u-1]=1;    						                                              
    						                                           else{if (BBB1[intocable1]-BBB1[masalto1]==elementos1+1){DDD1[u-1]=1;repeticiones1=repeticiones1-1; }
    						                                               else{if (BBB1[intocable1]-BBB1[masalto1]==elementos1+0)DDD1[u-1]=elementos1;}}}      						                                             						                                              
    						                                        u=u-1;}  
    						                                     else{
    						                                        BBB1[intocable1]=BBB1[intocable1]-elementos1;AAA1[intocable1]=elementos1;DDD1[u]=elementos1;
    						                                        if (byes[intocable1][/*u*/bxx]+1<elementos1)DDD1[u-1]=byes[intocable1][/*u*/bxx];        						                                           
    						                                        else{if (byes[intocable1][/*u*/bxx]+1==elementos1)DDD1[u-1]=1;}u=u-1;}     						                                        
    	                           					   	         cvb=1;while (cvb<=16){if (AAA1[cvb]==AAA1[intocable1]+1){;}cvb=cvb+1;}}}}  	                           					   	         
}
void rellenando2(){ int acumulavistos=0,misvistos=0,salvisto=0,vmisvistos=0;  						                                     
    						                                     acumulavistos=elementos+1;misvistos=elementos;
    						                                     while (misvistos>1){vmisvistos=0;     						                                           						                                     
    						                                        while (vmisvistos<=15){
    						                                           if (AAA[vmisvistos]==misvistos){
    						                                              if (acumulavistos+misvistos>BBB[intocable]) vmisvistos=18;   						                                              
    						                                              else{if (acumulavistos+misvistos==BBB[intocable])salvisto=1;acumulavistos=acumulavistos+misvistos;}vmisvistos=18;} 
    						                                           vmisvistos=vmisvistos+1;}
    						                                        misvistos=misvistos-1;}
 }
void estirainstancias(){ int q=0,estironveces=0,estiradsdaki=0,cx=0,instanciasdelemento=0;  			     
   			      q=0; while (q<=estironveces){ 
   			           cx=instanciasdelemento+1;while (cx>estiradsdaki){  
   			                                       if (q==1)DDD[q]=0;else{if (q==2)DDD[q]=1;else DDD[cx]=DDD[cx-1];}cx=cx-1;}   			              
   			           q=q+1;}  
}
void xestirainstancias(){ int q=0,xestironveces=0,xestiradsdaki=0,cx=0,xinstanciasdelemento=0;  			     
   			      q=0; while (q<=estironveces){ 
   			           cx=xinstanciasdelemento+1;while (cx>estiradsdaki){  
   			                                       if (q==1)xDDD[q]=0;else{if (q==2)xDDD[q]=1;else xDDD[cx]=xDDD[cx-1];}cx=cx-1;}   			              
   			           q=q+1;}  
}
void yestirainstancias(){ int q=0,yestironveces=0,yestiradsdaki=0,cx=0,yinstanciasdelemento=0;  			     
   			      q=0; while (q<=estironveces){ 
   			           cx=yinstanciasdelemento+1;while (cx>estiradsdaki){  
   			                                       if (q==1)yDDD[q]=0;else{if (q==2)yDDD[q]=1;else yDDD[cx]=yDDD[cx-1];}cx=cx-1;}   			              
   			           q=q+1;}  
}
void estirainstancias1(){  int q=0,estironveces1=0,estiradsdaki1=0,cx=0,instanciasdelemento1=0;   			     
   			      q=0; while (q<=estironveces1){ 
   			           cx=instanciasdelemento1+1;while (cx>estiradsdaki1){  
   			                                       if (q==1)DDD1[q]=0;else{if (q==2)DDD1[q]=1;else DDD1[cx]=DDD1[cx-1];}cx=cx-1;}   			              
   			           q=q+1;}  
}
void xestirainstancias1(){ int q=0,xestironveces=0,xestiradsdaki=0,cx=0,xinstanciasdelemento=0;  			     
   			      q=0; while (q<=estironveces){ 
   			           cx=xinstanciasdelemento+1;while (cx>estiradsdaki){  
   			                                       if (q==1)xDDD[q]=0;else{if (q==2)xDDD[q]=1;else xDDD[cx]=xDDD[cx-1];}cx=cx-1;}   			              
   			           q=q+1;}  
}
void yestirainstancias1(){  int q=0,yestironveces1=0,yestiradsdaki1=0,cx=0,yinstanciasdelemento1=0;   			     
   			      q=0; while (q<=yestironveces1){ 
   			           cx=yinstanciasdelemento1+1;while (cx>yestiradsdaki1){  
   			                                       if (q==1)yDDD1[q]=0;else{if (q==2)yDDD1[q]=1;else yDDD1[cx]=yDDD1[cx-1];}cx=cx-1;}   			              
   			           q=q+1;}  
}
  
void distri_sin_repeticion(){ int dbx=0;                             
     dbx=0;while(dbx<=15){ 
			       if (dbx==0){if (BBB[intocable]>511)CCC[dbx]=masbajo;else CCC[dbx]=1;}
			  else if (dbx==1){if (BBB[intocable]>511)CCC[dbx]=masbajo+2;else CCC[dbx]=3;}
			                                    else CCC[dbx]=(dbx+1)+CCC[dbx-1];printf("primer_valor_ccc %d",CCC[dbx]);dbx=dbx+1;} verlod();
}
void distri_sin_repeticiona(){ int bxa=0;                                
     bxa=0;while(bxa<=15){  
			       if (bxa==0){if (BBB[intocable]>511)CCaC[bxa]=masbajo;else CCaC[bxa]=1;}
		      else{if (bxa==1){if (BBB[intocable]>511)CCaC[bxa]=masbajo+2;else CCaC[bxa]=3;}
			                                    else CCaC[bxa]=(bxa+1)+CCaC[bxa-1];}bxa=bxa+1;printf("bxa %d \n",bxa); } 
}
void distri_sin_repeticion1(){  int bx1=0;                               
     bx1=0;while(bx1<=15){  
			       if (bx1==0){if (BBB1[intocable1]>511)CCC1[bx1]=masbajo1;else CCC1[bx1]=1;}
			  else{if (bx1==1){if (BBB1[intocable1]>511)CCC1[bx1]=masbajo1+2;else CCC1[bx1]=3;}
			                                      else CCC1[bx1]=(bx1+1)+CCC1[bx1-1];}bx1=bx1+1;printf("bx1 %d ",bx1);} 	
} 
void distri_sin_repeticion1a(){  int bx1a=0;                               
     bx1a=0;while(bx1a<=15){  
			       if (bx1a==0){if (BBB1[intocable1]>511)CCaC1[bx1a]=masbajo1;else CCaC1[bx1a]=1;}
			  else{if (bx1a==1){if (BBB1[intocable1]>511)CCaC1[bx1a]=masbajo1+2;else CCaC1[bx1a]=3;}
			                                      else CCaC1[bx1a]=(bx1a+1)+CCaC1[bx1a-1];}bx1a=bx1a+1;printf("bx1a %d \n",bx1a);} 	
}
void distribccc(){
int ccc=0,ccca=0,vbx=0;
            while (vbx<=15){ if (vbx==0){if (BBB[intocable]>122)ccc=masbajo; else ccc=1;}	 
					   else {if (vbx==1){if (BBB[intocable]>122) ccc=masbajo+2; else ccc=3;ccca=ccc;}
					               else {ccc=(vbx-0)+(ccca-0);ccca=ccc;}}	   					    	    
						   if (ccc>=BBB[intocable]-BBB[masalto])vbx=17;else vbx=vbx+1;} if (BBB[intocable]-BBB[masalto]>ccc){;}  
								                 						          					    	     
}
void distribccc1(){
int ccc=0,ccca=0,vbx1=0;
            while (vbx1<=15){ if (vbx1==0){if (BBB1[intocable1]>122)ccc=masbajo1; else ccc=1;}	 
						     else {if (vbx1==1){
								           if (BBB1[intocable1]>122) ccc=masbajo1+2; else ccc=3;ccca=ccc;}
								  else {ccc=(vbx1-0)+(ccca-0);ccca=ccc;}}	   					    	    
						   if (ccc>=BBB1[intocable1]-BBB1[masalto1])vbx1=17;else vbx1=vbx1+1;} if (BBB1[intocable1]-BBB1[masalto1]>ccc){;}        						          					    	     
}
void distribccc2(){
int ccc2=0,ccc2a=0,vbx2=0;
            while (vbx2<=15){ if (vbx2==0){if (BBB[intocable]>122)ccc2=masbajo; else ccc2=1;} 
						     else {if (vbx2==1){
								            if (BBB[intocable]>122) ccc2=masbajo+2; else ccc2=3;ccc2a=ccc2;}
								  else {ccc2=(vbx2-0)+(ccc2a-0);ccc2a=ccc2;}}	   					    	    
						   if (ccc2>=BBB[intocable])vbx2=17;else vbx2=vbx2+1;}if (BBB[intocable]-BBB[masalto]>ccc2){;}        	       						   				    	     
}
void distribccc21(){
int ccc2=0,ccc2a=0,vbx21=0;
            while (vbx21<=15){ if (vbx21==0){if (BBB1[intocable1]>122)ccc2=masbajo1; else ccc2=1;} 
						     else {if (vbx21==1){
								            if (BBB1[intocable1]>122) ccc2=masbajo1+2; else ccc2=3;ccc2a=ccc2;}
								  else {ccc2=(vbx21-0)+(ccc2a-0);ccc2a=ccc2;}}	   					    	    
						   if (ccc2>=BBB1[intocable1])vbx21=17;else vbx21=vbx21+1;}if (BBB1[intocable1]-BBB1[masalto1]>ccc2){;}        	       						   				    	     
}
void distribccc3(){
int ccc3=0,ccc3a=0,vbx3=0;
            while (vbx3<=15){if (vbx3==0){if (BBB[intocable]>122)ccc3=masbajo; else ccc3=1;}	 
						     else {if (vbx3==1){
								            if (BBB[intocable]>122) ccc3=masbajo+2; else ccc3=3;ccc3a=ccc3;}
								  else {ccc3=(vbx3-0)+(ccc3a-0);ccc3a=ccc3;}}	   					    	    
						   if (ccc3>=BBB[masalto])vbx3=17;else vbx3=vbx3+1;}if (BBB[intocable]-BBB[masalto]>ccc3){;}        						          					    	     
}
void distribccc31(){
int ccc3=0,ccc3a=0,vbx31=0;
            while (vbx31<=15){if (vbx31==0){if (BBB1[intocable1]>122)ccc3=masbajo1; else ccc3=1;}	 
						     else {if (vbx31==1){
								            if (BBB1[intocable1]>122) ccc3=masbajo1+2; else ccc3=3;ccc3a=ccc3;}
								  else {ccc3=(vbx31-0)+(ccc3a-0);ccc3a=ccc3;}}	   					    	    
						   if (ccc3>=BBB1[masalto1])vbx31=17;else vbx31=vbx31+1;}if (BBB1[intocable1]-BBB1[masalto1]>ccc3){;}        						          					    	     
}
void distribccc4(){
int ccc4=0,ccc4a=0,vbx4=0,candy=0;
            while (vbx4<=15){if (vbx4==0){if (BBB[intocable]>122)ccc4=masbajo; else ccc4=1;}	 
						     else {if (vbx4==1){
								            if (BBB[intocable]>122) ccc4=masbajo+2; else ccc4=3;ccc4a=ccc4;}
								  else {ccc4=(vbx4-0)+(ccc4a-0);ccc4a=ccc4;}}	   					    	    
						   if (vbx4>=candy)vbx4=17;else vbx4=vbx4+1;} if (BBB[intocable]-BBB[masalto]>ccc4){;}          						        					    	     
}
void distribccc41(){
int ccc4=0,ccc4a=0,vbx41=0,candy=0;
            while (vbx41<=15){if (vbx41==0){if (BBB1[intocable1]>122)ccc4=masbajo1; else ccc4=1;}	 
						     else {if (vbx41==1){ 
								            if (BBB1[intocable1]>122) ccc4=masbajo1+2; else ccc4=3;ccc4a=ccc4;}
								  else {ccc4=(vbx41-0)+(ccc4a-0);ccc4a=ccc4;}}	   					    	    
						   if (vbx41>=candy)vbx41=17;else vbx41=vbx41+1;} if (BBB1[intocable1]-BBB[masalto1]>ccc4){;}          						        					    	     
}
void mibcorrespond(){printf("entrando a mibcorrespond");int oo=0,sumb=0,sumc=0,sumd=0,sume=0;
                            if (repeticiones==0){nobxx=1;
                                 if (mayor<136){oo=0; while (oo<=15){
                                        {if (aconx[oo]==1){if (AAA[oo]== (u-1)){BBB[oo]=CCC[u-1];oo=17;}}
                                        else               {if (AAA[oo]==(u-1)){BBB[oo]=CCC[u-1];oo=17;}}oo=oo+1;}}}
                                 else 
	                               /*conectar al aray el[] en este punto*/ 
	                               /* sumc=0;sumd=16;*/
            	                   {while (sumd>sumb){sume=0;while (sume<=15){
                            	                                             if (aconx[sume]==1)
                                	                                              {if(AAA[sume]==sumd)sume=17;else{if (AAA[sume]==sumd)sume=17;}}
    	                                                                          else{if (AAA[sume]==sumd)sume=17;}sume=sume+1;}
                            	                                             }if (sume==17)sumc=sumc+sume;else sumc=sumc+AAA[sume];sumd=sumd-1;if(BBB[intocable]>CCaC[elementos])repeticiones=repeticiones+1;/*validar elementos para cuadrar CCC*/
                	                                } el[intocable]=sumc;  BBB[intocable]=BBB[intocable]-CCaC[elementos-1];printf("ya no hay mas repeticiones___ %d ",CCaC[elementos-1]);}                       
                            else{
                               if(aconx[intocable]>-1){BBB[intocable]=-1;oo=0;while (oo<=15){if(ael[oo]>0){el[oo]=el[oo]+AAA[intocable];ael[oo]=ael[oo]-1;/*corregir*/if(ael[oo]==0){BBB[oo]=BBB[oo]-el[oo];nobxx=1;}}oo++;} /* cuanto quitarle a bbb?validar ademas si hubo repeticiones para tener exactitud en ael[]*/
                                                                                      el[intocable]=el[intocable]+AAA[intocable];/*BBB[intocable]=BBB[intocable]-(CCaC[elementos-1]+el[intocable]);*/printf("BBB %d",BBB[intocable]);getchar();}
                               else                                                   el[intocable]=el[intocable]+AAA[intocable];BBB[intocable]=-1;aconx[intocable]=AAA[intocable];printf("el %d",el[intocable]);getchar();}
                               
                               /*revisar valor de BBB[]*/
}
void mibcorrespond1(){int oo=0,k=0,kx=0,sumb=0,sumc=0,sumd=0,sume=0;
                            if (repeticiones1==0){nobxx=1;
                                 if (mayor1<136){oo=0; while (oo<=15){
                                        {if (a1conx[oo]==1){if (AAA1[oo]== (u-1)){BBB1[oo]=CCC1[u-1];oo=17;}} 
                                        else               {if (AAA1[oo]==(u-1)){BBB1[oo]=CCC1[u-1];oo=17;}}oo=oo+1;}}}
                                 else
	                               /*conectar al aray el[] en este punto*/ 
	                               /* sumc=0;sumd=16;*/
            	                   {while (sumd>sumb){sume=0;while (sume<=15){
                            	                                             if (a1conx[sume]==1)
                                	                                              {if(AAA1[sume]==sumd)sume=17;else{if (AAA[sume]==sumd)sume=17;}}
    	                                                                          else{if (AAA1[sume]==sumd)sume=17;}sume=sume+1;}
                            	                                             }if 																															(sume==17)sumc=sumc+sume;else sumc=sumc+AAA1[sume];sumd=sumd-1;if(BBB1[intocable1]>CCaC1[elementos1])repeticiones1=repeticiones1+1;/*validar elementos1 para cuadrar CCC1*/
                	                                } el1[intocable1]=sumc; BBB1[intocable1]=BBB1[intocable1]-CCaC1[elementos1-1];printf("yanohaymasrepeticiones___1 %d ", CCaC1[elementos1-1]);}                       
                            else{
                               if(a1conx[intocable1]>-1){BBB1[intocable1]=-1;oo=0;while (oo<=15){if(ael1[oo]>0){el1[oo]=el1[oo]+AAA1[intocable1];ael1[oo]=ael1[oo]-1;/*corregir*/if(ael1[oo]==0){BBB1[oo]=BBB1[oo]-el1[oo];nobxx=1;}}oo++;} /* cuanto quitarle a bbb?validar ademas si hubo repeticiones para tener exactitud en ael1[]*//* if(BBB1[masbajo1]+(CCC1[elementos1])<(el[]+masalto1+AAA1[Ax1]))*/
                                                                                         el1[intocable1]=el1[intocable1]+AAA1[intocable1];/*BBB1[intocable1]=BBB1[intocable1]-el1[intocable1];*/printf("BBB1 %d",BBB1[intocable1]);getchar();}
                               else                                                      el1[intocable1]=el1[intocable1]+AAA1[intocable1];BBB1[intocable1]=-1;a1conx[intocable1]=AAA1[intocable1];printf("el1 %d",el1[intocable1]);getchar();}                               
         
}
void kienesuno(){ 
	int  czx=1,cxz=0,cu=0,cza=0,sekienes1=0,estironveces=0,estiradsdaki=0,doz=0,ll=0;                            
                       czx=0; while (czx<=15){
                                 if (sekienes1==0){if ((BBB[czx]==1) || (BBB[segmasbajo]-BBB[masbajo]==1)){AAA[czx]=1;sekienes1=1;}}
                                 if (AAA[czx]>-1){
                                   if (czx==intocable){;}
                                   else{
                                     if ((aconx[czx]==1) & (AAA[czx]=1)){AAA[czx]=2;byes[intocable][1]=2;                                     
                                        cza=0;while (cza<=15){
                                              if (BBB[cza]==3){
                                                 byes[intocable][u]=3;AAA[czx]=3;aconx[czx]=1;
                                                 cza=1;while (cza<=16){if(cza==czx){;}
                                                                  else{if (AAA[cza]==3){AAA[cza]=				4;aconx[czx]=1;cza=18;}}cza=cza+1;}}
                                              cza=cza+1;}
                                        if (repeticiones<=1){
                                           if (u<=3){BBB[czx]=BBB[intocable]-BBB[masalto];}}
                                        cxz=18;}}}czx=czx+1;}                                   
                               if (czx==16){
                                  if (BBB[intocable]-(elementos+1)==BBB[masalto]){
                                     if (u==elementos){
                                        cu=1;while (cu<=16){
                                               if (BBB[cu]==CCC[u]){
									              estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+estironveces;cu=18;}cu=cu+1;}
                                     }} 
                                  DDD[u]=1;aconx[intocable]=1;AAA[intocable]=1;CCC[1]=-1;repeticiones=repeticiones-1;   
                                  if (repeticiones==0)repeticiones=u-elementos;
                                  if (repeticiones<=0){
                                     if (BBB[intocable]==CCC[u+1]){
		                                 estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;} 						                   
                                     doz=1;while (doz<=16){if (BBB[doz]==2){;}doz=doz+1;}                                     
                                     if (doz==17)BBB[intocable]=1;mibcorrespond();elementos=elementos-1;}
                                  else repeticiones=repeticiones-1;}
                               else{
                                  if (BBB[intocable]-(elementos+1)==BBB[masalto]+0)
                                     {ll=0;while (ll<=15){
                                             if (aconx[intocable]==1){if (AAA[ll]==-1){;}
                                                                  else{if (AAA[ll]==elementos)ll=18;else{if (AAA[ll]==elementos)ll=18;}}}		
                                             ll=ll+1;}
                                     if (ll==17){AAA[intocable]=elementos;DDD[u]=elementos;u=u-1;}
                                     else{aconx[intocable]=1;AAA[intocable]=1;} 
                                     DDD[u]=1;CCC[1]=-1;elementos=elementos-1;}         
                                  else DDD[u]=1;
                                  repeticiones=repeticiones-1;   
                                  if (repeticiones==0){if (AAA[intocable]==1) BBB[intocable]=1;mibcorrespond();} else{;}                                    
                               }  
}
void kienesuno1(){ printf("condicion de mas bajos %d %d", BBB1[segmasbajo1],BBB1[masbajo1]); 
	int  czx=1,cxz=0,cu=0,cza=0,sekienes1=0,estironveces1=0,estiradsdaki1=0,doz=0,ll=0;                            
                       czx=0; while (czx<=15){
                                 if (sekienes1==0){if (BBB1[czx]==1){AAA1[czx]=1;sekienes1=1;printf("marco al uno _____primera condicion");}}
								 if (sekienes1==0){if (BBB1[segmasbajo1]-BBB1[masbajo1]==1){AAA1[czx]=1;sekienes1=1;printf("marco al uno _____segunda condicion"); }}
                                 if (AAA[czx]>-1){
                                   if (czx==intocable1){;}
                                   else{
                                     if ((a1conx[czx]==1) & (AAA1[czx]==1)){AAA1[czx]=2;byes1[intocable1][1]=2;                                     
                                        cza=0;while (cza<=15){
                                              if (BBB1[cza]==3){
                                                 byes1[intocable1][u]=3;AAA1[czx]=3;a1conx[czx]=1;
                                                 cza=1;while (cza<=16){if(cza==czx){;}
                                                                  else{if (AAA1[cza]==3){AAA1[cza]=4;a1conx[czx]=1;cza=18;}}cza=cza+1;}}
                                              cza=cza+1;} 
                                        if (repeticiones<=1){
                                           if (u<=3){BBB1[czx]=BBB1[intocable1]-BBB1[masalto1];}}
                                        cxz=18;}}}czx=czx+1;}                                   
                               if (czx==16){
                                  if (BBB1[intocable1]-(elementos1+1)==BBB1[masalto1]){
                                     if (u==elementos1){
                                        cu=1;while (cu<=16){
                                               if (BBB1[cu]==CCC1[u]){
									              estironveces1=1;estiradsdaki1=u;estirainstancias1();instanciasdelemento1=instanciasdelemento1+1;u=u+estironveces;cu=18;}cu=cu+1;}
                                     }} 
                                  DDD1[u]=1;a1conx[intocable1]=1;AAA1[intocable1]=1;CCC1[1]=-1;repeticiones1=repeticiones1-1;   
                                  if (repeticiones1==0)repeticiones1=u-elementos1;
                                  if (repeticiones1<=0){
                                     if (BBB1[intocable1]==CCC[u+1]){
		                                 estironveces=1;estiradsdaki=u;estirainstancias1();instanciasdelemento1=instanciasdelemento1+1;u=u+1;} 						                   
                                     doz=1;while (doz<=16){if (BBB1[doz]==2){;}doz=doz+1;}                                     
                                     if (doz==17)BBB1[intocable1]=1;verlod();mibcorrespond1();printf("no marco nada en mibcorrespond");elementos1=elementos1-1;}
                                  else repeticiones1=repeticiones1-1;verlod();}
                               else{
                                  if (BBB1[intocable]-(elementos1+1)==BBB1[masalto1]+0)
                                     {ll=0;while (ll<=15){
                                             if (a1conx[intocable1]==1){if (AAA1[ll]==-1){;}
                                                                  else{if (AAA1[ll]==elementos1)ll=18;else{if (AAA1[ll]==elementos1)ll=18;}}}
                                             ll=ll+1;}
                                     if (ll==17){AAA1[intocable1]=elementos1;DDD1[u]=elementos1;u=u-1;}
                                     else{a1conx[intocable1]=1;AAA1[intocable1]=1;} 
                                     DDD1[u]=1;CCC1[1]=-1;elementos1=elementos1-1;}         
                                  else DDD1[u]=1;
                                  repeticiones1=repeticiones1-1;   
                                  if (repeticiones1==0){if (AAA1[intocable1]==1) BBB1[intocable1]=1;mibcorrespond1();} else{;}                                    
                               }  
}
void sumaleuno(){int axx=0;                           
while (axx<=15){      if (AAA[axx]>-1){if (axx==intocable){;}
                                  else{if (AAA[axx]==(BBB[intocable]-BBB[masalto])){AAA[axx]=((BBB[intocable]-BBB[masalto])+1);
                                                                                    axx=17;}}}axx=axx+1;}                                                                 
} 
void sumaleuno1(){int axx=0;                           
while (axx<=15){      if (AAA1[axx]>-1){if (axx==intocable1){;}
                                   else{if (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])){AAA1[axx]=((BBB1[intocable1]-BBB1[masalto1])+1);
                                                                                          axx=17;}}}axx=axx+1;}                                                                 
} 
void intercambia(){int sumb=0,cvb=0;    	                           					   	                                  
    	                           					   	                              cvb=0; while (cvb<=15){
    	                           					   	                                     if (aconx[cvb]==1){
    	                           					   	                                        if (AAA[cvb]==AAA[bye]+1){
    	                           					   	                                           AAA[bye]=AAA[bye]+1;AAA[cvb]=AAA[bye]-1;cvb=18;}}cvb=cvb+1;}
    	                           					   	                                           
    	                           					   	                                     if (cvb==16){if (repeticiones<=0) BBB[bye]=BBB[intocable]-elementos; else{sumb=elementos;mibcorrespond();}} 
    	                           					   	                                     else mibcorrespond();
}	
void intercambia1(){int sumb=0,cvb=0;    	                           					   	                                  
    	                           					   	                              cvb=0; while (cvb<=15){
    	                           					   	                                     if (a1conx[cvb]==1){ 
    	                           					   	                                        if (AAA1[cvb]==AAA1[bye]+1){
    	                           					   	                                           AAA1[bye]=AAA1[bye]+1;AAA1[cvb]=AAA1[bye]-1;cvb=18;}}cvb=cvb+1;}
    	                           					   	                                           
    	                           					   	                                     if (cvb==16){if (repeticiones1<=0) BBB1[bye]=BBB1[intocable1]-elementos1; else{sumb=elementos1;mibcorrespond1();}} 
    	                           					   	                                     else mibcorrespond1();
}	
void validarepetic(){int axx=0; printf("entrando a validarepetic"); 
                           if (repeticiones>0){
                              axx=0;
                              while (axx<=15){
                                 if (aconx[axx]==1){
                                   if   (AAA[axx]==(BBB[intocable]-BBB[masalto])+1){
                                     if (AAA[axx]==(BBB[intocable]-BBB[masalto])+repeticiones){AAA[intocable]=(BBB[intocable]-BBB[masalto]);axx=18;}}}
                                 else{
                                   if   (AAA[axx]==(BBB[intocable]-BBB[masalto])+1){
                                     if (AAA[axx]==(BBB[intocable]-BBB[masalto])+repeticiones){AAA[intocable]=(BBB[intocable]-BBB[masalto]);axx=18;}}}axx=axx+1;}
                              if (axx>=16){
                                    AAA[intocable]=(BBB[intocable]-BBB[masalto])+1;aconx[intocable]=1;axx=0;
        		                    while (axx<=15){
                		                 if (AAA[axx]>-1){
                        		           if (axx==intocable){;}
                                		   else{
		                                     if (aconx[axx]==1){if (AAA[axx]==(BBB[intocable]-BBB[masalto])+1){AAA[axx]=(BBB[intocable]-BBB[masalto])+2;aconx[intocable]=1;axx=18;}} 
                                		     else{
		                                        if (AAA[axx]==(BBB[intocable]-BBB[masalto])+1){AAA[axx]=(BBB[intocable]-BBB[masalto])+2;axx=18;}                                   
                        		                else{if (AAA[axx]==(BBB[intocable]-BBB[masalto])+0){AAA[axx]=(BBB[intocable]-BBB[masalto])+1;axx=18;}}}}
                		            }axx=axx+1;}}
                              repeticiones=repeticiones-1;}
                           else{ 
                               if (BBB[masalto]==-1){;}
                               else{
                                    if (repeticiones>0){AAA[intocable]=(BBB[intocable]-BBB[masalto])+1;aconx[intocable]=1;} 
		                            else{
		                              if (BBB[intocable]-BBB[masalto]<elementos-1){
		                                 AAA[intocable]=(BBB[intocable]-BBB[masalto])+1;aconx[intocable]=1;repeticiones=repeticiones+1; }
		                              else{AAA[intocable]=(BBB[intocable]-BBB[masalto])+0;}
		                            axx=0;
        		                    while (axx<=15){
                		                 if (AAA[axx]>-1){
                        		           if (axx==intocable){;}
                                		   else{
		                                     if (aconx[axx]==1){
		                                        if (repeticiones>0){ 
		                                           if (AAA[axx]==(BBB[intocable]-BBB[masalto])+1){aconx[intocable]=1;AAA[axx]=(BBB[intocable]-BBB[masalto])+2;axx=18;}}                                      
                                		        else{
		                                           if (AAA[axx]==(BBB[intocable]-BBB[masalto])+0){aconx[intocable]=1;AAA[axx]=(BBB[intocable]-BBB[masalto])+1;axx=18;}}                                      
		                                        if (repeticiones>0){ 
		                                           if (AAA[axx]==(BBB[intocable]-BBB[masalto])+1){AAA[axx]=(BBB[intocable]-BBB[masalto])+2;axx=18;}}                                   
                                		        else {
		                                           if (AAA[axx]==(BBB[intocable]-BBB[masalto])+0){AAA[axx]=(BBB[intocable]-BBB[masalto])+1;axx=18;}}                                    
        		                         }}}axx=axx+1;}
                        		         elementos=elementos-1;
                        		}                                               
                                if (repeticiones==0){
                                   BBB[intocable]=1;mibcorrespond();}
                                   
                                }}  
} 
void validarepetic1(){int axx=0;  
                           if (repeticiones1>0){ printf("repeticiones1>0");
                              axx=0;
                              while (axx<=15){
                                 if (a1conx[axx]==1){
                                   if   (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+1){
                                     if (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+repeticiones1){AAA1[intocable1]=(BBB1[intocable1]-BBB1[masalto1]);axx=18;}}}
                                 else{ 
                                   if   (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+1){
                                     if (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+repeticiones1){AAA1[intocable1]=(BBB1[intocable1]-BBB1[masalto1]);axx=18;}}}axx=axx+1;}
                              if (axx>=16){
                                    AAA1[intocable1]=(BBB1[intocable1]-BBB1[masalto1])+1;a1conx[intocable1]=1;axx=0;
        		                    while (axx<=15){
                		                 if (AAA1[axx]>-1){
                        		           if (axx==intocable1){;}
                                		   else{
		                                     if (a1conx[axx]==1){if (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+1){AAA1[axx]=(BBB1[intocable1]-BBB1[masalto1])+2;a1conx[intocable]=1;axx=18;}} 
                                		     else{
		                                        if (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+1){AAA1[axx]=(BBB1[intocable1]-BBB1[masalto1])+2;axx=18;}                                   
                        		                else{if (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+0){AAA1[axx]=(BBB1[intocable1]-BBB1[masalto1])+1;axx=18;}}}}
                		            }axx=axx+1;}}	
                              repeticiones1=repeticiones1-1;printf("marco validarepetic1");verlod();}
                           else{printf("repeticiones1==0");
                               if (BBB1[masalto1]==-1){;}
                               else{
                                    if (repeticiones1>0){AAA1[intocable1]=(BBB1[intocable1]-BBB1[masalto1])+1;a1conx[intocable1]=1;} 
		                            else{
		                              if (BBB1[intocable1]-BBB1[masalto1]<elementos1-1){
		                                 AAA1[intocable1]=(BBB1[intocable1]-BBB1[masalto1])+1;a1conx[intocable1]=1;repeticiones1=repeticiones1+1; }
		                              else{AAA1[intocable1]=(BBB1[intocable1]-BBB1[masalto1])+0;}
		                            axx=0;
        		                    while (axx<=15){
                		                 if (AAA1[axx]>-1){
                        		           if (axx==intocable1){;}
                                		   else{
		                                     if (a1conx[axx]==1){
		                                        if (repeticiones1>0){ 
		                                           if (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+1){a1conx[intocable1]=1;AAA1[axx]=(BBB1[intocable1]-BBB1[masalto1])+2;axx=18;}}                                      
                                		        else{
		                                           if (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+0){a1conx[intocable1]=1;AAA1[axx]=(BBB1[intocable1]-BBB1[masalto1])+1;axx=18;}}                                      
		                                        if (repeticiones1>0){ 
		                                           if (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+1){AAA1[axx]=(BBB1[intocable1]-BBB1[masalto1])+2;axx=18;}}                                   
                                		        else {
		                                           if (AAA1[axx]==(BBB1[intocable1]-BBB1[masalto1])+0){AAA1[axx]=(BBB1[intocable1]-BBB1[masalto1])+1;axx=18;}}                                    
        		                         }}}axx=axx+1;}
                        		         elementos1=elementos1-1;
                        		}                                               
                                if (repeticiones1==0){
                                   BBB1[intocable1]=1;mibcorrespond1();}
                                   
                                }}  
verlod();} 
void lame1(){int lamesal=0,acumlame=0,lame=0,slame=0,contlame=0,uuu=0,repitlame=1,elementocon=1,cota1=0,cota2=0;
                                          while (lame<elementos){slame=1;lamesal=0;                                                                                          
                                             while (slame<=repeticiones){contlame=lame;acumlame=0;repitlame=1;                                               
                                                while (contlame>1){acumlame=acumlame+contlame;contlame=contlame-1;                                                   
                                                                  if (repitlame==slame) contlame=0;repitlame=repitlame+1;}                                                  
                                                if (cota1+acumlame>cota2) slame=repeticiones+1;
                                                else{if (cota1+acumlame==cota2){
                                                     if (elementos+(slame)==u-slame){lamesal=1;slame=repeticiones+1;}
                                                     else{;}}}                                                   
                                                slame=slame+1;}
                                             if (lamesal==1){uuu=u;                                                
                                                while (uuu>u-slame){ 
                                                   DDD[uuu]=contlame+1;contlame=contlame+1;aconx[intocable]=1;AAA[intocable]=lame+1;
                                                   uuu=uuu-1;}
                                                u=uuu+0 ;lame=elementos;}                                               
                                             else lame=lame+1;}                                                
                                          if (lamesal==0){
                                             if (gelementos==elementos){
                                                elementocon=1;
                                                while (elementocon<=16){
                                                   if (cota1+(elementos+elementocon)==cota2){
                                                      DDD[u]=elementocon;AAA[intocable]=elementocon+1;u=u-1;DDD[u]=elementos;elementos=elementos-1;}  
                                                   elementocon=elementocon+1;}}
                                             else{
                                                if (cota1+(elementos+2)==cota2){aconx[intocable]=1;AAA[intocable]=1;DDD[u]=1;u=u-1;DDD[u]=1;}                                                   
                                                else{
                                                   if (cota1+(elementos+2)>cota2){aconx[intocable]=1;AAA[intocable]=1;DDD[u]=1;u=u-1;cvb=1;}
                                                      while (cvb<=16){if (cota1+(elementos+1)+AAA[cvb]==cota2){DDD[u]=AAA[cvb];cvb=18;}cvb=cvb+1;}
                                                      u=u-1;DDD[u]=elementos;}}}
}
void lame2(){  
int lamesal2=0,acumlame2=0,cota1=0,cota2=0,uuu=0,pasito=0,lame=0,contlame=0,repitlame=0;
                                          while (lame<elementos){
                                                lamesal2=0;contlame=lame;acumlame2=0;repitlame=1;
                                                while (contlame>1){
                                                   acumlame2=acumlame2+contlame;contlame=contlame-1;if (repitlame==pasito+1)contlame=0;                                                         
                                                   repitlame=repitlame+1;}
                                                if (cota1+acumlame2>cota2)lame=elementos;
                                                else{
                                                   if (cota1+acumlame2==cota2){lamesal2=1;lame=elementos;}}
                                                if (lamesal2==1){uuu=u;                                                   
                                                   while (uuu>u-lame){DDD[uuu]=contlame+1;                                                      
                                                      contlame=contlame+1;}aconx[intocable]=1;AAA[intocable]=lame+1;  
                                                      uuu=uuu-1;                                                    
                                                   u=uuu+0;lame=elementos;}                                                    
                                                else lame=lame+1;                                                  
											}
}
void rrevisa1(){int bxx=0,recipnt=0;
                   bxx=elementos1;while (bxx>1){
                                     if ((BBB1[intocable1]-BBB1[masalto1])==(CCC1[bxx]-(CCC1[bxx]-bxx))) 
                                        {CCC1[u]=-1;bxx=18;}
                                     else{if (BBB1[intocable1]-BBB1[masalto1]<=0) bxx=18;
                                         else{if (BBB1[intocable1]-BBB1[masalto1]==elementos1+1)CCC1[1]=-1;                                
                                             else{if (((BBB1[masalto1]==CCC1[bxx]) & (BBB1[masalto1]>-1)) || ((BBB1[intocable1]==CCC1[bxx]) & (CCC1[bxx]==-1)))CCC1[bxx]=-1;bxx=18;}}} 
                                    bxx=bxx-1;}	
	
}	 
void menosuno(){int MIDU=1;
		                                        if (repeticiones==0){
		                                           MIDU=0;while (MIDU<=15){
		                                                     if (aconx[MIDU]==1){if (AAA[MIDU]==u) {DDD[u]=u;}}		                                                    
		                                                     else {if (AAA[MIDU]==u) DDD[u]=u;}
		                                                  MIDU=MIDU+1;}} 
		                                           if (MIDU==17){if (CCC[u]==-1){;} else DDD[u]=u;}
}
void tanteo(){ int sumaloaki=0,traza_instanciasdelemento=0,glass=1;printf("intocable %d ",intocable);
instanciasdelemento=1;sumaloaki=0;			          
if (BBB[intocable]>136)traza_instanciasdelemento=BBB[masbajo];else traza_instanciasdelemento=0;/*DDD[instanciasdelemento]=0;*/			         
while (traza_instanciasdelemento<=BBB[intocable]){			   		          		   		          
  if (instanciasdelemento==1)traza_instanciasdelemento=1;									       					       					       
  else{if (instanciasdelemento==2)traza_instanciasdelemento=3;else traza_instanciasdelemento=(instanciasdelemento-1)+traza_instanciasdelemento;}	   							       
  if (traza_instanciasdelemento>=BBB[intocable]){/*while (sumaloaki>0){DDD[instanciasdelemento+sumaloaki]=0;sumaloaki=sumaloaki-1;}DDD[instanciasdelemento]=BBB[intocable]+1;*/}	  			   		             
  else{instanciasdelemento=instanciasdelemento+1;/*DDD[instanciasdelemento]=0;*/} }				   		             
  instanciasdelemento1=instanciasdelemento;glass=1;while (glass<=instanciasdelemento1){/*DDD1[glass]=0;*/glass=glass+1;}		  			         					 			 
} 
void tanteo1(){ int sumaloaki1=0,traza_instanciasdelemento1=0,glass=1;printf("intocable1 %d ",intocable1);
instanciasdelemento1=1;sumaloaki1=0;			         
if (BBB1[intocable1]>136)traza_instanciasdelemento1=BBB1[masbajo1];else traza_instanciasdelemento1=0;/*DDD1[instanciasdelemento1]=0;*/			         
while (traza_instanciasdelemento1<=BBB1[intocable1]){		 	   		          		   		          
  if (instanciasdelemento1==1)traza_instanciasdelemento1=1;									       					       					       
  else{if (instanciasdelemento1==2)traza_instanciasdelemento1=3;else traza_instanciasdelemento1=(instanciasdelemento1-1)+traza_instanciasdelemento1;}       							       
  if (traza_instanciasdelemento1>=BBB1[intocable1]){/*while (sumaloaki1>0){DDD1[instanciasdelemento1+sumaloaki1]=0;sumaloaki1=sumaloaki1-1;}DDD1[instanciasdelemento1]=BBB1[intocable1]+1;*/}  			   		             
  else{instanciasdelemento1=instanciasdelemento1+1;/*DDD1[instanciasdelemento1]=0;*/} }				   		             
  instanciasdelemento=instanciasdelemento1;glass=1;while (glass<=instanciasdelemento1){/*DDD1[glass]=0;*/glass=glass+1;} 			         					 					 
}
     
void bulb1(char* tram){if (*tram==(char)120){
                                  	                                    if (xBBB[xmasalto]+xAAA[xbye]+xu==xBBB[xintocable]){
      			                            	                           xDDD1[xu]=xu;xAAA1[xintocable1]=xu;xforget=1;xelementos1=xelementos1-1;xu=xu-1;xDDD1[xu]=xAAA1[xbye];      			                            	                           
      			                            	                           if (xAAA1[xbye]==-1){;}
      			                            	                           else{if (xAAA1[xbye]+1>u){;}
      			                            	                              else{ xaconx[bye]=1;xAAA1[xbye]=xAAA1[xbye]+1;
      			                            	                                 cvb=1;while (cvb<=16){ if (xAAA1[cvb]==xAAA1[xbye]+1){xaconx[xbye]=1;xAAA1[bye]=xAAA1[bye]+1;xaconx[cvb]=1;xAAA1[cvb]=xAAA1[xbye];cvb=18;}cvb=cvb+1;}}  xsumb=xelementos1;
                                   	                                          if (xrepeticiones<=0){if (xAAA1[xbye]==u-1) xBBB1[xbye]=xBBB1[xintocable]-xu;else xBBB1[xbye]=(xBBB1[xintocable]-xAAA1[bye]);}else mibcorrespond();
      			                            	                           }xbye=18;}      			                            	                              
                                  	                                    else{
                                  	                                       if (xBBB[xintocable]-xelementos==xBBB[xmasalto]+xAAA[bye]){
                                  	                                          xBBB[bye]=xBBB[xintocable]-xelementos;xDDD[u]=xelementos;xAAA[xintocable]=xelementos;
                                  	                                          if (xrepeticiones<=0){;}else{xsumb=xelementos;mibcorrespond();} xforget=1;xelementos=xelementos-1;xbye=18;}}}
else       if (tram[0]==(char)121){
                                  	                                    if (yBBB[ymasalto]+yAAA[ybye]+u==yBBB[yintocable]){
      			                            	                           yDDD[yu]=yu;yAAA[yintocable]=yu;yforget=1;yelementos=yelementos-1;yu=yu-1;yDDD[yu]=yAAA[ybye];      			                            	                           
      			                            	                           if (yAAA[ybye]==-1){;}
      			                            	                           else{if (yAAA[ybye]+1>yu){;}
      			                            	                              else{ yaconx[ybye]=1;yAAA[ybye]=yAAA[ybye]+1;
      			                            	                                 cvb=1;while (cvb<=16){ if (yAAA[cvb]==yAAA[ybye]+1){yaconx[ybye]=1;yAAA[ybye]=yAAA[ybye]+1;yaconx[cvb]=1;yAAA1[cvb]=yAAA1[ybye];cvb=18;}cvb=cvb+1;}}  ysumb=yelementos1;
                                   	                                          if (yrepeticiones<=0){if (yAAA[ybye]==yu-1) yBBB[ybye]=yBBB[yintocable]-yu;else yBBB[ybye]=(yBBB[yintocable]-yAAA[ybye]);}else mibcorrespond();
      			                            	                           }ybye=18;}      			                            	                              
                                  	                                    else{
                                  	                                       if (yBBB[yintocable]-yelementos==yBBB[ymasalto]+yAAA[ybye]){
                                  	                                          yBBB[ybye]=yBBB[yintocable]-yelementos;yDDD1[yu]=yelementos1;yAAA1[yintocable1]=yelementos1;
                                  	                                          if (yrepeticiones<=0){;}else{ysumb=yelementos;mibcorrespond();} yforget=1;yelementos=yelementos-1;ybye=18;}}}
else {                                  	                                    if (yBBB[ymasalto]+yAAA1[ybye]+yu==yBBB[yintocable]){
      			                            	                           DDD[u]=u;AAA[intocable]=u;forget=1;elementos=elementos-1;u=u-1;DDD[u]=AAA[bye];      			                            	                           
      			                            	                           if (AAA[bye]==-1){;}
      			                            	                           else{if (AAA[bye]+1>u){;}
      			                            	                              else{ aconx[bye]=1;AAA[bye]=AAA[bye]+1;
      			                            	                                 cvb=1;while (cvb<=16){ if (AAA1[cvb]==AAA[bye]+1){aconx[bye]=1;AAA[bye]=AAA[bye]+1;aconx[cvb]=1;AAA[cvb]=AAA[bye];cvb=18;}cvb=cvb+1;}}  sumb=elementos;
                                   	                                          if (repeticiones<=0){if (AAA1[bye]==u-1) BBB[bye]=BBB[intocable]-u;else BBB[bye]=(BBB1[intocable]-AAA[bye]);}else mibcorrespond();
      			                            	                           }bye=18;}      			                            	                              
                                  	                                    else{
                                  	                                       if (BBB[intocable]-elementos==BBB[masalto]+AAA[bye]){
                                  	                                          BBB[bye]=BBB[intocable]-elementos1;DDD[u]=elementos;AAA[intocable]=elementos;
                                  	                                          if (repeticiones<=0){;}else{sumb=elementos;mibcorrespond();} forget=1;elementos=elementos-1;bye=18;}}}                                 	                                          
}
void bulb2(char* tram){if (*tram==(char)120){
                                  	                                         xcondicvale=1;if (xAAA1[xbye]>xu)xcondicvale=0;
                                  	                                         if (xcondicvale==1){
                                  	                                            xBBB[xbye]=xBBB[xintocable]-xAAA[xbye];xDDD[xu]=xbyes[xintocable][xbye];
                               					   	                            xaconx[xbye]=1;xAAA[xbye]=xbyes[xintocable][xbye];cvb=1;   
                               					   	                            while (cvb<=16){
    	                           					   	                                     if (xAAA[cvb]==xAAA[xbye]+1){xaconx[xbye]=1;xAAA[xbye]=xAAA[xbye]+1;xaconx[cvb]=1;xAAA[cvb]=xAAA[xbye];cvb=18;}  cvb=cvb+1;}     
                                  	            			                    xforget=1;xrepeticiones=xrepeticiones-1;if (xrepeticiones<=0){;}else{xsumb=xelementos;mibcorrespond();}xbye=18;} }
else         if (*tram==(char)121){
                                  	                                         ycondicvale=1;if (yAAA[ybye]>yu)ycondicvale=0;
                                  	                                         if (ycondicvale==1){
                                  	                                            yBBB[ybye]=yBBB[yintocable]-yAAA[ybye];yDDD[yu]=ybyes[yintocable][ybye];
                               					   	                            yaconx[ybye]=1;yAAA[ybye]=ybyes[yintocable][ybye];cvb=1;   
                               					   	                            while (cvb<=16){
    	                           					   	                                     if (yAAA[cvb]==yAAA[ybye]+1){yaconx[ybye]=1;yAAA[ybye]=yAAA[ybye]+1;yaconx[cvb]=1;yAAA[cvb]=AAA[bye];cvb=18;}  cvb=cvb+1;}     
                                  	            			                    yforget=1;yrepeticiones=yrepeticiones-1;if (yrepeticiones<=0){;}else{ysumb=yelementos;mibcorrespond();}ybye=18;} }
else                                           	                                         ycondicvale=1;if (yAAA[ybye]>yu)ycondicvale=0;
                                  	                                         if (condicvale==1){
                                  	                                            BBB[bye]=BBB[intocable]-AAA[bye];DDD[u]=byes[intocable][bye];
                               					   	                            aconx[bye]=1;AAA[bye]=byes[intocable][bye];cvb=1;   
                               					   	                            while (cvb<=16){
    	                           					   	                                     if (AAA[cvb]==AAA[bye]+1){aconx[bye]=1;AAA[bye]=AAA1[bye]+1;aconx[cvb]=1;AAA[cvb]=AAA[bye];cvb=18;}  cvb=cvb+1;}     
                                  	            			                    forget=1;repeticiones=repeticiones-1;if (repeticiones<=0){;}else{sumb=elementos;mibcorrespond();}bye=18;} 
}
void bulb3(char* tram){if (*tram==(char)120){
    	                           					   	                         if (xbye==xintocable){;}
    	                           					   	                         else{if ((xBBB[xintocable]-xelementos)==xBBB[xmasalto]+xAAA[xbye]){
    	                           					   	                               xcondicvale=1;if (xBBB[xmasalto]==xAAA[xbye])xcondicvale=0;
    	                           					   	                               if (xcondicvale==0){intercambia();xDDD[u]=xbyes[xintocable][xbye];xAAA[xintocable]=xbyes[xintocable][xbye];u=u-1;xDDD[u]=xelementos;}  
    	                           					   	                               else{                    xDDD[u]=xelementos;xAAA[xintocable]=xelementos;xu=xu-1;xDDD[xu]=xAAA[bye];intercambia();}}
    	                           					   	                           else{if (xu==xelementos-1){
														                                if (xrepeticiones>0){xestironveces=1;xestiradsdaki=xu;xestirainstancias();xinstanciasdelemento=xinstanciasdelemento+1;xu=xu+1;}
														                                else{if (xBBB[xmasalto]==xCCC[xu])xrepeticiones=1;}}
    	                           					   	                             if (xAAA[xbye]==xelementos){;}
    	                           					   	                             else{                      intercambia();xDDD[xu]=xbyes[xintocable][xbye];xAAA[xintocable]=xbyes[xintocable][xbye];xu=xu-1;xDDD[xu]=xelementos;}
    	                           					   	                             }} xforget=1;xrepeticiones=xrepeticiones-1;        	                          	            			                        	                          	            			                        
        	                          	            			                 if (xrepeticiones==0){
        	                          	            			                   ra=1; while (ra<=16){if (xAAA[ra]==xelementos){xrepeticiones=xu-xelementos;ra=18;}ra=ra+1;} 
    	                           					   	                           if (xrepeticiones<=0){xBBB[xbye]=xBBB[xintocable]-xelementos;xBBB[xbye]=xBBB[xintocable]-xAAA[xbye];}   	                           					   	                                 	                           					   	                                 
    	                           					   	                           else{sumb=elementos;mibcorrespond();}}
    	                           					   	                         if ((xAAA[xbye]==xelementos-1) & (xu=xelementos+1))xelementos=xelementos-1;xelementos=xelementos-1; xbye=18; }
else      if (*tram==(char)121){
    	                           					   	                         if (ybye==yintocable){;}
    	                           					   	                         else{if ((yBBB[yintocable]-yelementos)==yBBB[ymasalto]+yAAA[ybye]){
    	                           					   	                               ycondicvale=1;if (yBBB[ymasalto]==yAAA[ybye])ycondicvale=0;
    	                           					   	                               if (ycondicvale==0){intercambia();yDDD[yu]=ybyes[yintocable][ybye];yAAA[yintocable]=ybyes[yintocable][ybye];yu=yu-1;yDDD[u]=yelementos;}  
    	                           					   	                               else{                    yDDD[yu]=yelementos;yAAA[yintocable]=yelementos;yu=yu-1;yDDD[yu]=yAAA[ybye];intercambia();}}
    	                           					   	                           else{if (yu==yelementos-1){
														                                if (yrepeticiones>0){yestironveces=1;yestiradsdaki=yu;yestirainstancias();yinstanciasdelemento=yinstanciasdelemento+1;yu=yu+1;}
														                                else{if (yBBB[ymasalto]==yCCC[yu])yrepeticiones=1;}}
    	                           					   	                             if (AAA[bye]==elementos){;}
    	                           					   	                             else{                      intercambia();yDDD[yu]=ybyes[yintocable][ybye];yAAA[yintocable]=ybyes[yintocable][ybye];yu=yu-1;yDDD[yu]=yelementos;}
    	                           					   	                             }} yforget=1;yrepeticiones=yrepeticiones-1;        	                          	            			                        	                          	            			                        
        	                          	            			                 if (yrepeticiones==0){
        	                          	            			                   ra=1; while (ra<=16){if (yAAA[ra]==yelementos){yrepeticiones=yu-yelementos;ra=18;}ra=ra+1;} 
    	                           					   	                           if (yrepeticiones<=0){yBBB[ybye]=yBBB[yintocable]-yelementos;yBBB[ybye]=yBBB[yintocable]-yAAA[ybye];}   	                           					   	                                 	                           					   	                                 
    	                           					   	                           else{ysumb=yelementos;mibcorrespond();}}
    	                           					   	                         if ((yAAA[ybye]==yelementos-1) & (yu=yelementos+1))yelementos=yelementos-1;yelementos=yelementos-1; ybye=18; }
else{    	                           					   	                         if (bye==intocable){;}
    	                           					   	                         else{if ((BBB[intocable]-elementos)==BBB[masalto]+AAA[bye]){
    	                           					   	                               condicvale=1;if (BBB[masalto]==AAA[bye])condicvale=0;
    	                           					   	                               if (condicvale==0){intercambia();DDD[u]=byes[intocable][bye];AAA[intocable]=byes[intocable][bye];u=u-1;DDD[u]=elementos;}  
    	                           					   	                               else{                    DDD[u]=elementos;AAA[intocable]=elementos;u=u-1;DDD[u]=AAA[bye];intercambia();}}
    	                           					   	                           else{if (u==elementos-1){
														                                if (repeticiones>0){estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}
														                                else{if (BBB[masalto]==CCC[u])repeticiones=1;}}
    	                           					   	                             if (AAA[bye]==elementos){;}
    	                           					   	                             else{                      intercambia();DDD[u]=byes[intocable][bye];AAA[intocable]=byes[intocable][bye];u=u-1;DDD[u]=elementos;}
    	                           					   	                             }} forget=1;repeticiones=repeticiones-1;        	                          	            			                        	                          	            			                        
        	                          	            			                 if (repeticiones==0){
        	                          	            			                   ra=1; while (ra<=16){if (AAA[ra]==elementos){repeticiones=u-elementos;ra=18;}ra=ra+1;} 
    	                           					   	                           if (repeticiones<=0){BBB[bye]=BBB[intocable]-elementos;BBB[bye]=BBB[intocable]-AAA[bye];}   	                           					   	                                 	                           					   	                                 
    	                           					   	                           else{sumb=elementos;mibcorrespond();}}
    	                           					   	                         if ((AAA[bye]==elementos-1) & (u=elementos+1))elementos=elementos-1;elementos=elementos-1; bye=18; }
}
void bulb4(){        	                          	            			                      
        	                          	            			                      if (BBB[masalto]+noveo>BBB[intocable]){;}
        	                          	            			                      else{
        	                          	            			                         if (BBB[masalto]+noveo==BBB[intocable])bye=18;
        	                          	            			                         else{
        	                          	            			                         if (BBB[masalto]+(noveo*2)==BBB[intocable]){
        	                          	            			                            
        	                          	            			                            DDD[u]=elementos;AAA[intocable]=noveo;u=u-1;AAA[masalto]=1;aconx[masalto]=1;DDD[u]=1;elementos=elementos-1;bye=18;}
        	                          	            			                         else{int ooo=0;
        	                          	            			                           while (ooo<=15){
        	                          	            			                             if (AAA[ooo]==(char)120){ 
        	                          	            			                                if (AAA[ooo]>0){
        	                          	            			                                
        	                          	            			                                   if (AAA[ooo]==BBB[intocable]-(BBB[masalto]+noveo)){AAA[masalto]=1;aconx[masalto]=1;        	                          	            			                                      
        	                          	            			                                      AAA[intocable]=noveo;BBB[ooo]=BBB[masalto]-noveo;DDD[u]=noveo;u=u-1;DDD[u]=AAA[ooo];elementos=elementos-1;forget=1;bye=18;} 
        	                          	            			                                   else{if (repeticiones==1){
																									     if (AAA[ooo]==elementos){ 
																									        if (u==elementos-1){
																									           AAA[intocable]=BBB[intocable]-((BBB[masalto]+noveo)+1);DDD[u]=BBB[intocable]-(BBB[masalto]+noveo);u=u-1;DDD[u]=elementos;elementos=elementos-1;forget=1;}}}
																								       }}
        	                          	            			                                      }
        	                          	            			                             else   
        	                          	            			                                if (AAA[ooo]==BBB[intocable]-(BBB[masalto]+noveo)){
        	                          	            			                                   AAA[masalto]=1;aconx[masalto]=1;AAA[intocable]=noveo;BBB[ooo]=BBB[intocable]-noveo;DDD[u]=noveo;u=u-1;DDD[u]=AAA[ooo];elementos=elementos-1;forget=1;ooo=18;}
        	                          	            			                             ooo=ooo+1;}
        	                          	            			                             if (ooo==16){ 
        	                          	            			                                if (BBB[intocable]-BBB[masalto]==(noveo+(noveo-1)) ||BBB[intocable]-BBB[masalto]==(noveo+2)) {        
        	                          	            			                                      AAA[masalto]=1;aconx[masalto]=1;AAA[intocable]=noveo;BBB[intocable]=BBB[intocable]-noveo;DDD[u]=noveo;u=u-1;DDD[u]=1;elementos=elementos-1;forget=1;}
        	                          	            			                                else{cota1=BBB[masalto];cota2=BBB[intocable];lame2();}}
        	                          	            			                           }}} 
}       	                          	            			                      
void led2(char* tram){printf("tram %s ",tram); if (*tram==(char)120){
	if (xelementos==xu+1){ xestironveces=1;xestiradsdaki=xu;estirainstancias();xinstanciasdelemento=xinstanciasdelemento+1;xu=xu+1;}
                               kienesuno();mibcorrespond();bxx=1;verlod();}
else         if (*tram==(char)121){
                               if (yelementos==yu+1){ yestironveces=1;yestiradsdaki=yu;estirainstancias();yinstanciasdelemento=yinstanciasdelemento+1;yu=yu+1;}
                               kienesuno();mibcorrespond();bxx=1;verlod(); getchar();}
else                             {
                               if (elementos==u+1){ estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}
                               kienesuno();mibcorrespond();bxx=1;verlod(); getchar();} 
                               
}
void sacalevel2(){int lcco=95/*88*/,lco=0,co=0,po=0,cpo=0,dic=0,ccon=0,con=0,mitadbwf=0,f=0,contaray=3;/* */
	while(lcco>=0){lco=15;while(lco>=0){   printf("______iniciando_sacalevel__________ lcco %d lco %d ",lcco,lco);getchar();
		                  if (level2[(lcco-lco)]==(-1)){if (lcco==64){printf("sin_ldicc __? ");}  else {if (lcco==72){contaray=contaray-1;} else {if (lcco==80){contaray=contaray-1;} else {if (lcco==88){contaray=contaray-1;}}}}} 
		                                           else{if (lcco>64){po=0;while (po<=15){ if(level2[lcco-po]>99){if((lcco==72)||(lcco==88)) {contaray=contaray-2;po=po+8;}
		                                                                                                                               else contaray=contaray-1;}
		                                                                                  else{;}printf("po %d ",po);po++;}printf("sacando %d ",lco);}
							  if (level2[(lcco-lco)]==0){lco=16;/* {    }*/					                        
					                      /*  if(contaray==2){bwf1[co]=level2[lcco+co];dicc[cpo]=level2[(lcco-48)+(co*2)];dicc[cpo]=level2[(lcco-48)+((co*2)+1)];}
					                   else{if(contaray==1){bwf0[co]=level2[lcco+co];dicc[cpo]=level2[(lcco-56)+(co*2)];dicc[cpo]=level2[(lcco-56)+((co*2)+1)];}
					                   else{if(contaray==0){bwf0[co]=level2[lcco+co];dicc[cpo]=level2[(lcco-64)+(co*2)];dicc[cpo]=level2[(lcco-64)+((co*2)+1)];}          }} 															       
							           }*/}else{po=0;co=0;while(co<=7){if(mitadbwf==1)mitadbwf=0;else mitadbwf=1; f=leebwf(level2[(lcco-40)+(co*2)],mitadbwf);printf("leyendo_f %d ",f);
							                
								      if(contaray==2){ bwf1[co][ax]=level2[lcco+co]; buf2[cpo]=more(level2[(lcco-48)+(co*2)],f);buf2[cpo]=more(level2[(lcco-48)+((co*2)+1)],f); }
							     else if(contaray==1){ bwf0[co][ax]=level2[lcco+co]; buf1[cpo]=more(level2[(lcco-56)+(co*2)],f);buf1[cpo]=more(level2[(lcco-56)+((co*2)+1)],f); }
						    	 else if(contaray==0){ bwf0[co][ax]=level2[lcco+co]; buf0[cpo]=more(level2[(lcco-64)+(co*2)],f);buf0[cpo]=more(level2[(lcco-64)+((co*2)+1)],f); }co++;}  	    		     																	   
	                          	dic=0;} /*else con=32;*/}lco--;}con=16;/**/lcco=lcco-con;}verlod();getchar(); 
} 
void sacalevel21(){int lcco1=95/*88*/,lco1=0,co1=0,dic1=0,po1=0,cpo1=0,con1=0,mitadbwf1=0,f1=0,contaray1=3;
	while(lcco1>=0){lco1=15;while(lco1>=0){ printf("______iniciando_sacalevel1__________ lcco1 %d lco1 %d ",lcco1,lco1);getchar();
		                  if (level21[(lcco1-lco1)]==(-1)){if (lcco1==64){printf(" sin ldicc1 __? ");} else {if (lcco1==72){contaray1=contaray1-1;} else {if (lcco1==80){contaray1=contaray1-1;} else {if (lcco1==88){contaray1=contaray1-1;}}}}} 
		                                              else{if (lcco1>64){po1=0;while (po1<=15){if(level2[lcco1-po1]>99){if((lcco1==72)||(lcco1==88)) {contaray1=contaray1-2;po1=po1+8;}
														                                                                                        else contaray1=contaray1-1;}
														                                      else{;}printf("po1 %d ",po1);po1++;}printf("sacando1 %d ",lco1);}
							  if (level21[(lcco1-lco1)]==0){lco1=16;/* {     }*/		                         
		                         /*if(contaray1==2){bwf11[co1]=level21[lcco1+co1];dicc1[cpo1]=level21[(lcco1-48)+(co1*2)];dicc1[cpo1]=level21[(lcco1-48)+((co1*2)+1)]; }
		                    else{if(contaray1==1){bwf10[co1]=level21[lcco1+co1];dicc1[cpo1]=level21[(lcco1-56)+(co1*2)];dicc1[cpo1]=level21[(lcco1-56)+((co1*2)+1)]; }
		                    else{if(contaray1==0){bwf10[co1]=level21[lcco1+co1];dicc1[cpo1]=level21[(lcco1-64)+(co1*2)];dicc1[cpo1]=level21[(lcco1-64)+((co1*2)+1)];}         }} 															        						                                       							                                       							                                       
						          }*/}else{po1=0;co1=0;while(co1<=7){if(mitadbwf1==1)mitadbwf1=0;else mitadbwf1=1; f1=leebwf(level21[(lcco1-40)+(co1*2)],mitadbwf1);printf("leyendo_f1 %d ",f1);
						         
							     if(contaray1==2){ bwf11[co1][0]=level21[lcco1+co1]; buf12[cpo1]=more(level21[(lcco1-48)+(co1*2)],f1);buf12[cpo1]=more(level21[(lcco1-48)+((co1*2)+1)],f1);}
						    else if(contaray1==1){ bwf10[co1][0]=level21[lcco1+co1]; buf11[cpo1]=more(level21[(lcco1-56)+(co1*2)],f1);buf11[cpo1]=more(level21[(lcco1-56)+((co1*2)+1)],f1);}
		     			    else if(contaray1==0){ bwf10[co1][0]=level21[lcco1+co1]; buf10[cpo1]=more(level21[(lcco1-64)+(co1*2)],f1);buf10[cpo1]=more(level21[(lcco1-64)+((co1*2)+1)],f1 	);}co1++;}  	 
                           dic1=0;} /*else con1=32;*/}lco1--;}con1=16;/**/lcco1=lcco1-con1;}verlod();getchar();
}	
void bulb11(char* tram){printf( "cayo en bulb11 %s", tram);if (*tram==(char)120){
                                  	                                    if (BBB1[masalto1]+AAA1[bye]+u==BBB1[intocable1]){
      			                            	                           DDD1[u]=u;AAA1[intocable1]=u;forget=1;elementos1=elementos1-1;u=u-1;DDD1[u]=AAA1[bye];      			                            	                           
      			                            	                           if (AAA1[bye]==-1){;}
      			                            	                           else{if (AAA1[bye]+1>u){;}
      			                            	                              else{ a1conx[bye]=1;AAA1[bye]=AAA1[bye]+1;
      			                            	                                 cvb=1;while (cvb<=16){ if (AAA1[cvb]==AAA1[bye]+1){a1conx[bye]=1;AAA1[bye]=AAA1[bye]+1;a1conx[cvb]=1;AAA1[cvb]=AAA1[bye];cvb=18;}cvb=cvb+1;}}  sumb=elementos1;
                                   	                                          if (repeticiones1<=0){if (AAA1[bye]==u-1) BBB1[bye]=BBB1[intocable1]-u;else BBB1[bye]=(BBB1[intocable1]-AAA1[bye]);}else mibcorrespond1();
      			                            	                           }bye=18;}      			                            	                              
                                  	                                    else{
                                  	                                       if (BBB1[intocable1]-elementos1==BBB1[masalto1]+AAA1[bye]){
                                  	                                          BBB1[bye]=BBB1[intocable1]-elementos1;DDD1[u]=elementos1;AAA1[intocable1]=elementos1;
                                  	                                          if (repeticiones1<=0){;}else{sumb=elementos1;mibcorrespond1();} forget=1;elementos1=elementos1-1;bye=18;}}}
else                    if (*tram==(char)121){
                                  	                                    if (BBB1[masalto1]+AAA1[bye]+u==BBB1[intocable1]){
      			                            	                           DDD1[u]=u;AAA1[intocable1]=u;forget=1;elementos1=elementos1-1;u=u-1;DDD1[u]=AAA1[bye];      			                            	                           
      			                            	                           if (AAA1[bye]==-1){;}
      			                            	                           else{if (AAA1[bye]+1>u){;}
      			                            	                              else{ a1conx[bye]=1;AAA1[bye]=AAA1[bye]+1;
      			                            	                                 cvb=1;while (cvb<=16){ if (AAA1[cvb]==AAA1[bye]+1){a1conx[bye]=1;AAA1[bye]=AAA1[bye]+1;a1conx[cvb]=1;AAA1[cvb]=AAA1[bye];cvb=18;}cvb=cvb+1;}}  sumb=elementos1;
                                   	                                          if (repeticiones1<=0){if (AAA1[bye]==u-1) BBB1[bye]=BBB1[intocable1]-u;else BBB1[bye]=(BBB1[intocable1]-AAA1[bye]);}else mibcorrespond1();
      			                            	                           }bye=18;}      			                            	                              
                                  	                                    else{
                                  	                                       if (BBB1[intocable1]-elementos1==BBB1[masalto1]+AAA1[bye]){
                                  	                                          BBB1[bye]=BBB1[intocable1]-elementos1;DDD1[u]=elementos1;AAA1[intocable1]=elementos1;
                                  	                                          if (repeticiones<=0){;}else{sumb=elementos1;mibcorrespond1();} forget=1;elementos1=elementos1-1;bye=18;}}}
else{                                  	                                    if (BBB1[masalto1]+AAA1[bye]+u==BBB1[intocable1]){
      			                            	                           DDD1[u]=u;AAA1[intocable1]=u;forget=1;elementos1=elementos1-1;u=u-1;DDD1[u]=AAA1[bye];      			                            	                           
      			                            	                           if (AAA1[bye]==-1){;}
      			                            	                           else{if (AAA1[bye]+1>u){;}
      			                            	                              else{ a1conx[bye]=1;AAA1[bye]=AAA1[bye]+1;
      			                            	                                 cvb=1;while (cvb<=16){ if (AAA1[cvb]==AAA1[bye]+1){a1conx[bye]=1;AAA1[bye]=AAA1[bye]+1;a1conx[cvb]=1;AAA1[cvb]=AAA1[bye];cvb=18;}cvb=cvb+1;}}  sumb=elementos1;
                                   	                                          if (repeticiones1<=0){if (AAA1[bye]==u-1) BBB1[bye]=BBB1[intocable1]-u;else BBB1[bye]=(BBB1[intocable1]-AAA1[bye]);}else mibcorrespond1();
      			                            	                           }bye=18;}      			                            	                              
                                  	                                    else{
                                  	                                       if (BBB1[intocable1]-elementos1==BBB1[masalto1]+AAA1[bye]){
                                  	                                          BBB1[bye]=BBB1[intocable1]-elementos1;DDD1[u]=elementos1;AAA1[intocable1]=elementos1;
                                  	                                          if (repeticiones1<=0){;}else{sumb=elementos1;mibcorrespond1();} forget=1;elementos1=elementos1-1;bye=18;}}}
                                	                                          
}
void bulb12(char* tram){printf( "cayo en bulb12 %s", tram);if (*tram==(char)120){
                                  	                                         condicvale=1;if (AAA1[bye]>u)condicvale=0;
                                  	                                         if (condicvale==1){
                                  	                                            BBB1[bye]=BBB1[intocable1]-AAA1[bye];DDD1[u]=byes[intocable1][bye];
                               					   	                            a1conx[bye]=1;AAA1[bye]=byes[intocable1][bye];cvb=1;   
                               					   	                            while (cvb<=16){
    	                           					   	                                     if (AAA1[cvb]==AAA1[bye]+1){a1conx[bye]=1;AAA1[bye]=AAA1[bye]+1;a1conx[cvb]=1;AAA1[cvb]=AAA1[bye];cvb=18;}  cvb=cvb+1;}     
                                  	            			                    forget=1;repeticiones1=repeticiones1-1;if (repeticiones1<=0){;}else{sumb=elementos1;mibcorrespond1();}bye=18;}}
else                   if (*tram==(char)121){
                                  	                                         condicvale=1;if (AAA1[bye]>u)condicvale=0;
                                  	                                         if (condicvale==1){
                                  	                                            BBB1[bye]=BBB1[intocable1]-AAA1[bye];DDD1[u]=byes[intocable1][bye];
                               					   	                            a1conx[bye]=1;AAA1[bye]=byes[intocable1][bye];cvb=1;   
                               					   	                            while (cvb<=16){
    	                           					   	                                     if (AAA1[cvb]==AAA1[bye]+1){a1conx[bye]=1;AAA1[bye]=AAA1[bye]+1;a1conx[cvb]=1;AAA1[cvb]=AAA1[bye];cvb=18;}  cvb=cvb+1;}     
                                  	            			                    forget=1;repeticiones=repeticiones-1;if (repeticiones1<=0){;}else{sumb=elementos1;mibcorrespond1();}bye=18;}}
else{                                  	                                         condicvale=1;if (AAA1[bye]>u)condicvale=0;
                                  	                                         if (condicvale==1){
                                  	                                            BBB1[bye]=BBB1[intocable1]-AAA1[bye];DDD1[u]=byes[intocable1][bye];
                               					   	                            a1conx[bye]=1;AAA1[bye]=byes[intocable1][bye];cvb=1;   
                               					   	                            while (cvb<=16){
    	                           					   	                                     if (AAA1[cvb]==AAA1[bye]+1){a1conx[bye]=1;AAA1[bye]=AAA1[bye]+1;a1conx[cvb]=1;AAA1[cvb]=AAA1[bye];cvb=18;}  cvb=cvb+1;}     
                                  	            			                    forget=1;repeticiones1=repeticiones1-1;if (repeticiones1<=0){;}else{sumb=elementos1;mibcorrespond1();}bye=18;}}
}
void bulb13(char* tram){printf( "cayo en bulb13 %s", tram);if (tram[0]==(char)120){
    	                           					   	                         if (bye==intocable1){;}
    	                           					   	                         else{if ((BBB1[intocable1]-elementos1)==BBB1[masalto1]+AAA1[bye]){
    	                           					   	                               condicvale1=1;if (BBB1[masalto1]==AAA1[bye])condicvale1=0;
    	                           					   	                               if (condicvale1==0){intercambia1();DDD1[u]=byes1[intocable1][bye1];AAA1[intocable1]=byes1[intocable1][bye];u=u-1;DDD1[u]=elementos1;}  
    	                           					   	                               else{                    DDD1[u]=elementos1;AAA1[intocable1]=elementos1;u=u-1;DDD1[u]=AAA1[bye];intercambia1();}}
    	                           					   	                           else{if (u==elementos1-1){
														                                if (repeticiones>0){estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento1=instanciasdelemento1+1;u=u+1;}
														                                else{if (BBB[masalto1]==CCC[u])repeticiones=1;}}
    	                           					   	                             if (AAA1[bye]==elementos1){;}
    	                           					   	                             else{                      intercambia1();DDD1[u]=byes1[intocable1][bye];AAA1[intocable1]=byes1[intocable1][bye];u=u-1;DDD1[u]=elementos1;}
    	                           					   	                             }} forget=1;repeticiones1=repeticiones1-1;        	                          	            			                        	                          	            			                        
        	                          	            			                 if (repeticiones1==0){
        	                          	            			                   ra=1; while (ra<=16){if (AAA1[ra]==elementos1){repeticiones1=u-elementos1;ra=18;}ra=ra+1;} 
    	                           					   	                           if (repeticiones1<=0){BBB1[bye]=BBB1[intocable1]-elementos1;BBB1[bye]=BBB1[intocable1]-AAA[bye];}   	                           					   	                                 	                           					   	                                 
    	                           					   	                           else{sumb=elementos1;mibcorrespond1();}}
    	                           					   	                         if ((AAA1[bye]==elementos1-1) & (u=elementos1+1))elementos1=elementos1-1;elementos1=elementos1-1; bye=18;} 
                        if (*tram==(char)121){
    	                           					   	                         if (bye==intocable1){;}
    	                           					   	                         else{if ((BBB1[intocable1]-elementos1)==BBB1[masalto1]+AAA1[bye]){
    	                           					   	                               condicvale1=1;if (BBB1[masalto1]==AAA1[bye])condicvale1=0;
    	                           					   	                               if (condicvale1==0){intercambia1();DDD1[u]=byes1[intocable1][bye1];AAA1[intocable1]=byes1[intocable1][bye];u=u-1;DDD1[u]=elementos1;}  
    	                           					   	                               else{                    DDD1[u]=elementos1;AAA1[intocable1]=elementos1;u=u-1;DDD1[u]=AAA1[bye];intercambia1();}}
    	                           					   	                           else{if (u==elementos1-1){
														                                if (repeticiones1>0){estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento1=instanciasdelemento1+1;u=u+1;}
														                                else{if (BBB[masalto1]==CCC[u])repeticiones=1;}}
    	                           					   	                             if (AAA1[bye]==elementos1){;}
    	                           					   	                             else{                      intercambia1();DDD1[u]=byes1[intocable1][bye];AAA1[intocable1]=byes1[intocable1][bye];u=u-1;DDD1[u]=elementos1;}
    	                           					   	                             }} forget=1;repeticiones1=repeticiones1-1;        	                          	            			                        	                          	            			                        
        	                          	            			                 if (repeticiones1==0){
        	                          	            			                   ra=1; while (ra<=16){if (AAA1[ra]==elementos1){repeticiones1=u-elementos1;ra=18;}ra=ra+1;} 
    	                           					   	                           if (repeticiones1<=0){BBB1[bye]=BBB1[intocable1]-elementos1;BBB1[bye]=BBB1[intocable1]-AAA[bye];}   	                           					   	                                 	                           					   	                                 
    	                           					   	                           else{sumb=elementos1;mibcorrespond1();}}
    	                           					   	                         if ((AAA1[bye]==elementos1-1) & (u=elementos1+1))elementos1=elementos1-1;elementos1=elementos1-1; bye=18;} 
                                    else{
    	                           					   	                         if (bye==intocable1){;}
    	                           					   	                         else{if ((BBB1[intocable1]-elementos1)==BBB1[masalto1]+AAA1[bye]){
    	                           					   	                               condicvale1=1;if (BBB1[masalto1]==AAA1[bye])condicvale1=0;
    	                           					   	                               if (condicvale1==0){intercambia1();DDD1[u]=byes1[intocable1][bye1];AAA1[intocable1]=byes1[intocable1][bye];u=u-1;DDD1[u]=elementos1;}  
    	                           					   	                               else{                    DDD1[u]=elementos1;AAA1[intocable1]=elementos1;u=u-1;DDD1[u]=AAA1[bye];intercambia1();}}
    	                           					   	                           else{if (u==elementos-1){
														                                if (repeticiones1>0){estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento1=instanciasdelemento1+1;u=u+1;}
														                                else{if (BBB1[masalto1]==CCC[u])repeticiones=1;}}
    	                           					   	                             if (AAA1[bye]==elementos1){;}
    	                           					   	                             else{                      intercambia1();DDD1[u]=byes1[intocable1][bye];AAA1[intocable1]=byes1[intocable1][bye];u=u-1;DDD1[u]=elementos1;}
    	                           					   	                             }} forget=1;repeticiones1=repeticiones1-1;        	                          	            			                        	                          	            			                        
        	                          	            			                 if (repeticiones1==0){
        	                          	            			                   ra=1; while (ra<=16){if (AAA1[ra]==elementos1){repeticiones1=u-elementos1;ra=18;}ra=ra+1;} 
    	                           					   	                           if (repeticiones1<=0){BBB1[bye]=BBB1[intocable1]-elementos1;BBB1[bye]=BBB1[intocable1]-AAA[bye];}   	                           					   	                                 	                           					   	                                 
    	                           					   	                           else{sumb=elementos1;mibcorrespond1();}}
    	                           					   	                         if ((AAA1[bye]==elementos1-1) & (u=elementos1+1))elementos1=elementos1-1;elementos1=elementos1-1; bye=18;}	

}
void bulb14(){printf( "cayo en bulb14 "); 
        	                          	            			                      if (BBB1[masalto1]+noveo>BBB1[intocable1]){;}
        	                          	            			                      else{
        	                          	            			                         if (BBB1[masalto1]+noveo==BBB1[intocable1])bye=18;
        	                          	            			                         else{
        	                          	            			                         if (BBB1[masalto1]+(noveo*2)==BBB1[intocable1]){
        	                          	            			                            
        	                          	            			                            DDD1[u]=elementos1;AAA1[intocable1]=noveo;u=u-1;AAA1[masalto1]=1;aconx[masalto1]=1;DDD1[u]=1;elementos1=elementos1-1;bye=18;}
        	                          	            			                         else{int ooo=0;
        	                          	            			                           while (ooo<=15){
        	                          	            			                             if (AAA1[ooo]==(char)120){ 
        	                          	            			                                if (AAA1[ooo]>=0){
        	                          	            			                                
        	                          	            			                                   if (AAA1[ooo]==BBB1[intocable1]-(BBB1[masalto1]+noveo)){
        	                          	            			                                      AAA1[masalto1]=1;aconx[masalto1]=1;printf(" noveo ");
        	                          	            			                                      AAA1[intocable1]=noveo;BBB1[ooo]=BBB1[masalto1]-noveo;DDD1[u]=noveo;u=u-1;DDD1[u]=AAA1[ooo];elementos1=elementos1-1;forget=1;bye=18;} 
        	                          	            			                                   else{if (repeticiones==1){
																									     if (AAA1[ooo]==elementos1){ 
																									        if (u==elementos1-1){
																									           AAA1[intocable1]=BBB1[intocable1]-((BBB1[masalto1]+noveo)+1);DDD1[u]=BBB1[intocable1]-(BBB1[masalto1]+noveo);u=u-1;DDD1[u]=elementos1;elementos1=elementos1-1;forget=1;}}}
																								       }}
        	                          	            			                                      }
        	                          	            			                             else   
        	                          	            			                                if (AAA1[ooo]==BBB1[intocable1]-(BBB1[masalto1]+noveo)){
        	                          	            			                                   AAA1[masalto1]=1;aconx[masalto1]=1;AAA1[intocable1]=noveo;BBB1[ooo]=BBB1[intocable1]-noveo;DDD1[u]=noveo;u=u-1;DDD1[u]=AAA1[ooo];elementos1=elementos1-1;forget=1;ooo=18;}
        	                          	            			                             ooo=ooo+1;}
        	                          	            			                             if (ooo==16){ 
        	                          	            			                                if (BBB1[intocable1]-BBB1[masalto1]==(noveo+(noveo-1)) ||BBB1[intocable1]-BBB1[masalto1]==(noveo+2)) {        
        	                          	            			                                      AAA1[masalto1]=1;aconx[masalto1]=1;AAA1[intocable1]=noveo;BBB1[intocable1]=BBB1[intocable1]-noveo;DDD1[u]=noveo;u=u-1;DDD1[u]=1;elementos1=elementos1-1;forget=1;}
        	                          	            			                                else{cota1=BBB1[masalto1];cota2=BBB1[intocable1];lame2();}}
        	                          	            			                           }}}
}	
void led1(char* tram){printf("cayo en led1 %s ",tram);  
             if (*tram==(char)120){ 
                         xCCC[xBBB[xintocable]-xBBB1[xmasalto]]=-1;   printf("cayo en el primer ciclo ");    
                         if (xBBB[xintocable]-xBBB[xmasalto]==xelementos){printf("pasa sin calcular ");
                            if (xrepeticiones==0){ distribccc1();distribccc21();distribccc31(); 						        
                                if (xBBB[xintocable]==ccc2){if (xBBB[xmasalto]==ccc3){;} else{;}}   
                                else{if (xBBB[xmasalto]==ccc3){ kienesuno();mibcorrespond();xestironveces=1;xestiradsdaki=xu;xestirainstancias();xinstanciasdelemento=xinstanciasdelemento+1;xu=xu+1;}}  }                                    
						    DDD[u]=BBB[intocable]-BBB[masalto];xAAA[xintocable]=(xBBB[xintocable]-xBBB[xmasalto]);sumaleuno();                      
                            if (el[xintocable]-xAAA[xintocable]<=xelementos){;}xelementos=xelementos-1; if (xBBB[xintocable]-xBBB[xmasalto]>xu){;}   }                           
                         else{xDDD[xu]=xBBB[xintocable]-xBBB[xmasalto];validarepetic();} mibcorrespond(); printf("validarepetic______ ");}
else         if (*tram==(char)121){; 
                         yCCC[yBBB[yintocable]-yBBB[ymasalto]]=-1;   printf("cayo en el primer ciclo ");    
                         if (yBBB[yintocable]-yBBB[ymasalto]==yelementos){printf("pasa sin calcular ");
                            if (yrepeticiones==0){ distribccc();distribccc2();distribccc3(); 						        
                                if (yBBB[yintocable]==ccc2){if (yBBB[ymasalto1]==ccc3){;} else{;}}   
                                else{if (yBBB[ymasalto]==ccc3){ kienesuno();mibcorrespond();yestironveces=1;yestiradsdaki=u;estirainstancias();yinstanciasdelemento=yinstanciasdelemento+1;yu=yu+1;}}  }                                    
						    yDDD[yu]=yBBB[yintocable]-yBBB[ymasalto];yAAA[yintocable]=(yBBB[yintocable]-yBBB[ymasalto]);sumaleuno();                       
                            if (el[yintocable]-yAAA[yintocable]<=yelementos){;}yelementos=yelementos-1; if (yBBB[yintocable]-yBBB[ymasalto]>yu){;}   }                           
                         else{yDDD[yu]=yBBB[yintocable]-yBBB[ymasalto];validarepetic();} mibcorrespond(); printf("validarepetic______ ");}
else { CCC[BBB[intocable]-BBB[masalto]]=-1;printf("cayo en el primer ciclo");      
       if (BBB[intocable]-BBB[masalto]==elementos){printf("pasa sin calcular");
                                                  if (repeticiones==0){ distribccc1();distribccc2();distribccc3();
                                                                       if (BBB[intocable]==ccc2){if (BBB[masalto]==ccc3){;} else{;}} 
                                                                  else{if (BBB[masalto]==ccc3){kienesuno();mibcorrespond();estironveces=1;
                                                                                               estiradsdaki=u;estirainstancias();
                                                                                               instanciasdelemento=instanciasdelemento+1;u=u+1;}}}
                                                  DDD[u]=BBB[intocable]-BBB[masalto];AAA[intocable]=(BBB[intocable]-BBB[masalto]);
	      				                          sumaleuno();if (el[intocable]-AAA[intocable]<=elementos){;}mibcorrespond();elementos=elementos-1;}                        
       else{DDD[u]=BBB[intocable]-BBB[masalto];validarepetic();mibcorrespond();}   
       verlod(); }
}
void led11(char* tram){printf("cayo en led11 %s ", tram); 
               if (*tram==(char)120){
                         CCC1[BBB1[intocable1]-BBB1[masalto1]]=-1;   printf("cayo en el primer ciclo ");    
                         if (BBB1[intocable1]-BBB1[masalto1]==elementos1){printf("pasa sin calcular ");
                            if (repeticiones==0){ distribccc1();distribccc21();distribccc31(); 						        
                                if (BBB1[intocable1]==ccc2){if (BBB1[masalto1]==ccc3){;} else{;}}   
                                else{if (BBB1[masalto1]==ccc3){ kienesuno1();mibcorrespond1();estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}}     }                                 
						    DDD1[u]=BBB1[intocable1]-BBB1[masalto1];AAA1[intocable1]=(BBB1[intocable1]-BBB1[masalto1]);sumaleuno();                        
                            if (el[intocable1]-AAA1[intocable1]<=elementos1){;}elementos1=elementos1-1; if (BBB1[intocable1]-BBB1[masalto1]>u){;}   }                           
                         else{DDD1[u]=BBB1[intocable1]-BBB1[masalto1];validarepetic1();} mibcorrespond1(); printf("validarepetic______ ");}
        else   if (*tram==(char)121){
                         CCC1[BBB1[intocable1]-BBB1[masalto1]]=-1;   printf("cayo en el primer ciclo ");    
                         if (BBB1[intocable1]-BBB1[masalto1]==elementos1){printf("pasa sin calcular ");
                            if (repeticiones==0){ distribccc1();distribccc21();distribccc31(); 						        
                                if (BBB1[intocable1]==ccc2){if (BBB1[masalto1]==ccc3){;} else{;}}   
                                else{if (BBB1[masalto1]==ccc3){ kienesuno1();mibcorrespond1();estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}}     }                                 
						    DDD1[u]=BBB1[intocable1]-BBB1[masalto1];AAA1[intocable1]=(BBB1[intocable1]-BBB1[masalto1]);sumaleuno();                     
                            if (el[intocable1]-AAA1[intocable1]<=elementos1){;}elementos1=elementos1-1; if (BBB1[intocable1]-BBB1[masalto1]>u){;}   }                           
                         else{DDD1[u]=BBB1[intocable1]-BBB1[masalto1];validarepetic1();} mibcorrespond1(); printf("validarepetic______ ");}	              
	    else { printf("cayo en el primer ciclo ");    CCC1[BBB1[intocable1]-BBB1[masalto1]]=-1;     
                         if (BBB1[intocable1]-BBB1[masalto1]==elementos1){printf("pasa sin calcular ");
                            if (repeticiones1==0){ distribccc1();distribccc21();distribccc31(); 						        
                                                 if (BBB1[intocable1]==ccc2){if (BBB1[masalto1]==ccc3){;} else{;}}   
                                            else{if (BBB1[masalto1]==ccc3){ kienesuno1();mibcorrespond1();
                                                                          estironveces=1;estiradsdaki=u;estirainstancias();
                                                                          instanciasdelemento=instanciasdelemento+1;u=u+1;}}   }                                  
						    DDD1[u]=BBB1[intocable1]-BBB1[masalto1];AAA1[intocable1]=(BBB1[intocable1]-BBB1[masalto1]);printf("AAA1[intocable1] %d ",AAA1[intocable1]);sumaleuno1();                        
                            if (el[intocable1]-AAA1[intocable1]<=elementos1){;}elementos1=elementos1-1; if (BBB1[intocable1]-BBB1[masalto1]>u){;}   }                           
                         else{DDD1[u]=BBB1[intocable1]-BBB1[masalto1];validarepetic1();printf("validarepetic______ ");} mibcorrespond1(); }
}
void led12(char* tram){printf("tram %s ",tram);if (*tram==(char)120){printf("cayo en led12 tram_____ %s ",tram);
	if (xelementos1==xu+1){xestironveces=1;xestiradsdaki=xu;xestirainstancias1();xinstanciasdelemento1=xinstanciasdelemento1+1;xu=xu+1;}
                               kienesuno1();mibcorrespond1();/*bxx=1;*/verlod();getchar();   }                            
                   else if (*tram==(char)121){if (yelementos1==yu+1){yestironveces=1;yestiradsdaki=yu;yestirainstancias1();yinstanciasdelemento1=yinstanciasdelemento1+1;yu=yu+1;}
                               kienesuno1();mibcorrespond1();/*bxx=1;*/verlod();getchar();   }   			
		           else                     {if (elementos1==u+1){estironveces=1;estiradsdaki=u;estirainstancias1();instanciasdelemento1=instanciasdelemento1+1;u=u+1;}
                               kienesuno1();mibcorrespond1();/*bxx=1*/;verlod();}                                                   
}	
int nrestando(){char scont_vueltas[]="        "; int cmldicc=15;   tanteoes=0,cmm=0,bx=0,bbx=0,soycero=-1, soycero1=-1, comunlisto=0, comprimiendo=0,
CONTADORDPASOS=0,        masalto=1,masalto1=1,intocable=0; 
bx=0;while (bx<=15){yAAA[bx]=-1;aconx[bx]=0;a1conx[bx]=0;yCCC[bx]=0;el[bx]=0;bx=bx+1;printf("bx %d ",bx);}
bx=0;while (bx<=15){bbx=0;while (bbx<=15){byes[bx][bbx]=-1;bbx=bbx+1;}bx=bx+1;}	nMINMAX();distri_sin_repeticion();distri_sin_repeticion1(); distri_sin_repeticiona();distri_sin_repeticion1a();  		   			   
bx=0;while (bx<=15){if (yBBB[bx]==-1){;}else elementos=elementos+1;if (xBBB1[bx]==-1){;}else elementos1=elementos1+1;bx=bx+1;} 		                    	   
gelementos=elementos;gelementos1=elementos1;salida=intocable-1;kienera=intocable;gkienera=intocable;gmasalto=masalto;salida1=intocable1-1;kienera1=intocable1;gkienera1=intocable1;gmasalto1=masalto1; printf("elementos_________: %d ",elementos);
if (yBBB[intocable]>=xBBB1[intocable1]){tanteoes=0;tanteo();}else	{tanteoes=1;tanteo1();}
int i=0,tokecito=0,pasito=0,faltan=0,cota1=0,cota2=0,noveo=0,lame=0,sekienes1=0,ggu=0,gbye=0,uu=0,condicvale=0,sumb=0,ra=0,buscara=0,buscarb=0,ooo=0,revisandoaltob1=1,forget=0,puzzl=0,salvisto=0,raquet=0,candy=0,candyy=0;faltan=0;u=instanciasdelemento;sekienes1=0;noveo=0;lame=0;cota1=0;cota2=0;ggu=0;bye=0;repeticiones=instanciasdelemento-elementos;printf("repeticiones__ %d",repeticiones);  
			   /*while*/ if(u>=1){bxx=elementos;  printf("u: %d ",u);   /*cmm=0;while(cmm<=15){if(yBBB[cmm]<yCCC[elementos])bxx=bxx-1;cmm++;}; */verlod();  getchar();/*  distribccc_inv(); corregir bxx(no es elementos, me falto tiempo y lo deje asi para probar) usar CCC para determinar cuantos bxx realmente hay*/                                 
                   /*while*/ if(bxx>1){ printf("bxx: %d ",bxx);printf("intocable:  %d ",intocable);printf("masalto:  %d ",masalto);
                      if (yBBB[intocable]-yBBB[masalto]>32){tokecito=yBBB[intocable];printf("cayo en este hueco mayor de 32 ");
                         /*pasito=0;while (tokecito>yBBB[masalto]){tokecito=tokecito-32;pasito=pasito+1;if (tokecito-32<yBBB[masalto])tokecito=0;u=u-1;}                                                
                         if (pasito==1){yBBB[intocable]=yBBB[intocable]-(32);} else{lame=pasito;cota1=yBBB[masalto];cota2=yBBB[intocable]-(32*pasito);lame2();}}
                             zparame(Ldicc[cmldicc],8);while(cmm<=strlen(scont_vueltas)){scont_vueltas[cmm]=(char)49;cmm++;} cmm=3; while(cmm<=7){scont_vueltas[cmm]=oysstr[cmm-3];cmm++;} 
                             if(btod8(scont_vueltas)>0){;}else { if(cota2-cota1==btod8(scont_vueltas)) cmldicc=cmldicc-1; else {;}*/}                    
                      if (((yBBB[intocable]-yBBB[masalto]<=yCCC[bxx]-(yCCC[bxx]-bxx)) & (yBBB[intocable]-yBBB[masalto]>0))||(yBBB[intocable]-yBBB[masalto]==1)){
                         led1("z");} 
                      else{
                          if (yBBB[intocable]-yBBB[masalto]>yCCC[bxx]-(yCCC[bxx]-(bxx))){                          
                             if (yBBB[intocable]-yBBB[masalto]==elementos+1){     printf(" es uno ");                              
                               led2("z");}
                             else{
                                   if (yBBB[intocable]-yBBB[masalto]>elementos+1){printf("ciclos inferiores "); 
                                        if (((yBBB[intocable]-yBBB[masalto])-elementos)>u-elementos){
		                                     if (yBBB[masalto]==-1){menosuno();bxx=1;}
		                                     else{
		                                        
		                                        bye=0;verlod(); getchar();
        		                                while (bye<=15){
                		                           if (yAAA[bye]==-1){;}
                        		                   else{
                                		                    if (aconx[bye]==1){
                                        	                  if ((yBBB[intocable]-yBBB[masalto])-yAAA[bye]<=elementos+1){
                                        	                       byes[intocable][bye]=(yBBB[intocable]-yBBB[masalto])-yAAA[bye];gbye=bye;
                                  	                               if (byes[intocable][bye]>u){      
									                                 estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}
                                  	                               if (yBBB[intocable]-byes[intocable][bye]<yBBB[masalto]){;}
                                  	                               else{
                                  	                                  if (elementos==u){
																		bulb1("z");}  
                                  	                                  else{
                                  	                                      uu=u;
                                  	                                      while (yCCC[uu]>yBBB[masalto]){uu=uu-1;}uu=uu+1;
                                   	                                      if (yCCC[uu]+yAAA[bye]==yBBB[intocable]){condicvale=1;if (yAAA[bye]>u)condicvale=0;
                                  	                                         bulb2("z");}                                 	                                         
                                  	                                      else{
                                  	                                         if ((yBBB[masalto]+elementos+yAAA[bye]>yBBB[intocable]) & (elementos<=u) || yBBB[masalto]+elementos+yAAA[bye]>yBBB[intocable]+1) 
                                  	                                            if ((yBBB[masalto]+elementos+yAAA[bye]==yBBB[intocable]+1) & (elementos==u+1)){;}else forget=0;
                                  	                                         else{
                                  	                                           if ((yBBB[masalto]+elementos+yAAA[bye]==yBBB[intocable] || yBBB[masalto]+elementos+yAAA[bye]==yBBB[intocable]+1) & (elementos==u+1)){
																			      bulb3("z");}
                                  	                                           else{
																					/*zparame(Ldicc[cmldicc],8);while(cmm<=strlen(scont_vueltas)){scont_vueltas[cmm]=(char)49;cmm++;} cmm=3; while(cmm<=7){scont_vueltas[cmm]=oysstr[cmm-3];cmm++;} 
																					if(btod8(scont_vueltas)>0){nrestando();}else {parame(Ldicc[cmldicc+1],8);cmm=0;while(cmm<=btod(zsstr)){DDD[u]=btod(ysstr);u=u-1 ;cmm++;} cmldicc=cmldicc-2;*//*if(cota2-cota1==btod8(scont_vueltas))  else {;}*/                   
																				   																				   
																				   
																				                                    	                                             
        	                          	            			                 /*buscara=0;while (buscara<=15){
        	                          	            			                               if (aconx[buscara]==1){if (AAA[buscara]==elementos) repeticiones=u-elementos;}
        	                          	            			                             else {if (AAA[buscara]==elementos) repeticiones=u-elementos;}buscara=buscara+1;}        	                          	            			                 
        	                          	            			                 if (el[intocable]==elementos){;}else{if (el[intocable]==elementos+1){;}}
         	                          	            			                 buscarb=1;noveo=elementos;        	                          	            			                
        	                          	            			                 while (noveo>1){
        	                          	            			                   while (buscarb<=16){
        	                          	            			                      if (AAA[buscarb]==-1) {;}       	                          	            			                      
        	                          	            			                      else{if (AAA[buscarb]>noveo){;}
        	                          	            			                           else{if (AAA[buscarb]==noveo)buscarb=18;}}
        	                          	            			                      buscarb=buscarb+1;}
        	                          	            			                   if (buscarb==17){  
																					   bulb4("z");}
        	                          	            			                   }
        	                          	            			                   if ((aconx[masalto]==1) & (AAA[masalto]==1) || forget==1)noveo=0;else noveo=noveo-1;*/
        	                          	            			                 }
        	                          	            			                 if (ooo==17){        	                          	            			                 
                                  	                                                if (yBBB[intocable]-(yBBB[masalto]+elementos)<elementos){
                                  	                                                   DDD[u]=yBBB[intocable]-(yBBB[masalto]+noveo);mibcorrespond();yAAA[intocable]=DDD[u];u=u-1;DDD[u]=elementos;elementos=elementos-1;forget=1;}
                                  	                                                else{/*
																						zparame(Ldicc[cmldicc],8);while(cmm<=strlen(scont_vueltas)){scont_vueltas[cmm]=(char)49;cmm++;} cmm=3; while(cmm<=7){scont_vueltas[cmm]=oysstr[cmm-3];cmm++;} 
																						if(btod8(scont_vueltas)>0){nrestando();}else {parame(Ldicc[cmldicc+1],8);cmm=0;while(cmm<=btod(zsstr)){DDD[u]=btod(ysstr);u=u-1 ;cmm++;} cmldicc=cmldicc-2;*//*if(cota2-cota1==btod8(scont_vueltas))  else {;}*/                    
																						}   
                                  	                                                   }
                                  	                                             
                                  	                                           }
                                  	                                         }
                                  	                                      }
                                  	                                  } 
                                  	                               }
                                  	                           }
    						                                else{
    						                                   if (repeticiones==0){
    						                                      if (yAAA[bye]==-1){;}
    						                                      else{ if (aconx[bye]==1){ 
    						                                            if (yAAA[bye]==u){puzzl=masalto;masalto=bye;yBBB[bye]=yBBB[intocable]-u;yAAA[intocable]=u;}}
    						                                         else{if (yAAA[bye]==u){puzzl=masalto;masalto=bye;yBBB[bye]=yBBB[intocable]-u;yAAA[intocable]=u;}}}    						                                         
    						                                   }}}
    						                       bye=bye+1;}
    						                       if (bye==16){ 
    						                          if ((yBBB[intocable]-yBBB[masalto])-elementos<=u){
    						                            rellenando1();forget=1;elementos=elementos-1;repeticiones=repeticiones-1;}
    						                          else{
    						                            if (repeticiones==0){    						                               
    						                               if (u==elementos){
    						                                  if (yBBB[intocable]>yCCC[u]){               u=ggu;candyy=1;elementos=elementos-1;
									                              if (yBBB[intocable]-yCCC[candy]>elementos){;} } 																	  
    						                                  else{rellenando2();if (salvisto==1){;}}}
    						                            else{           if (yBBB[intocable]-yCCC[candy]>elementos){;}elementos=elementos-1;candyy=1;}
    						                            }}
    						                    }}
                                             if (forget==1) bxx=1;
			                                 if ((yBBB[intocable]>yCCC[u]) & (yCCC[u]>-1)){estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}
                                        else{lame=2;cota1=yBBB[masalto];cota2=yBBB[intocable];lame1();elementos=elementos-1;bxx=1;}
                                   }}}}                       
                          else{
                             if (yBBB[intocable]-yBBB[masalto]<=0){printf(" ciclo donde no deberia entrar n ");getchar();
                                if (bxx==gelementos) u=instanciasdelemento+1;                                    
                                else{
                                   if (yBBB[intocable]<=yCCC[u]){ 
                                      if (repeticiones<=0){DDD[u]=yCCC[u];bxx=1;}
                                      else
                                        if (u>1){
                                          raquet=1;while (raquet<=16){if (aconx[raquet]==1){if (yAAA[raquet]==u){DDD[u]=u;raquet=18;}}else{if (yAAA[raquet]==u){DDD[u]=u;raquet=18;}}raquet=raquet+1;}                                    
                                          if (raquet==17){yAAA[intocable]=u;DDD[u]=u;elementos=elementos-1;}
                                        }}                                         
                                   else{if (yBBB[intocable]==1)DDD[u]=1;}u=1; }bxx=1;  }}   } bxx=bxx-1;                   
                   kienera=intocable;MINMAX();}revisandoaltob1=1;MINMAX();u=u-1;
			       u=instanciasdelemento1;

kienera=intocable;intocable=masalto;  
} return 0;}

int restando(){char scont_vueltas[]="        "; int cmldicc=15,concm=0,contcm=0;   tanteoes=0,cmm=0,bx=0,bbx=0,soycero=-1, soycero1=-1, comunlisto=0, comprimiendo=0,elementos=0,CONTADORDPASOS=0,masalto=1,masalto1=1,intocable=0;
bx=0;while (bx<=15){AAA[bx]=-1;aconx[bx]=-1;a1conx[bx]=-1;CCC[bx]=0;el[bx]=0;bx=bx+1;}
bx=0;while (bx<=15){bbx=0;while (bbx<=15){byes[bx][bbx]=-1;bbx=bbx+1;}bx=bx+1;}	MINMAX();om=1; 
bx=0;while (bx<=15){if (BBB[bx]>-1)elementos=elementos+1;if (BBB1[bx]>-1)elementos1=elementos1+1;bx=bx+1;}distri_sin_repeticion();distri_sin_repeticion1(); distri_sin_repeticiona();distri_sin_repeticion1a();  		   			    		                    	   
gelementos=elementos;gelementos1=elementos1;salida=intocable-1;kienera=intocable;gkienera=intocable;gmasalto=masalto;salida1=intocable1-1;kienera1=intocable1;gkienera1=intocable1;gmasalto1=masalto1; printf("elementos_________: %d ",elementos);
verlod();/*if (BBB[intocable]>=BBB1[intocable1]){*/tanteoes=0;tanteo();/*}else	{tanteoes=1;tanteo1();}*/
int i=0,tokecito=0,pasito=0,faltan=0,cota1=0,cota2=0,noveo=0,lame=0,sekienes1=0,ggu=0,gbye=0,uu=0,condicvale=0,sumb=0,ra=0,buscara=0,buscarb=0,ooo=0,revisandoaltob1=1,forget=0,puzzl=0,salvisto=0,raquet=0,candy=0,candyy=0;faltan=0;u=instanciasdelemento;sekienes1=0;noveo=0;lame=0;cota1=0;cota2=0;ggu=0;bye=0;repeticiones=instanciasdelemento-elementos;printf("repeticiones__ %d",repeticiones);  
		         while (u>=1){bxx=elementos;  printf("u: %d ",u);  /*cmm=0;while(cmm<=15){if(BBB[cmm]<CCC[elementos])bxx=bxx-1;cmm++;};*/ verlod(); printf("intocable:  %d ",intocable);printf("masalto:  %d ",masalto);printf("u: %d ",u);/*  distribccc_inv(); corregir bxx(no es elementos, me falto tiempo y lo deje asi para probar) usar CCC para determinar cuantos bxx realmente hay*/                                 
                     while (bxx>1){ printf("bxx: %d ",bxx); printf("u: %d ",u); printf("intocable:  %d ",intocable);printf("masalto:  %d ",masalto);
                      if (((BBB[intocable]-BBB[masalto]<=(CCC[bxx]-(CCC[bxx]-bxx))+0) & (BBB[intocable]-BBB[masalto]>0))||(BBB[intocable]-BBB[masalto]==1)){
                        printf("led"); getchar();led1("z");} 
                      else{  
                          if (BBB[intocable]-BBB[masalto]>CCC[bxx]-(CCC[bxx]-(bxx))){  printf("via_led_2");                         
                             if (BBB[intocable]-BBB[masalto]==elementos+1){     printf(" es uno ");                              
                               led2("z");}
                             else{
                                   if (BBB[intocable]-BBB[masalto]>elementos+1){printf("ciclos_inferiores_con_ %d mayor_a %d  ",(BBB[intocable]-BBB[masalto])-elementos,bxx-elementos); 
 /*cambie >u-elementos1 x >bxx-elementos1*/if (((BBB[intocable]-BBB[masalto])-elementos)>bxx-elementos){
		                                     if (BBB[masalto]==-1){printf("menosuno");menosuno();bxx=1;}
		                                     else{		                                        
		                                        bye=0;verlod(); getchar();
        		                                while (bye<=15){
                		                           if (AAA[bye]==-1){;}
                        		                   else{
                                		                    if (aconx[bye]==1){
                                        	                  if ((BBB[intocable]-BBB[masalto])-AAA[bye]<=elementos+1){
                                        	                       byes[intocable][bye]=(BBB[intocable]-BBB[masalto])-AAA[bye];gbye=bye;
                                  	                               if (byes[intocable][bye]>u){      
									                                 estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}
                                  	                               if (BBB[intocable]-byes[intocable][bye]<BBB[masalto]){printf("algo_loco");}
                                  	                               else{
                                  	                                  if (elementos==u){
																		printf("bulb1");bulb1("z");getchar();}  
                                  	                                  else{
                                  	                                      uu=u;
                                  	                                      while (CCC[uu]>BBB[masalto]){uu=uu-1;printf("uu %d",uu);}uu=uu+1; 
                                   	                                      if (CCC[uu]+AAA[bye]==BBB[intocable]){condicvale=1;if (AAA[bye]>u)condicvale=0;
                                  	                                         printf("bulb2");bulb2("z");getchar();}                                 	                                         
                                  	                                      else{
                                  	                                         if ((BBB[masalto]+elementos+AAA[bye]>BBB[intocable]) & (elementos<=u) || BBB[masalto]+elementos+AAA[bye]>BBB[intocable]+1) 
                                  	                                            if ((BBB[masalto]+elementos+AAA[bye]==BBB[intocable]+1) & (elementos==u+1)){printf("no_hizo_");;}else forget=0;
                                  	                                         else{
                                  	                                           if ((BBB[masalto]+elementos+AAA[bye]==BBB[intocable] || BBB[masalto]+elementos+AAA[bye]==BBB[intocable]+1) & (elementos==u+1)){
																			      printf("bulb3");bulb3("z");getchar();}
                                  	                                           else{if(jju==0) {jji=5;jja=3;} else {jji=6;jja=2;}   
																					zparame(Ldicc[cmldicc-1],8);if(btod8(xsstr/*oysstr*/)/*==63*/>=252){printf("podemos empezar a leer ldicc y recomponer");getchar();}
																					else{zparame(Ldicc[cmldicc],8);cmm=0;while(cmm<=7){scont_vueltas[cmm]=1;cmm++;} cmm=2; while(cmm<=7){scont_vueltas[cmm]=oysstr[cmm-2];cmm++;} 
																					if(btod8(scont_vueltas)>0){printf("nrestando");/*nrestando();*/}
																					else {parame(Ldicc[cmldicc+1],8);if(u-btod(zsstr)<=0){concm=15;while(concm>=0){DDD[concm]=btod(ysstr);concm--;}
																					                                                      concm=15;while(concm>=0){level2[concm]=DDD[concm];DDD[concm]=0;concm--;} 
																					                                          ;concm=btod(zsstr)-u;while(concm>=0){DDD[concm]=btod(ysstr);concm--;}} 
																					                                  else {cmm=0;while(cmm<=btod(zsstr)){DDD[u]=btod(ysstr);u=u-1 ;cmm++;} cmldicc=cmldicc-2;}   validarepetic();mibcorrespond();}
																					     }																			   
																				   
																				                                    	                                             
        	                          	            			                 /*buscara=0;while (buscara<=15){
        	                          	            			                               if (aconx[buscara]==1){if (AAA[buscara]==elementos) repeticiones=u-elementos;}
        	                          	            			                             else {if (AAA[buscara]==elementos) repeticiones=u-elementos;}buscara=buscara+1;}        	                          	            			                 
        	                          	            			                 if (el[intocable]==elementos){;}else{if (el[intocable]==elementos+1){;}}
         	                          	            			                 buscarb=1;noveo=elementos;        	                          	            			                
        	                          	            			                 while (noveo>1){
        	                          	            			                   while (buscarb<=16){
        	                          	            			                      if (AAA[buscarb]==-1) {;}       	                          	            			                      
        	                          	            			                      else{if (AAA[buscarb]>noveo){;}
        	                          	            			                           else{if (AAA[buscarb]==noveo)buscarb=18;}}
        	                          	            			                      buscarb=buscarb+1;}
        	                          	            			                   if (buscarb==17){  
																					   bulb4("z");}
        	                          	            			                   }
        	                          	            			                   if ((aconx[masalto]==(char)120) & (AAA[masalto]==1) || forget==1)noveo=0;else noveo=noveo-1;*/
        	                          	            			                 }
        	                          	            			                 if (ooo==16){        	                          	            			                 
                                  	                                                if (BBB[intocable]-(BBB[masalto]+elementos)<elementos){
                                  	                                                   DDD[u]=BBB[intocable]-(BBB[masalto]+noveo);mibcorrespond();AAA[intocable]=DDD[u];u=u-1;DDD[u]=elementos;elementos=elementos-1;forget=1;}
                                  	                                                else{if(jju==0) {jji=5;jja=3;} else {jji=6;jja=2;}   getchar();
																						zparame(Ldicc[cmldicc],8);while(cmm<=strlen(scont_vueltas)){scont_vueltas[cmm]=1;cmm++;} cmm=2; while(cmm<=7){scont_vueltas[cmm]=oysstr[cmm-2];cmm++;} 
																						if(btod8(scont_vueltas)>0){nrestando();/*if(cota2-cota1==btod8(scont_vueltas))  else {;}*/}else {parame(Ldicc[cmldicc+1],8);if(u-btod(zsstr)<=0){while(concm>=0){DDD[concm]=btod(ysstr);concm--;}concm=15;while(concm>=0){level2[concm]=DDD[concm];DDD[concm]=0;} contcm--;concm=btod(zsstr)-u;while(concm>=0){DDD[concm]=btod(ysstr);}} else {cmm=0;while(cmm<=btod(zsstr)){DDD[u]=btod(ysstr);u=u-1 ;cmm++;} cmldicc=cmldicc-2;} }
																						}   
                                  	                                                   }
                                  	                                             
                                  	                                           }
                                  	                                         }
                                  	                                      }
                                  	                                  } 
                                  	                               }
                                  	                           }
    						                                else{
    						                                   if (repeticiones==0){
    						                                      if (AAA[bye]==-1){;}
    						                                      else{ if (aconx[bye]==1){ 
    						                                            if (AAA[bye]==u){puzzl=masalto;masalto=bye;BBB[bye]=BBB[intocable]-u;AAA[intocable]=u;}}
    						                                         else{if (AAA[bye]==u){puzzl=masalto;masalto=bye;BBB[bye]=BBB[intocable]-u;AAA[intocable]=u;}}}    						                                         
    						                                   }}}
    						                       bye=bye+1;}
    						                       if (bye==16){ printf("bye=16");
    						                          if ((BBB[intocable]-BBB[masalto])-elementos<=u){printf("rellenando");
																					if(jju==0) {jji=5;jja=3;} else {jji=6;jja=2;}   
																					zparame(Ldicc[cmldicc-1],8);if(btod8(xsstr/*oysstr*/)/*==63*/>=252){printf("podemos empezar a leer ldicc y recomponer");getchar();}
																					else{zparame(Ldicc[cmldicc],8);cmm=0;while(cmm<=7){scont_vueltas[cmm]=1;cmm++;} cmm=2; while(cmm<=7){scont_vueltas[cmm]=oysstr[cmm-2];cmm++;} 
																					if(btod8(scont_vueltas)>0){printf("nrestando");/*nrestando();*/}
																					else {parame(Ldicc[cmldicc+1],8);if(u-btod(zsstr)<=0){concm=15;while(concm>=0){DDD[concm]=btod(ysstr);concm--;}
																					                                                      concm=15;while(concm>=0){level2[concm]=DDD[concm];DDD[concm]=0;concm--;} 
																					                                          ;concm=btod(zsstr)-u;while(concm>=0){DDD[concm]=btod(ysstr);concm--;}} 
																					                                  else {cmm=0;while(cmm<=btod(zsstr)){DDD[u]=btod(ysstr);u=u-1 ;cmm++;} cmldicc=cmldicc-2;}   validarepetic();mibcorrespond();}
																					     }																			   
    						                            
    						                            /*rellenando1();*/forget=1;elementos=elementos-1;repeticiones=repeticiones-1;}
    						                          else{
    						                            if (repeticiones==0){    						                               
    						                               if (u==elementos){
    						                                  if (BBB[intocable]>CCC[u]){               u=ggu;candyy=1;elementos=elementos-1;
									                              if (BBB[intocable]-CCC[candy]>elementos){;} } 																	  
    						                                  else{rellenando2();if (salvisto==1){;}}}
    						                            else{           if (BBB[intocable]-CCC[candy]>elementos){printf("no_paso");}elementos=elementos-1;candyy=1;}
    						                            }}
    						                    }}
                                             if (forget==1) bxx=1;
			                                 if ((BBB[intocable]>CCC[u]) & (CCC[u]>-1)){estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}}
                                        else{lame=2;cota1=BBB[masalto];cota2=BBB[intocable];lame1();elementos=elementos-1;bxx=1;printf("ciclos inferiores con lame"); }
                                   }}}                     
                          else{
                             if (BBB[intocable]-BBB[masalto]<=0){printf(" ciclo donde no deberia entrar bxx %d ",bxx);getchar();
                                if (bxx==gelementos) u=instanciasdelemento+1;                                    
                                else{
									if (BBB[intocable]<=CCC[u]){ 
                                      if (repeticiones<=0){DDD[u]=CCC[u];bxx=1;}
                                      else{if (u>1){
                                          raquet=1;while (raquet<=16){if (aconx[raquet]==1){if (AAA[raquet]==u){DDD[u]=u;raquet=18;}}else{if (AAA[raquet]==u){DDD[u]=u;raquet=18;}}raquet=raquet+1;}                                    
                                          if (raquet==17){AAA[intocable]=u;DDD[u]=u;elementos=elementos-1;}}}
                                          }                                         
                                   else{if (BBB[intocable]==1)DDD[u]=1;}u=1; }bxx=0;} } }
                                   printf("bxx  %d ",bxx); /*getchar();*/ kienera=intocable;intocable=masalto;MINMAX();
                                   bxx=bxx-1;}
revisandoaltob1=1;MINMAX();u=u-1;u=instanciasdelemento1;kienera=intocable;intocable=masalto;printf("u: %d ",u);} 
return 0;}
int sacando(){ int contcm=5,concm=15;while(contcm>=0){sacalevel2();getchar();restando();
/*concm=15;while(concm>=0){concm--;}*/contcm--;} getchar();getchar();return 0;}
	    
int nrestando1(){char scont_vueltas1[]="        "; int cmldicc1=15;    tanteoes=0,cmm=0,bx=0,bbx=0,soycero=-1, soycero1=-1, comunlisto=0, comprimiendo=0,
CONTADORDPASOS=0,     masalto=1, masalto1=1, intocable1=0;
bx=0;while (bx<=15){yAAA1[bx]=-1;aconx[bx]=0;a1conx[bx]=0;CCC1[bx]=0;el1[bx]=0;bx=bx+1;printf("bx %d ",bx);}
bx=0;while (bx<=15){bbx=0;while (bbx<=15){byes[bx][bbx]=-1;bbx=bbx+1;}bx=bx+1;}nMINMAX1();  distri_sin_repeticion();distri_sin_repeticion1();distri_sin_repeticiona();distri_sin_repeticion1a(); 				   		   			   
bx=0;while (bx<=15){if (yBBB[bx]==-1){;}else elementos=elementos+1;if (yBBB1[bx]==-1){;}else elementos1=elementos1+1;bx=bx+1;} 			   
gelementos=elementos;gelementos1=elementos1;salida=intocable-1;kienera=intocable;gkienera=intocable;gmasalto=masalto;salida1=intocable1-1;kienera1=intocable1;gkienera1=intocable1;gmasalto1=masalto1; 			   	printf("elementos1____________: %d ",elementos1);if (xBBB[intocable]>=yBBB1[intocable1]){tanteoes=0;tanteo();}else	{tanteoes=1;tanteo1();}
int i=0,tokecito=0,pasito=0,faltan=0,cota1=0,cota2=0,noveo=0,lame=0,sekienes1=0,ggu=0,gbye=0,uu=0,condicvale=0,sumb=0,ra=0,buscara=0,buscarb=0,ooo=0,revisandoaltob1=1,forget=0,puzzl=0,salvisto=0,raquet=0,candy=0,candyy=0;
			   faltan=0;repeticiones1=instanciasdelemento1-elementos1;printf("repeticiones1__ %d",repeticiones1);u=instanciasdelemento1;sekienes1=0;noveo=0;lame=0;cota1=0;cota2=0;ggu=0;bye=0;printf("u: %d ",u);
			 /*while*/if (u>=1){bxx=elementos1;printf("u1: %d ",u); printf("elementos1: %d ",elementos1);  /*cmm=0;while(cmm<=15){if(yBBB1[cmm]<CCC1[elementos1])bxx=bxx-1;cmm++;};verlod();  getchar();corregir bxx(no es elementos, me falto tiempo y lo deje asi para probar) usar CCC para determinar cuantos bxx realmente hay*/                                          
                /*while*/if (bxx>1){printf("bxx: %d ",bxx);printf("intocable1:  %d ",intocable1);printf("masalto1:  %d ",masalto1);getchar();
                      if (yBBB1[intocable1]-yBBB1[masalto1]>32){/*tokecito=yBBB1[intocable1];printf("cayo en este hueco mayor de 32 ");
                         pasito=0;while (tokecito>yBBB1[masalto1]){tokecito=tokecito-32;pasito=pasito+1;if (tokecito-32<yBBB1[masalto1])tokecito=0;u=u-1;}                                                
                         if (pasito==1){yBBB1[intocable1]=yBBB1[intocable1]-(32);}else{lame=pasito;cota1=yBBB1[masalto1];cota2=yBBB1[intocable1]-(32*pasito);lame2();} }
                             zparame(Ldicc1[cmldicc1],8);while(cmm<=strlen(scont_vueltas1)){scont_vueltas1[cmm]=(char)49;cmm++;} cmm=3; while(cmm<=7){scont_vueltas1[cmm]=oysstr[cmm-3];cmm++;} 
                             if(btod8(scont_vueltas1)>0){;}else { if(cota2-cota1==btod8(scont_vueltas1)) cmldicc1=cmldicc1-1; else {;}*/}                                                                 
                      if (((yBBB1[intocable1]-yBBB1[masalto1]<=yCCC1[bxx]-(yCCC1[bxx]-bxx)) & (yBBB1[intocable1]-yBBB1[masalto1]>0))||(yBBB1[intocable1]-yBBB1[masalto1]==1)){
						led11("z");} 
                      else{
                          if (yBBB1[intocable1]-yBBB1[masalto1]>yCCC1[bxx]-(yCCC1[bxx]-(bxx))){                       
                             if (yBBB1[intocable1]-yBBB1[masalto1]==elementos1+1){   printf(" es uno ");                               
                               led12("z");}
                             else{
                                   if (yBBB1[intocable1]-yBBB1[masalto1]>elementos1+1){     printf("ciclos inferiores "); 
                                        if (((yBBB1[intocable1]-yBBB1[masalto1])-elementos1)>u-elementos1){printf("ciclos inferiores con validaciones buenas");
		                                     if (yBBB1[masalto1]==-1){menosuno();bxx=1;}
		                                     else{
		                                        
		                                        
		                                        bye=0;verlod();getchar();
        		                                while (bye<=15){
                		                           if (yAAA1[bye]==-1){;}
                        		                   else{
                                		                    if (a1conx[bye]==1){
                                        	                  if ((yBBB1[intocable1]-yBBB1[masalto1])-yAAA1[bye]<=elementos1+1){
                                        	                       byes[intocable1][bye]=(yBBB1[intocable1]-yBBB1[masalto1])-yAAA1[bye];gbye=bye;
                                  	                               if (byes[intocable1][bye]>u){      
									                                 estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}
                                  	                               if (yBBB1[intocable1]-byes[intocable1][bye]<yBBB1[masalto1]){;}
                                  	                               else{ 
                                  	                                  if (elementos1==u){
																		bulb11("z"); }  
                                  	                                  else{
                                  	                                      uu=u;
                                  	                                      while (yCCC1[uu]>yBBB1[masalto1]){uu=uu-1;}uu=uu+1;
                                   	                                      if (yCCC1[uu]+yAAA1[bye]==yBBB1[intocable1]){
																			  bulb12("z");}
                                  	                                      else{
                                  	                                         if ((yBBB1[masalto1]+elementos1+yAAA1[bye]>yBBB1[intocable1]) & (elementos1<=u) || yBBB1[masalto1]+elementos1+yAAA1[bye]>yBBB1[intocable1]+1) 
                                  	                                            if ((yBBB1[masalto1]+elementos1+yAAA1[bye]==yBBB1[intocable1]+1) & (elementos1==u+1)){;}else forget=0;
                                  	                                         else{
                                  	                                           if ((yBBB1[masalto1]+elementos1+yAAA1[bye]==yBBB1[intocable1] ||  yBBB1[masalto1]+elementos1+yAAA1[bye]==yBBB1[intocable1]+1) & (elementos1==u+1)){
                                                                                  bulb13("z");}
                                  	                                           else{ printf("__mal ciclo___ ");
																				   
																				    
																				                                   	                                             
        	                          	            			                 buscara=1;while (buscara<=16){
        	                          	            			                               if (aconx[buscara]==1){if (yAAA1[buscara]==elementos1) repeticiones1=u-elementos1;}
        	                          	            			                             else {if (yAAA1[buscara]==elementos1) repeticiones=u-elementos1;}buscara=buscara+1;}		                 
        	                          	            			                 if (el[intocable1]==elementos1){;}else{if (el[intocable1]==elementos1+1){;}}
         	                          	            			                 buscarb=1;noveo=elementos1;        	                          	            			                
        	                          	            			                 while (noveo>1){
        	                          	            			                   while (buscarb<=16){
        	                          	            			                      if (yAAA1[buscarb]==-1) {;}       	                          	            			                      
        	                          	            			                      else{if (yAAA1[buscarb]>noveo){;}
        	                          	            			                           else{if (yAAA1[buscarb]==noveo)buscarb=18;}}
        	                          	            			                      buscarb=buscarb+1;}
        	                          	            			                   if (buscarb==17){  
																					   bulb4("z");}
        	                          	            			                   }
        	                          	            			                   if ((aconx[masalto1]==1) & (yAAA1[masalto1]==1) || forget==1)noveo=0;else noveo=noveo-1;
        	                          	            			                 }
        	                          	            			                 if (ooo==16){        	                          	            			                 
                                  	                                                if (yBBB1[intocable1]-(yBBB1[masalto1]+elementos1)<elementos1){
                                  	                                                   DDD1[u]=yBBB1[intocable1]-(yBBB1[masalto1]+noveo);mibcorrespond1();yAAA1[intocable1]=DDD1[u];u=u-1;DDD1[u]=elementos1;elementos1=elementos1-1;forget=1;}}
                                  	                                             
                                  	                                           }
                                  	                                         }
                                  	                                      }
                                  	                                  } 
                                  	                               }
                                  	                           }
    						                                else{
    						                                   if (repeticiones1==0){
    						                                      if (yAAA1[bye]==-1){;}
    						                                      else{
    						                                         if (aconx[bye]==1){ 
    						                                            if (yAAA1[bye]==u){puzzl=masalto;masalto=bye;yBBB1[bye]=yBBB1[intocable1]-u;yAAA1[intocable1]=u;}}
    						                                         else{if (yAAA1[bye]==u){puzzl=masalto;masalto=bye;yBBB1[bye]=yBBB1[intocable1]-u;yAAA1[intocable1]=u;}}}
    						                                   }}}
    						                       bye=bye+1;}
    						                       if (bye==16){  
    						                          if ((yBBB1[intocable1]-yBBB1[masalto1])-elementos1<=u){
    						                            rellenando1();forget=1;elementos1=elementos1-1;repeticiones1=repeticiones1-1;}
    						                          else{
    						                            if (repeticiones1==0){    						                               
    						                               if (u==elementos1){
    						                                  if (yBBB1[intocable1]>yCCC1[u]){             u=ggu;candyy=1;elementos1=elementos1-1;
									                              if (yBBB1[intocable1]-yCCC1[candy]>elementos1){;} } 																	  
    						                                  else{rellenando2();if (salvisto==1){;}}
    						                               }
    						                            else{                   if (yBBB1[intocable1]-yCCC1[candy]>elementos1){;}elementos1=elementos1-1;candyy=1;}
    						                            }}
    						                       }
    						                    } 
                                             
                                             if (forget==1) bxx=1;
			                                 if ((yBBB1[intocable1]>yCCC1[u]) & (yCCC1[u]>-1)){estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}
                                        else{printf("esquiva los ciclos inferiores y entro a lame1 n");lame=2;cota1=yBBB1[masalto1];cota2=yBBB1[intocable1];lame1();elementos1=elementos1-1;bxx=1;}
                                   }}}}                    	
                          else{
                             if (yBBB1[intocable1]-yBBB1[masalto1]<=0){ printf(" ciclo donde no deberia entrar n1");getchar();
                                if (bxx==gelementos1) u=instanciasdelemento+1;                                    
                                else{if (yBBB1[intocable1]<=yCCC1[u]){ 
                                      if (repeticiones1<=0){DDD1[u]=yCCC1[u];bxx=1;}
                                      else{if (u>1){
                                          raquet=1;while (raquet<=15){if (a1conx[raquet]==1){if (yAAA1[raquet]==u){DDD1[u]=u;raquet=18;}}else{if (yAAA1[raquet]==u){DDD1[u]=u;raquet=18;}}raquet=raquet+1;}
                                          if (raquet==17){yAAA1[intocable1]=u;DDD1[u]=u;elementos1=elementos1-1;}}}}                                         
                                   else{if (yBBB1[intocable1]==1)DDD1[u]=1;}u=1; }  }bxx=0;                                                                  
                                }}   bxx=bxx-1; printf("bxx: %d ",bxx);printf("u1: %d ",u);kienera1=intocable1;MINMAX1();printf(" ciclo donde deberia estar ");}                                         
                   kienera1=intocable1; u=u-1; 
			       u=instanciasdelemento1;
 
 }return 0;}       
int restando1(){char scont_vueltas1[]="        "; int cmldicc1=15,concm=0,contcm=0;    tanteoes=0,cmm=0,bx=0,bbx=0,soycero=-1, soycero1=-1, comunlisto=0, comprimiendo=0,elementos1=0,
CONTADORDPASOS=0,     masalto=1, masalto1=1, intocable1=0;/* armar la estructura y evaluar que se lee primero si LDICC[] para llenar -1 o BBB[]*/bx=0;while (bx<=15){AAA1[bx]=-1;aconx[bx]=-1;a1conx[bx]=-1;CCC1[bx]=0;el1[bx]=0;printf("bx %d ",bx);bx=bx+1;}bx=0;while (bx<=15){bbx=0;while (bbx<=15){byes[bx][bbx]=-1;bbx=bbx+1;}bx=bx+1;}MINMAX1();om1=1;distri_sin_repeticion();distri_sin_repeticion1();distri_sin_repeticiona();distri_sin_repeticion1a(); 				   		   			   
bx=0;while (bx<=15){if (BBB[bx]==-1){;}else elementos=elementos+1;if (BBB1[bx]==-1){;}else elementos1=elementos1+1;bx=bx+1;} gelementos=elementos;gelementos1=elementos1;salida=intocable-1;kienera=intocable;gkienera=intocable;gmasalto=masalto;salida1=intocable1-1;kienera1=intocable1;gkienera1=intocable1;gmasalto1=masalto1; 			   	printf("elementos1____________: %d ",elementos1);/*if (BBB[intocable]>=BBB1[intocable1]){*/tanteoes=1;tanteo1();/*}else	{tanteoes=1;tanteo1();}*/
int i=0,tokecito=0,pasito=0,faltan=0,cota1=0,cota2=0,noveo=0,lame=0,sekienes1=0,ggu=0,gbye=0,uu=0,condicvale=0,sumb=0,ra=0,buscara=0,buscarb=0,ooo=0,revisandoaltob1=1,forget=0,puzzl=0,salvisto=0,raquet=0,candy=0,candyy=0;
			   faltan=0;repeticiones1=instanciasdelemento1-elementos1;printf("repeticiones1__ %d",repeticiones1);u=instanciasdelemento1;sekienes1=0;noveo=0;lame=0;cota1=0;cota2=0;ggu=0;bye=0;printf("u: %d ",u);
			   while (u>=1){bxx=elementos1;printf("u1: %d ",u); printf("elementos1: %d ",elementos1);  /*cmm=0;while(cmm<=15){if(BBB1[cmm]<CCC1[elementos1])bxx=bxx-1;cmm++;};*/printf("bxx %d",bxx); verlod();  getchar();/*corregir bxx(no es elementos, me falto tiempo y lo deje asi para probar) usar CCC para determinar cuantos bxx realmente hay*/                                          
                   while (bxx>1){printf("bxx: %d ",bxx);printf("intocable1:  %d ",intocable1);printf("masalto1:  %d ",masalto1);printf("elementos1: %d ",elementos1);
                      if (BBB1[intocable1]-BBB1[masalto1]>=32){printf("cayo en este hueco mayor de 32 ");/*tokecito=BBB1[intocable1];
                         pasito=0;while (tokecito>BBB1[masalto1]){tokecito=tokecito-32;pasito=pasito+1;if (tokecito-32<BBB1[masalto1])tokecito=0;u=u-1;}                                                
                         if (pasito==1){BBB1[intocable1]=BBB1[intocable1]-(32);}else{lame=pasito;cota1=BBB1[masalto1];cota2=BBB1[intocable1]-(32*pasito);lame2();} }
                             zparame(Ldicc1[cmldicc1],8);while(cmm<=strlen(scont_vueltas1)){scont_vueltas1[cmm]=(char)49;cmm++;} cmm=3; while(cmm<=7){scont_vueltas1[cmm]=oysstr[cmm-3];cmm++;} 
                             if(btod8(scont_vueltas1)>0){;}else { if(cota2-cota1==btod8(scont_vueltas1)) cmldicc1=cmldicc1-1; else {;}*/}                                                                 
                      if (((BBB1[intocable1]-BBB1[masalto1]<=CCC1[bxx]-(CCC1[bxx]-bxx)) & (BBB1[intocable1]-BBB1[masalto1]>0))||(BBB1[intocable1]-BBB1[masalto1]==1)){
						led11("z");getchar();} 
                      else{
                          if (BBB1[intocable1]-BBB1[masalto1]>CCC1[bxx]-(CCC1[bxx]-(bxx))){                       
                             if (BBB1[intocable1]-BBB1[masalto1]==elementos1+1){   printf(" es uno ");                               
                               led12("z");getchar();}
                             else{printf("entrando a ciclos inferiores "); 
                                   if (BBB1[intocable1]-BBB1[masalto1]>elementos1+1){     printf("ciclos inferiores "); 
/*cambie >u-elementos1 x >bxx-elementos1*/if (((BBB1[intocable1]-BBB1[masalto1])-elementos1)>bxx-elementos1){printf("ciclos inferiores con validaciones buenas");
		                                     if (BBB1[masalto1]==-1){menosuno();bxx=1;}
		                                     else{
		                                        
		                                        bye=0;verlod();
        		                                while (bye<=15){printf("bye %d ",bye);
                		                           if (AAA1[bye]==-1){;}
                        		                   else{
                                		                    if (a1conx[bye]==1){
                                        	                  if ((BBB1[intocable1]-BBB1[masalto1])-AAA1[bye]<=elementos1+1){
                                        	                       byes[intocable1][bye]=(BBB1[intocable1]-BBB1[masalto1])-AAA1[bye];gbye=bye;
                                  	                               if (byes[intocable1][bye]>u){      
									                                 estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}
                                  	                               if (BBB1[intocable1]-byes[intocable1][bye]<BBB1[masalto1]){;} 
                                  	                               else{ 
                                  	                                  if (elementos1==u){
																		bulb11("z"); printf("bulb11");getchar();}  
                                  	                                  else{ 
                                  	                                      uu=u;
                                  	                                      while (CCC1[uu]>BBB1[masalto1]){uu=uu-1;}uu=uu+1;
                                   	                                      if (CCC1[uu]+AAA1[bye]==BBB1[intocable1]){
																			  bulb12("z");printf("bulb12");getchar();}
                                  	                                      else{
                                  	                                         if ((BBB1[masalto1]+elementos1+AAA1[bye]>BBB1[intocable1]) & (elementos1<=u) || BBB1[masalto1]+elementos1+AAA1[bye]>BBB1[intocable1]+1) 
                                  	                                            if ((BBB1[masalto1]+elementos1+AAA1[bye]==BBB1[intocable1]+1) & (elementos1==u+1)){;}else forget=0; 
                                  	                                         else{ 
                                  	                                           if ((BBB1[masalto1]+elementos1+AAA1[bye]==BBB1[intocable1] ||  BBB1[masalto1]+elementos1+AAA1[bye]==BBB1[intocable1]+1) & (elementos1==u+1)){
                                                                                  bulb13("z");printf("bulb13");getchar();}
                                  	                                           else{      
                                  	                                                      cmldicc1=15;while((Ldicc1[cmldicc1]<=0)&(Ldicc1[cmldicc1-1]<=0)){cmldicc1=cmldicc1-2;} getchar(); 
																					  	  zparame(Ldicc1[cmldicc1-1],8);if(btod8(xsstr/*oysstr*/)/*==63*/>=252){printf("podemos empezar a leer y recomponer");
																					  	  /* parame(Ldicc1[cmldicc1+1],8);if(btod(ysstr)==intocable1){masbajo1=btod(zsstr); ael1[masbajo1]=elementos;}; if(BBB1[masbajo1]+(CCC1[elementos1])<(el[]+masalto1+AAA1[Ax1])) */getchar();}
																					  	  else{zparame(Ldicc1[cmldicc1],8);cmm=0;while(cmm<=7){scont_vueltas1[cmm]=1;cmm++;} cmm=2; while(cmm<=7){scont_vueltas1[cmm]=ozsstr[cmm-2];cmm++;} printf("paso por aki_____________");
																						  if(btod8(scont_vueltas1)>0){printf("nrestando");/*nrestando1();*/ /*if(cota2-cota1==btod8(scont_vueltas))  else {;}*/}
																						  else { parame(Ldicc1[cmldicc1+1],8);if(u-btod(zsstr)<=0){while(concm>=0){DDD1[concm]=btod(ysstr);concm--;}
																						                                                  concm=15;while(concm>=0){level2[concm]=DDD1[concm];DDD1[concm]=0;concm--;} 
																						                                       concm=btod(zsstr)-u;while(concm>=0){DDD1[concm]=btod(ysstr);concm--;}} 
																						                                      else {printf("terminando");cmm=0;while(cmm<=btod(zsstr)){DDD1[u]=btod(ysstr);u=u-1 ;cmm++;} cmldicc1=cmldicc1-2;} validarepetic1();mibcorrespond1();}}                   
									                                                                                                    											    
/*zparame(Ldicc1[cmldicc1],8);strncpy(scont_caras1,ozsstr,2);cmm=6; while(cmm<=7){scont_vueltas1[cmm]=scont_caras1[cmm-6];cmm++;}
zparame(Ldicc1[cmldicc1+1],8);
dicc_cont_vueltas1=btod8(scont_vueltas1); parame(cont_falsoa1,8); strncpy(scont_falsoa1,zsstr,4); 
parame(cont_rep1,8);  strncpy(scont_rep1,zsstr,4); 
cmm=4; while(cmm<=7){scont_falsoa1[cmm]=scont_rep1[cmm-4];cmm++;}dicc_cont_falsoa1=btod8(scont_falsoa1);
*/																				                                   	                                             
        	                          	            			                 /*buscara=1;while (buscara<=16){
        	                          	            			                               if (aconx[buscara]==1){if (AAA1[buscara]==elementos1) repeticiones=u-elementos1;}
        	                          	            			                             else {if (AAA1[buscara]==elementos1) repeticiones=u-elementos1;}buscara=buscara+1;}		                 
        	                          	            			                 if (el[intocable1]==elementos1){;}else{if (el[intocable1]==elementos1+1){;}}
         	                          	            			                 buscarb=1;noveo=elementos1;        	                          	            			                
        	                          	            			                 while (noveo>1){
        	                          	            			                   while (buscarb<=16){
        	                          	            			                      if (AAA1[buscarb]==-1) {;}       	                          	            			                      
        	                          	            			                      else{if (AAA1[buscarb]>noveo){;}
        	                          	            			                           else{if (AAA1[buscarb]==noveo)buscarb=18;}}
        	                          	            			                      buscarb=buscarb+1;}
        	                          	            			                   if (buscarb==17){  
																					   bulb4("z");}
        	                          	            			                   }
        	                          	            			                   if ((aconx[masalto1]==1) & (AAA1[masalto1]==1) || forget==1)noveo=0;else noveo=noveo-1;*/
        	                          	            			                 }
        	                          	            			                 if (ooo==16){        	                          	            			                 
                                  	                                                if (BBB1[intocable1]-(BBB1[masalto1]+elementos1)<elementos1){
                                  	                                                   DDD1[u]=BBB1[intocable1]-(BBB1[masalto1]+noveo);mibcorrespond();AAA1[intocable1]=DDD1[u];u=u-1;DDD1[u]=elementos1;elementos1=elementos1-1;forget=1;}
                                  	                                                else {  if(jju1==0) {jji1=5;jja=3;} else {jji1=6;jja1=2;}   cmldicc1=15;while((Ldicc1[cmldicc1]<=0)&(Ldicc1[cmldicc1-1]<=0)){cmldicc1=cmldicc1-2;if(cmldicc1==1)cmldicc1=0;} printf("cmldicc1 %d ",cmldicc1); getchar();
																						    zparame(Ldicc1[cmldicc1],8);while(cmm<=strlen(scont_vueltas1)){scont_vueltas1[cmm]=1;cmm++;} cmm=2; while(cmm<=7){scont_vueltas1[cmm]=oysstr[cmm-2];cmm++;} printf("paso por aki_____________");
																						    if(btod8(scont_vueltas1)>0){nrestando1();/*if(cota2-cota1==btod8(scont_vueltas))  else {;}*/}
																						    else { parame(Ldicc1[cmldicc1+1],8);if(u-btod(zsstr)<=0){while(concm>=0){DDD1[concm]=btod(ysstr);concm--;}concm=15;while(concm>=0){level2[concm]=DDD1[concm];DDD1[concm]=0;} contcm--;concm=btod(zsstr)-u;while(concm>=0){DDD1[concm]=btod(ysstr);}}
																						                                              else {cmm=0;while(cmm<=btod(zsstr)){DDD1[u]=btod(ysstr);u=u-1 ;cmm++;} cmldicc1=cmldicc1-2;} }                    
																						                                              
																						}      
                                  	                                             }
                                  	                                             
                                  	                                           }
                                  	                                         }
                                  	                                      }
                                  	                                  } 
                                  	                               }
                                  	                           }
    						                                else{
    						                                   if (repeticiones1==0){
    						                                      if (AAA1[bye]==-1){;}
    						                                      else{ 
    						                                         if (aconx[bye]==1){ 
    						                                            if (AAA1[bye]==u){puzzl=masalto;masalto=bye;BBB1[bye]=BBB1[intocable1]-u;AAA1[intocable1]=u;}}
    						                                         else{if (AAA1[bye]==u){puzzl=masalto;masalto=bye;BBB1[bye]=BBB1[intocable1]-u;AAA1[intocable1]=u;}}}
    						                                   }}} 
    						                       bye=bye+1;} 
    						                       if (bye==16){   printf("bye==16"); 
    						                          if ((BBB1[intocable1]-BBB1[masalto1])-elementos1<=u){printf(" rellenando11 ");
      
      
      
                                  	                                                      cmldicc1=15;while((Ldicc1[cmldicc1]<=0)&(Ldicc1[cmldicc1-1]<=0)){cmldicc1=cmldicc1-2;} getchar(); zparame(Ldicc1[cmldicc1-1],8);																				  	  
																					  	  if(btod8(xsstr/*oysstr*/)/*==63*/>=252){printf("podemos empezar a leer y recomponer"); parame(Ldicc1[cmldicc1+0],8);
																					  	                                          if(btod(ysstr)==intocable1){masbajo1=btod(zsstr); ael1[masbajo1]=elementos;validarepetic1(); } 
																					  	                                          
																					  	                                          else{cmm=cmldicc1; while(cmm>=0){parame(Ldicc1[cmm],8);if(btod(ysstr)==intocable1){zparame(Ldicc1[cmldicc1-1],8);
																					  	                                          if(btod8(xsstr>=252)){;} else {if(btod8(xsstr)>0){printf("nrestando_?");concm=0;
																					  	                                          while(concm<=btod(zsstr)){printf("concm %d ",concm);DDD1[u]=btod(ysstr);u=u-1 ;concm++;}getchar();}}}
																					  	                                                                                       cmm=cmm-2;} if (cmm==-1)rellenando11();} } 
																					  	  else{
																					  	  if(btod8(xsstr/*oysstr*/)/*==63*/>0){printf("nrestando");/*nrestando1();*//*if(cota2-cota1==btod8(scont_vueltas))  else {;}*/getchar();}
																					  	  /*  */
																					  	  /*else{zparame(Ldicc1[cmldicc1],8);cmm=0;while(cmm<=7){scont_vueltas1[cmm]=1;cmm++;} cmm=2; while(cmm<=7){scont_vueltas1[cmm]=xsstr[cmm-2];cmm++;}*/ 
																						  
																						  else {printf("paso por aki_____________"); parame(Ldicc1[cmldicc1+1],8);if(u-btod(zsstr)<=0){while(concm>=0){DDD1[concm]=btod(ysstr);concm--;}
																						                                                  concm=15;while(concm>=0){level2[concm]=DDD1[concm];DDD1[concm]=0;concm--;} 
																						                                       concm=btod(zsstr)-u;while(concm>=0){DDD1[concm]=btod(ysstr);concm--;}} 
																						                                      else {printf("terminando");cmm=0;while(cmm<=btod(zsstr)){printf("cmm %d ",cmm);DDD1[u]=btod(ysstr);u=u-1 ;cmm++;} cmldicc1=cmldicc1-2;}	
																						                                       }                
																															validarepetic1();  }	mibcorrespond1();									        						                            
    						                            /*rellenando11();*/forget=1;elementos1=elementos1-1;repeticiones1=repeticiones1-1;}
    						                          else{
    						                            if (repeticiones1==0){    						                               
    						                               if (u==elementos1){
    						                                  if (BBB1[intocable1]>CCC1[u]){             u=ggu;candyy=1;elementos1=elementos1-1;
									                              if (BBB1[intocable1]-CCC1[candy]>elementos1){;} } 																	  
    						                                  else{rellenando2();if (salvisto==1){;}}
    						                               }
    						                            else{                   if (BBB1[intocable1]-CCC1[candy]>elementos1){;}elementos1=elementos1-1;candyy=1;}
    						                            }}
    						                       }
    						                    } 
                                             
                                             if (forget==1) bxx=1;
			                                 if ((BBB1[intocable1]>CCC1[u]) & (CCC1[u]>-1)){estironveces=1;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+1;}}
                                        else{printf("esquiva los ciclos inferiores y entro a lame1");lame=2;cota1=BBB1[masalto1];cota2=BBB1[intocable1];lame1();elementos1=elementos1-1;bxx=1;}
                                   }}}                    	
                          else{
                             if (BBB1[intocable1]-BBB1[masalto1]<=0){ printf(" ciclo donde no deberia entrar1 bxx %d ",bxx);getchar();
                                if (bxx==gelementos1) u=instanciasdelemento+1;                                    
                                else{if (BBB1[intocable1]<=CCC1[u]){ 
                                      if (repeticiones1<=0){DDD1[u]=CCC1[u];bxx=1;}
                                      else{if (u>1){
                                          raquet=1;while (raquet<=15){if (a1conx[raquet]==1){if (AAA1[raquet]==u){DDD1[u]=u;raquet=18;}}else{if (AAA1[raquet]==u){DDD1[u]=u;raquet=18;}}raquet=raquet+1;}
                                          if (raquet==17){AAA1[intocable1]=u;DDD1[u]=u;elementos1=elementos1-1;}}}}                                         
                                   else{if (BBB1[intocable1]==1)DDD1[u]=1;}u=1; }  bxx=0; printf("bxx: %d ",bxx); }                                                                 
                                }}  if(nobxx==1){bxx=bxx-1;nobxx=0;}  u=u-1;/* bxx=bxx-1;*/ printf("bxx: %d ",bxx);printf("u1: %d ",u);kienera1=intocable1;intocable1=masalto1;MINMAX1();printf("intocable1 masalto1 %d %d",BBB1[intocable1],BBB1[masalto1]);printf(" ciclo donde deberia estar ");}                                         
                   kienera1=intocable1; u=u-1; u=instanciasdelemento1; 
 }return 0;}
int sacando1(){ int contcm=5,concm=15;while(contcm>=0){sacalevel21();getchar();restando1();
/*concm=15;while(concm>=0){concm--;}*/contcm--;}getchar();getchar();return 0;}	
                                      	    	  
void revisa1(){   
    	                           					   	                                  cvb=1;while (cvb<=16){
    	                           					   	                                        if (aconx[cvb]==1){
    	                           					   	                                           if (AAA[cvb]==elementos){
    	                           					   	                                              if (kienera==cvb)cvb=18;
    	                           					   	                                              else{if((BBB[intocable]-BBB[masalto])-elementos==DDD[u+1]){;}}}}
    	                           					   	                                     cvb=cvb+1;} 
    	                           					   	                                  if (cvb==17){;}
    	                           					   	                                  else{if (CCC[u]>u){AAA[intocable]=elementos;DDD[u]=elementos;}} 
    	                           					   	                                         
}
int rellenadiccn(){char scont_vueltas[]="        ",zscont_vueltas[]="00000000",scont_caras[]="  ",scont_falsoa[]="        ",scont_rep[4]="    ",dicc9a[8]="        ";int cm=0,ccm=0,cmm=0,cdm=0,cdma=0,dicc_cont_vueltas=0,dicc_cont_falsoa=0,xdicc_cont_vueltas=0,xdicc_cont_falsoa=0;trcontaray=0;printf("rellenadiccn"); 
if (ndos==0){   
if(cont_rep>1 || glentra==-1){ if(jju==0) {jji=5;jja=3;} else {jji=6;jja=2;} printf("cont_rep %d ",cont_rep);   
if(cont_falsoa==-1) { zparame(cont_vueltas,8);/*strncpy(scont_vueltas,oysstr,jji);*/cmm=0; while(cmm<=5){scont_vueltas[cmm]=xsstr[cmm];cmm++;}printf("scont_vueltas:%c %c %c %c %c %c %c %c \n",scont_vueltas[0],scont_vueltas[1],scont_vueltas[2],scont_vueltas[3],scont_vueltas[4],scont_vueltas[5],scont_vueltas[6],scont_vueltas[7]);cont_caras=3;
                      zparame(cont_caras,8);strncpy(scont_caras,ozsstr,jja);cmm=6; while(cmm<=7){scont_vueltas[cmm]=scont_caras[cmm-6];cmm++;} printf("scont_vueltas:%c %c %c %c %c %c %c %c \n",scont_vueltas[0],scont_vueltas[1],scont_vueltas[2],scont_vueltas[3],scont_vueltas[4],scont_vueltas[5],scont_vueltas[6],scont_vueltas[7]);
                      dicc_cont_vueltas=btod8(scont_vueltas);
                      parame(gglentra,8);  strncpy(scont_falsoa,zsstr,4); printf("scont_falsoa:%c %c %c %c %c %c %c %c \n",scont_falsoa[0],scont_falsoa[1],scont_falsoa[2],scont_falsoa[3],scont_falsoa[4],scont_falsoa[5],scont_falsoa[6],scont_falsoa[7]);printf("cont_rep: %d ", cont_rep);
                      parame(cont_rep,8);  strncpy(scont_rep,zsstr,4);     cmm=4; while(cmm<=7){scont_falsoa[cmm]=scont_rep[cmm-4];cmm++;}printf("scont_falsoa:%c %c %c %c %c %c %c %c \n",scont_falsoa[0],scont_falsoa[1],scont_falsoa[2],scont_falsoa[3],scont_falsoa[4],scont_falsoa[5],scont_falsoa[6],scont_falsoa[7]);dicc_cont_falsoa=btod8(scont_falsoa);
	                 printf("scont_vueltas:%c %c %c %c %c %c %c %c \n",scont_vueltas[0],scont_vueltas[1],scont_vueltas[2],scont_vueltas[3],scont_vueltas[4],scont_vueltas[5],scont_vueltas[6],scont_vueltas[7]);
	                 cm=0;while(cm<=15){if(((Ldicc[cm][ax]!=3) & (Ldicc[cm][ax]<252)) & (Ldicc[cm+1][ax]==dicc_cont_falsoa))  {xsumalo(cm); 	                 
	                 parame(xBBB[cm],8); /*strncpy(scont_vueltas,zsstr,jji);*/cmm=2; while(cmm<=7){scont_vueltas[cmm-2]=xsstr[cmm];cmm++;};cmm=6; while(cmm<=7){scont_vueltas[cmm]=scont_caras[cmm-6];cmm++;}
					 dicc_cont_vueltas=btod8(scont_vueltas);Ldicc[cm][ax]=dicc_cont_vueltas;	                 
	                 cm=18;xverlo();}  cm=cm+2;}}  
else                { zparame(cont_vueltas,8);/*strncpy(scont_vueltas,xsstr,jji);*/cmm=0; while(cmm<=7){scont_vueltas[cmm]=xsstr[cmm];cmm++;}printf("scont_vueltas:%c %c %c %c %c %c %c %c\n",scont_vueltas[0],scont_vueltas[1],scont_vueltas[2],scont_vueltas[3],scont_vueltas[4],scont_vueltas[5],scont_vueltas[6],scont_vueltas[7]);
                      zparame(cont_caras,8);strncpy(scont_caras,zsstr,jja);cmm=6; while(cmm<=7){scont_vueltas[cmm]=scont_caras[cmm-6];cmm++;} printf("scont_vueltas:%c %c %c %c %c %c %c %c \n",scont_vueltas[0],scont_vueltas[1],scont_vueltas[2],scont_vueltas[3],scont_vueltas[4],scont_vueltas[5],scont_vueltas[6],scont_vueltas[7]);dicc_cont_vueltas=btod8(scont_vueltas); 
                      parame(cont_falsoa,8); strncpy(scont_falsoa,zsstr,4); printf("scont_falsoa:%c %c %c %c %c %c %c %c \n",scont_falsoa[0],scont_falsoa[1],scont_falsoa[2],scont_falsoa[3],scont_falsoa[4],scont_falsoa[5],scont_falsoa[6],scont_falsoa[7]);printf("cont_rep: %d ", cont_rep);
                      parame(cont_rep,8);    strncpy(scont_rep,zsstr,4);     cmm=4; while(cmm<=7){scont_falsoa[cmm]=scont_rep[cmm-4];cmm++;} printf("scont_falsoa:%c %c %c %c %c %c %c %c \n",scont_falsoa[0],scont_falsoa[1],scont_falsoa[2],scont_falsoa[3],scont_falsoa[4],scont_falsoa[5],scont_falsoa[6],scont_falsoa[7]);dicc_cont_falsoa=btod8(scont_falsoa);
	                 printf("scont_vueltas:%c %c %c %c %c %c %c %c \n",scont_vueltas[0],scont_vueltas[1],scont_vueltas[2],scont_vueltas[3],scont_vueltas[4],scont_vueltas[5],scont_vueltas[6],scont_vueltas[7]);
	                 cm=0;while(cm<=15) {if(((Ldicc[cm][ax]!=3) & (Ldicc[cm][ax]<252)) & (Ldicc[cm+1][ax]==dicc_cont_falsoa))    {xsumalo(cm);                 
	                 parame(xBBB[cm],8); /*strncpy(scont_vueltas,zsstr,jji);*/cmm=2; while(cmm<=7){scont_vueltas[cmm-2]=xsstr[cmm];cmm++;};cmm=6; while(cmm<=7){scont_vueltas[cmm]=scont_caras[cmm-6];cmm++;} 
					 dicc_cont_vueltas=btod8(scont_vueltas);Ldicc[cm][ax]=dicc_cont_vueltas;	                	                 
	                 cm=18; xverlo();}  cm=cm+2;}} if (cm==16){   if (xcont_d<16) {  printf("xcont_d_ %d ",xcont_d);          verlo();       
if(cont_falsoa==-1) {Ldicc[xcont_d][ax]=dicc_cont_vueltas;Ldicc[xcont_d+1][ax]=dicc_cont_falsoa; printf("no_encontro:%d %d %d %d %d %d %d\n",xcont_d,Ldicc[cont_d][ax],Ldicc[cont_d+1][ax],cont_vueltas, cont_caras, gglentra, cont_rep);} 
else                {Ldicc[xcont_d][ax]=dicc_cont_vueltas;Ldicc[xcont_d+1][ax]=dicc_cont_falsoa; printf("no_encontro:%d %d %d %d %d %d %d\n",xcont_d,Ldicc[cont_d][ax],Ldicc[cont_d+1][ax],cont_vueltas, cont_caras, gglentra, cont_rep);}
printf("ldicc:%d %d %d %d \n",cont_vueltas, cont_caras, cont_falsoa, cont_rep);} xcont_d=xcont_d+2; /*else{;}*/  }  }  }  
if (xcont_d>16 || ndos==1){printf("xcont_d__o__ndos %d  %d",xcont_d,ndos); verlo();  
cdm=0;while(cdm<=15) {if (xBBB[cdm]>-1){zparame(xBBB[cdm],8); strncpy(zscont_vueltas,xsstr,jji1);ccm=6; while(ccm<=7){zscont_vueltas[ccm]=scont_caras[ccm-6];ccm++;} 
	                printf("scont_vueltas: %c%c%c%c%c%c%c%c\n",zscont_vueltas[0],zscont_vueltas[1],zscont_vueltas[2],zscont_vueltas[3],zscont_vueltas[4],zscont_vueltas[5],zscont_vueltas[6],zscont_vueltas[7]);
                    xdicc_cont_vueltas=btod8(zscont_vueltas);Ldicc[cdm][ax]=xdicc_cont_vueltas;printf("se_sumo_aqui_cm: %d",cdm);}printf("cdm: %d",cdm);cdm++;} xverlo();  verlo();  
  printf("contaray %d",contaray);  trcontaray=1;if(contaray==0){cm=0;if ((Ldicc[cm]>=0) & (Ldicc[cm+1]>=0)) {/* if(bwf0[0]>-1) */
	                                                   while (cm<=15){bwf0[cm][ax]=Ldicc[cm][ax];cm=cm+1;} subi=1;}if(ndos==1){mitaad=0;dicclleno=1;cont_vueltas=cont_vueltas+1;}}                                           
                                           else if(contaray==1){cm=0;if ((Ldicc[cm]>=0) & (Ldicc[cm+1][ax]>=0)) {
											   cmm=0;cm=0;if(bwf0[8][ax]==-1){cm=8;while (cm<=15){bwf0[cm][ax]=Ldicc[cm][ax];cm++;} cm=0;while (cm<=7){bwf1[cm][ax]=Ldicc[cm][ax];cm++;} }/*{while (cm<=15){ if(cmm==15)cmm=0;else {if(cm<8){cmm=cmm+8;bwf0[cmm]=Ldicc[cm];} else bwf1[cmm]=Ldicc[cm];}verlo();cm=++;cmm=++;}}*/
                                                                     else {while (cm<=15){bwf1[cm][ax]=Ldicc[cm][ax];cm++;}}
											          /*while (cm<=15){bwf1[cm]=Ldicc[cm];cm=cm+1;}*/ subi=1;}            mitaad=0;dicclleno=1;cont_vueltas=cont_vueltas+1;}								                                           
                                if(ndos==0){if(acumulador>=511)contaray++;xcont_d=0;}
                               else {xcont_d=cont_d;printf("se lleno ldicc pendiente %d ",xcont_d);if(trigg_ldicc==1){Ldicc[xcont_d][ax]=dicc_cont_vueltas;Ldicc[xcont_d+1][ax]=dicc_cont_falsoa;xcont_d=xcont_d+2;}}
                               cmm=0;while(cmm<=15){Ldicc[cmm][ax]=-1;cmm=cmm+1;} verlo();/*validar si hay gldicc (poner un trig para saber si quedo pendiente llenar un ldicc[])...tambien cuando es rellenallevel y cuando es listolevel2  */
 verlo();
} return 0;                                      
}   
                                
int rellenadicc1n(){char scont_vueltas1[]="        ",zscont_vueltas1[]="00000000",scont_caras1[]="  ",scont_falsoa1[]="        ",scont_rep1[4]="    ",dicc19a[8]="        ";int ccm=0,cm=0,cmm=0,cdm=0,cdma=0,dicc_cont_vueltas1=0,dicc_cont_falsoa1=0,xdicc_cont_vueltas1=0,xdicc_cont_falsoa1=0;trcontaray=0;printf("rellenadicc1n");
if (ndos==0){    
if(cont_rep1>1 || glentra1==-1){ if(jju1==0) {jji1=5;jja1=3;} else {jji1=6;jja1=2;} printf("cont_rep1 %d ",cont_rep1);      
if(cont_falsoa1==-1){zparame(cont_vueltas1,8);/*strncpy(scont_vueltas1,xsstr,jji1);*/cmm=0; while(cmm<=7){scont_vueltas1[cmm]=xsstr[cmm];cmm++;}printf("scont_vueltas1:%c %c %c %c %c %c %c %c\n",scont_vueltas1[0],scont_vueltas1[1],scont_vueltas1[2],scont_vueltas1[3],scont_vueltas1[4],scont_vueltas1[5],scont_vueltas1[6],scont_vueltas1[7]);cont_caras1=3;                             
                     zparame(cont_caras1,8);strncpy(scont_caras1,ozsstr,jja1);cmm=6; while(cmm<=7){scont_vueltas1[cmm]=scont_caras1[cmm-6];cmm++;} printf("scont_vueltas1:%c %c %c %c %c %c %c %c\n",scont_vueltas1[0],scont_vueltas1[1],scont_vueltas1[2],scont_vueltas1[3],scont_vueltas1[4],scont_vueltas1[5],scont_vueltas1[6],scont_vueltas1[7]);      
                     dicc_cont_vueltas1=btod8(scont_vueltas1);
                     parame(gglentra1,8);   strncpy(scont_falsoa1,zsstr,4); printf("scont_falsoa1:%c %c %c %c \n",scont_falsoa1[0],scont_falsoa1[1],scont_falsoa1[2],scont_falsoa1[3]);printf("cont_rep1: %d ", cont_rep1); 
                     parame(cont_rep1,8);    strncpy(scont_rep1,zsstr,4);  cmm=4; while(cmm<=7){scont_falsoa1[cmm]=scont_rep1[cmm-4];cmm++;} printf("scont_rep1:%c %c %c %c \n",scont_rep1[0],scont_rep1[1],scont_rep1[2],scont_rep1[3]);  printf("scont_falsoa1:%c %c %c %c %c %c %c %c \n",scont_falsoa1[0],scont_falsoa1[1],scont_falsoa1[2],scont_falsoa1[3],scont_falsoa1[4],scont_falsoa1[5],scont_falsoa1[6],scont_falsoa1[7]);
                     dicc_cont_falsoa1=btod8(scont_falsoa1);printf("scont_vueltas1:%c %c %c %c %c %c %c %c \n",scont_vueltas1[0],scont_vueltas1[1],scont_vueltas1[2],scont_vueltas1[3],scont_vueltas1[4],scont_vueltas1[5],scont_vueltas1[6],scont_vueltas1[7]); 	                     
	                 cm=0;while(cm<=15){if(((Ldicc1[cm][ax]!=3) & (Ldicc1[cm][ax]<252)) & (Ldicc1[cm+1][ax]==dicc_cont_falsoa1))  {xsumalo1(cm);
	                 parame(xBBB1[cm],8);/*strncpy(scont_vueltas1,xsstr,jji1);*/cmm=2; while(cmm<=7){scont_vueltas1[cmm-2]=xsstr[cmm];cmm++;}; cmm=6; while(cmm<=7){scont_vueltas1[cmm]=scont_caras1[cmm-6];cmm++;}              
                     /*parame(cont_rep1,8);   strncpy(scont_rep1,zsstr,4);    cmm=4; while(cmm<=7){scont_falsoa1[cmm]=scont_rep1[cmm-4];cmm++;}*/
                     printf("scont_falsoa1:%c %c %c %c %c %c %c %c \n",scont_falsoa1[0],scont_falsoa1[1],scont_falsoa1[2],scont_falsoa1[3],scont_falsoa1[4],scont_falsoa1[5],scont_falsoa1[6],scont_falsoa1[7]);	                 
	                 cm=18;xverlo();}    cm=cm+2;}}    
else                {zparame(cont_vueltas1,8);/*strncpy(scont_vueltas1,xsstr,jji1);*/ cmm=0; while(cmm<=7){scont_vueltas1[cmm]=xsstr[cmm];cmm++;};printf("scont_vueltas1:%c %c %c %c %c %c %c %c\n",scont_vueltas1[0],scont_vueltas1[1],scont_vueltas1[2],scont_vueltas1[3],scont_vueltas1[4],scont_vueltas1[5],scont_vueltas1[6],scont_vueltas1[7]);                           
                     zparame(cont_caras1,8);strncpy(scont_caras1,ozsstr,jja1);cmm=6; while(cmm<=7){scont_vueltas1[cmm]=scont_caras1[cmm-6];cmm++;}  printf("scont_vueltas1:%c %c %c %c %c %c %c %c\n",scont_vueltas1[0],scont_vueltas1[1],scont_vueltas1[2],scont_vueltas1[3],scont_vueltas1[4],scont_vueltas1[5],scont_vueltas1[6],scont_vueltas1[7]);     
                     dicc_cont_vueltas1=btod8(scont_vueltas1);
                     parame(cont_falsoa1,8); strncpy(scont_falsoa1,zsstr,4); printf("scont_falsoa1:%c %c %c %c \n",scont_falsoa1[0],scont_falsoa1[1],scont_falsoa1[2],scont_falsoa1[3]);printf("cont_rep1: %d ", cont_rep1); 
                     parame(cont_rep1,8);    strncpy(scont_rep1,zsstr,4);  cmm=4; while(cmm<=7){scont_falsoa1[cmm]=scont_rep1[cmm-4];cmm++;} printf("scont_rep1:%c %c %c %c \n",scont_rep1[0],scont_rep1[1],scont_rep1[2],scont_rep1[3]);   printf("scont_falsoa1:%c %c %c %c %c %c %c %c \n",scont_falsoa1[0],scont_falsoa1[1],scont_falsoa1[2],scont_falsoa1[3],scont_falsoa1[4],scont_falsoa1[5],scont_falsoa1[6],scont_falsoa1[7]);
                     dicc_cont_falsoa1=btod8(scont_falsoa1);printf("scont_vueltas1:%c %c %c %c %c %c %c %c \n",scont_vueltas1[0],scont_vueltas1[1],scont_vueltas1[2],scont_vueltas1[3],scont_vueltas1[4],scont_vueltas1[5],scont_vueltas1[6],scont_vueltas1[7]);
	                 cm=0;while(cm<=15){if(((Ldicc1[cm][ax]!=3) & (Ldicc1[cm][ax]<252)) & (Ldicc1[cm+1][ax]==dicc_cont_falsoa1))  {xsumalo1(cm);
	                 parame(xBBB1[cm],8);/*strncpy(scont_vueltas1,xsstr,jji1);*/cmm=2; while(cmm<=7){scont_vueltas1[cmm-2]=xsstr[cmm];cmm++;}; cmm=6; while(cmm<=7){scont_vueltas1[cmm]=scont_caras1[cmm-6];cmm++;}                 	                   
                     /*parame(cont_rep1,8);   strncpy(scont_rep1,zsstr,4);   cmm=4; while(cmm<=7){scont_falsoa1[cmm]=scont_rep1[cmm-4];cmm++;}*/ 
                     printf("scont_falsoa1:%c %c %c %c %c %c %c %c \n",scont_falsoa1[0],scont_falsoa1[1],scont_falsoa1[2],scont_falsoa1[3],scont_falsoa1[4],scont_falsoa1[5],scont_falsoa1[6],scont_falsoa1[7]);	                 
	                 cm=18;xverlo();}    cm=cm+2;} }  if (cm==16){   if (xcont_d1<16) { printf("xcont_d1_ %d ",xcont_d);    verlo();            
if(cont_falsoa1==-1){Ldicc1[xcont_d1][ax]=dicc_cont_vueltas1;Ldicc1[xcont_d1+1][ax]=dicc_cont_falsoa1; printf("no_encontro_falso1_-1:%d %d %d %d %d %d %d\n",cont_d1,Ldicc1[cont_d1][ax],Ldicc1[cont_d1+1][ax],cont_vueltas1, cont_caras1, gglentra1, cont_rep1);}
else                {Ldicc1[xcont_d1][ax]=dicc_cont_vueltas1;Ldicc1[xcont_d1+1][ax]=dicc_cont_falsoa1; printf("no_encontro_falso1 :%d %d %d %d %d %d %d\n",cont_d1,Ldicc1[cont_d1][ax],Ldicc1[cont_d1+1][ax],cont_vueltas1, cont_caras1, cont_falsoa1, cont_rep1);}
printf("Ldicc1:%d %d %d %d \n",cont_vueltas1, cont_caras1, cont_falsoa1, cont_rep1);} xcont_d1=xcont_d1+2;  /*else{;}*/  }   }   }
if (xcont_d1>16 || ndos==1){ printf("xcont_d1__o__ndos %d  %d",xcont_d1,ndos);/* validar si 63 entonces xcont_d1=xcont_d1+2;*/verlo();
cdm=0;while(cdm<=15) {if (xBBB1[cdm]>-1){zparame(xBBB1[cdm],8);strncpy(zscont_vueltas1,xsstr,jji1);ccm=6; while(ccm<=7){zscont_vueltas1[ccm]=scont_caras1[ccm-6];ccm++;} 
	                printf("scont_vueltas1: %c%c%c%c%c%c%c%c\n",zscont_vueltas1[0],zscont_vueltas1[1],zscont_vueltas1[2],zscont_vueltas1[3],zscont_vueltas1[4],zscont_vueltas1[5],zscont_vueltas1[6],zscont_vueltas1[7]);
	                xdicc_cont_vueltas1=btod8(zscont_vueltas1);Ldicc1[cdm][ax]=xdicc_cont_vueltas1;printf("se_sumo_aqui_cm_1: %d",cdm);}printf("cm___ %d ",cdm);cdm++;}xverlo(); verlo();                                                 
printf("contaray1 %d",contaray1);trcontaray=1;if(contaray1==0){cm=0;if ((Ldicc1[cm][ax]>=0) & (Ldicc1[cm+1]>=0)) {/* if(bwf10[0]>-1) */
	                                             while (cm<=15){bwf10[cm][ax]=Ldicc1[cm][ax];cm=cm+1;} subi1=1;}if(ndos==1){mitaad=1;dicclleno1=1;cont_vueltas1=cont_vueltas1+1;}}                                              
                                         else if(contaray1==1){cm=0;if ((Ldicc1[cm]>=0) & (Ldicc1[cm+1]>=0)) {
											 cmm=0;cm=0;if(bwf10[8][ax]==-1){cm=8;while (cm<=15){bwf10[cm][ax]=Ldicc1[cm][ax];cm++;} cm=0;while (cm<=7){bwf11[cm][ax]=Ldicc1[cm];cm++;} }/*{while (cm<=15){ if(cmm==15)cmm=0;else {if(cm<8){cmm=cmm+8;bwf0[cmm]=Ldicc[cm];} else bwf1[cmm]=Ldicc[cm];}verlo();cm=++;cmm=++;}}*/
                                                                  else {while (cm<=15){bwf11[cm][ax]=Ldicc[cm][ax];cm++;}}
											  /*while (cm<=15){bwf11[cm]=Ldicc1[cm];cm=cm+1;}*/ subi1=1;}            mitaad=1;dicclleno1=1;cont_vueltas1=cont_vueltas1+1;}                                               
                               if(ndos==0){if(acumulador1>=511)contaray1++;xcont_d1=0;}
                              else{xcont_d1=cont_d1;printf("se lleno ldicc1 pendiente? %d ",xcont_d1);if(trigg_ldicc1==1){Ldicc1[xcont_d1][ax]=dicc_cont_vueltas1;Ldicc1[xcont_d1+1][ax]=dicc_cont_falsoa1;xcont_d1=xcont_d1+2;}} 
                              cmm=0;while(cmm<=15){Ldicc1[cmm][ax]=-1;cmm=cmm+1;}verlo(); /*validar si hay gldicc (poner un trig para saber si quedo pendiente llenar un ldicc[])...tambien cuando es rellenallevel y cuando es listolevel2 */
    verlo();
} return 0;                                     
} 
int zsumalo(aex){int Ax=aex,jAx=0,jAx1=0;printf("Ax: %d\n",Ax); 
	if (BBB[Ax]==-1){if (uno==0){uno=1;AAA[Ax]=1;BBB[Ax]=1;mayor=1;masalto=1;vmicero=1;acumulador=1;mgax=0;mgbx=0;acmasalto=0;gax=AAA[Ax];}
	              else if ((AAA[Ax]==masalto) & (masalto>0) ){if (masalto+AAA[Ax]>(136+acmasalto)) {acmasalto=acumulador;masalto=1;}
					  AAA[Ax]=AAA[Ax]-1;/*aconx[gax]=Ax;*/printf("gAx: %d\n",gax);gax=AAA[Ax];BBB[Ax]=acmasalto+masalto+AAA[Ax];mgax=0;mgbx=0;barajea(Ax);		
					  }else {if (masalto+AAA[Ax]>(136+acmasalto)) {acmasalto=acumulador;masalto=1;}else mayor=mayor+1;					         
					         AAA[Ax]=mayor;mgax=0;mgbx=0; masalto=masalto+AAA[Ax];BBB[Ax]=acmasalto+masalto;vmicero=0;/*barajea(Ax);*/	
					   aconx[gax]=Ax;printf("gAx: %d\n",gax);gax=AAA[Ax];}acumulador=BBB1[Ax];cont_rep=1;tr=0;
	elementos=elementos+1;} else {if (AAA[Ax]==1) {if (masalto+AAA[Ax]>(136+acmasalto)) {acmasalto=acumulador;masalto=1;}erescero=1; if(vmicero==1) 
	                                                                                                                        {if(tr==1){BBB[Ax]=acmasalto+masalto+(mayor+1);tr=tr+1;}  
	                                                                                                                              else{if(tr>1){falsoa=0;cont_falsoa=falsoa;cont_rep=cont_rep+1;tr=tr+1;} else{BBB[Ax]=acmasalto+masalto+AAA[Ax];vmicero=1;}}printf("repeticion de uno: %d ",AAA[Ax]);}   
	                                                                                                           else{BBB[Ax]=acmasalto+masalto+(mayor+1);if(mayor<elementos){printf("error");}vmicero=1;tr=1;cont_rep=1;}mgax=0;mgbx=0;}
	  else {erescero=0;if (masalto+AAA[Ax]>(136+acmasalto)) {acmasalto=acumulador;masalto=1;}tr=1;AAA[Ax]=AAA[Ax]-1;   if(BBB1[Ax]>-1){if(BBB[Ax]+CCC[elementos]<(acmasalto+masalto+AAA[Ax])) {printf("menor lo tapan_en_n_elementos %d", elementos);cbv=0;while (cbv<=15){if(Ldicc[cbv]>-1){zparame(Ldicc[cbv],8);if(btod8(oysstr)==63){parame(Ldicc[cbv+1],8);if(btod8(ysstr)==Ax){cbv=16;};printf(" encontre un anterior yacumulador=63 ");}};cbv=cbv+2;}
	                                                                                                                                                                                           if(cbv==16){printf("contando la parte derecha"); cbv=0;while (cbv<=15){if(Ldicc[cbv]>-1){parame(Ldicc[cbv+1],8);printf(" contando %d ysstr %c%c%c%c ",Ldicc[cbv+1],ysstr[0],ysstr[1],ysstr[2],ysstr[3]);jAx1=0;while(jAx<=15){ /*if(aconx[jAx]==Ax){*/if(btod(zsstr)==aconx[jAx]){printf(" encontre un OBJETTIVO yacumulador=63 ");jAx=15;cbv=16;}jAx++;}}cbv=cbv+2;}
	                                                                                                                                                                                           if(cbv==16){yacumulador=63;cont_vueltas=252;cont_falsoa=Ax;jAx=0;while(jAx<=15){if(aconx[jAx]==Ax){gcont_rep=cont_rep;cont_rep=jAx;printf("encontre_jAx");jAx1=0;while(jAx1<=15){if(jAx1==jAx){;}else{if(aconx[jAx1]==aconx[Ax]){aconx[jAx1]=-1;jAx1=16;printf("limpie_aconx");}} jAx1++;}jAx=16;}jAx++;};printf(" yacumulador=63__con %d ",Ax);rellenadiccn();if(jAx>16){cont_rep=gcont_rep;}verlo();}}} else{yacumulador=0;}}
	                                                                                                            /*else{if(BBB[masbajo]+(CCC[elementos])<(acmasalto+masalto+AAA[Ax])) {printf("menor lo tapan");cbv=0;while (cbv<=15){if(Ldicc[cbv]>-1){zparame(Ldicc[cbv],8);if(btod8(oysstr)==63){parame(Ldicc[cbv+1],8);if(btod8(ysstr)==Ax){cbv=16;printf(" encontre un anterior yacumulador=63 ");}};cbv=cbv+2;}if(cbv==16){yacumulador=63;cont_vueltas=252;cont_falsoa=Ax;cont_rep=masbajo;printf(" yacumulador=63__con %d ",Ax);rellenadicc();verlod();}}}*/                          
	       if((gax==AAA[Ax]+1) & (gaax==Ax)){printf("este se repite________________mgax: %d\n",mgax1);if(mgax==1){cvb=0;while (cvb<=15){if (AAA[Ax]+gax==AAA[cvb]){BBB[Ax]=acmasalto+0+masalto+AAA[Ax];masalto=masalto+AAA[cvb];vmicero=0;printf("FALSOA: %d",AAA[cvb]);falsoa=cvb-0;rellenadiccn();cont_falsoa=falsoa;cont_rep=cont_rep+1;cvb=17;}
	                                         /*cbv=0;while (cbv<=15){printf("mayor : %d",mayor);if ((BBB[cbv]==-1) & (cbv+1==mayor+1)){mayor=mayor+1;AAA[cbv]=mayor;gax=AAA[cbv];mgax=0;mgbx=0; BBB[cbv]=acmasalto+masalto;}cbv++;}*/ 
											cvb++;}printf("cvb: %d",cvb);}/**/if(cvb==16){BBB[Ax]=acmasalto+masalto+AAA[Ax];gabx=0;printf("repeticion tricky no encontrada %d ",AAA[Ax]);barajea(Ax);}else if(cvb==18){printf("sumo de mas a: %d",AAA[Ax]);}    }	 		
		   else if (gax==AAA[Ax]+1 || gax==AAA[Ax]-1){BBB[Ax]=acmasalto+masalto+AAA[Ax];gabx=0;printf("valor se queda pegado** %d",AAA[Ax]);barajea(Ax);gax=AAA[Ax];gaax=Ax;} 
				else                     if (mgbx==1){if (gabx>=2){pultreyeno=ultreyeno;ultreyeno=Ax;BBB[Ax]=acmasalto+masalto+AAA[Ax];printf("valor_repetido_y_tapado %d",AAA[Ax]);barajea(Ax);} 
													 else{BBB[Ax]=acmasalto+masalto+AAA[Ax];if (pultreyeno==Ax)printf("tapado %d",Ax);pultreyeno=ultreyeno;ultreyeno=Ax;
													      cvb=0;while(cvb<=15){if (cvb==Ax){;}                                           /* antes de barajea se define quien tapa y despues de barajea el como lo tapa*/
													                         else if (AAA[cvb]==AAA[Ax]) {gabx=gabx+1;printf("Ax %d",Ax);if(yacumulador==63){;}else {yacumulador=63;cont_vueltas=252;cont_falsoa=Ax;gcont_rep=cont_rep;cont_rep=cvb;rellenadiccn();cont_rep=gcont_rep;barajea(cvb);printf("se barajeo cvb %d",cvb);cvb=16;}}cvb++;}}
													                         } 
									      else{printf("valorinic %d",AAA[Ax]);BBB[Ax]=acmasalto+masalto+AAA[Ax];pultreyeno=ultreyeno;ultreyeno=Ax;printf("mgbx %d",mgbx);printf("gabx %d",gabx);printf("valorz %d",AAA[Ax]);printf("BBB %d",BBB[Ax]);barajea(Ax);cont_rep=1;} verlo();aconx[gax]=Ax;gax=AAA[Ax];gaax=Ax;vmicero=0;mgax=1;mgbx=1;printf("Ax %d",Ax);printf("valor %d",AAA[Ax]);
	}}masalto=BBB[Ax]-acmasalto;acumulador=BBB[Ax];printf("acmasalto: %d\n",acmasalto);falsoa=Ax;cont_falsoa=falsoa;return(acumulador);}  
int zsumalo1(aex1){int Ax1=aex1,jAx=0,jAx1=0;printf("Ax1: %d\n",Ax1);   
	if (BBB1[Ax1]==-1){if (uno1==0){uno1=1;AAA1[Ax1]=1;BBB1[Ax1]=1;mayor1=1;masalto1=1;vmicero1=1;acumulador1=1;mgax1=0;mgbx1=0;acmasalto1=0;gax1=AAA1[Ax1];}
	              else if ((AAA1[Ax1]==masalto1) & (masalto1>0) ){if (masalto1+AAA1[Ax1]>(136+acmasalto1)) {acmasalto1=acumulador1;masalto1=1;}
					  AAA1[Ax1]=AAA1[Ax1]-1;/*a1conx[gax1]=Ax1;*/printf("gAx1_seg_condicion: %d\n",gax1);gax1=AAA1[Ax1];BBB1[Ax1]=acmasalto1+masalto1+AAA1[Ax1];mgax1=0;mgbx1=0;barajea1(Ax1);		
					  }else {if (masalto1+AAA1[Ax1]>(136+acmasalto1)) {acmasalto1=acumulador1;masalto1=1;}else mayor1=mayor1+1;AAA1[Ax1]=mayor1;
					   mgax1=0;mgbx1=0; masalto1=masalto1+AAA1[Ax1];BBB1[Ax1]=acmasalto1+masalto1;vmicero1=0;/*barajea1(Ax1);*/	 
					   a1conx[gax1]=Ax1;printf("gAx1: %d\n",gax1);gax1=AAA1[Ax1];}acumulador1=BBB1[Ax1];tr1=0;cont_rep1=1; 
	elementos1=elementos1+1;} else {if (AAA1[Ax1]==1) {if (masalto1+AAA1[Ax1]>(136+acmasalto1)) {acmasalto1=acumulador1;masalto1=1;}erescero1=1; if(vmicero1==1)
	                                                                                                                                   {if(tr1==1){BBB1[Ax1]=acmasalto1+masalto1+(mayor1+1);tr1=tr1+1;}
	                                                                                                                                          else{if(tr1>1){falsoa1=0;cont_falsoa1=falsoa1;cont_rep1=cont_rep1+1;tr1=tr1+1;} else{BBB1[Ax1]=acmasalto1+masalto1+AAA1[Ax1];vmicero1=1;}printf("repeticion de uno1: %d",AAA1[Ax1]);}}
	                                                                                                                     else{BBB1[Ax1]=acmasalto1+masalto1+(mayor1+1);if(mayor1<elementos1){printf("error");}vmicero1=1;tr1=1;cont_rep1=1;}mgax1=0;mgbx1=0;}
	  else {erescero1=0;if (masalto1+AAA1[Ax1]>(136+acmasalto1)) {acmasalto1=acumulador1;masalto1=1;}tr1=1;AAA1[Ax1]=AAA1[Ax1]-1; printf("mgbx1 %d gabx1 %d ",mgbx1,gabx1);if(BBB1[Ax1]>-1){if(BBB1[Ax1]+CCC1[elementos1]<(acmasalto1+masalto1+AAA1[Ax1])) {printf("menor1 lo tapan_en_n_elementos1 %d",elementos1);    cbv=0;while (cbv<=15){if(Ldicc1[cbv]>-1){zparame(Ldicc1[cbv],8);if(btod8(oysstr)==63){parame(Ldicc1[cbv+1],8);if(btod8(zsstr)==Ax1){cbv=16;printf(" encontre un anterior yacumulador=63 ");}}};cbv=cbv+2;}
	                                                                                                                                                                                                                                                       if(cbv>=16){printf("contando1 la parte derecha"); cbv=0;while (cbv<=15){if(Ldicc1[cbv]>-1){parame(Ldicc1[cbv+1],8);printf(" contando %d ysstr %c%c%c%c ",Ldicc[cbv+1],ysstr[0],ysstr[1],ysstr[2],ysstr[3]);jAx1=0;while(jAx1<=15){ /*if(a1conx[jAx]==Ax1){*/if(btod(zsstr)==a1conx[jAx1]){printf(" encontre un OBJETTIVO1 yacumulador=63 ");jAx1=15;cbv=16;}jAx1++;}}cbv=cbv+2;}
	                                                                                                                                                                                                                                                       if(cbv==16){yacumulador1=63;cont_vueltas1=252;cont_falsoa1=Ax1;jAx1=0;while(jAx1<=15){if(a1conx[jAx1]==Ax1){gcont_rep1=cont_rep1;cont_rep1=jAx1;printf("encontre_jAx1");jAx=0;while(jAx<=15){if(jAx==jAx1){;}else{if(a1conx[jAx]==a1conx[Ax1]){a1conx[jAx]=-1;jAx=16;printf("limpie_a1conx");}} jAx++;}jAx1=16;}jAx1++;};printf(" yacumulador1=63__con %d ",Ax1);rellenadicc1n();if(jAx1>16){cont_rep1=gcont_rep1;}verlo();}}} else{yacumulador1=0;}}
	                                                                                                                       /*else{if(BBB1[masbajo1]+(CCC1[elementos1])<(acmasalto1+masalto1+AAA1[Ax1])) {printf("menor1 lo tapan");cbv=0;while (cbv<=15){if(Ldicc1[cbv]>-1){zparame(Ldicc1[cbv],8);if(btod8(oysstr)==63){parame(Ldicc1[cbv+1],8);if(btod8(ysstr)==Ax1){cbv=16;}printf(" encontre un anterior yacumulador=63 ");}};cbv=cbv+2;}if(cbv==16){yacumulador1=63;cont_vueltas1=252;cont_falsoa1=Ax1;cont_rep1=masbajo1;printf(" yacumulador1=63__con %d ",Ax1);rellenadicc1();verlod();}}}*/                                                      
	       if((gax1==AAA1[Ax1]+1) & (gaax1==Ax1)){printf("este se repite________________mgax1: %d\n",mgax1);if(mgax1==1){cvb=0;while (cvb<=15){if (AAA1[Ax1]+gax1==AAA1[cvb]){BBB1[Ax1]=acmasalto1+0+masalto1+AAA1[Ax1];masalto1=masalto1+AAA1[cvb];vmicero1=0; printf("FALSOA1: %d",AAA1[cvb]);falsoa1=cvb-0;rellenadicc1n();cont_falsoa1=falsoa1;cont_rep1=cont_rep1+1;cvb=17;}
	                                              /*cbv=0;while (cbv<=15){printf("mayor1 : %d",mayor1);if ((BBB1[cbv]==-1) & (cbv+1==mayor1+1)){mayor1=mayor1+1;AAA1[cbv]=mayor1;gax1=AAA1[cbv];mgax1=0;mgbx1=0; BBB1[cbv]=acmasalto1+masalto1; }cbv++;}*/       
			                                      cvb++;}printf("cvb: %d",cvb);}/**/if(cvb==16){BBB1[Ax1]=acmasalto1+masalto1+AAA1[Ax1];gabx1=0;printf("repeticion1 tricky no encontrada %d",AAA1[Ax1]);barajea1(Ax1);}else if(cvb==18){printf("sumo de mas a: %d",AAA1[Ax1]);}         }
	       else if (gax1==AAA1[Ax1]+1 || gax1==AAA1[Ax1]-1){BBB1[Ax1]=acmasalto1+masalto1+AAA1[Ax1];gabx1=0;printf("valor se queda pegado1 %d",AAA1[Ax1]);barajea1(Ax1);gax1=AAA1[Ax1];gaax1=Ax1;}
	            else                          if (mgbx1==1){if (gabx1>=2){pultreyeno1=ultreyeno1;ultreyeno1=Ax1;BBB1[Ax1]=acmasalto1+masalto1+AAA1[Ax1];printf("valor_repetido_y_tapado1 %d",AAA1[Ax1]);barajea1(Ax1);}
													   else{BBB1[Ax1]=acmasalto1+masalto1+AAA1[Ax1];if(pultreyeno1==Ax1)printf("tapado1 %d",Ax1);pultreyeno1=ultreyeno1;ultreyeno1=Ax1;
													        cvb=0;while(cvb<=15){if (cvb==Ax1){;}                                                /* antes de barajea se define quien tapa y despues de barajea el como lo tapa*/ 
													                            else if (AAA1[cvb]==AAA1[Ax1]) {gabx1=gabx1+1;printf("Ax1 %d",Ax1);if(yacumulador1==63){printf("yacumulador1==63");}else {yacumulador1=63;cont_vueltas1=252;cont_falsoa1=Ax1;gcont_rep1=cont_rep1;cont_rep1=cvb;rellenadicc1n();cont_rep1=gcont_rep1;barajea1(cvb);printf("se barajeo cvb %d",cvb);cvb=16;}}cvb++;}}
													                            }
										  else{printf("valorinic %d",AAA1[Ax1]);BBB1[Ax1]=acmasalto1+masalto1+AAA1[Ax1];pultreyeno1=ultreyeno1;ultreyeno1=Ax1;printf("gabx1 %d",gabx1);printf("valorz %d",AAA1[Ax1]);printf("BBB1 %d",BBB1[Ax1]);barajea1(Ax1);cont_rep1=1;} verlo();a1conx[gax1]=Ax1;gax1=AAA1[Ax1];gaax1=Ax1;vmicero1=0;mgax1=1;mgbx1=1;printf("Ax1 %d",Ax1);printf("valor %d",AAA1[Ax1]);
	}}masalto1=BBB1[Ax1]-acmasalto1;acumulador1=BBB1[Ax1];printf("acmasalto1: %d\n",acmasalto1);falsoa1=Ax1;cont_falsoa1=falsoa1;return(acumulador1);}
int listolevel2(){/*ahora que tenemos comprimidos los 96  llenamos los resultantes de cada lado y los vamos juntando con la data del nivel 1*/
int quienentra=-1,lco=0,lcco=0,tglcco=0,glcco=0,lco1=0,lcco1=0,lcp=0,lcp1=0,lgcp=0,lgcp1=0,lpo=0,lpo1=0,lcpo=0,lcpo1=0,lgcpo=0,lgcpo1=0,aX=0,lentra=0,lentra1=0,glentra=0,glentra1=0,ilee=0,dlee=0;char lent[4]="    ",lent1[4]="    ";
int co=0,cp=0,cpo=0,po=0,gcpo=0,gcp=0,co1=0,cp1=0,cpo1=0,po1=0,gcpo1=0,gcp1=0;
printf("listolevel2:comenzando_______________________________________________________ %d \n",contaray1);getchar();/*jju=1;*/ 

verlon();getchar();llisto=0;llisto1=0;lco=0;lco1=0;verlo();getchar();
 
/*cont_d=0;cont_d1=0;*/ lcco=0;lcco1=0; printf("trigg_ldicc: %d ",trigg_ldicc); printf("trigg_ldicc1: %d ",trigg_ldicc1); 
if (mitaad==0){sacando();
	           lco1=0;while(lco1<=15){aconx[lco1]=-1;a1conx[lco1]=-1;AAA1[lco1]=GAAA1[lco1];BBB1[lco1]=GBBB1[lco1];
               if(trigg_ldicc1==0){Ldicc1[lco1][ax]=GLdicc1[lco1][ax];}if(trigg_ldicc==0){Ldicc[lco1][ax]=GLdicc[lco1][ax];}lco1++;}
               lco1=0;contaray=0;contaray1=gcontaray1;acumulador1=gacumulador1;acumulador=gacumulador;masalto=gmasalto;
               acmasalto1=gacmasalto1;masalto1=gmasalto1;uno=guno;uno1=guno1;mayor1=gmayor1;vmicero1=gvmicero1;
               gaax=ggaax;gaax1=ggaax1;mgax1=gmgax1;mgbx1=gmgbx1;
               lco=0; uno1=1;while(lco<=15){buf0[lco]=-1;buf1[lco]=-1;buf2[lco]=-1;buf3[lco]=-1;bwf0[lco][ax]=-1;bwf1[lco][ax]=-1;
               buf10[lco]=gbuf10[lco];buf11[lco]=gbuf11[lco];buf12[lco]=gbuf12[lco];buf13[lco]=gbuf13[lco];bwf10[lco][ax]=gbwf10[lco][ax];
               bwf11[lco][ax]=gbwf11[lco][ax];lco++;}
               }
else {         sacando1();
	           lco=0;while(lco<=15){aconx[lco]=-1;a1conx[lco]=-1;AAA[lco]=GAAA[lco];BBB[lco]=GBBB[lco];
               if(trigg_ldicc==0){Ldicc[lco][ax]=GLdicc[lco][ax];} if(trigg_ldicc1==0){Ldicc1[lco][ax]=GLdicc1[lco][ax];} lco++;}
               lco=0;contaray=gcontaray;contaray1=0;lco=0;acumulador=gacumulador;acmasalto=gacmasalto;acumulador1=gacumulador1;
               masalto1=gmasalto1;masalto=gmasalto;uno1=guno1;uno=guno;mayor=gmayor;vmicero=gvmicero;mgax=gmgax;mgbx=gmgbx;
               gaax=ggaax;gaax1=ggaax1;
               lco=0;while(lco<=15){buf0[lco]=gbuf0[lco];buf1[lco]=gbuf1[lco];buf2[lco]=gbuf2[lco];buf3[lco]=gbuf3[lco];
               bwf0[lco][ax]=gbwf0[lco][ax];bwf1[lco][ax]=gbwf1[lco][ax];buf10[lco]=-1;buf11[lco]=-1;buf12[lco]=-1;buf13[lco]=-1;
               bwf10[lco][ax]=-1;bwf11[lco][ax]=-1;lco++;}
               }
while(lcco<=96){if (mitaad==0){printf("este %d lee:  %d",level2[lcco],lcco);quienentra=level2[lcco];}
                         else{printf("este %d lee:  %d",level21[lcco],lcco);quienentra=level21[lcco];}
                         printf("masalto %d acumulador %d masalto1 %d acumulador1 %d cont_d: %d cont_d1: ",masalto,acumulador,masalto1,acumulador1,cont_d,cont_d1);
  
if(quienentra==-1){if(cont_rep==1)cont_rep=cont_rep+1;lentra=-1;lentra1=-1;falsoa=-1;cont_falsoa=-1;cont_rellena=cont_rellena+1;
if(lentra==falsoa)  {  if (glentra==lentra){cont_rep=cont_rep+1;if(cont_rep>=15){ rellenadiccn();cont_rep=1;}} else cont_rep=1;}
else if(cont_rep>=2){rellenadiccn();cont_rep=1;cont_rellena=0;}	  			        	 		                                                                        
if(lentra1==falsoa1){if (glentra1==lentra1){cont_rep1=cont_rep1+1;if(cont_rep1>=15){rellenadicc1n();cont_rep=1;}}else cont_rep1=1;}
else if(cont_rep1>=2){rellenadicc1n();cont_rep1=1;cont_rellena1=0;}     
glentra=lentra;glentra1=lentra1;printf("cont_rep %d cont_rep1 %d",cont_rep,cont_rep1);}		        
else {parame(quienentra,8);strncpy(lent,ysstr,4);lentra=btod(lent);strncpy(lent1,zsstr,4);lentra1=btod(lent1);}  
				                                                                                                                                                                                               
if(lcco<=95){    if(lcco>=64){if(tglcco==0){if(lcco==64)glcco=lcco;}else{   ;}printf("lcco %d ",lcco);lcco=lcco+1;}  
             if (((acumulador-0)<=511) & ((acumulador1-0)<=511)){ aX=0;while(aX<=15){
if (lentra==(aX-0)){cont_rellena=cont_rellena+1;  if(lentra==falsoa)  {if (glentra==lentra)  {cont_rep=cont_rep+1;  if(cont_rep==15) {rellenadiccn();}} else cont_rep=1;} else if(cont_rep>=2) {rellenadiccn(); cont_rep=1;cont_rellena=0;}  printf("l2entra: %d ",lentra);  acumulador=zsumalo(aX);  aacumulador=acumulador;  glentra=lentra;}    
if(lentra1==(aX-0)){cont_rellena1=cont_rellena1+1;if(lentra1==falsoa1){if (glentra1==lentra1){cont_rep1=cont_rep1+1;if(cont_rep1==15){rellenadicc1n();}}else cont_rep1=1;}else if(cont_rep1>=2){rellenadicc1n();cont_rep1=1;cont_rellena1=0;}printf("l2entra1: %d ",lentra1);acumulador1=zsumalo1(aX);aacumulador1=acumulador1;glentra1=lentra1;}aX++;}
if(lcco==95 || ((lcco>=64) & (level2[lcco+1]==-1))){if(tglcco==0) {tglcco=1;lcco=glcco-0;printf("lcco %d ",lcco);}else {if(lcco==95)ndos=1;}}          verlo();    getchar();}   
else if( acumulador>=511){getchar();if(contaray<=3){         if(contaray==0){llisto=1;cont_caras=0;co=0;gcpo=0;while(co<=15)   {aconx[co]=-1;if(BBB[co]>=0)  {buf0[co]=less(BBB[co]); po=1;cpo=1; while(po<=BBB[co])  {po=po*2;cpo++;}    if(po>BBB[co])  {po=po/2;cpo--;}          if(gcpo==0){if(co==15){bwf0[cp][ax]=cpo;cp++;}else{gcpo=cpo-1;gcp=cp;}}      else{bwf0[cp][ax]=(gcpo*10)+(cpo-1);gcpo=0;cp++;}}           else{if(co==15){if(gcpo>0)  {bwf0[gcp][ax]=gcpo;}}}co++;}verlo();}  
	                                                   else if(contaray==1){cont_caras=1;co=0;                while(co<=15)  { aconx[co]=-1;if(BBB[co]>=0)  {buf1[co]=less(BBB[co]); po=1;cpo=1; while(po<=BBB[co])  {po=po*2;cpo++;}    if(po>BBB[co])  {po=po/2;cpo--;}          if(gcpo==0){if(co==15){bwf0[cp][ax]=cpo;cp++;}else{gcpo=cpo-1;gcp=cp;}}      else{bwf0[cp][ax]=(gcpo*10)+(cpo-1);gcpo=0;cp++;}}           else{if(co==15){if(gcpo>0)  {bwf0[gcp][ax]=gcpo;}}}co++;}verlo();}
	                                                   else if(contaray==2){cont_caras=2;cp=0;co=0;gcpo=0;    while(co<=15)   {aconx[co]=-1; if(BBB[co]>=0)  {buf2[co]=less(BBB[co]); po=1;cpo=1; while(po<=BBB[co])  {po=po*2;cpo++;}    if(po>BBB[co])  {po=po/2;cpo--;}          if(gcpo==0){if(co==15){bwf1[cp][ax]=cpo;cp++;}else{gcpo=cpo-1;gcp=cp;}}    else{bwf1[cp][ax]=(gcpo*10)+(cpo-1);gcpo=0;cp++;}}           else{if(co==15){if(gcpo>0)  {bwf1[gcp][ax]=gcpo;}}}co++;}        cont_vueltas=cont_vueltas+1;}contaray++;acumulador=0;co=0;while(co<=15){AAA[co]=-1;BBB[co]=-1;aconx[co]=-1;co++;}}
												       else if(contaray==3){cont_caras=3;co=0;                while(co<=15)   {aconx[co]=-1; if(BBB[co]>=0)  {buf3[co]=less(BBB[co]); po=1;cpo=1; while(po<=BBB[co])  {po=po*2;cpo++;}    if(po>BBB[co])  {po=po/2;cpo--;}          if(gcpo==0){if(co==15){bwf1[cp][ax]=cpo;cp++;}else{gcpo=cpo-1;gcp=cp;}}     else{bwf1[cp][ax]=(gcpo*10)+(cpo-1);gcpo=0;cp++;}}           else{if(co==15){if(gcpo>0)  {bwf1[gcp][ax]=gcpo;}}}co++;}/*rellenalevel2();cont_vueltas=cont_vueltas+1;}contaray++;acumulador=0;co=0;while(co<=15){AAA[co]=-1;BBB[co]=-1;co++;}*/}uno=0;} 
	
	if( acumulador1>=511){getchar();if(contaray1<=3){    if(contaray1==0){llisto1=1;cont_caras=0;co1=0;gcpo1=0;while(co1<=15){ a1conx[co1]=-1;if(BBB1[co1]>=0){buf10[co1]=less(BBB1[co1]);po1=1;cpo1=1;while(po1<=BBB1[co1]){po1=po1*2;cpo1++;}if(po1>BBB[co1]){po1=po1/2;cpo1--;}if(gcpo1==0) {if(co1==15){bwf10[cp1][ax]=cpo1;cp1++;}else{gcpo1=cpo1-1;gcp1=cp1;}}else{bwf10[cp1][ax]=(gcpo1*10)+(cpo1-1);gcpo1=0;cp1++;}}else{if(co1==15){if(gcpo1>0){bwf10[gcp1][ax]=gcpo;}}}co1++;}verlo();} 
                                                     else if(contaray1==1){cont_caras=1;co1=0;                  while(co1<=15){a1conx[co1]=-1;if(BBB1[co1]>=0){buf11[co1]=less(BBB1[co1]);po1=1;cpo1=1;while(po1<=BBB1[co1]){po1=po1*2;cpo1++;}if(po1>BBB[co1]){po1=po1/2;cpo1--;}if(gcpo1==0) {if(co1==15){bwf10[cp1][ax]=cpo1;cp1++;}else{gcpo1=cpo1-1;gcp1=cp1;}}else{bwf10[cp1][ax]=(gcpo1*10)+(cpo1-1);gcpo1=0;cp1++;}}else{if(co1==15){if(gcpo1>0){bwf10[gcp1][ax]=gcpo;}}}co1++;}verlo();}
                                                     else if(contaray1==2){cont_caras=2;cp1=0;co1=0;gcpo1=0;    while(co1<=15){a1conx[co1]=-1;if(BBB1[co1]>=0){buf12[co1]=less(BBB1[co1]);po1=1;cpo1=1;while(po1<=BBB1[co1]){po1=po1*2;cpo1++;}if(po1>BBB[co1]){po1=po1/2;cpo1--;}if(gcpo1==0) {if(co1==15){bwf11[cp1][ax]=cpo1;cp1++;}else{gcpo1=cpo1-1;gcp1=cp1;}}else{bwf11[cp1][ax]=(gcpo1*10)+(cpo1-1);gcpo1=0;cp1++;}}else{if(co1==15){if(gcpo1>0){bwf11[gcp1][ax]=gcpo;}}}co1++;}      cont_vueltas1=cont_vueltas1+1;}contaray1++;acumulador1=0;co1=0;while(co1<=15){AAA1[co1]=-1;BBB1[co1]=-1;a1conx[co]=-1;co1++;}}
                                                     else if(contaray1==3){cont_caras=3;co1=0;                  while(co1<=15){a1conx[co1]=-1;if(BBB1[co1]>=0){buf13[co1]=less(BBB1[co1]);po1=1;cpo1=1;while(po1<=BBB1[co1]){po1=po1*2;cpo1++;}if(po1>BBB[co1]){po1=po1/2;cpo1--;}if(gcpo1==0) {if(co1==15){bwf11[cp1][ax]=cpo1;cp1++;}else{gcpo1=cpo1-1;gcp1=cp1;}}else{bwf11[cp1][ax]=(gcpo1*10)+(cpo1-1);gcpo1=0;cp1++;}}else{if(co1==15){if(gcpo1>0){bwf11[gcp1][ax]=gcpo;}}}co1++;}/*rellenalevel2();cont_vueltas1=cont_vueltas1+1;}}contaray1++;acumulador1=0;co1=0;while(co1<=15){AAA1[co1]=-1;BBB1[co1]=-1;co1++;}*/}  uno1=0;/*falsoa1=-1;*/}
}
     else{ndos=1;rellenadiccn();rellenadicc1n();lco=0;lgcpo=0;while(lco<=15)   {printf("entro: %d ",BBB[lco]); if(BBB[lco]>=0) {if(contaray==0)buf0[lco]=BBB[lco]; else buf1[lco]=BBB[lco];}lco++;}
                                                lco=0;    while(lco<=15) {printf("entro1: %d ",BBB1[lco]); if(BBB1[lco]>=0) {if(contaray1==0)buf10[lco]=BBB1[lco]; else buf11[lco]=BBB1[lco];}lco++;}} lcco++;}    sacando();
 
return 0;} 		
int rellenalevel2(){ zcont_vueltas=0;zcont_caras=0;zcont_falsoa=0;zcont_rep=0;zcont_vueltas1=0;zcont_caras1=0;zcont_falsoa1=0;zcont_rep1=0;
int lco=0,lcco=0,tglcco=0,glcco=0,lco1=0,lcco1=0,lcp=0,lcp1=0,lgcp=0,lgcp1=0,lpo=0,lpo1=0,lcpo=0,lcpo1=0,lgcpo=0,lgcpo1=0,AX=0,lentra=0,lentra1=0,ilee=0,dlee=0;char lent[4]="    ",lent1[4]="    ";
glentra=0,glentra1=0;jju=0; 
if (mitaad==0){printf("izquierda: contaray %d contaray1 %d  %d\n",mitaad,contaray,contaray1);
	               if(contaray>=3){lcco=88;lco=0;while(lco<=7){ printf("listo: %d\n",lcco-(lco));level2[(lcco+(lco))]=bwf1[lco+8];lco++;} lcco=48;
	                                       lco=0;while(lco<=15){level2[(lcco+lco)]=buf3[lco] ;lco++;} }
                   if(contaray>=2){lcco=80;lco=0; while(lco<=7){printf("listo: %d\n",lcco-(lco));level2[(lcco+(lco))]=bwf1[lco];lco++;} lcco=32;
                                           lco=0;while(lco<=15){level2[(lcco+lco)]=buf2[lco] ;lco++;} }
                   if(contaray>=1){if(bwf1[8]>-1){lcco=88;lco=0; while(lco<=7){printf("listo: %d\n",lcco-(lco));level2[(lcco+(lco))]=bwf1[lco];lco++;}}
					               if(bwf1[0]>-1){lcco=80;lco=0; while(lco<=7){printf("listo: %d\n",lcco-(lco));level2[(lcco+(lco))]=bwf1[lco];lco++;}}
					               lcco=72;lco=0;while(lco<=7){ printf("listo: %d\n",lcco-(lco));level2[(lcco+(lco))]=bwf0[lco+8];lco++;} lcco=16;
                                           lco=0;while(lco<=15){level2[(lcco+lco)]=buf1[lco] ;lco++;} }
                   if(contaray>=0){lcco=64;lco=0; while(lco<=7){printf("listo: %d\n",lcco-(lco));level2[(lcco+(lco))]=bwf0[lco];lco++;} lcco=0;
                                           lco=0;while(lco<=15){level2[(lcco+lco)]=buf0[lco] ;lco++;}}              
                   uno=0;lcco=lcco+16;}  /*if(trigg_ldicc==1){;}; */ 		 		     
else{          printf("derecha: contaray %d contaray1 %d  %d\n",mitaad,contaray,contaray1);  
				  if(contaray1>=3){lcco1=88;lco1=0;while(lco1<=7){ printf("listo: %d\n",lcco1-(lco1));level21[(lcco1+(lco1))]=bwf11[lco1+8];lco1++;}lcco1=48;
				                            lco1=0;while(lco1<=15){level21[(lcco1+lco1)]=buf13[lco1] ;lco1++;}  }
			      if(contaray1>=2){lcco1=80;lco1=0; while(lco1<=7){printf("listo: %d\n",lcco1-(lco1));level21[(lcco1+(lco1))]=bwf11[lco1]; lco1++;}lcco1=32;
			                                lco1=0;while(lco1<=15){level21[(lcco1+lco1)]=buf12[lco1] ;lco1++;}  }
			      if(contaray1>=1){if(bwf11[8]>-1){lcco1=88;lco1=0; while(lco1<=7){printf("listo: %d\n",lcco1-(lco1));level21[(lcco1+(lco1))]=bwf11[lco1]; lco1++;}}
					               if(bwf11[0]>-1){lcco1=80;lco1=0; while(lco1<=7){printf("listo: %d\n",lcco1-(lco1));level21[(lcco1+(lco1))]=bwf11[lco1]; lco1++;}}
					               lcco1=72;lco1=0;while(lco1<=7){ printf("listo: %d\n",lcco1-(lco1));level21[(lcco1+(lco1))]=bwf10[lco1+8];lco1++;}lcco1=16;
			                                lco1=0;while(lco1<=15){level21[(lcco1+lco1)]=buf11[lco1] ;lco1++;}  }
			      if(contaray1>=0){lcco1=64;lco1=0; while(lco1<=7){printf("listo: %d\n",lcco1-(lco1));level21[(lcco1+(lco1))]=bwf10[lco1]; lco1++;}lcco1=0;		                                
			                                lco1=0;while(lco1<=15){level21[(lcco1+lco1)]=buf10[lco1] ;lco1++;} }			 
			      uno1=0;lcco1=lcco1+16;
			      } /*if(trigg_ldicc1==1){;}; */  lco=0;while(lco<=15){gaconx[lco]=aconx[lco];aconx[lco]=-1;ga1conx[lco]=a1conx[lco];a1conx[lco]=-1;lco++;}   
verlon();getchar();guno=uno;guno1=uno1;gmasalto=masalto;gmasalto1=masalto1;gacmasalto=acmasalto;gacmasalto1=acmasalto1;ndos=0;
if (mitaad==0){lco=0;gmayor1=mayor1;gvmicero1=vmicero1;gmgax1=mgax1;gmgbx1=mgbx1; gacumulador=acumulador;acumulador=0;gacmasalto=acmasalto;gacmasalto1=acmasalto1;gmasalto=masalto;gmasalto1=masalto1;lco=0;while(lco<=15){GAAA[lco]=AAA[lco];GBBB[lco]=BBB[lco];GLdicc[lco][ax]=Ldicc[lco][ax];lco++;}lco=0;gcontaray=contaray;contaray=0;
                                          lco=0;ggaax=gaax;ggaax1=gaax1;gacumulador1=acumulador1;acumulador1=0;lco1=0;while(lco1<=15){GAAA1[lco1]=AAA1[lco1];GBBB1[lco1]=BBB1[lco1];GLdicc1[lco1][ax]=Ldicc1[lco1][ax];lco1++;}lco1=0;gcontaray1=contaray1;contaray1=0;/*gcont_d=cont_d;cont_d=0;gcont_d1=cont_d1;cont_d1=0;*/verlo();getchar();
                                                                                                              lco=0;while(lco<=15){AAA[lco]=-1;BBB[lco]=-1;AAA1[lco]=-1;BBB1[lco]=-1;Ldicc[lco][ax]=-1;Ldicc1[lco][ax]=-1;gbuf10[lco]=buf10[lco];gbuf11[lco]=buf11[lco];gbuf12[lco]=buf12[lco];gbuf13[lco]=buf13[lco];buf0[lco]=-1;buf1[lco]=-1;buf2[lco]=-1;buf3[lco]=-1;bwf0[lco][ax]=-1;bwf1[lco][ax]=-1;buf10[lco]=-1;buf11[lco]=-1;buf12[lco]=-1;buf13[lco]=-1;gbwf10[lco][ax]=bwf10[lco][ax];bwf10[lco][ax]=-1;gbwf11[lco][ax]=bwf11[lco][ax];bwf11[lco][ax]=-1;lco++;}cont_menos=0,verlon();getchar(); 
				                                                                        /*cont_d=0;cont_d1=0;*/uno=0;uno1=0;lcco=0;while(lcco<=98){printf("este_n2 %d lee:  %d",level2[lcco],lcco);if(level2[lcco]==-1){/* */lentra=-1;lentra1=-1;falsoa=-1;cont_falsoa=-1;cont_rellena=cont_rellena+1;if(lentra==falsoa) {if (glentra==lentra){zcont_rep=zcont_rep+1;if(zcont_rep>=15 || lcco==95){zcont_vueltas=0;zcont_caras=0;zcont_falsoa=glentra;cont_vueltas=zcont_vueltas;cont_caras=zcont_caras;cont_falsoa=zcont_falsoa;cont_rep=zcont_rep;rellenadiccn();zcont_rep=1;}} else zcont_rep=1;}
				                                                                                                                                                                                                                                                                                                                  else if(zcont_rep>=2){zcont_vueltas=0;zcont_caras=0;zcont_falsoa=glentra;cont_vueltas=zcont_vueltas;cont_caras=zcont_caras;cont_falsoa=zcont_falsoa;cont_rep=zcont_rep;rellenadiccn();zcont_rep=1;cont_rellena=0;}		 		                                                                        
				                                                                                                                                                                                                                                                                                               if(lentra1==falsoa1){if (glentra1==lentra1){zcont_rep1=zcont_rep1+1;if(zcont_rep1>=15 || lcco==95){zcont_vueltas1=0;zcont_caras1=0;zcont_falsoa1=glentra;cont_vueltas1=zcont_vueltas1;cont_caras1=zcont_caras1;cont_falsoa1=zcont_falsoa1;cont_rep1=zcont_rep1;rellenadicc1n();zcont_rep1=1;}}else zcont_rep1=1;}
				                                                                                                                                                                                                                                                                                                                  else if(zcont_rep1>=2){zcont_vueltas1=0;zcont_caras1=0;zcont_falsoa1=glentra;cont_vueltas1=zcont_vueltas1;cont_caras1=zcont_caras1;cont_falsoa1=zcont_falsoa1;cont_rep1=zcont_rep1;rellenadicc1n();zcont_rep1=1;cont_rellena1=0;}
				                                                                                                                                                                                                                                                                                                                  glentra=lentra;glentra1=lentra1;} else {parame(level2[lcco],8);strncpy(lent,ysstr,4);lentra=btod(lent);strncpy(lent1,zsstr,4);lentra1=btod(lent1);} 
				                                                                                                                                                                                               
				                                                                  if(lcco<=95){if(lentra>=0){ if(lcco>=64){if(tglcco==0){if(lcco==64)glcco=lcco;}else{/*if(lcco==65)lcco=lcco-1*/;}printf("lcco %d ",lcco);lcco=lcco+1;}   if(((acumulador-0)<=511)&((acumulador1-0)<=511)){AX=0;while(AX<=15){if(lentra==(AX-0)){cont_rellena=cont_rellena+1;if(lentra==falsoa) {if (glentra==lentra){zcont_rep=zcont_rep+1;if(zcont_rep>=15){zcont_vueltas=0;zcont_caras=0;zcont_falsoa=0;cont_vueltas=zcont_vueltas;cont_caras=zcont_caras;cont_falsoa=zcont_falsoa;cont_rep=zcont_rep;rellenadiccn();zcont_rep=1;}} 
				                                                                                                                                                                                                                                else zcont_rep=1;}
				                                                                                                                                                                                                                        else if(zcont_rep>=3){zcont_vueltas=0;zcont_caras=3;zcont_falsoa=glentra;cont_vueltas=zcont_vueltas;cont_caras=zcont_caras;cont_falsoa=zcont_falsoa;cont_rep=zcont_rep;rellenadiccn();if (cont_rellena<=1){printf("glentra_n2 %d falsoa: %d ",glentra,falsoa);};zcont_rep=1;cont_rellena=0;}
				                                                                                                                                                                                                                                                       else{if(glentra==-1){zcont_vueltas=0;zcont_caras=3;zcont_falsoa=glentra;cont_vueltas=zcont_vueltas;cont_caras=zcont_caras;cont_falsoa=zcont_falsoa;cont_rep=zcont_rep;rellenadiccn();}} 
																																                                               printf("l2entra: %d ",lentra); /*z*/acumulador=zsumalo(AX);aacumulador=acumulador;glentra=lentra;gglentra=glentra;} 
																																                                               
																																                                        if(lentra1==(AX-0)){cont_rellena1=cont_rellena1+1;if(lentra1==falsoa1){if (glentra1==lentra1){zcont_rep1=zcont_rep1+1;if(zcont_rep1>=15){zcont_vueltas1=0;zcont_caras1=0;zcont_falsoa1=0;cont_vueltas1=zcont_vueltas1;cont_caras1=zcont_caras1;cont_falsoa1=zcont_falsoa1;cont_rep1=zcont_rep1;rellenadicc1n();zcont_rep=1;}} 
																																                                                                                                            else zcont_rep1=1;} 
																																                                                                                                       else if(zcont_rep1>=3){zcont_vueltas1=0;zcont_caras1=3;zcont_falsoa1=glentra1;cont_vueltas1=zcont_vueltas1;cont_caras1=zcont_caras1;cont_falsoa1=zcont_falsoa1;cont_rep1=zcont_rep1;rellenadicc1n();if (cont_rellena1<=1){printf("glentra1_n2 %d falsoa1: %d ",glentra1,falsoa1);}zcont_rep1=1;cont_rellena1=0;}
																																                                                                                                                                    else{if(glentra1==-1){zcont_vueltas1=0;zcont_caras1=3;zcont_falsoa1=glentra1;cont_vueltas1=zcont_vueltas1;cont_caras1=zcont_caras1;cont_falsoa1=zcont_falsoa1;cont_rep1=zcont_rep1;rellenadicc1n();}} 
																																	                                          printf("l2entra1: %d ",lentra1); /*z*/acumulador1=zsumalo1(AX);aacumulador1=acumulador1;glentra1=lentra1;gglentra1=glentra1;AX=17;}AX++;     
																																	                                          }}if(lcco==95 || ((lcco>=64) & (level2[lcco+1]==-1))){printf("evaluando_condicion_final_lcco %d ",lcco);if(tglcco==0) {tglcco=1;lcco=glcco-0;}else {if(lcco==95){ndos=1;printf("condicion_final_lcco %d ",lcco);}}} verlo();    getchar(); }}  
																			     else{printf("finalizando_rellenalevel2:_contaray_contaray1______________ %d ",AX,contaray,contaray1);ndos=1;rellenadiccn();rellenadicc1n();lco=0;lgcpo=0;while(lco<=15)   {printf("entro: %d ",BBB[lco]); if(BBB[lco]>=0)  {if(contaray==0)buf0[lco]=BBB[lco]; else buf1[lco]=BBB[lco];}lco++;}
																											                                                                                    lco=0;        while(lco<=15) {printf("entro1: %d ",BBB1[lco]); if(BBB1[lco]>=0)  {if(contaray==0)buf10[lco]=BBB1[lco];else buf11[lco]=BBB1[lco];}lco++;}			}	lcco++;	}  printf("lcco %d ",lcco); getchar();

								}
else {      lco1=0;gmayor=mayor;gvmicero=vmicero;gmgax=mgax;gmgbx=mgbx;  gacumulador=acumulador;acumulador=0;gacmasalto=acmasalto;gacmasalto1=acmasalto1;gmasalto=masalto;gmasalto1=masalto1;lco=0;while(lco<=15){GAAA[lco]=AAA[lco];GBBB[lco]=BBB[lco];GLdicc[lco][ax]=Ldicc[lco][ax];lco++;}lco=0;gcontaray=contaray;contaray=0; 
                                         lco=0;ggaax=gaax;ggaax1=gaax1;gacumulador1=acumulador1;acumulador1=0;lco1=0;while(lco1<=15){GAAA1[lco1]=AAA1[lco1];GBBB1[lco1]=BBB1[lco1];GLdicc1[lco1][ax]=Ldicc1[lco1][ax];lco1++;}lco1=0;gcontaray1=contaray1;contaray1=0;/*gcont_d=cont_d;cont_d=0;gcont_d1=cont_d1;cont_d1=0;*/verlo();getchar(); 
                                                                                      lco1=0;while(lco1<=15){AAA[lco1]=-1;BBB[lco1]=-1;AAA1[lco1]=-1;BBB1[lco1]=-1;Ldicc[lco1][ax]=-1;Ldicc1[lco1][ax]=-1;gbuf0[lco1]=buf0[lco1];gbuf1[lco1]=buf1[lco1];buf2[lco1]=gbuf2[lco1];gbuf3[lco1]=buf3[lco1];gbwf0[lco1][ax]=bwf0[lco1][ax];gbwf1[lco1][ax]=bwf1[lco1][ax];buf0[lco1]=-1;buf1[lco1]=-1;buf2[lco1]=-1;buf3[lco1]=-1;bwf0[lco1][ax]=-1;bwf1[lco1][ax]=-1;buf10[lco1]=-1;buf11[lco1]=-1;buf12[lco1]=-1;buf13[lco1]=-1;bwf10[lco1][ax]=-1;bwf11[lco1][ax]=-1;lco1++;}cont_menos1=0,verlon(); getchar();				    								                                                                         
								                                                      /*cont_d=0;cont_d1=0;*/uno=0;uno1=0;lcco=0;while(lcco<=98){printf("este_n2 %d lee:  %d",level21[lcco],lcco);if(level21[lcco]==-1){/* */ lentra=-1;lentra1=-1;falsoa1=-1;cont_falsoa1=-1;cont_rellena=cont_rellena+1;if(lentra==falsoa){if (glentra==lentra){zcont_rep=zcont_rep+1;if(zcont_rep==15 || lcco==95){zcont_vueltas=0;zcont_caras=0;zcont_falsoa=glentra;cont_vueltas=zcont_vueltas;cont_caras=zcont_caras;cont_falsoa=zcont_falsoa;cont_rep=zcont_rep;rellenadiccn();zcont_rep1=1;}}else zcont_rep=1;}
								                                                                                                                                                                                                                                                                                                      else if(zcont_rep>=2){zcont_vueltas=0;zcont_caras=0;zcont_falsoa=glentra;cont_vueltas=zcont_vueltas;cont_caras=zcont_caras;cont_falsoa=zcont_falsoa;cont_rep=zcont_rep;rellenadiccn();zcont_rep=1;cont_rellena=0;}								                                                                                                                                                                                                                                                                                 
								                                                                                                                                                                                                                                                                                   if(lentra1==falsoa1){if (glentra1==lentra1){zcont_rep1=zcont_rep1+1;if(zcont_rep1==15 || lcco==95){zcont_vueltas1=0;zcont_caras1=0;zcont_falsoa1=glentra;cont_vueltas1=zcont_vueltas1;cont_caras1=zcont_caras1;cont_falsoa1=zcont_falsoa1;cont_rep1=zcont_rep1;rellenadicc1n();zcont_rep1=1;}}else zcont_rep1=1;}
				                                                                                                                                                                                                                                                                                                                      else if(zcont_rep1>=2){zcont_vueltas1=0;zcont_caras1=0;zcont_falsoa1=glentra;cont_vueltas1=zcont_vueltas1;cont_caras1=zcont_caras1;cont_falsoa1=zcont_falsoa1;cont_rep1=zcont_rep1;rellenadicc1n();zcont_rep1=1;cont_rellena1=0;}                    								                                                      
								                                                                                                                                                                                                                                                                                                      glentra=lentra;glentra1=lentra1;} else {parame(level21[lcco],8);strncpy(lent,ysstr,4);lentra=btod(lent);strncpy(lent1,zsstr,4);lentra1=btod(lent1);}
								                                                                                                                                                                                                                 
								                                                  if(lcco<=95){if(lentra>=0){ if(lcco>=64){if(tglcco==0){if(lcco==64)glcco=lcco;}else{/*if(lcco==65)lcco=lcco-1*/;}printf("lcco %d ",lcco);lcco=lcco+1;}    if(((acumulador-0)<=511) & ((acumulador1-0)<=511)){AX=0;while(AX<=15){if(lentra==(AX-0)){cont_rellena=cont_rellena+1;if(lentra==falsoa) {if (glentra==lentra){zcont_rep=zcont_rep+1;  if(zcont_rep>=15){zcont_vueltas=0;zcont_caras=0;zcont_falsoa=0;cont_vueltas=zcont_vueltas;cont_caras=zcont_caras;cont_falsoa=zcont_falsoa;cont_rep=zcont_rep;rellenadiccn();zcont_rep=1;}}
								                                                                                                                                                                                                                     else zcont_rep=1;}
								                                                                                                                                                                                             else if(zcont_rep>=3){zcont_vueltas=0;zcont_caras=3;zcont_falsoa=glentra;cont_vueltas=zcont_vueltas;cont_caras=zcont_caras;cont_falsoa=zcont_falsoa;cont_rep=zcont_rep;rellenadiccn();if (cont_rellena<=1){printf("glentra_n2 %d falsoa: %d ",glentra,falsoa);}zcont_rep=1;cont_rellena=0;}
								                                                                                                                                                                                                                       else{if(glentra==-1){zcont_vueltas=0;zcont_caras=3;zcont_falsoa=glentra;cont_vueltas=zcont_vueltas;cont_caras=zcont_caras;cont_falsoa=zcont_falsoa;cont_rep=zcont_rep;rellenadiccn();}}  
																																                                              printf("l2entra: %d ",lentra); /*z*/acumulador=zsumalo(AX);aacumulador=acumulador;glentra=lentra;gglentra=glentra;}
																																                                                                                              
																																                          if(lentra1==(AX-0)){cont_rellena1=cont_rellena1+1;if(lentra1==falsoa1){if(glentra1==lentra1){zcont_rep1=zcont_rep1+1;if(zcont_rep1>=15){zcont_vueltas1=0;zcont_caras1=0;zcont_falsoa1=0;cont_vueltas1=zcont_vueltas1;cont_caras1=zcont_caras1;cont_falsoa1=zcont_falsoa1;cont_rep1=zcont_rep1;rellenadicc1n();zcont_rep=1;}}
																																                                                                                                else zcont_rep1=1;} 
																																                                                                                           else if(zcont_rep1>=3){zcont_vueltas1=0;zcont_caras1=3;zcont_falsoa1=glentra;cont_vueltas1=zcont_vueltas1;cont_caras1=zcont_caras1;cont_falsoa1=zcont_falsoa1;cont_rep1=zcont_rep1;rellenadicc1n();if (cont_rellena1<=1){printf("glentra1_n2 %d falsoa1: %d ",glentra1,falsoa1);}zcont_rep1=1;cont_rellena1=0;}
																																                                                                                                      else{if(glentra1==-1){zcont_vueltas1=0;zcont_caras1=3;zcont_falsoa1=glentra1;cont_vueltas1=zcont_vueltas1;cont_caras1=zcont_caras1;cont_falsoa1=zcont_falsoa1;cont_rep1=zcont_rep1;rellenadicc1n();}} 
																																							                printf("l2entra1: %d ",lentra1); /*z*/acumulador1=zsumalo1(AX);aacumulador1=acumulador1;glentra1=lentra1;gglentra1=glentra1;}AX++;
																																							                }}if(lcco==95 || ((lcco>=64) & (level21[lcco+1]==-1))){printf("evaluando_condicion_final_lcco %d ",lcco);if(tglcco==0) {tglcco=1;lcco=glcco+0;}else {if(lcco==95){ndos=1;printf("condicion_final_lcco %d ",lcco);}}} verlo();      getchar();}}																											
														                        else{printf("finalizando_rellenalevel2:_contaray_contaray1______________ %d ",AX,contaray,contaray1);ndos=1;rellenadiccn();rellenadicc1n();lco1=0;lgcpo1=0;while(lco1<=15){printf("entro: %d ",BBB[lco]);  if(BBB[lco1]>=0){if(contaray==0)buf0[lco1]=BBB[lco1]; else buf1[lco1]=BBB[lco1];}lco1++;}
																											                                                                                           lco1=0; while(lco1<=15){printf("entro1: %d ",BBB1[lco1]);if(BBB1[lco1]>=0){if(contaray==0)buf10[lco1]=BBB1[lco1]; else buf11[lco1]=BBB1[lco1];}lco1++;}			}	lcco++; }  printf("lcco %d ",lcco); getchar();
																											                  																											                  
/*volvemos a llenar para nivel2 ahora con las variables viejas del nivel 1...lee solo la mitad q se necesita*/ }lcco=0;while(lcco<=95){level2[lcco]=-1;lcco++;} lcco=0;while(lcco<=95){level21[lcco]=-1;lcco++;}
	               if(contaray>=3) {lcco=88;lco=0;  while(lco<=7) {printf("listo: %d\n",lcco+(lco));  level2[(lcco+(lco))]=bwf1[lco][ax];lco++;}      lcco=48; lco=0; while(lco<=15) { level2[(lcco+lco)]=buf3[lco] ;lco++;} }	               
                   if(contaray>=2) {lcco=80;lco=0;  while(lco<=7) {printf("listo: %d\n",lcco+(lco));  level2[(lcco+(lco))]=bwf1[lco][ax];lco++;}        lcco=32; lco=0; while(lco<=15) { level2[(lcco+lco)]=buf2[lco] ;lco++;} }
                   if(contaray>=1) {lcco=64;lco=0;  while(lco<=7) {printf("listo: %d\n",lcco+(lco));  level2[(lcco+(lco))]=bwf0[lco][ax];lco++;}        lcco=16; lco=0; while(lco<=15) { level2[(lcco+lco)]=buf1[lco] ;lco++;} 
					                lcco=72;lco=0;  while(lco<=7) {printf("listo: %d\n",lcco+(lco));  level2[(lcco+(lco))]=bwf0[lco+8][ax];lco++;}      
                                    lcco=88;lco=0;  while(lco<=7) {printf("listo: %d\n",lcco+(lco));  level2[(lcco+(lco))]=bwf1[lco][ax];lco++;}
                                    lcco=80;lco=0;  while(lco<=7) {printf("listo: %d\n",lcco+(lco));  level2[(lcco+(lco))]=bwf1[lco+8][ax];lco++;}     }
                   if(contaray>=0) {lcco=64;lco=0;  while(lco<=7) {printf("listo: %d\n",lcco+(lco));  level2[(lcco+(lco))]=bwf0[lco][ax];lco++;}        lcco=0;  lco=0; while(lco<=15) { level2[(lcco+lco)]=buf0[lco] ;lco++;}             
					                lcco=72;lco=0;  while(lco<=7) {printf("listo: %d\n",lcco+(lco));  level2[(lcco+(lco))]=bwf0[lco+8][ax];lco++;}        
                                    lcco=80;lco=0;  while(lco<=7) {printf("listo: %d\n",lcco+(lco));  level2[(lcco+(lco))]=bwf1[lco][ax];lco++;}
                                    lcco=88;lco=0;  while(lco<=7) {printf("listo: %d\n",lcco+(lco));  level2[(lcco+(lco))]=bwf1[lco+8][ax];lco++;}   }
                                    				   
				   if(contaray1>=3){lcco1=88;lco1=0;while(lco1<=7){printf("listo: %d\n",lcco1+(lco1));level21[(lcco1+(lco1))]=bwf11[lco1][ax];lco1++;}lcco1=48;lco1=0;while(lco1<=15){level21[(lcco1+lco1)]=buf13[lco1] ;lco1++;}  }
			       if(contaray1>=2){lcco1=80;lco1=0;while(lco1<=7){printf("listo: %d\n",lcco1+(lco1));level21[(lcco1+(lco1))]=bwf11[lco1][ax]; lco1++;} lcco1=32;lco1=0;while(lco1<=15){level21[(lcco1+lco1)]=buf12[lco1] ;lco1++;}  }
			       if(contaray1>=1){lcco1=64;lco1=0;while(lco1<=7){printf("listo: %d\n",lcco1+(lco1));level21[(lcco1+(lco1))]=bwf10[lco1][ax]; lco1++;}lcco1=16;lco1=0;while(lco1<=15){level21[(lcco1+lco1)]=buf11[lco1] ;lco1++;}  
					                lcco1=72;lco1=0;while(lco1<=7){printf("listo: %d\n",lcco1+(lco1));level21[(lcco1+(lco1))]=bwf10[lco1+8][ax];lco1++;}
			                        lcco1=80;lco1=0;while(lco1<=7){printf("listo: %d\n",lcco1+(lco1));level21[(lcco1+(lco1))]=bwf11[lco1][ax]; lco1++;}
			                        lcco1=88;lco1=0;while(lco1<=7){printf("listo: %d\n",lcco1+(lco1));level21[(lcco1+(lco1))]=bwf11[lco1+8][ax];lco1++;}   }
			       if(contaray1>=0){lcco1=64;lco1=0;while(lco1<=7){printf("listo: %d\n",lcco1+(lco1));level21[(lcco1+(lco1))]=bwf10[lco1][ax]; lco1++;} lcco1=0; lco1=0;while(lco1<=15){level21[(lcco1+lco1)]=buf10[lco1] ;lco1++;} 	
			                        lcco1=72;lco1=0;while(lco1<=7){printf("listo: %d\n",lcco1+(lco1));level21[(lcco1+(lco1))]=bwf10[lco1+8][ax];lco1++;}
			                        lcco1=80;lco1=0;while(lco1<=7){printf("listo: %d\n",lcco1+(lco1));level21[(lcco1+(lco1))]=bwf11[lco1][ax]; lco1++;}
			                        lcco1=88;lco1=0;while(lco1<=7){printf("listo: %d\n",lcco1+(lco1));level21[(lcco1+(lco1))]=bwf11[lco1+8][ax];lco1++;}	}		                        
			       /*lcco=lcco+16;uno1=0;lcco1=lcco1+16;*/ ndos=0;   			          																											                  
																											                  verlon();verlo(); /*actualizarlo para listolevel2*/uno=guno;guno1=uno1;masalto=gmasalto;gmasalto1=masalto1;acmasalto=gacmasalto;gacmasalto1=acmasalto1;acumulador=gacumulador;gacumulador1=acumulador1;        /*cont_d=gcont_d;cont_d1=gcont_d1;*/
																											                  lco=0;while(lco<=15){if(trigg_ldicc==0){Ldicc[lco][ax]=GLdicc[lco][ax];}         aconx[lco]=-1;AAA[lco]=GAAA[lco];BBB[lco]=GBBB[lco];/*if (Ldicc[lco]==-1){;}else{;}*/lco++;}
																											                lco1=0;while(lco1<=15){ if(trigg_ldicc1==0){Ldicc1[lco1][ax]=GLdicc1[lco1][ax];}a1conx[lco1]=-1;AAA[lco1]=GAAA[lco1];BBB[lco1]=GBBB[lco1];lco1++;}
printf("listolevel2:_______________________________________________________ %d %d \n",contaray,contaray1);getchar();verlo();listolevel2();return 0;}   
void rellenadicc(){ int cm=0;/* */while(cm<=15){if(Ldicc[cm][ax]==-1) {Ldicc[cm][ax]=BBB[ax];cm=18;} cm++;}

                   

/*printf("ldicc:%d %d %d %d\n",cont_vueltas, cont_caras, cont_falsoa, cont_rep);trigg_ldicc=0;  /*}*/ /*printf("gtrellenando %d ",gtrellenando);trellenando=1;*/}
void rellenadicc1(){ int cm=0;/* */while(cm<=15){if(Ldicc[cm][ax]==-1) {Ldicc1[cm][ax]=BBB1[ax];cm=18;}cm++;}
   
			      

/*printf("Ldicc1:%d %d %d %d\n",cont_vueltas1, cont_caras1, cont_falsoa1, cont_rep1);trigg_ldicc1=0; /*}*/ /*printf("gtrellenando1 %d ",gtrellenando1);trellenando1=1;*/ }  
void leedicc1(int dicc1){/*parame(Ldicc1[cont_d1+1],8);zparame(Ldicc1[cont_d1+1],8);*/} 
void leedicc(int dicc) { /*parame(Ldicc[cont_d+1],8);zparame(Ldicc[cont_d+1],8);*/}
void leedicc1n(int dicc1){/*zparame(Ldicc1[cont_d1+1],8);parame(Ldicc1[cont1_d+1],8);*/}
void leediccn(int dicc){ /*zparame(Ldicc[cont_d+1],8);parame(Ldicc1[cont_d+1],8);*/}
int sumalo(aex){int AAx=aex,jAx=0,jAx1=0;printf("AAx: %d",AAx); 
	if (BBB[AAx]==-1){if (uno==0){uno=1;AAA[AAx]=1;BBB[AAx]=1;mayor=1;masalto=1;vmicero=1;acumulador=1;mgax=0;mgbx=0;acmasalto=0;gax=AAA[AAx];}
	              else if ((AAA[AAx]==masalto) & (masalto>0) ){if (masalto+AAA[AAx]>(136+acmasalto)) {acmasalto=acumulador;masalto=1;}
					  AAA[AAx]=AAA[AAx]-1;/*aconx[gax]=Ax;*/printf("(AAA[AAx]==masalto) & (masalto>0)_gAx: %d\n",gax);gax=AAA[AAx];BBB[AAx]=acmasalto+masalto+AAA[AAx];mgax=0;mgbx=0;barajea(AAx);		
					  }else {if (masalto+AAA[AAx]>(136+acmasalto)) {acmasalto=acumulador;masalto=1;}else mayor=mayor+1;					         
					         AAA[AAx]=mayor;mgax=0;mgbx=0; masalto=masalto+AAA[AAx];BBB[AAx]=acmasalto+masalto;vmicero=0;/*barajea(AAx);*/	
					   aconx[gax]=AAx;printf("gAx_seg_condicion: %d\n",gax);gax=AAA[AAx];}acumulador=BBB1[AAx];cont_rep=1;tr=0;
	elementos=elementos+1;trellenando=0;} else {if (AAA[AAx]==1) {if (masalto+AAA[AAx]>(136+acmasalto)) {acmasalto=acumulador;masalto=1;}erescero=1; if(vmicero==1) 
	                                                                                                                        {if(tr==1){BBB[AAx]=acmasalto+masalto+(mayor+1);tr=tr+1;}  
	                                                                                                                              else{if(tr>1){falsoa=0;cont_falsoa=falsoa;cont_rep=cont_rep+1;tr=tr+1;} else{BBB[AAx]=acmasalto+masalto+AAA[AAx];vmicero=1;}}printf("repeticion de uno: %d ",AAA[AAx]);trellenando=0;}   
	                                                                                                           else{BBB[AAx]=acmasalto+masalto+(mayor+1);if(mayor<elementos){printf("error");}vmicero=1;tr=1;cont_rep=1;}mgax=0;mgbx=0;trellenando=0;}
	  else {erescero=0;if (masalto+AAA[AAx]>(136+acmasalto)) {acmasalto=acumulador;masalto=1;}tr=1;AAA[AAx]=AAA[AAx]-1;   if(BBB1[AAx]>-1){if(BBB[AAx]+CCC[elementos]<(acmasalto+masalto+AAA[AAx])) {printf("menor lo tapan_en_n_elementos %d", elementos);cbv=0;while (cbv<=15){if(Ldicc[cbv]>-1){zparame(Ldicc[cbv],8);if(btod8(xsstr)>=252){parame(Ldicc[cbv+1],8);if(btod8(ysstr)==AAx){cbv=16;printf(" encontre un anterior yacumulador=63 ");}}};cbv=cbv+2;}
	                                                                                                                                                                                                                                                                       if(cbv>=16){printf("contando la parte derecha"); cbv=0;while (cbv<=15){if(Ldicc[cbv]>-1){parame(Ldicc[cbv+1],8);printf(" contando %d ysstr %c%c%c%c ",Ldicc[cbv+1],ysstr[0],ysstr[1],ysstr[2],ysstr[3]);jAx1=0;while(jAx<=15){ /*if(aconx[jAx]==AAx){*/if(btod(zsstr)==aconx[jAx]){printf(" encontre un OBJETTIVO yacumulador=63 ");jAx=15;cbv=16;}jAx++;}}cbv=cbv+2;}}
																																																																		   if(cbv==16){ yacumulador=63;cont_vueltas=252;cont_falsoa=AAx;jAx=0;while(jAx<=15){if(aconx[jAx]==AAx){gcont_rep=cont_rep;cont_rep=jAx;printf("encontre_jAx");jAx1=0;while(jAx1<=15){if(jAx1==jAx){;}else{if(aconx[jAx1]==aconx[AAx]){aconx[jAx1]=-1;jAx1=16;printf("limpie_aconx");}} jAx1++;}jAx=16;}jAx++;};printf(" yacumulador=63__con %d ",AAx);rellenadicc();if(jAx>16){cont_rep=gcont_rep;}verlo();}} }
	                                                                                                            /*else{if(BBB[masbajo]+(CCC[elementos])<(acmasalto+masalto+AAA[AAx])) {printf("menor lo tapan");cbv=0;while (cbv<=15){if(Ldicc[cbv]>-1){zparame(Ldicc[cbv],8);if(btod8(oysstr)==63){parame(Ldicc[cbv+1],8);if(btod8(ysstr)==AAx){cbv=16;printf(" encontre un anterior yacumulador=63 ");}};cbv=cbv+2;}if(cbv==16){yacumulador=63;cont_vueltas=252;cont_falsoa=AAx;cont_rep=masbajo;printf(" yacumulador=63__con %d ",AAx);rellenadicc();verlod();}}}*/                          
	       if((gax==AAA[AAx]+1) & (gaax==AAx)){printf("este se repite________________mgax: %d\n",mgax1);if(mgax==1){cvb=0;while (cvb<=15){if (AAA[AAx]+gax==AAA[cvb]){BBB[AAx]=acmasalto+0+masalto+AAA[AAx];masalto=masalto+AAA[cvb];vmicero=0;printf("FALSOA: %d",AAA[cvb]);falsoa=cvb-0;rellenadicc();cont_falsoa=falsoa;cont_rep=cont_rep+1;cvb=17;}
	                                         /*cbv=0;while (cbv<=15){printf("mayor : %d",mayor);if ((BBB[cbv]==-1) & (cbv+1==mayor+1)){mayor=mayor+1;AAA[cbv]=mayor;gax=AAA[cbv];mgax=0;mgbx=0; BBB[cbv]=acmasalto+masalto;}cbv++;}*/ 
											cvb++;}printf("cvb: %d",cvb);}/**/if(cvb==16){BBB[AAx]=acmasalto+masalto+AAA[AAx];gabx=0;printf("repeticion tricky no encontrada %d ",AAA[AAx]);barajea(AAx);}else if(cvb==18){printf("sumo de mas a: %d",AAA[AAx]);}    }	  		
		   else if (gax==AAA[AAx]+1 || gax==AAA[AAx]-1){BBB[AAx]=acmasalto+masalto+AAA[AAx];gabx=0;printf("valor se queda pegado** %d",AAA[AAx]);barajea(AAx);gax=AAA[AAx];gaax=AAx;if(yacumulador==63)trellenando=1;else trellenando=0;} 
				else                     if (mgbx==1){if (gabx>=2){pultreyeno=ultreyeno;ultreyeno=AAx;BBB[AAx]=acmasalto+masalto+AAA[AAx];printf("valor_repetido_y_tapado %d",AAA[AAx]);/* yacumulador=63*/barajea(AAx);} 
													 else{BBB[AAx]=acmasalto+masalto+AAA[AAx];if (pultreyeno==AAx)printf("tapado %d",AAx);pultreyeno=ultreyeno;ultreyeno=AAx;
													      cvb=0;while(cvb<=15){if (cvb==AAx){printf("este_es_el_valor_buscado %d",AAx);}                                           /* antes de barajea se define quien tapa y despues de barajea el como lo tapa*/
													                         else if (AAA[cvb]==AAA[AAx]) {gabx=gabx+1;printf("AAx %d",AAx);if(yacumulador==63){;}else {printf("parecido %d",cvb);verlo();yacumulador=63;cont_vueltas=252;cont_falsoa=AAx;gcont_rep=cont_rep;cont_rep=cvb;rellenadicc();cont_rep=gcont_rep;barajea(AAx);yacumulador=0;printf("se barajeo cvb %d",cvb);cvb=16;}}cvb++;}}
													                         }  
									      else{printf("valorinic %d",AAA[AAx]);BBB[AAx]=acmasalto+masalto+AAA[AAx];pultreyeno=ultreyeno;ultreyeno=AAx;printf("mgbx %d",mgbx);printf("gabx %d",gabx);printf("valorz %d",AAA[AAx]);printf("BBB %d",BBB[AAx]);barajea(AAx);cont_rep=1;} verlo();aconx[gax]=AAx;gax=AAA[AAx];gaax=AAx;vmicero=0;mgax=1;mgbx=1;trellenando=0;printf("AAx %d",AAx);printf("valor %d",AAA[AAx]);
	}}masalto=BBB[AAx]-acmasalto;acumulador=BBB[AAx];printf("acmasalto: %d\n",acmasalto);falsoa=AAx;cont_falsoa=falsoa;yacumulador=0;return(acumulador);}  
int sumalo1(aex1){int AAx1=aex1,jAx=0,jAx1=0;printf("AAx1: %d",AAx1);printf("mgbx1 %d gabx1 %d ",mgbx1,gabx1);
	if (BBB1[AAx1]==-1){if (uno1==0){uno1=1;AAA1[AAx1]=1;BBB1[AAx1]=1;mayor1=1;masalto1=1;vmicero1=1;acumulador1=1;mgax1=0;mgbx1=0;acmasalto1=0;gax1=AAA1[AAx1];}
	              else if ((AAA1[AAx1]==masalto1) & (masalto1>0) ){if (masalto1+AAA1[AAx1]>(136+acmasalto1)) {acmasalto1=acumulador1;masalto1=1;}
					  AAA1[AAx1]=AAA1[AAx1]-1;/*a1conx[gax1]=AAx1;*/printf("gAx1_seg_condicion: %d\n",gax1);gax1=AAA1[AAx1];BBB1[AAx1]=acmasalto1+masalto1+AAA1[AAx1];mgax1=0;mgbx1=0;barajea1(AAx1);		
					  }else {if (masalto1+AAA1[AAx1]>(136+acmasalto1)) {acmasalto1=acumulador1;masalto1=1;}else mayor1=mayor1+1;AAA1[AAx1]=mayor1;
					   mgax1=0;mgbx1=0; masalto1=masalto1+AAA1[AAx1];BBB1[AAx1]=acmasalto1+masalto1;vmicero1=0;/*barajea1(AAx1);*/	 	
					   a1conx[gax1]=AAx1;printf("gAx1: %d\n",gax1);gax1=AAA1[AAx1];}acumulador1=BBB1[AAx1];tr1=0;cont_rep1=1; 
	elementos1=elementos1+1;trellenando1=0;} else {if (AAA1[AAx1]==1) {if (masalto1+AAA1[AAx1]>(136+acmasalto1)) {acmasalto1=acumulador1;masalto1=1;}erescero1=1; if(vmicero1==1)
	                                                                                                                                   {if(tr1==1){BBB1[AAx1]=acmasalto1+masalto1+(mayor1+1);tr1=tr1+1;}
	                                                                                                                                          else{if(tr1>1){falsoa1=0;cont_falsoa1=falsoa1;cont_rep1=cont_rep1+1;tr1=tr1+1;} else{BBB1[AAx1]=acmasalto1+masalto1+AAA1[AAx1];vmicero1=1;}printf("repeticion de uno1: %d",AAA1[AAx1]);}trellenando1=0;}
	                                                                                                                     else{BBB1[AAx1]=acmasalto1+masalto1+(mayor1+1);if(mayor1<elementos1){printf("error");}vmicero1=1;tr1=1;cont_rep1=1;}mgax1=0;mgbx1=0;trellenando1=0;}
	  else {erescero1=0;if (masalto1+AAA1[AAx1]>(136+acmasalto1)) {acmasalto1=acumulador1;masalto1=1;}tr1=1;AAA1[AAx1]=AAA1[AAx1]-1; if(BBB1[AAx1]>-1){if(BBB1[AAx1]+CCC1[elementos1]<(acmasalto1+masalto1+AAA1[AAx1])) {printf("menor1 lo tapan_en_n_elementos1 %d",elementos1);    cbv=0;while (cbv<=15){if(Ldicc1[cbv]>-1){zparame(Ldicc1[cbv],8);if(btod8(xsstr)>=252){parame(Ldicc1[cbv+1],8);if(btod8(ysstr)==AAx1){cbv=16;printf(" encontre un anterior yacumulador=63 ");}}};cbv=cbv+2;}
	                                                                                                                                                                                                                                                                                     if(cbv>=16){printf("contando1 la parte derecha"); cbv=0;while (cbv<=15){if(Ldicc1[cbv]>-1){parame(Ldicc1[cbv+1],8);printf(" contando %d ysstr %c%c%c%c ",Ldicc[cbv+1],ysstr[0],ysstr[1],ysstr[2],ysstr[3]);jAx1=0;while(jAx1<=15){ /*if(a1conx[jAx]==AAx1){*/if(btod(zsstr)==a1conx[jAx1]){printf(" encontre un OBJETTIVO1 yacumulador=63 ");jAx1=15;cbv=16;}jAx1++;}}cbv=cbv+2;}}
																																																																						 if(cbv==16){ yacumulador1=63;cont_vueltas1=252;cont_falsoa1=AAx1;jAx1=0;while(jAx1<=15){if(a1conx[jAx1]==AAx1){gcont_rep1=cont_rep1;cont_rep1=jAx1;printf("encontre_jAx1");jAx=0;while(jAx<=15){if(jAx==jAx1){;}else{if(a1conx[jAx]==a1conx[AAx1]){a1conx[jAx]=-1;jAx=16;printf("limpie_a1conx");}} jAx++;}jAx1=16;}jAx1++;};printf(" yacumulador1=63__con %d ",AAx1);rellenadicc1();if(jAx1>16){cont_rep1=gcont_rep1;}verlo();}} }
	                                                                                                                       /*else{if(BBB1[masbajo1]+(CCC1[elementos1])<(acmasalto1+masalto1+AAA1[AAx1])) {printf("menor1 lo tapan");cbv=0;while (cbv<=15){if(Ldicc1[cbv]>-1){zparame(Ldicc1[cbv],8);if(btod8(oysstr)==63){parame(Ldicc1[cbv+1],8);if(btod8(ysstr)==AAx1){cbv=16;}printf(" encontre un anterior yacumulador=63 ");}};cbv=cbv+2;}if(cbv==16){yacumulador1=63;cont_vueltas1=252;cont_falsoa1=AAx1;cont_rep1=masbajo1;printf(" yacumulador1=63__con %d ",AAx1);rellenadicc1();verlod();}}}*/                                                      
	       if((gax1==AAA1[AAx1]+1) & (gaax1==AAx1)){printf("este se repite________________mgax1: %d\n",mgax1);if(mgax1==1){cvb=0;while (cvb<=15){if (AAA1[AAx1]+gax1==AAA1[cvb]){BBB1[AAx1]=acmasalto1+0+masalto1+AAA1[AAx1];masalto1=masalto1+AAA1[cvb];vmicero1=0; printf("FALSOA1: %d",AAA1[cvb]);falsoa1=cvb-0;rellenadicc1();cont_falsoa1=falsoa1;cont_rep1=cont_rep1+1;cvb=17;}
	                                              /*cbv=0;while (cbv<=15){printf("mayor1 : %d",mayor1);if ((BBB1[cbv]==-1) & (cbv+1==mayor1+1)){mayor1=mayor1+1;AAA1[cbv]=mayor1;gax1=AAA1[cbv];mgax1=0;mgbx1=0; BBB1[cbv]=acmasalto1+masalto1; }cbv++;}*/       
			                                      cvb++;}printf("cvb: %d",cvb);}/**/if(cvb==16){BBB1[AAx1]=acmasalto1+masalto1+AAA1[AAx1];gabx1=0;printf("repeticion1 tricky no encontrada %d",AAA1[AAx1]);barajea1(AAx1);}else if(cvb==18){printf("sumo de mas a: %d",AAA1[AAx1]);}         }
	       else if (gax1==AAA1[AAx1]+1 || gax1==AAA1[AAx1]-1){BBB1[AAx1]=acmasalto1+masalto1+AAA1[AAx1];gabx1=0;printf("valor se queda pegado1 %d",AAA1[AAx1]);barajea1(AAx1);gax1=AAA1[AAx1];gaax1=AAx1;if(yacumulador1==63)trellenando1=1;else trellenando1=0;}
	            else                          if (mgbx1==1){if (gabx1>=2){pultreyeno1=ultreyeno1;ultreyeno1=AAx1;BBB1[AAx1]=acmasalto1+masalto1+AAA1[AAx1];printf("valor_repetido_y_tapado1 %d",AAA1[AAx1]);/* yacumulador1=63*/barajea1(AAx1);}
													   else{/**/BBB1[AAx1]=acmasalto1+masalto1+AAA1[AAx1];if(pultreyeno1==AAx1)printf("tapado1 %d",AAx1);pultreyeno1=ultreyeno1;ultreyeno1=AAx1;
													        cvb=0;while(cvb<=15){if (cvb==AAx1){printf("este_es_el_valor_buscadol_1 %d",AAx1);}                                                /* antes de barajea se define quien tapa y despues de barajea el como lo tapa*/ 
													                            else if (AAA1[cvb]==AAA1[AAx1]) {gabx1=gabx1+1;printf("AAx1 %d",AAx1);if(yacumulador1==63){printf("yacumulador1==63 segunda condicion_");}else {printf("parecido1 %d",cvb);verlo();yacumulador1=63;cont_vueltas1=252;cont_falsoa1=AAx1;gcont_rep1=cont_rep1;cont_rep1=cvb;rellenadicc1();cont_rep1=gcont_rep1;barajea1(AAx1);yacumulador1=0;printf("se barajeo cvb %d",cvb);cvb=16;}}cvb++;}}
													                            }
										  else{printf("valorinic %d",AAA1[AAx1]);BBB1[AAx1]=acmasalto1+masalto1+AAA1[AAx1];pultreyeno1=ultreyeno1;ultreyeno1=AAx1;printf("gabx1 %d",gabx1);printf("valorz %d",AAA1[AAx1]);printf("BBB1 %d",BBB1[AAx1]);barajea1(AAx1);cont_rep1=1;} printf("mgbx1 %d gabx1 %d ",mgbx1,gabx1);verlo();a1conx[gax1]=AAx1;gax1=AAA1[AAx1];gaax1=AAx1;vmicero1=0;mgax1=1;mgbx1=1;trellenando1=0;printf("AAx1 %d",AAx1);printf("valor %d",AAA1[AAx1]);
	}}masalto1=BBB1[AAx1]-acmasalto1;acumulador1=BBB1[AAx1];printf("acmasalto1: %d\n",acmasalto1);falsoa1=AAx1;cont_falsoa1=falsoa1;yacumulador1=0;return(acumulador1);}       
int doit(int comprimiendo){FILE *fp,*mio; char y1sstr[4]="    ",z1sstr[4]="    ";
int masax=0,gaconx=0,ga1conx=0,leo=0,xoo=0,cco=0,cco1=0,co=0,gco=0,po=0,cpo=0,gcpo=0,gcpo1=0,co1=0,gco1=0,cp=0,cp1=0,gcp=0,gcp1=0,po1=0,cpo1=0,dtparametromul=0,l=0,m=0,dtparametro=0,dtparametromul1=0,ax=0,i=l,c=0,entra=0,entra1=0,gentra=0,gentra1=0;
fp = fopen("myfile3","r+b");if (fp==NULL) exit(1);if ((mio = fopen("myfile2","w+b"))==NULL) exit(1);    
  char str[9]="         ",ent[4]="    ",ent1[4]="    "; distri_sin_repeticion();distri_sin_repeticion1(); gaconx=0;while(gaconx<=15){aconx[gaconx]=-1;a1conx[gaconx]=-1;gaconx++;}
  while (!feof(fp)){  
   if (comprimiendo==1){if (fread(&l, 1, 1, fp)!=0){if (feof(fp)){/*rellenalevel2();*/printf("listo_____: %d",l);exit(1);} if (fwrite(&m, 1, 1, mio) !=1) {printf("no escribio:");getchar();exit(1);}
	leo++;printf("leo: %d  ",leo);printf("acumulador: %d ",acumulador-0);printf("acumulador1: %d",acumulador1-0);parame(l,8);strncpy(ent,ysstr,4);entra=btod(ent);strncpy(ent1,zsstr,4);entra1=btod(ent1);
                                                                     /*validar cont rep y falsoa para estudiar casos de ldicc*/
    if (((acumulador-0)<511) & ((acumulador1-0)<511)){ax=0;while(ax<=15){if(entra==(ax-0)){if(ax>masax) masax=ax ;if(entra==falsoa) {if (gentra==entra){printf("anterior: %d",gentra);cont_rep=cont_rep+1;  if(cont_rep==15) {rellenadicc();}} 
                                                                                                                                    else cont_rep=1;}  
                                                                                                                  else{if(cont_rep>masax) {if(gentra==falsoa)  {printf("anterior: %d ",gentra);}  rellenadicc();acumulador=sumalo(ax); printf("entra:  %d con_rep:  %d  falsoa: %d",entra,cont_rep,falsoa);   cont_rep=1;} 
                                                                                                               printf("ax_verlo %d ",ax);verlo();getchar();acumulador=sumalo(ax);  gentra=entra;}}
                                                                    if(entra1==(ax-0)){if(ax>masax) masax=ax ;if(entra1==falsoa1){if (gentra1==entra1){printf("anterior1: %d",gentra1);cont_rep1=cont_rep1+1;if(cont_rep1==15){rellenadicc1();}}
                                                                                                              else cont_rep1=1;} 
                                                                                                              else{ if(cont_rep1>=masax){if(gentra1==falsoa1){printf("anterior1: %d ",gentra1);}rellenadicc1();acumulador1=sumalo1(ax);printf("entra1: %d con_rep1: %d falsoa1: %d",entra1,cont_rep1,falsoa1);cont_rep1=1;} 
                                                                                                               printf("ax_verlo %d ",ax);verlo();getchar();acumulador1=sumalo1(ax);gentra1=entra1;}}ax++;} verlo();getchar();}
    else {if( acumulador>=511){elementos=0;printf("acumulador:____________ contaray %d %d ",acumulador,contaray);getchar();
		mitaad=0; if(contaray<=3){/**/                      if(contaray==0){llisto=1;cont_caras=0;co=0;gcpo=0;while(co<=15)   {aconx[co]=-1; if(BBB[co]>=0)  {buf0[co]=less(BBB[co]); po=1;cpo=1;   while(po<=BBB[co])  {po=po*2;cpo++;}    if(po>BBB[co])  {po=po/2;cpo--;}   if(gcpo==0)  {if(co==15) {bwf0[cp][ax]=cpo;cp++;}   else{gcpo=cpo-1;gcp=cp;}}    else{bwf0[cp][ax]=(gcpo*10)+(cpo-1);gcpo=0;cp++;}}      else{if(co==15)  {if(gcpo>0)  {bwf0[gcp][ax]=gcpo; }}}co++;}contaray++; acumulador=0;co=0;while(co<=15){AAA[co]=-1;BBB[co]=-1;co++;}} 
	                                                   else if(contaray==1){llisto=1;cont_caras=1;co=0;       while(co<=15)   {aconx[co]=-1; if(BBB[co]>=0)  {buf1[co]=less(BBB[co]); po=1;cpo=1;   while(po<=BBB[co])  {po=po*2;cpo++;}    if(po>BBB[co])  {po=po/2;cpo--;}   if(gcpo==0)  {if(co==15) {bwf0[cp][ax]=cpo;cp++;}   else{gcpo=cpo-1;gcp=cp;}}    else{bwf0[cp][ax]=(gcpo*10)+(cpo-1);gcpo=0;cp++;}}      else{if(co==15)  {if(gcpo>0)  {bwf0[gcp][ax]=gcpo; }}}co++;}printf("_____________________ax______ %d \n",ax);getchar();rellenalevel2();getchar();      printf("______ax______ %d \n",ax);getchar();  /*sacando();*/  cont_vueltas=cont_vueltas+1;contaray++;acumulador=0;co=0;while(co<=15){AAA[co]=-1;BBB[co]=-1;co++;}}
	                                                   else if(contaray==2){llisto=1;cont_caras=1;co=0;       while(co<=15)   {aconx[co]=-1; if(BBB[co]>=0)  {buf1[co]=less(BBB[co]); po=1;cpo=1;   while(po<=BBB[co])  {po=po*2;cpo++;}    if(po>BBB[co])  {po=po/2;cpo--;}   if(gcpo==0)  {if(co==15) {bwf0[cp][ax]=cpo;cp++;}   else{gcpo=cpo-1;gcp=cp;}}    else{bwf0[cp][ax]=(gcpo*10)+(cpo-1);gcpo=0;cp++;}}      else{if(co==15)  {if(gcpo>0)  {bwf0[gcp][ax]=gcpo; }}}co++;}printf("_____________________ax______ %d \n",ax);getchar();rellenalevel2();getchar();      printf("______ax______ %d \n",ax);getchar();  /*sacando();*/  cont_vueltas=cont_vueltas+1;contaray++;acumulador=0;co=0;while(co<=15){AAA[co]=-1;BBB[co]=-1;co++;}}
												       else if(contaray==3){cont_caras=3;co=0;                while(co<=15)   {aconx[co]=-1; if(BBB[co]>=0)  {buf3[co]=less(BBB[co]); po=1;cpo=1;   while(po<=BBB[co])  {po=po*2;cpo++;}    if(po>BBB[co])  {po=po/2;cpo--;}   if(gcpo==0)  {if(co==15) {bwf1[cp][ax]=cpo;cp++;}   else{gcpo=cpo-1;gcp=cp;}}    else{bwf1[cp][ax]=(gcpo*10)+(cpo-1);gcpo=0;cp++;}}      else{if(co==15)  {if(gcpo>0)  {bwf1[gcp][ax]=gcpo; }}}co++;}/*rellenalevel2();cont_vueltas=cont_vueltas+1;}contaray++;acumulador=0;co=0;while(co<=15){AAA[co]=-1;BBB[co]=-1;co++;}*/}
																																																																										                               uno=0;/*falsoa=-1;*/}}
          if(acumulador1>=511){elementos1=0;printf("acumulador1:_____________ contaray %d %d ",acumulador1,contaray1);getchar();
	    mitaad=1;if(contaray1<=3){/**/                      if(contaray1==0){llisto1=1;cont_caras=0;co1=0;gcpo1=0;while(co1<=15){a1conx[co1]=-1;if(BBB1[co1]>=0){buf10[co1]=less(BBB1[co1]);po1=1;cpo1=1;while(po1<=BBB1[co1]){po1=po1*2;cpo1++;}if(po1>BBB[co1]){po1=po1/2;cpo1--;}if(gcpo1==0) {if(co1==15){bwf10[cp1][ax]=cpo1;cp1++;}else{gcpo1=cpo1-1;gcp1=cp1;}}else{bwf10[cp1][ax]=(gcpo1*10)+(cpo1-1);gcpo1=0;cp1++;}}else{if(co1==15){if(gcpo1>0){bwf10[gcp1][ax]=gcpo;}}}co1++;}contaray1++;acumulador1=0;co1=0;while(co1<=15){AAA1[co1]=-1;BBB1[co1]=-1;co1++;}}  
                                                       else if(contaray1==1){llisto1=1;cont_caras=1;co1=0;        while(co1<=15){a1conx[co1]=-1;if(BBB1[co1]>=0){buf11[co1]=less(BBB1[co1]);po1=1;cpo1=1;while(po1<=BBB1[co1]){po1=po1*2;cpo1++;}if(po1>BBB[co1]){po1=po1/2;cpo1--;}if(gcpo1==0) {if(co1==15){bwf10[cp1][ax]=cpo1;cp1++;}else{gcpo1=cpo1-1;gcp1=cp1;}}else{bwf10[cp1][ax]=(gcpo1*10)+(cpo1-1);gcpo1=0;cp1++;}}else{if(co1==15){if(gcpo1>0){bwf10[gcp1][ax]=gcpo;}}}co1++;}printf("_____________________ax______ %d \n",ax);getchar();rellenalevel2();getchar();       printf("______ax1_______ %d \n",ax);getchar();  /*sacando1();*/  cont_vueltas1=cont_vueltas1+1;contaray1++;acumulador1=0;co1=0;while(co1<=15){AAA1[co1]=-1;BBB1[co1]=-1;co1++;}}
                                                       else if(contaray1==2){llisto1=1;cont_caras=1;co1=0;        while(co1<=15){a1conx[co1]=-1;if(BBB1[co1]>=0){buf11[co1]=less(BBB1[co1]);po1=1;cpo1=1;while(po1<=BBB1[co1]){po1=po1*2;cpo1++;}if(po1>BBB[co1]){po1=po1/2;cpo1--;}if(gcpo1==0) {if(co1==15){bwf10[cp1][ax]=cpo1;cp1++;}else{gcpo1=cpo1-1;gcp1=cp1;}}else{bwf10[cp1][ax]=(gcpo1*10)+(cpo1-1);gcpo1=0;cp1++;}}else{if(co1==15){if(gcpo1>0){bwf10[gcp1][ax]=gcpo;}}}co1++;}printf("_____________________ax______ %d \n",ax);getchar();rellenalevel2();getchar();       printf("______ax1_______ %d \n",ax);getchar();  /*sacando1();*/  cont_vueltas1=cont_vueltas1+1;contaray1++;acumulador1=0;co1=0;while(co1<=15){AAA1[co1]=-1;BBB1[co1]=-1;co1++;}}
                                                       else if(contaray1==3){cont_caras=7;co1=0;                  while(co1<=15){a1conx[co1]=-1;if(BBB1[co1]>=0){buf13[co1]=less(BBB1[co1]);po1=1;cpo1=1;while(po1<=BBB1[co1]){po1=po1*2;cpo1++;}if(po1>BBB[co1]){po1=po1/2;cpo1--;}if(gcpo1==0) {if(co1==15){bwf11[cp1][ax]=cpo1;cp1++;}else{gcpo1=cpo1-1;gcp1=cp1;}}else{bwf11[cp1][ax]=(gcpo1*10)+(cpo1-1);gcpo1=0;cp1++;}}else{if(co1==15){if(gcpo1>0){bwf11[gcp1][ax]=gcpo;}}}co1++;}/*rellenalevel2();cont_vueltas1=cont_vueltas1+1;}}contaray1++;acumulador1=0;co1=0;while(co1<=15){AAA1[co1]=-1;BBB1[co1]=-1;co1++;}*/}																																																																																  
                                                                                                                                                                                                                                                                                                                                       uno1=0;/*falsoa1=-1;*/}}
   verlo(); } 
  }} 
else{
     if (fwrite(&i, 1, 1, mio) !=1) {printf("no escribio:");getchar();exit(1);} printf("%d escribio:",i);
    
    }
}fclose(fp);
return 0;}																																																																																																																			
doit(1);return 0;}  	             
/*void dondesten(){int candy=0,acumucandy=0,vbx2=0,vbx3=0,raya=0;
            	            								         distribccc3();
            	            								         candy=vbx3-0;
            	            								         acumucandy=BBB[masalto];distribccc2();raya=vbx2-0;               	            								                     	            								         
    						                                         if (BBB[intocable]>CCC[u]){
									                                    estironveces=vbx2-u;estiradsdaki=u;estirainstancias();instanciasdelemento=instanciasdelemento+1;u=u+estironveces;repeticiones=u-elementos;}  
            	            								         ggu=u;u=candy;           	            								         
            	            								         if (BBB[masalto]==CCC[candy]){;}
            	            								         else{u=u+1;repeticiones=repeticiones-1;}
            	            								         while (candy<=elementos){            	            								          
            	            								          ww=1;while (ww<=16){
            	            								               if (aconx[ww]==1){
            	            								                  if (AAA[ww]==candy)
            	            								                     distribccc4();
            	            								                     www=1;while (www<=16){
            	            								                                if BBB[www]>-1{
            	            								                                   if (BBB[www]==c[candy]){
            	            								                                     cota1=acumucandycota2=c[candy+1]+(acumucandy-candy);gu=u;u=candy;lame1();acumucandy=acumucandy+acumlame;u=gu;www=18;}}
            	            								                           www=www+1;} 
            	            								                           if (www==17){
            	            								                              bye=1;while (bye<=16){
            	            								                                    if (byes[bye][1]==candy){
          	            								                                           cota1=acumucandy;cota2=CCC[candy+1]+(acumucandy-candy);gu=u;u=candy;lame1();acumucandy=acumucandy+acumlame;u=gu;bye=1;}
            	            								                              bye=bye+1;}if (bye==17){acumucandy=acumucandy+(candy+1);DDD[u]=candy;}}           	            								                        
            	            								                     ww=18;}
            	            								               else{if (AAA[ww]==candy){acumucandy=acumucandy+(candy+1);DDD[u]=candy;ww=18;}}            	            								                 
            	            								               ww=ww+1;}
            	            								            if (ww==17){qq=1;            	            								               
            	            								               while (qq<=16){
            	            								                  if (b[qq]==acumucandy){acumucandy=acumucandy+(candy+1);DDD[u]=candy;ww=18;}qq=qq+1;}
            	            								               if (qq==17){
            	            								                  if (candy==elementos){;}
             	            								                  else{
            	            								                  cota1=acumucandy;cota2=CCC[candy+1]+(acumucandy-candy);gu=u;u=candy;lame1();acumucandy=acumucandy+acumlame;u=gu;}
            	            								                  if (repeticiones==1)ww=18;            	            								                     
            	            								                  else repeticiones=repeticiones-1;}}
            	            								            candy=candy+1;}
            	            								         u=ggu;
}*/
     
       


