#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> adj;
int visited[1000010],q=0;
int mat[1000][1000];

void dfs(int no){
  if(visited[no])return;
  visited[no]=1;
  for(auto u:adj[no]){
    dfs(u);
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,m;cin>>n>>m;char tmp;

  int idx_no=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>tmp;
      if(tmp=='.'){
        mat[i][j]=idx_no++;
        vector<int>v;
        adj.push_back(v);
      }else{
        mat[i][j]=-1;
      }
    }
  }

  /*
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<mat[i][j]<<' ';
    }
    cout<<'\n';
  }*/

  //vector<int> adj[quant_no_adj];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(mat[i][j]!=-1){
        if(mat[i-1][j]!=-1&&i-1>=0)adj[mat[i][j]].push_back(mat[i-1][j]);
        if(mat[i+1][j]!=-1&&i+1<n)adj[mat[i][j]].push_back(mat[i+1][j]);
        if(mat[i][j-1]!=-1&&j-1>=0)adj[mat[i][j]].push_back(mat[i][j-1]);
        if(mat[i][j+1]!=-1&&j+1<m)adj[mat[i][j]].push_back(mat[i][j+1]);
      }
    }
  }

  /*
  for(auto l:adj){
    for(auto a:l)cout<<a<<' ';
    cout<<'\n';
  }*/

  for(int i=0;i<(int)adj.size();i++){
    if(!visited[i]){
      q++;
      dfs(i);
    }
  }

  cout<<q<<'\n';

  return 0;
}
