#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<pair<string,int>> ass;
	unordered_map<string,int> am,mm;
	string a,m;

	while(cin>>a>>m){am[a]++;mm[m]++;}
	cout<<"HALL OF MURDERERS\n";
	for(auto&a:am)if(!mm[a.first])ass.push_back(a);
	sort(ass.begin(),ass.end());
	for(auto&a:ass)cout<<a.first<<' '<<a.second<<'\n';

	return 0;
}