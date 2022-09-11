#include "bits/stdc++.h"
using namespace std;

int main(){
  int n,m,di,c=0;cin>>n;
  string num=to_string(n);

  while(num.size()>1){
    num=to_string(n);
    // cout<<num<<'\n';

    m=0;
    for(auto d:num){
      di=d-'0';
      m=max(m,di);
    }

    n-=m;

    c++;
  }

  if(c==0)c++;

  cout<<c<<'\n';

  return 0;
}