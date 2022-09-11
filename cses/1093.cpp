#include "bits/stdc++.h"
using namespace std;

const int mod=1e9+7;

int knapsack(int cap,vector<int> w,vector<int> v){
  int n=v.size();int dp[n][cap+1];
  memset(dp,0,sizeof(dp));

  dp[0][0] = 1;
  
  for(int i=1;i<n;i++){
    int wa=w[i-1];
    // int va=v[i-1];
    for(int m=0;m<=cap;m++){
      dp[i][m]=dp[i-1][m];
      if(m>=wa){
        dp[i][m]+=dp[i-1][m-wa];//max(dp[i][m],dp[i-1][m-wa]+wa);
        dp[i][m]%=mod;
      }
    }
  }
  
  /*
  int wa,r,dff;
  for(int m=0;m<=cap;m++){
    wa=dp[n-1][m];
    r=cap-wa;
    dff=abs(r-wa);
    cout<<wa<<' ';
  }*/
  // cout<<dp[n][i]<<' ';
  return dp[n-1][cap];
}


int main(){
  int n,cap=0;cin>>n;
  vector<int> coins(n);
  
  for(int i=1;i<=n;i++){
    coins[i-1]=i;
    cap+=i;
  }
  
  if(cap%2!=0){
    cout<<0<<'\n';
    return 0;
  }

  cap/=2;
  cout<<knapsack(cap,coins,coins)<<'\n';
  
  
  //for(auto e:coins)cout<<e;
  
    
  return 0;
}