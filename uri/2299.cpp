#include "bits/stdc++.h"

using namespace std;

int knapsack(int cap,vector<int> w,vector<int> v){
	int n=w.size();int dp[n+1][cap+1];
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

	int c,f,wi,vi,t=0;vector<int> w,v;
	while(cin>>c>>f,c||f){
		while(f--){
			cin>>wi>>vi;
			w.push_back(wi);
			v.push_back(vi);
		}
		cout<<"Teste "<<++t<<'\n';
		cout<<knapsack(c,w,v)<<"\n\n";
		w.clear();
		v.clear();
	}
	

	return 0;
}