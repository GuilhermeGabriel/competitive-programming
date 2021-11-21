#include "bits/stdc++.h"
using namespace std;

int main(){
	int sa=0,ms=0;

	int n,a;cin>>n;

	while(n--){
		cin>>a;
		sa+=a;
		if(sa>ms)ms=sa;
	}

	cout<<100+ms;

	return 0;
}