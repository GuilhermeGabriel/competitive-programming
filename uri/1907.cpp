#include "bits/stdc++.h"
using namespace std;

char arr[1025][1025];
bool vis[1025][1025];
int n,m,ct;

bool isvalid(int x,int y){
  if(x<1||x>n||y<1||y>m)return false;
  if(vis[x][y]||arr[x][y]=='#'/*o*/)return false;
  return true;
}

void dfs(int x,int y){
  vis[x][y]=true;
  if(isvalid(x-1,y))dfs(x-1,y);
  if(isvalid(x+1,y))dfs(x+1,y);
  if(isvalid(x,y-1))dfs(x,y-1);
  if(isvalid(x,y+1))dfs(x,y+1);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin>>n>>m;

  for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
      cin>>arr[i][j];

  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(arr[i][j]=='.'&&!vis[i][j]){
        dfs(i,j);ct++;
      }
    }
  }

  cout<<ct<<'\n';

  return 0;
}