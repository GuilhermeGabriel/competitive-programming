#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

int const n=1e5+10; 
ll f[n];vector<int> fnot;

ll fib(int x){
	if(x<2)return 1;
	if(f[x])return f[x];
	f[x]=fib(x-1)+fib(x-2);
	return f[x];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int i=2,k;cin>>k;fib(30);
	for(int c=0;c<100;c++)cout<<f[c]<<'\n';
	/*
	while(k){
		if(f[i]==-1){fnot.push_back(++b);k--;}
		i++;
	}
	cout<<fnot[fnot.size()-1];*/

	return 0;
}