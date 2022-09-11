#include "bits/stdc++.h"
using namespace std;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n,m=0,s=0,v;cin>>n;
  
  for(int i=0;i<n;i++){
    cin>>v;
    m=max(m,v);
    s+=v;
  }

  if(m>s-m)cout<<2*m<<'\n';
  else cout<<s<<'\n';
  
  return 0;
}