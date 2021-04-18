#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,k;cin>>n;
	string a,b,r;
	while(n--){
		cin>>k;k--;cin>>b;r=b;
		while(k--){
			cin>>a;if(a!=b)r="ingles";
		}
		cout<<r<<"\n";
	}

	return 0;
}
