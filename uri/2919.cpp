#include "bits/stdc++.h"

using namespace std;

int lis(vector<int> const& a){
	int n=a.size();
	const int INF=1e9;
	vector<int> d(n+1,INF);
	d[0]=-INF;
	
	for(int i=0;i<n;i++){
		int j=upper_bound(d.begin(),d.end(),a[i])-d.begin();
		if(d[j-1]<a[i] && a[i]<d[j])
		d[j]=a[i];
	}
	int ans=d[0];
	for(int i=0;i<=n;i++){
		if(d[i]<INF)ans=i;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,i;vector<int> v;
	while(cin>>n){
		while(n--){
			cin>>i;v.push_back(i);
		}
		cout<<lis(v)<<'\n';
		v.clear();
	}	

	return 0;
}