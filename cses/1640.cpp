#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int x,o,in;cin>>x>>o;
  vector<int> v;
  unordered_map<int,vector<int>> idxs;

  int idx=0;
  while(x--){
    cin>>in;
    idxs[in].push_back(idx++);
    v.push_back(in);
  }

  sort(v.begin(),v.end());

  for(int i=0;i<((int)v.size()+1)/2;i++){
    int a=i+1,b=v.size()-1,e=v[i],x=o-e;
    while(a<=b){
      int k=(a+b)/2;
      if(v[k]==x){
        int idx1=idxs[x][0],idx2;
        if(x==e)idx2=idxs[x][1];
        else idx2=idxs[e][0];

        cout<<idx1+1<<' '<<idx2+1<<'\n';

        return 0;
      }
      if(v[k]<x)a=k+1;
      else b=k-1;
    }
  }

  cout<<"IMPOSSIBLE"<<'\n';

  return 0;
}
