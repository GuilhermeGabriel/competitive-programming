#include "bits/stdc++.h"

using namespace std;

int bs(vector<int> &v,int l,int r,int x){
	int m=(l+r)/2;
	if(l>=r)return l;
	if(x==v[m])return m;
	else if(x>v[m]){return bs(v,m+1,r,x);}
	else return bs(v,l,m-1,x);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,m,i;cin>>n>>m;
	vector<int> v;
	while(n--)
		{cin>>i;v.push_back(i);}
	while(m--){
		cin>>i;
		auto e=lower_bound(v.begin(),v.end(),i);
		int r=e-v.begin();
		//cout<<r<<"\n";
		
		if(abs(i-v[r])<abs(i-v[r-1]))cout<<v[r]<<'\n';
		else {
			if(r>0)r-=1;
			cout<<v[r]<<'\n';
		}
	}

	return 0;
}
