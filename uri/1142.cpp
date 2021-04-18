#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,k=0;cin>>n;
	while(n--){
		for(int i=0;i<4;i++){
			if(++k%4!=0)cout<<k<<" ";
			else cout<<"PUM\n";
		}
	}

	return 0;
}
