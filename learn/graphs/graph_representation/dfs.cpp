#include "bits/stdc++.h"
using namespace std;

bool visited[10];
vector<int> adj[10];

void dfs(int no){
  if(visited[no])return;
  visited[no]=true;
  for(auto u: adj[no]){
    dfs(u);
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  


  return 0;
}