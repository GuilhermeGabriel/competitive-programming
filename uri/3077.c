#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,k; scanf("%d%d",&n,&k);
	int *s=(int*)malloc(n*sizeof(int));
	int *r=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)scanf("%d",&s[i]);

	int st=0;
	while(k--){
		for(int i=0;st+i<n;i++){
			r[i]+=s[st+i];
		}
		st++;
		if(st==n)st=0;
	}

	for(int i=0;i<n;i++)printf("%d ",r[i]);

	return 0;
}