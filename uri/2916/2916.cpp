#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ll i,n,k,s=0;
	ll m = 1000000007;
	vector<ll> notasM;

	while(cin>>n>>k){
		for(int j=0;j<n;j++){
		  cin>>i; notasM.push_back(i);
		  notasM[j]=notasM[j]%m;
        }
		sort(notasM.begin(),notasM.end(),greater<int>());
		for(int j=0;j<k;j++){
			s=(s+notasM[j])%m;
		}
		cout<<s<<endl;
		s=0;
		notasM.clear();
	}

	return 0;
}