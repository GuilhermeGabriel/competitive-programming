#include <stdio.h>
#include <stdlib.h>

int bs(int *data,int l,int r,int x) {
  int m=(l+r)/2;
  if(l>r)return -1;
  if(data[m]==x)return m;
	else if(data[m]<x)return bs(data,m+1,r,x);
	else return bs(data,l,m-1,x);
}

int main(){
	int n,k;scanf("%d",&n);
	int *c=(int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++)scanf("%d",&c[i]);
	scanf("%d",&k);
	
	int s=0,r=-1;
	for(int i=0;i<n-1;i++){
		s=c[i];r=bs(c,i+1,n-1,k-s);
		if(r!=-1)break;
	}
	printf("%d %d\n",s,c[r]);

	free(c);

	return 0;
}