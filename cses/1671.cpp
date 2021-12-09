#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
ll n,m,a,b,w;ll dist[100001];bool vis[100001];
vector<pair<ll,ll>> adj[100001];

void dijkstra(int s){
  for(int i=1;i<=n;i++)dist[i]=LLONG_MAX;
  dist[s]=0;priority_queue<pair<ll,ll>> q;q.push({0,s});
  while(!q.empty()){
    int a=q.top().second;q.pop();
    if(vis[a])continue;
    vis[a]=true;
    for(auto u:adj[a]){
      int b=u.first,w=u.second;
      if(dist[a]+w<dist[b]){
        dist[b]=dist[a]+w;
        q.push({-dist[b],b});
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin>>n>>m;
  for(int i=1;i<=m;i++){
    cin>>a>>b>>w;
    adj[a].push_back({b,w});
  }

  dijkstra(1);
  
  for(int i=1;i<=n;i++)
    cout<<dist[i]<<' ';
  cout<<'\n';

  return 0;
}