#include "stdio.h"

int main(){
	char a;int p=0;
	
	while(scanf("%c",&a)>0)p++;
  if(p>=10)printf("palavrao\n");
	else printf("palavrinha\n");

	return 0;
}