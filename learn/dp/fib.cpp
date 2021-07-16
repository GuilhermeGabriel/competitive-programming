#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// memoization
ll memo[10000];

ll fib(ll n){
	if(memo[n])return memo[n];
	if(n<=2)return 1;
	memo[n]=fib(n-1)+fib(n-2);
	return memo[n];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cout<<fib(0)<<'\n';
	cout<<fib(1)<<'\n';
	cout<<fib(4)<<'\n';
	cout<<fib(5)<<'\n';
	cout<<fib(6)<<'\n';
	cout<<fib(7)<<'\n';
	cout<<fib(8)<<'\n';
	cout<<fib(70)<<'\n';

	return 0;
}
