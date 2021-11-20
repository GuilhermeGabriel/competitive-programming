#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,a,ma,me;cin>>n;
	cin>>a;ma=me=a;
	for(int i=1;i<n;i++){
		cin>>a;ma=max(a,ma);me=min(a,me);
	}
	cout<<ma-me<<'\n';

	return 0;
}
