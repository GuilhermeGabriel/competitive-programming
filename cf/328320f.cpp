#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ll n,k,q=0,c;cin>>n>>k;
	c=(n-1)/4;
	if(k==1){
		q=1;
	}else if(k==2){
		q=c;
		if((n-1)%4>=1)q++;
	}else if(k==4){
		q=c;
		if((n-1)%4>=2)q++;
	}else if(k==6){
		q=c;
	}else if(k==8){
		q=c;
		if((n-1)%4>=3)q++;
	}

	cout<<q<<'\n';

	return 0;
}
