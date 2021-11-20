#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> v;int a;
	while(cin>>a)v.push_back(a);
	sort(v.rbegin(),v.rend());
	for(auto e:v)cout<<e<<'\n';

	return 0;
}
