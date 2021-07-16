#include "bits/stdc++.h"

using namespace std;

int knapsack(int cap,vector<int> w,vector<int> v){
	int n=w.size();int dp[n+1][cap+1];
	memset(dp,0,sizeof(dp));

	for(int i=1;i<=n;i++){
		int p=w[i-1],g=v[i-1];
		for(int sz=1;sz<=cap;sz++){
			dp[i][sz]=dp[i-1][sz];
			if(sz<p)continue;
			dp[i][sz]=max(dp[i][sz],dp[i-1][sz-p]+g);
		}
	}

	return dp[n][cap];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,wi,vi,m;
	vector<int> w,v;
	while(cin>>n,n){
		while(n--){
			cin>>vi>>wi;
			w.push_back(wi);
			v.push_back(vi);
		}
		cin>>m;
		cout<<knapsack(m,w,v)<<'\n';
		w.clear();v.clear();
	}
	

	return 0;
}