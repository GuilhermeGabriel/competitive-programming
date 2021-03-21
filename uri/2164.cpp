#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	cout.precision(1);
	cout<<fixed;
	cout<<(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5)<<"\n";

	return 0;
}
