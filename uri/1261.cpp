#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	unordered_map<string,long long> sm;
	long long t=0;
	int m,n,s;cin>>m>>n;
	string c;

	while(m--){
		cin>>c>>s;
		sm[c]=s;
	}

	while(cin>>c){
		if(c=="."){
			cout<<t<<'\n';
			t=0;
		}

		t+=sm[c];
	}	

	return 0;
}
