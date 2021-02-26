#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t,n,m;cin>>t;
	vector<int> bls;

	while(t--){
		cin>>n>>m;

		int b,s=0,q=0;
		while(n--){
			cin>>b;bls.push_back(b);
		}
		sort(bls.begin(), bls.end());

		while(s<m){
			if(s+bls.back()<=m){s+=bls.back();q++;}
			if(s+bls.back()>m)bls.pop_back();
		}

		cout<<q<<"\n";
		bls.clear();
	}

	return 0;
}