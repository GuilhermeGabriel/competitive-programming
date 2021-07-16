#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int value[10000],first[10000],INF=1e9;value[0]=0;
	vector<int> coins={1,3,4};	

	for(int x=1;x<=2000;x++){
		value[x]=INF;
		for(auto c:coins){
			if(x-c<0)continue;
			if(value[x-c]+1<value[x]){
				value[x]=value[x-c]+1;
				first[x]=c;
			}
		}
	}

	int n=10;
	while(n>0){
		cout<<first[n]<<' ';
		n-=first[n];
	}

	return 0;
}