#include "bits/stdc++.h"

using namespace std;

int knapsack(int cap,vector<int> w,vector<int> v){
	int n=w.size();
	int dp[n+1][cap+1];
	memset(dp,0,sizeof(dp));

	for(int i=1;i<=n;i++){
		int peso=w[i-1],valor=v[i-1];
		for(int sz=1;sz<=cap;sz++){
			dp[i][sz]=dp[i-1][sz];
			if(sz>=peso&&dp[i-1][sz-peso]+valor>dp[i][sz])
				dp[i][sz]=dp[i-1][sz-peso]+valor;
		}
	}
	return dp[n][cap];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,p,t,c;
	vector<int> w,v;
	while(cin>>n>>p){
		while(n--){
			cin>>t>>c;
			w.push_back(c);
			v.push_back(t);
		}
		cout<<knapsack(p,w,v)<<" min.\n";
		w.clear();
		v.clear();
	}

	return 0;
}