#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	string in;
	while(n--){
		cin>>in;sort(in.begin(),in.end());
		do{
			cout<<in<<"\n";
		}while(next_permutation(in.begin(),in.end()));
		cout<<"\n";
	}

	return 0;
}
