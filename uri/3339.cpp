#include "bits/stdc++.h"
using namespace std;

long long memo[100000001];

int main(){
	int q;cin>>q;
	int l,r;

	for(int i=0;i<10001;i++){
		memo[i*i]=i*i;
	}

	int c=0;
	while(q--){
		cin>>l>>r;
		if(l==0)c++;
		for(int i=l;i<=r;i++){
			if(memo[i]>0)c++;
		}

		cout<<c<<'\n';
		c=0;
	}

	return 0;
}