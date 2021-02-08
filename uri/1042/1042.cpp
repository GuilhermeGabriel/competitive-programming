#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v(3), vc;
	for(int i=0;i<3;i++)cin>>v[i];
	vc=v;

	
	sort(v.begin(), v.end());
	for(int i=0;i<3;i++)cout<<v[i]<<"\n";

	cout<<"\n";
	for(int i=0;i<3;i++)cout<<vc[i]<<"\n";

	return 0;
}