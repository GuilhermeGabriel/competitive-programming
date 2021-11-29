#include "bits/stdc++.h"
using namespace std;

int n,m,a,b;
int color[100001];
vector<int> adj[200001];

int bfs(int no){
  queue<int> q;
  q.push(no);
  color[no]=1;

  while(!q.empty()){
    int u=q.front();q.pop();
    for(auto v:adj[u]){
      if(color[u]==color[v])return false;
      if(!color[v]){
        q.push(v);
        (color[u]==1) ? color[v]=2 : color[v]=1;
      }
    }
  }

  return true;
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
    if(!color[i]){
      if(!bfs(i)){
        cout<<"IMPOSSIBLE"<<'\n';
        return 0;
      }
    }
  }

  for(int i=1;i<=n;i++)cout<<color[i]<<' ';
  cout<<'\n';

  return 0;
}