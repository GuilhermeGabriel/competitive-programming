#include "bits/stdc++.h"

using namespace std;

int n,m,v[25],ans=0,marked[25];

void solve(int x){
	if(x==n){
		int s=0;
		for(int j=0;j<n;j++)if(marked[j])s+=v[j];
		if(s==m)ans++;
		return;
	}
	marked[x]=1;solve(x+1);
	marked[x]=0;solve(x+1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr)	;
	
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>v[i];
	
	solve(0);
	cout<<ans<<'\n';

	return 0;
}
