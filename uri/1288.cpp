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

	int t,n,wi,vi,mw,c;cin>>t;
	vector<int> w,v;
	while(t--){
		cin>>n;
		while(n--){
			cin>>vi>>wi;
			w.push_back(wi);
			v.push_back(vi);
		}
		cin>>mw>>c;
		if((knapsack(mw,w,v)>=c))cout<<"Missao completada com sucesso\n";
		else cout<<"Falha na missao\n";
		w.clear();v.clear();
	}
	

	return 0;
}