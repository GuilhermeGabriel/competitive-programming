#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,m,nc,ans=0;cin>>n>>m;
	vector<int> c;
	while(n--){
		cin>>nc;c.push_back(nc);
	}

	int ia=0,ic;
	while(cin>>nc){
		ic=lower_bound(c.begin(),c.end(),nc)-c.begin();
		ans+=abs(ia-ic);
		ia=ic;
	}
	cout<<ans<<"\n";

	return 0;
}
