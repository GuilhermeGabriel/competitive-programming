#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(){
	ll k,t,a,r;cin>>k;

	for(ll i=1;i<=k;i++){
		t=((i*i)*((i*i)-1))/2;
		a=4*(i-1)*(i-2);
		r=t-a;
		cout<<r<<'\n';
	}

	return 0;
}