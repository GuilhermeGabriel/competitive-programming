#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,f;cin>>n;
	string a;	
	while(n--){
		cin>>a>>f;
		if(a=="Thor")cout<<"Y\n";
		else cout<<"N\n";
	}

	return 0;
}
