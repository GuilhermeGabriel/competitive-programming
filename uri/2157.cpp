#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	int a,b;

	while(n--){
		cin>>a>>b;
		for(int i=a;i<=b;i++)cout<<i;
		for(int i=b;i>=a;i--){
			//cout<<i;
			string r=to_string(i);
			for(int k=r.size()-1;k>=0;k--)cout<<r[k];
		}

		cout<<'\n';
	}

	return 0;
}
