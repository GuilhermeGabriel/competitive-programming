#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	map<long long,long long> m;long long i;
	while(cin>>i,i){
		while(i--){
			long long v;cin>>v;
			m[v]++;
		}
		for(auto a:m)
			if(a.second%2!=0){cout<<a.first<<"\n";break;}
		m.clear();
	}

	return 0;
}
