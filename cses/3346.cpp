#include "bits/stdc++.h"
using namespace std;

int main(){
  double a,b,f=1;cin>>a>>b;
  
  if(a<0){
    f*=1-(-a/100);
  }else{
    f*=1-(-a/100);
  }

  if(b<0){
    f*=1-(-b/100);
  }else{
    f*=1-(-b/100);
  }

  f-=1;
  f*=100;

  printf("%.6lf\n",f);

  return 0;
}
