#include "bits/stdc++.h"
using namespace std;

char mat[51][51];
int n,m;vector<pair<int,int>> tox;

bool isvalid(int x,int y){
  if(x<1||x>n||y<1||y>m)return false;
  if(mat[x][y]=='X'||mat[x][y]=='T')return false;
  return true;
}

void bfs(int x,int y){
  queue<pair<int,int>> q;
  q.push({x,y});mat[x][y]='T';

  while(!q.empty()){
    int a=q.front().first;
    int b=q.front().second;
    q.pop();

    if(isvalid(a-1,b))q.push({a-1,b}),mat[a-1][b]='T';
    if(isvalid(a+1,b))q.push({a+1,b}),mat[a+1][b]='T';
    if(isvalid(a,b-1))q.push({a,b-1}),mat[a][b-1]='T';
    if(isvalid(a,b+1))q.push({a,b+1}),mat[a][b+1]='T';
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while(cin>>n>>m,n||m){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        cin>>mat[i][j];
        if(mat[i][j]=='T')tox.push_back({i,j});
      }
    }
    
    for(auto t:tox){
      bfs(t.first,t.second);
    }

    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        cout<<mat[i][j];
      }
      cout<<'\n';
    }

    tox.clear();
    memset(mat,0,sizeof(mat));
    cout<<'\n';
  }

  return 0;
}