#include "bits/stdc++.h"

using namespace std;

int knapsack(int cap,vector<int> &w,vector<int> &v){
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

	int wi,vi,g,p,c,t=0;cin>>g;
	vector<int> w,v;
	while(g--){
		while(cin>>p>>c){
			while(p--){
				cin>>vi>>wi;
				w.push_back(wi);
				v.push_back(vi);
			}
			cout<<"Galho "<<++t<<":\n";
			cout<<"Numero total de enfeites: "<<knapsack(c,w,v)<<"\n\n";
			w.clear();v.clear();
		}
	}

	

	return 0;
}