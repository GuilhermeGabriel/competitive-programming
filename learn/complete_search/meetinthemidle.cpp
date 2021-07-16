#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> vet={2,4,5,9};
	int x=15,n=vet.size();

	for(int b=0;b<(1<<n);b++){
		vector<int> subset;int s=0;
		for(int i=0;i<n;i++){
			if(b&(1<<i))subset.push_back(i);
		}
		for(auto v:subset){
			s+=vet[v];
			cout<<vet[v];
		}

		cout<<": "<<s<<"\n";
	}

	return 0;
}
