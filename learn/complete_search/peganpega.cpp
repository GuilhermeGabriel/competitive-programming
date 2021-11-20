#include "bits/stdc++.h"

using namespace std;

int n,x;
int v[20],mark[20];

void solve(int i){
	if(i==n){
		for(int j=0;j<n;j++){
			if(mark[j])cout<<v[j]<<' ';
		}
		cout<<'\n';
		return;
	}

	//utilizar e ir pro próximo
	mark[i]=1;
	solve(i+1);

	// não utilizar e ir pro proximo
	mark[i]=0;
	solve(i+1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	solve(0);

	return 0;
}
