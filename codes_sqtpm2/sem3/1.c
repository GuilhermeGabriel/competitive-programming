#include <stdio.h>

int main(){
	char s[81],c; int i=0;
	while(scanf("%c",&c)>0)
		if(c!=' ')s[i++]=c;
	s[i]='\0';
	printf("%s\n",s);

	return 0;
}
