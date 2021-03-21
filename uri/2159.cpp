#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	cout.precision(1);
	cout<<fixed;

	cout<<n/log(n)<<" "<<1.25506*n/log(n)<<"\n";

	return 0;
}
