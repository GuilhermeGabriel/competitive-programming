#include "bits/stdc++.h"
using namespace std;

int fib(int n){
  if(n<=1)return n;
  return fib(n-1)+fib(n-2);
}

int f[100000];
int fibpd(int n){
  f[0]=0;
  f[1]=1;
  for(int i=2;i<=n;i++){
    f[i]=f[i-1]+f[i-2];
  }
  return f[n];
}

int main(){
  cout<<fibpd(45)<<'\n';
  return 0;
}