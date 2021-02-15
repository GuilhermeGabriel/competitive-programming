#include <stdio.h>

int nadd[1000005], suml[1005];

int main(){
	int n,r,i,j,sDp=0,sDs=0;scanf("%d",&n);

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&r);

			if(nadd[r]==r){printf("0\n");return 0;}
			nadd[r]=r;
			
			if(i==j)sDp+=r;
			if(i+j==n+1)sDs+=r;

			suml[i]+=r;
		}

		if(i>1&&suml[i]!=suml[i-1]){
			printf("0\n");
			return 0;
		}
	}

	if(sDp!=sDs){
		printf("0\n");
		return 0;
	}

	printf("%d\n",sDp);

	return 0;
}