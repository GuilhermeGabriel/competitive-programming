#include "bits/stdc++.h"

using namespace std;

void knapsack(int cap,vector<int> &w,vector<int> &v){
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

	int wt=0,sz=cap,p=0;vector<int> r;
	for(int i=n;i>0;i--){
		if(dp[i][sz]!=dp[i-1][sz]){
			int idx=i-1;
			wt+=w[idx];
			sz-=w[idx];
			p++;
		}
	}

	cout<<dp[n][cap]<<" brinquedos\n";
	cout<<"Peso: "<<wt<<" kg\n";
	cout<<"sobra(m) "<<w.size()-p<<" pacote(s)\n\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t,n,p,wi,vi;cin>>t;
	vector<int> w,v;
	while(t--){
		cin>>n;
		while(n--){
			cin>>vi>>wi;
			w.push_back(wi);
			v.push_back(vi);
		}
		knapsack(50,w,v);
		w.clear();v.clear();
	}

	return 0;
}