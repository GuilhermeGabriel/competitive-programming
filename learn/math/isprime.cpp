#include "bits/stdc++.h"

using namespace std;

/*
bool isp(int n){
	if(n<2)return false;
	for(int i=2;i*i<=n&&ip;i++)if(n%i==0)return false;
	return true;
}*/

int calculateprimes(vector<int> &sieve,int n){
	for(int p=2;p*p<n;p++){
		if(!sieve[p])continue;
		for(int i=p*2;i<n;i+=p)sieve[i]=false;
	}
}

int main(){
	int mxn=(1e6)+5;
	//int sieve[1000000];//memset(sieve,true,sizeof(sieve));
	vector<int> sieve(mxn,true);sieve[0]=sieve[1]=0;
	calculateprimes(sieve,mxn-1);
	cout<<sieve[0];
	return 0;
}