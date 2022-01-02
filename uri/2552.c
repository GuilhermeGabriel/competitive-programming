#include <stdio.h>

int main(){	
	long n,m,tab[101][101];
	while(scanf("%ld%ld",&n,&m)>0){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%ld",&tab[i][j]);
				if(tab[i][j]==1)tab[i][j]=9;
			}
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int qa=0;
				if(tab[i][j]==0){
					if(tab[i-1][j]==9)qa++;
					if(tab[i+1][j]==9)qa++;
					if(tab[i][j-1]==9)qa++;
					if(tab[i][j+1]==9)qa++;
					tab[i][j]=qa;
				}
			}
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%ld",tab[i][j]);
				tab[i][j]=0;
			}
			printf("\n");
		}
	}

	return 0;
}
