#include "bits/stdc++.h"

using namespace std;

long long m=1000000009,fatt[100005];

void fat(){
	fatt[0]=1;
	for(int i=1;i<=100005;i++)
		fatt[i]=((i%m)*(fatt[i-1]%m))%m;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	fat();

	int n;
	while(cin>>n,n){
		cout<<fatt[n]/6<<"\n";
	}

	return 0;
}
