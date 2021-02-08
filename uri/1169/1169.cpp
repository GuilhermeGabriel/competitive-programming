#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n,i,r;cin>>n;

	while(n--){
		cin>>i;
		r=pow(2,i)/12000;
		cout<<r<<" kg"<<endl;
	}

	return 0;
}