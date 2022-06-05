#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v;int n,a;cin>>n;

  while(n--){
    cin>>a;
    v.push_back(a);
  }

  map<int,int> idx_visto;

  int maxlen=0,inicio=0;

  for(int fim=0;fim<(int)v.size();fim++){
    if(idx_visto.count(v[fim])>0)
      inicio=max(inicio,idx_visto[v[fim]]+1);

    idx_visto[v[fim]]=fim;
    maxlen=max(maxlen,fim-inicio+1);
  }
  
  cout<<maxlen<<"\n";
}