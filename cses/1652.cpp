#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

const int MAXN=1000+5;
int mat[MAXN][MAXN];
int dp[MAXN][MAXN];

int main(){
  int n,q;cin>>n>>q>>ws;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      char c;cin>>c;
      if(c=='*')mat[i][j]=1;
    }
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      dp[i][j]=mat[i][j]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
    }
  }

  int y1,x1,y2,x2;
  while(q--){
    cin>>y1>>x1>>y2>>x2;
    cout<<dp[y2][x2]-dp[y2][x1-1]-dp[y1-1][x2]+dp[y1-1][x1-1]<<'\n';
  }

  return 0;
}