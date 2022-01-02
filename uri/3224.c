#include <stdio.h>

int main(){
  int a=0,b=0;char c;
  while(scanf("%c",&c),c!='h')if(c=='a')a++;
  while(scanf("%c",&c),c!='h')if(c=='a')b++;
  if(a>=b)printf("go\n");
	else printf("no\n");

  return 0;
}