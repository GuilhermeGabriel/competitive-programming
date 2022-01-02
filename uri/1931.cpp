#include "bits/stdc++.h"
using namespace std;

vector<pair<int,int>> adj[501];
int dist[501];bool vis[100001];

void dijkstra(int s){
  for(int i=1;i<=n;i++)dist[i]=LLONG_MAX;
  dist[s]=0;priority_queue<pair<int,int>> q;q.push({0,s});
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

	int n,e,a,b,w,k,o,d;
	while(cin>>n>>e){
		for(int i=1;i<=e;i++){
			cin>>a>>b>>w;
			adj[a].push_back({b,w});
		}

		cin>>k;

		while(k--){
			cin>>o>>d;
		}
	}

	dijkstra(1);

	return 0;
}