#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v={1,3,4,8,6,1,4,2},c;
	c.push_back(v[0]);
	for(int i=1;i<v.size();i++)
		c.push_back(v[i]+c[i-1]);
	
	for(auto e:c)cout<<e<<' ';cout<<'\n';

	//sum(a,b) 3,6
	cout<<c[6]-c [3-1];

	return 0;
}