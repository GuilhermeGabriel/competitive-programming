#include "bits/stdc++.h"
using namespace std;

bool visited[10];
vector<int> adj[10];

void bfs(int nor){
  queue<int> q;q.push(nor);visited[1]=true;
  cout<<"visited:"<<nor<<'\n';
  int distance[10];distance[0]=0;
  while(!q.empty()){
    int no=q.front();q.pop();
    for(auto u:adj[no]){
      if(visited[u])continue;
      visited[u]=true;
      distance[u]=distance[no]+1;
      q.push(u);
      cout<<"visited:"<<u<<'\n';
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  adj[1].push_back(2);
  adj[2].push_back(3);
  adj[2].push_back(4);
  adj[3].push_back(4);
  adj[4].push_back(1);

  bfs(1);

  return 0;
}