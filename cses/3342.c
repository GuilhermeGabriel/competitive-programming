#include <stdio.h>

int main(){
  int n,p=0,b=0;scanf("%d",&n);
  int c=1,cl=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(c)b++;
      else p++;
      c=!c;
    }
    c=!cl;cl=!cl;
  }

  printf("%d casas brancas e %d casas pretas\n",b,p);

  return 0;
}