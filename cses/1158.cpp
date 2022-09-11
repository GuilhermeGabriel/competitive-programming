#include "bits/stdc++.h"
using namespace std;

int knapsack(int tam,vector<int> &pesos,vector<int> &vals){
  int q_itens=pesos.size();
  int dp[q_itens+1][tam+1];
  memset(dp,0,sizeof(dp));

  for(int i=1;i<=q_itens;i++){
    int peso_item=pesos[i-1];
    int valor_item=vals[i-1];

    for(int j=1;j<=tam;j++){
      dp[i][j]=dp[i-1][j];

      if(peso_item<=j){
        dp[i][j]=max(dp[i][j],dp[i-1][j-peso_item]+valor_item);
      }
    }
  }

  return dp[q_itens][tam];
}

int main(){
  int n,x;cin>>n>>x;
  vector<int> pesos(n),vals(n);

  for(int i=0;i<n;i++)cin>>pesos[i];
  for(int i=0;i<n;i++)cin>>vals[i];
  
  cout<<knapsack(x,pesos,vals)<<'\n';

  return 0;
}