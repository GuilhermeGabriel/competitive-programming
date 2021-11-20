#include <stdio.h>

int main(){
	int a=0,l=0,x=0,y=0,ecx=0;
	char tab[10][10],pec[10][10];

	scanf("%d %d",&a,&l);
	for(int i=0;i<a;i++)
		for(int j=0;j<l;j++)
			scanf(" %c",&tab[i][j]);

	scanf("%d %d",&x,&y);
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
			scanf(" %c",&pec[i][j]);

	for(int v=0;v+y<=l&&!ecx;v++){
		for(int t=0;t+x<=a&&!ecx;t++){

			ecx=1;
			for(int i=0;i<x;i++)
				for(int j=0;j<y;j++)
					if(pec[i][j]=='#'&&tab[t+i][v+j]=='*')ecx=0;

			if(ecx==1){
				for(int i=0;i<x;i++)
					for(int j=0;j<y;j++)
						if(pec[i][j]=='#')tab[t+i][v+j]='#';
			}
		}
	}

	for(int i=0;i<a;i++){
		for(int j=0;j<l;j++){
			printf("%c",tab[i][j]);
		}
		printf("\n");
	}

	if(ecx)
		printf("O jogo deve continuar\n");
	else
		printf("Fim de jogo\n");

	return 0;
}