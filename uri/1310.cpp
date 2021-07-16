#include "bits/stdc++.h"

using namespace std;

int mcsit(vector<int> &v){
	int m=v[0],p=v[0];
	for(int i=1;i<v.size();i++){
		p=max(p+v[i],v[i]);
		m=max(m,p);
	}
	return m;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,r,c;
	vector<int> v;
	while(cin>>n){
		cin>>c;
		while(n--){cin>>r;r-=c;v.push_back(r);}
		r=mcsit(v);
		if(r>0)cout<<r<<'\n';
		else cout<<0<<'\n';
		v.clear();
	}

	return 0;
}