#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	double m[12][12],l,s=0;
	char c; cin>>l>>c;

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>m[i][j];
			if(i==l)s+=m[i][j];
		}
	}

	cout.precision(1);
	cout<<fixed;
	if(c=='S')cout<<s;
	else cout<<s/12;
	cout<<"\n";

	return 0;
}
