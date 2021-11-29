#include "bits/stdc++.h"
using namespace std;

vector<tuple<int,int,int>> edges;
int n,m,dist[3];

void bellford(int s){
  for(int i=1;i<=n;i++)dist[i]=1e9;
  dist[s]=0;
  for(int i=1;i<=n-1;i++){
    for(auto e:edges){
      int a,b,w;tie(a,b,w)=e;
      dist[b]=min(dist[b],dist[a]+w);
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin>>n>>m;

  return 0;
}