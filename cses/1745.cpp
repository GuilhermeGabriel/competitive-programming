#include "bits/stdc++.h"
using namespace std;

void knapsack(int tam,vector<int> &itens){
  int dp[itens.size()+1][tam+1];
  memset(dp,0,sizeof(dp));

  for(int i=1;i<=(int)itens.size();i++){
    for(int j=1;j<=tam;j++){
      dp[i][j]=dp[i-1][j];
      if(j>=itens[i-1]){
        dp[i][j]=max(dp[i][j],dp[i-1][j-itens[i-1]]+itens[i-1]);
      }
    }
  }

  set<int> vals;
  for(int i=0;i<=(int)tam;i++)
    if(dp[itens.size()][i]>0)
      vals.insert(dp[itens.size()][i]);
    
  cout<<vals.size()<<'\n';
  for(auto e:vals)
    if(e>0)
    cout<<e<<' ';
  cout<<'\n';
}

int main(){
  int n,cap=0;cin>>n;
  vector<int> coins(n);

  for(int i=0;i<n;i++){
    cin>>coins[i];
    cap+=coins[i];
  }

  knapsack(cap,coins);
  // cout<<knapsack(cap,coins)<<'\n';
  // cout<<cap<<'\n';

  return 0;
}