#include "bits/stdc++.h"
using namespace std;

int main(){
  int n;cin>>n;
  
  int dp[n+1];  
  for(int i=0;i<=n;i++)dp[i]=1e9;
  
  dp[0]=0;
  for(int i=1;i<=n;i++){
    string ns=to_string(i);
    
    int quant=1e9;
    for(auto c:ns){
      int num_r=c-'0';
      // cout<<i-num_r<<'\n';
      quant=min(quant,dp[i-(num_r)]+1);
    }

    dp[i]=quant;
  }

  // for(auto e:dp)cout<<e<<'\n';
  cout<<dp[n]<<'\n';

  return 0;
}