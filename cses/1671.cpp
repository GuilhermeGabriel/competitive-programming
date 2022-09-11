#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
int n,m,a,b,c;
bool vis[100001];
ll dist[100001];
vector<pair<int,int>> adj[100001];

void dijkstra(int s){
  for(int i=0;i<=n;i++)dist[i]=LLONG_MAX;
  dist[s]=0;
  priority_queue<pair<ll,int>> q;
  q.push({0,s});

  while(!q.empty()){
    int no=q.top().second;q.pop();
    if(vis[no])continue;
    vis[no]=true;
    for(auto u:adj[no]){
      int w=u.first;
      int v=u.second;
      if(dist[no]+w<dist[v]){
        dist[v]=dist[no]+w;
        q.push({-dist[v],v});
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin>>n>>m;

  while(m--){
    cin>>a>>b>>c;
    adj[a].push_back({c,b});
  }

  dijkstra(1);

  for(int i=1;i<=n;i++)
    cout<<dist[i]<<' ';
  cout<<'\n';

  return 0;
}



