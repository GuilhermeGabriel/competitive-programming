#include "bits/stdc++.h"
using namespace std;
 
int unboundedKnapsack(int C,vector<int> &w,vector<int> v){
  int n=w.size(),dp[C+1];memset(dp,0,sizeof(dp));
  for(int i=0;i<=C;i++){
    for(int j=0;j<n;j++){
      if(w[j]<= i)dp[i]=max(dp[i], dp[i-w[j]] + v[j]);
    }
  }
  return dp[C];
}
 
// Driver program
int main(){
  int C = 100;
  vector<int> v={10, 30, 20}, w={5, 10, 15};
  cout<<unboundedKnapsack(C,w,v);
  return 0;
}