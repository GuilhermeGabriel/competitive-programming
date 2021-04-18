#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n,m,i,mm=1000000007,s=0;
	vector<long long> nts;
	while(cin>>n>>m){
		while(n--){
			cin>>i;nts.push_back(i);
		}
		sort(nts.rbegin(),nts.rend());
		for(long long a=0;a<m;a++)
			s=s%mm+nts[a]%mm;
		cout<<s<<"\n";
		nts.clear();s=0;
	}

	return 0;
}
