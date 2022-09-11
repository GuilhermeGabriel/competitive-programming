#include "bits/stdc++.h"
using namespace std;

void search(int mat[9][9],int v){
  int matcpy[9][9];
  for(int i=1;i<=8;i++){
    for(int j=1;j<=8;j++){
      matcpy[i][j]=mat[i][j];
    }
    cout<<'\n';
  }

  matcpy[5][5]=2;
  v=5;
}

void test(vector<vector<int>> m){
  m[1][1]=2;
}

int main(){
  int vis[9][9];
  memset(vis,0,sizeof(vis));

  int a=0;
  search(vis,a);

  cout<<vis[5][5];
  cout<<'\n';
  cout<<a;

  vector<vector<int>> vec(5,vector<int>(5));
  vec[1][1]=1;
  test(vec);
  cout<<'\n';
  cout<<vec[1][1];

  return 0;
}



