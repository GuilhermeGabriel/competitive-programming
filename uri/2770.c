#include <stdio.h>

int main(){
	int x,y,m,l,a;

	while(scanf("%d%d%d",&x,&y,&m)>0){
		while(m--){
		  scanf("%d%d",&l,&a);
			if((l<=x&&a<=y)||(l<=y&&a<=x))printf("Sim\n");
			else printf("Nao\n");
		}
	}

	return 0;
}
