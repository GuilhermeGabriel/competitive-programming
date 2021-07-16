#include "bits/stdc++.h"

using namespace std;

long long fat(long long n){
	if(n==0)return 1;
	return n*fat(n-1);
}

long long memo[100000];
long long fatc(long long n){
	if(n==0)return 1;
	if(memo[n])return memo[n];
	memo[n]=n*fatc(n-1);	
	return memo[n];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	//cout<<fat(100)<<'\n';
	//cout<<fatc(101)<<'\n';

	return 0;
}
