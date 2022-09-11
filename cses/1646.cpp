#include "bits/stdc++.h"

using namespace std;

int main(){
  long long n,q,s=0;cin>>n>>q;
  vector<long long> o(n),p(n);
  
  for(int i=0;i<n;i++){
    cin>>o[i];
    s+=o[i];
    p[i]=s;
  }
  
  // for(auto e:p)cout<<e<<' ';
  
  long long a,b,l,r;
  while(q--){
    cin>>a>>b;
    r=p[b-1];
    l=(a-2<0) ? 0 : p[a-2];
    cout<<r-l<<'\n';
  }
  
  
  return 0;
}


