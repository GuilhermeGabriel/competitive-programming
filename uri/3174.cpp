#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,q;cin>>n;
	map<string,int> em;string e;
	while(n--){
		cin>>e>>e>>q;
		em[e]+=q;
	}

	int a=0,t=0,c[4]={4,8,12,6};
	
	for(auto i:em)t+=i.second/c[a++];
	cout<<t<<'\n';

	return 0;
}