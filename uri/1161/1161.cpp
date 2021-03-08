#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fat(ll n){
	if(n==0) return 1;
	else return n*fat(n-1);
}

int main(){
	ll n1, n2;

	while(cin>>n1>>n2){
		cout<<fat(n1)+fat(n2)<<endl;
	}

	return 0;
}