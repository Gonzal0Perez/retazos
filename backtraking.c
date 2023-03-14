#include <stdio.h>
#include <stdlib.h>
#define MAX_X /*4*/8
#define MAX_Y /*9*/9
#define END_X /*3*/7
#define END_Y /*8*/8
typedef struct P{int x,y;}PP;
/* functions to present path through matrix,check if next move is valid with backtrack technique */
void presentPath(PP[],int); int tryC(int m[][MAX_Y],int,int);
void checkPaths(int m[][MAX_Y],int,int,PP[],int);
int main(){ int sX=0, sY=0,m[MAX_X][MAX_Y]={{0,0,0,0,1,1,0,0,0},/* declare start position and matrix we are searching paths*/
	                                        {1,1,1,0,0,0,0,0,0},
	                                        {1,0,1,0,0,1,0,1,0},
	                                        {1,0,1,1,0,1,0,1,0},
	                                        {1,0,1,1,0,0,0,1,0},
	                                        {1,0,1,0,0,1,0,1,0},
	                                        {1,0,0,1,0,0,0,0,1},
	                                        {0,0,1,1,0,0,0,0,0}
	                                        };  
PP Path[MAX_X+MAX_Y+1];/* lets go and look for all paths */checkPaths(m,sX,sY,Path,0); return 0;}

void presentPath(PP Path[MAX_X+MAX_Y+1],int k){int i=0;for(i=0;i<k;i++)printf("%d, %d",Path[i].x,Path[i].y);printf("\n\n");}

int tryC(int m[MAX_X][MAX_Y],int x, int y){return ((x>=0)&&(x<MAX_X)&&(y>=0)&&(y<MAX_Y)&&m[x][y]==0);}

void checkPaths(int m[MAX_X][MAX_Y], int c_x, int c_y,  PP Path[MAX_X+MAX_Y+1],int l)
{ /* will abandon path beyond wall and path where we hit the wall. */
  if(!tryC(m,c_x,c_y)) return ; /* mark the path and memorize */
  m[c_x][c_y]=2; Path[l].x=c_x;Path[l].y=c_y;/* are we at the searched position or check new potential candidates */
  if((c_x==END_X)&&(c_y==END_Y))presentPath(Path,l+1);/*down, right and down-right */
  else {checkPaths(m,c_x+1,c_y+1,Path,l+1); checkPaths(m,c_x+1,c_y,Path,l+1); checkPaths(m,c_x,c_y+1,Path,l+1); }  
  /* clear the position */m[c_x][c_y]=0;}
