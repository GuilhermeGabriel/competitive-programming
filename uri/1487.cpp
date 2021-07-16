#include "bits/stdc++.h"

using namespace std;

/*int knapsack(int c,vector<int> w,vector<int> v){
	int n=w.size();
	int dp[n+1][c+1];
	memset(dp,0,sizeof(dp));

	for(int i=1;i<=n;i++){
		int peso=w[i-1],valor=v[i-1];
		for(int sz=1;sz<=c;sz++){
			dp[i][sz]=dp[i-1][sz];
			if(sz>=peso&&dp[i-1][sz-peso]+valor>dp[i][sz])
				dp[i][sz]=dp[i-1][sz-peso]+valor;
		}
	}
	return dp[n][c];
}*/

int unboundedKnapsack(int C,vector<int> &w,vector<int> v){
  int n=w.size(),dp[C+1];memset(dp,0,sizeof(dp));
  for(int i=0;i<=C;i++){
    for(int j=0;j<n;j++){
      if(w[j]<= i)dp[i]=max(dp[i], dp[i-w[j]] + v[j]);
    }
  }
  return dp[C];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,t,wi,vi,i=0;
	vector<int> w,v;
	while(cin>>n>>t,(n||t)){
		while(n--){
			cin>>wi>>vi;
			w.push_back(wi);
			v.push_back(vi);
		}
		cout<<"Instancia "<<++i<<'\n';
		cout<<unboundedKnapsack(t,w,v)<<"\n\n";
		w.clear();v.clear();
	}

	return 0;
}