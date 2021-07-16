#include "bits/stdc++.h"

using namespace std;

int memo[10000];
int INF=1e9;
vector<int> coins={1,3,4}; 

int solve(int x){
	if(x<0)return INF;
	if(x==0)return 0;
	if(memo[x])return memo[x];
	int best=INF;
	for(auto c:coins){
		best=min(best,solve(x-c)+1);
	}
	memo[x]=best;
	return best;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cout<<solve(900);

	return 0;
}