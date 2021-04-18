#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,c=0,e=0,C=0,E=0;cin>>n;//n*=2;
	string a,b;
	while(n--){
		cin>>a>>b;
		if(a=="chuva"){
			if(c==0)C++;
			else c--;
			e++;
		}

		if(b=="chuva"){
			if(e==0)E++;
			else e--;
			c++;
		}
	}

	cout<<C<<" "<<E<<"\n";

	return 0;
}
