#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,in;cin>>n;
  vector<int> v;

  while(n--){
    cin>>in;
    v.push_back(in);
  }
  
  sort(v.begin(),v.end());

  long long s=0,o=v[v.size()/2];
  // cout<<o<<'\n';
  for(auto e:v)
    s+=abs(e-o);

  cout<<s<<'\n';

  return 0;
}