#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,m,i,c=0;
	unordered_map<int,int> b;
	while(cin>>n>>m,n||m){
		while(m--){cin>>i;b[i]++;}
		for(auto e:b)if(e.second>=2)c++;
		cout<<c<<'\n';b.clear();c=0;
	}

	return 0;
}
