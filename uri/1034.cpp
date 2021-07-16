#include "bits/stdc++.h"

using namespace std;

vector<int> bls;
//int memo[1000010];

/*
int minblocksr(int q){
	if(q<0)return 1e9;
	if(q==0)return 0;
	if(memo[q])return memo[q];
	int best=1e9;
	for(auto b:bls)
		best=min(best,minblocksr(q-b)+1);
	memo[q]=best;
	return best;
}*/

int inf=1e9;
int minblocksit(int q){
	if(q%bls[bls.size()-1]==0)
		return q/bls[bls.size()-1]; 
	
	vector<int> quants(1000100,1e9);
	quants[0]=0;
	for(auto b: bls){
		for(int e=b;e<=q;e++){
			quants[e]=min(quants[e],quants[e-b]+1);
		}
	}
	return quants[q];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t,n,m,b;

	while(cin>>t){
		while(t--){
			cin>>n>>m;
			while(n--){cin>>b;bls.push_back(b);}
			sort(bls.begin(),bls.end());
			cout<<minblocksit(m)<<'\n';
			bls.clear();
		}
	}

	return 0;
}