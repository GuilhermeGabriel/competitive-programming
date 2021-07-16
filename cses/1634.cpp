#include "bits/stdc++.h"

using namespace std;

vector<int> coins,memo(1e6+5,0);

int mincoins(int x){
	if(x<0)return 1e9;
	if(x==0)return 0;
	if(memo[x])return memo[x];
	int best=1e9;
	for(auto m:coins)best=min(best,mincoins(x-m)+1);
	memo[x]=best;
	return best;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,x,i;cin>>n>>x;
	while(n--){cin>>i;coins.push_back(i);}
	int r=mincoins(x);
	if(r==1e9)cout<<-1<<'\n';
	else cout<<r<<'\n';

	return 0;
}