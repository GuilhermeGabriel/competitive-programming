#include "bits/stdc++.h"

using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i,n;cin>>n; map<int,int> mn;
	while(n--){
		cin>>i;
		mn[i]++;
	}

	for(auto t: mn){
		cout<<t.first<<" aparece "<<t.second<<" vez(es)"<<"\n";
	}

	return 0;
}