#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,in;cin>>n;
  long long atual=0,maior=LONG_MIN;
  while(n--){
    cin>>in;
    atual+=in;
    maior=max(maior,atual);
    if(atual<0)atual=0;
  }
  cout<<maior<<'\n';

  return 0;
}