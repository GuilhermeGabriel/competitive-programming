#include "bits/stdc++.h"
using namespace std;

int n,m,a,b,sn,en,last[100001],p=0;
bool vis[100001];
vector<int> adj[200001],path;

bool dfs(int no,int p){
  vis[no]=1;
  last[no]=p;
  for(auto u:adj[no]){
    if(u==p)continue;
    if(vis[u]){
      sn=u;en=no;
      return true;
    }else{
      if(dfs(u,no))return true;
    }
  }
  return false;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin>>n>>m;
  while(m--){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  for(int i=1;i<=n;i++){
    if(!vis[i])if(dfs(i,-1)){
      int at=en;path.push_back(at);
      while(at!=sn){
        path.push_back(last[at]);
        at=last[at];
      }path.push_back(en);
      cout<<path.size()<<'\n';
      while(path.size()>0)cout<<path.back()<<' ',path.pop_back();
      cout<<'\n';
      return 0;
    }
  }

  cout<<"IMPOSSIBLE"<<'\n';

  return 0;
}