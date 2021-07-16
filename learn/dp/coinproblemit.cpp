#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int value[10000],INF=1e9;value[0]=0;
	vector<int> coins={1,3,4};	

	for(int x=1;x<=100;x++){
		value[x]=INF;
		for(auto c:coins){
			if(x-c<0)continue;
			value[x]=min(value[x],value[x-c]+1);
		}
	}

	cout<<value[100];

	return 0;
}