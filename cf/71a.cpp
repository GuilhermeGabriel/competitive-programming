#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	string in;
	while(n--){
		cin>>in;
		if(in.size()>10){
			cout<<in[0]<<in.size()-2<<in[in.size()-1]
			<<'\n';
		}else cout<<in<<'\n';
	}

	return 0;
}
