#include "bits/stdc++.h"
using namespace std;

int knapsack(int c,vector<int> &w,vector<int> &v){
  int dp[c+1],n=w.size();
  memset(dp,0,sizeof(dp));
  for(int i=0;i<n;i++)
    for(int j=c;j>=w[i];j--)
    dp[j]=max(dp[j],v[i]+dp[j-w[i]]);
 	return dp[c];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t,m,wi;cin>>t>>m;
	vector<int> w;
	while(m--){
		cin>>wi;
		w.push_back(wi);
	}
	if(knapsack(t,w,w)==t)cout<<"S\n";
	else cout<<"N\n";

	return 0;
}