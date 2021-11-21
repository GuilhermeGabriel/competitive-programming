#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,i;cin>>n;
	set<int> v;
	while(n--){
		cin>>i;v.insert(i);
	}
	cout<<v.size()<<'\n';

	return 0;
}