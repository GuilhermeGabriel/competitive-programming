#include "bits/stdc++.h"
using namespace std;

bool valid(int mat[9][9],int l,int c){
  if(l<1||l>8||c<1||c>8)return false;
  if(mat[l][c])return false;
  return true;
}

void search(int mat[9][9],int l,int c,int v){
  mat[l][c]=v;

  // cout<<v;
  if(v==45){
    for(int i=1;i<=8;i++){
      for(int j=1;j<=8;j++){
        printf("%3d",mat[i][j]);
      }
      cout<<'\n';
    }
    cout<<'\n';
  }

  if(valid(mat,l-2,c-1))search(mat,l-2,c-1,v+1);
  if(valid(mat,l-2,c+1))search(mat,l-2,c+1,v+1);
  if(valid(mat,l+2,c-1))search(mat,l+2,c-1,v+1);
  if(valid(mat,l+2,c+1))search(mat,l+2,c+1,v+1);

  if(valid(mat,l-1,c-2))search(mat,l-1,c-2,v+1);
  if(valid(mat,l+1,c-2))search(mat,l+1,c-2,v+1);
  if(valid(mat,l-1,c+2))search(mat,l-1,c+2,v+1);
  if(valid(mat,l+1,c+2))search(mat,l+1,c+2,v+1);

  mat[l][c]=0;
}

int main(){
  // ios_base::sync_with_stdio(false);
  // cin.tie(nullptr);
  
  int c,l;cin>>c>>l;
  int vis[9][9];
  // vector<vector<int>> vis(9,vector<int>(9));
  memset(vis,0,sizeof(vis));

  // cout<<valid(vis,l,c);
  search(vis,l,c,1);
  // cout<<'a';

  return 0;
}



