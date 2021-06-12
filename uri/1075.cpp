#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	for(int i=1;i<=10000;i++){
		if(i%n==2)cout<<i<<'\n';
	}

	return 0;
}
