#include "bits/stdc++.h"
using namespace std;

struct B{
  int q,idx;
};

bool cmp(B a, B b){
  if(a.q!=b.q)return a.q>b.q;
  return a.idx<b.idx;
}

int main(){
  int n;cin>>n;
  B tmp;

  vector<B> v(n);
  
  for(int i=0;i<n;i++){
    cin>>tmp.q;tmp.idx=i;
    v.push_back(tmp);
  }

  sort(v.begin(),v.end(),cmp);

  if(v[0].idx==0)cout<<'S'<<'\n';  
  else cout<<'N'<<'\n';

  return 0;
}
