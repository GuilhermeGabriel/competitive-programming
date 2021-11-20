#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a,b,q=0;cin>>a>>b;
	while(a<=b){a*=3;b*=2;q++;}
	cout<<q<<'\n';

	return 0;
}
