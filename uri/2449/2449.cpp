#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,m,r=0,dff;cin>>n>>m;
	int f[n];

	for(int i=0;i<n;i++)cin>>f[i];
	for(int i=0;i<n-1;i++){
		dff=m-f[i];
		f[i+1]+=dff;
		r+=abs(dff);
	}

	cout<<r<<"\n";
	
	return 0;
}