#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,t;cin>>n>>t;
	double ph;cin>>ph;

	cout<<"NUMBER = "<<n<<"\n";
	cout.precision(2);
	cout<<"SALARY = U$ "<<fixed<<ph*t<<"\n";

	return 0;
}
