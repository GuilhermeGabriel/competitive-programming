#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct{
	int alt; char pd;
} Elem;

int main(){
	int h,w;scanf("%d%d",&h,&w);

	Elem **m=malloc(h*sizeof(Elem*));
	for (int i=0;i<h;i++){
    m[i]=malloc(w*sizeof(Elem));
  }

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			scanf("%d",&m[i][j].alt);
			m[i][j].pd='-';
		}
	}

	
	Fila **FO=malloc(100*sizeof(Fila*));
  for(int i=0;i<100;i++){
  	cria_fila(&FO[i]);
  }

	int altc,ismenor,qfo=0; char l='a';
  for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			altc=m[i][j].alt;ismenor=1;
			
			if(i-1>=0&&altc>m[i-1][j].alt)ismenor=0;
			if(j-1>=0&&altc>m[i][j-1].alt)ismenor=0;
			if(j+1<w&&altc>m[i][j+1].alt)ismenor=0;
			if(i+1<h&&altc>m[i+1][j].alt)ismenor=0;
			
			if(ismenor){
				insere_fila(FO[altc],altc,i,j);
				m[i][j].pd=l;l++;qfo++;
			}
		}
	}


	while(qfo>0){
		for(int e=0;e<100;e++){
			if(FO[e]->v>0){

				int i=FO[e]->prox->i;
				int j=FO[e]->prox->j;
				char pd=m[i][j].pd;

				if(i-1>=0&&m[i-1][j].pd=='-'){
					int alt=m[i-1][j].alt;
					m[i-1][j].pd=pd;
					insere_fila(FO[alt],alt,i-1,j);
					qfo++;
				}
				
				if(j-1>=0&&m[i][j-1].pd=='-'){
					int alt=m[i][j-1].alt;
					m[i][j-1].pd=pd;
					insere_fila(FO[alt],alt,i,j-1);
					qfo++;
				}

				if(j+1<w&&m[i][j+1].pd=='-'){
					int alt=m[i][j+1].alt;
					m[i][j+1].pd=pd;
					insere_fila(FO[alt],alt,i,j+1);
					qfo++;
				}

				if(i+1<h&&m[i+1][j].pd=='-'){
					int alt=m[i+1][j].alt;
					m[i+1][j].pd=pd;
					insere_fila(FO[alt],alt,i+1,j);
					qfo++;
				}

				remove_fila(FO[e]);
				qfo--;	
				break;
			}
		}
	}

  for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			printf("%c ",m[i][j].pd);
		}
		printf("\n");
	}

	
	for(int i=0;i<h;i++)free(m[i]);
  free(m);

	for(int i=0;i<100;i++)libera_fila(&FO[i]);
	free(FO);

	return 0;
}