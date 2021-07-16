#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int count[10000],INF=1e9;count[0]=1;
	int m=1e9+7;
	vector<int> coins={1,3,4};

	for(int x=1;x<=1000;x++){
		for(auto c:coins){
			if(x-c<0)continue;
			count[x]+=count[x-c];
			count[x]%=m;		
		}
	}

	cout<<count[1000];

	return 0;
}