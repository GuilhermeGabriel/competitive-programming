// TLE ultimo cas

#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
int n,m,q,a,b,c;
bool vis[505][505];
ll dist[506][505];
vector<pair<int,int>> adj[505];

void dijkstra(){
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      dist[i][j]=LLONG_MAX;
      vis[i][j]=0;
    }
  }

  for(int s=1;s<=n;s++){
    // cout<<s<<'\n';
    dist[s][s]=0;
    priority_queue<pair<ll,int>> q;
    q.push({0,s});

    while(!q.empty()){
      int no=q.top().second;q.pop();
      if(vis[s][no])continue;
      vis[s][no]=true;
      for(auto u:adj[no]){
        int w=u.first;
        int v=u.second;
        if(dist[s][no]+w<dist[s][v]){
          dist[s][v]=dist[s][no]+w;
          q.push({-dist[s][v],v});
        }
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin>>n>>m>>q;

  while(m--){
    cin>>a>>b>>c;
    adj[a].push_back({c,b});
    adj[b].push_back({c,a});
  }

  dijkstra();

  ll d;
  while(q--){
    cin>>a>>b;
    d=dist[a][b];
    if(d!=LLONG_MAX)
      cout<<d<<'\n';
    else
      cout<<-1<<'\n';
  }
  
  // cout<<'\n';

  return 0;
}