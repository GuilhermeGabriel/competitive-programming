#include <stdio.h>

int main(){
	char s[81],c,last; int i=0;

	scanf("%c",&s[i++]);

	while(scanf("%c",&c)>0){
		if(s[i-1]==' '&&c==' ')continue;
		s[i++]=c;
	}
	
	s[i-1]='\0';
	printf("%s\n",s);

	return 0;
}