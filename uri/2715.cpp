#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n,i,s=0;
	vector<long long> trabs;
	while(cin>>n){
		while(n--){
			cin>>i;trabs.push_back(i);
			s+=i;
		}

		long long i,d=100000000,sa=0,sd=0;
		for(i=0;i<trabs.size();i++){
			sa+=trabs[i];
			sd=s-sa;

			if(llabs(sd-sa)<d)d=llabs(sd-sa);
		}

		cout<<d<<"\n";
		s=0;
		trabs.clear();
	}

	return 0;
}
