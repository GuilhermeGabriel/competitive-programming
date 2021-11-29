#include "bits/stdc++.h"
using namespace std;

int n,m,a,b;vector<int> path;
int last[100001];
vector<int> adj[200001];

int bfs(int no){
  queue<int> q;
  q.push(no);
  last[no]=1;

  while(!q.empty()){
    int u=q.front();q.pop();
    for(auto v:adj[u]){
      if(!last[v]){
        last[v]=u;
        q.push(v);
      }

      if(v==n){
        int no_atual=v;
        while(no_atual!=1){
          path.push_back(no_atual);
          no_atual=last[no_atual];
        }path.push_back(1);
        return true;
      }
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
  
  if(bfs(1)){
    cout<<path.size()<<'\n';
    while(path.size())cout<<path.back()<<' ',path.pop_back();
    cout<<'\n';
  }else cout<<"IMPOSSIBLE"<<'\n';

  return 0;
}