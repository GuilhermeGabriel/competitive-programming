#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	map<int,int> dc;
	string in;int n;cin>>n;
	
	while(n--){
		cin>>in;dc[in.size()]++;
	}
	int q=-1,b;
	for(auto e:dc){
		if(e.second>q){
			q=e.second;
			b=e.first;
		}
	}
	cout<<b<<'\n';
	
	return 0;
}
