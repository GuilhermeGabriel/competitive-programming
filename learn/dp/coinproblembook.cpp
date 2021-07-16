#include "bits/stdc++.h"

using namespace std;

vector<int> coins={1,3,4};
int INF=1e9;
bool ready[10000];int value[10000];

int solve(int x){
	if(x<0)return INF;
	if(x==0)return 0;
	if(ready[x])return value[x];
	int best=INF;
	for(auto c:coins){
		best=min(best,solve(x-c)+1);
	}
	ready[x]=true;
	value[x]=best;
	return best;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cout<<solve(9000);

	return 0;
}