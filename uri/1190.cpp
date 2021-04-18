#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	char c;cin>>c;
	double m[12][12],s=0,co=0;

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>m[i][j];
			if(j>=7){
				if(i<=5&&i+j>11)s+=m[i][j];
				if(i>5&&i+j>i+i)s+=m[i][j];
				co++;
			}
		}
	}

	cout.precision(1);
	cout<<fixed;
	if(c=='S')cout<<s;
	else cout<<s/co;
	cout<<"\n";

	return 0;
}
