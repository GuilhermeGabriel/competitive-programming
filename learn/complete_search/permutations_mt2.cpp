#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n=7;
	vector<int> perm;
	for(int i=0;i<n;i++){
		perm.push_back(i);
	}

	do{
		for(auto v:perm)cout<<v;
		cout<<'\n';
	}while(next_permutation(perm.begin(),perm.end()));

	return 0;
}
