#include "bits/stdc++.h"
using namespace std;

int mat[1001][1001],parent[1000001],in,out,outi,outj,n,m;
vector<vector<int>> adj;

char getdirection(int idx,int i,int j){
  if(mat[i-1][j]==idx&&i>=0){outi=i-1;return 'D';}
  if(mat[i+1][j]==idx&&i<n){outi=i+1;return 'U';}
  if(mat[i][j-1]==idx&&j>=0){outj=j-1;return 'R';}
  if(mat[i][j+1]==idx&&j<m){outj=j+1;return 'L';}
  
  return 'X';
}

int bfs(int no){
  queue<int> nos;nos.push(no);
  parent[no]=no;//cout<<no<<'\n';

  while(!nos.empty()){
    int nf=nos.front();nos.pop();

    for(auto u:adj[nf]){
      if(parent[u])continue;
      parent[u]=nf;
      if(u==out)return 1;
      nos.push(u);
    }
  }
  return 0;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int no_c=1;char tmp;cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>tmp;
      if(tmp=='#')mat[i][j]=-1;
      if(tmp=='.'||tmp=='A'||tmp=='B'){
        mat[i][j]=no_c++;
        vector<int>v;adj.push_back(v);
        if(tmp=='A')in=no_c-1;
        if(tmp=='B'){out=no_c-1;outi=i;outj=j;}
      }
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(mat[i][j]>0){
        if(i-1>=0&&mat[i-1][j]!=-1)adj[mat[i][j]].push_back(mat[i-1][j]);
        if(i+1<n&&mat[i+1][j]!=-1)adj[mat[i][j]].push_back(mat[i+1][j]);
        if(j+1<m&&mat[i][j+1]!=-1)adj[mat[i][j]].push_back(mat[i][j+1]);
        if(j>=1&&mat[i][j-1]!=-1)adj[mat[i][j]].push_back(mat[i][j-1]);
      }
    }
  }

  if(bfs(in)){
    int c=0,idx=out;
    string path="";
    while(idx!=in){
      if(idx!=out)path+=getdirection(idx,outi,outj);
      c++;idx=parent[idx];
    }
    idx=parent[idx];
    path+=getdirection(idx,outi,outj);
    cout<<"YES"<<'\n';
    cout<<c<<'\n';
    reverse(path.begin(),path.end());
    cout<<path<<'\n';
  }else{
    cout<<"NO"<<'\n';
  }

  return 0;
}