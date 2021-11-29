#include "bits/stdc++.h"
using namespace std;

bool visited[100001];
vector<int> adj[200002];

void dfs(int no){
  if(visited[no])return;
  visited[no]=true;
  for(auto u:adj[no])dfs(u);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,m,a,b;cin>>n>>m;

  while(m--){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  int q=0;vector<int> cities;
  for(int i=1;i<=n;i++){
    if(!visited[i]){
      dfs(i);q++;cities.push_back(i);
    }
  }
  cout<<cities.size()-1<<'\n';
  for(int i=1;i<(int)cities.size();i++){
    cout<<cities[i-1]<<' '<<cities[i]<<'\n';
  }

  return 0;
}