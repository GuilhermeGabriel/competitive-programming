#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int matou;
	char nome[11];
} Assasino;

int idxAss(Assasino *ass,int idxa,char *nome){
	int idx=-1;
	for(int i=0;i<=idxa;i++)
		if(strcmp(ass[i].nome,nome)==0)return i;
	return idx;
}

void showallwithm(Assasino *ass,int idxa,int m){
	for(int i=0;i<=idxa;i++)
		if(ass[i].matou==m)
			printf("%s %d\n",ass[i].nome,ass[i].matou);
}

int main(){
	int n,r=0,idxa=0;scanf("%d",&n);

	char **mortos=(char**)malloc(n*sizeof(char *));
  for(int p=0;p<n;p++)
    mortos[p]=(char*)malloc(11 * sizeof(char));

	char *tmpAssasino=(char*)malloc(11*sizeof(char));
	Assasino *assasinos=(Assasino*)malloc(n*sizeof(Assasino));

	for(int i=0;i<n;i++){
		scanf("%s %s",tmpAssasino,mortos[i]);

		int idx=idxAss(assasinos,idxa,tmpAssasino);
		if(idx==-1){
			strcpy(assasinos[idxa].nome,tmpAssasino);
			assasinos[idxa].matou=1;idxa++;
		}else{
			assasinos[idx].matou++;
			if(assasinos[idx].matou>r)r=assasinos[idx].matou;
		} 
	}

	for(int i=0;i<n;i++){
		int idx=idxAss(assasinos,idxa-1,mortos[i]);
		if(idx!=-1)assasinos[idx].matou=-1;
	}

	printf("HALL OF MURDERERS\n");
	for(int i=r;i>=0;i--){
		showallwithm(assasinos,idxa-1,i);
	}

	for(int p=0;p<n;p++)
    free(mortos[p]);
  free(mortos);
  free(tmpAssasino);
  free(assasinos);

	return 0;
}