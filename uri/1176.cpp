#include "bits/stdc++.h"

using namespace std;

unsigned long long memo[61];

unsigned long long fib(int n){
	if(n==0)return 0;
	if(n==1)return 1;
	if(memo[n])return memo[n];
	memo[n]=fib(n-1)+fib(n-2);
	return memo[n];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int q,n;cin>>q;
	while(q--){
		cin>>n;
		cout<<"Fib("<<n<<") = "<<fib(n)<<'\n';
	}

	return 0;
}