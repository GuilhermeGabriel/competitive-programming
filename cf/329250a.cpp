#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,m,e;cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>e;	
			if(e==0){
				cout<<i<<' '<<j<<'\n';	
				return 0;
			}
		}
	}

	return 0;
}
