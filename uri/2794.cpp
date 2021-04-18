#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,d,t;cin>>n;
	vector<pair<int,int>> m;
	while(n--){
		cin>>d>>t;
		m.push_back({d,t});
	}
	sort(m.begin(),m.end());

	bool ans=1;
	for(int i=1;i<m.size()&&ans;i++)
		if(m[i-1].second<m[i].second)ans=0;

	(ans)?cout<<"S\n":cout<<"N\n";

	return 0;
}
