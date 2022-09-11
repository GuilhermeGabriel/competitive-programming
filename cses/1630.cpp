#include "bits/stdc++.h"
using namespace std;

int main(){ 
  int n,a,b;cin>>n;
  vector<pair<int,int>> v(n);

  for(int i=0;i<n;i++){
    cin>>a>>b;
    v[i]={a,b};
  }

  sort(v.begin(),v.end());

  long long l=0,t=0;
  for(auto e:v){
    t+=e.first;
    l+=e.second-t;
  }

  cout<<l<<'\n';

  return 0;
}