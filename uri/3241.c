#include <stdio.h>

int main(){
  int n,a,b;char op;scanf("%d",&n);
  while(n--){
    if(scanf("%d%c%d",&a,&op,&b)==3)printf("%d\n",a+b);
    else {printf("skipped\n");while(scanf("%c",&op),op!='\n');}
  }
}