#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

int main(){
	ll n; cin>>n;
	ll s = (n*(1+(n)))/2;

	if(s % 2 != 0){
		cout << "NO\n";
		return 0;
	}else {
		cout<<"YES\n";
		s/=2;
		vector<int> vals1, vals2;
		for(int i=1;i<=n;i++)vals1.push_back(i);
		while(s>0){
			for(int i=vals1.size()-1;i>=0;i--)
				if(s-vals1[i]>=0){
					vals2.push_back(vals1[i]);
					vals1.erase(vals1.begin()+i);
					s-=vals1[i];
				}
		}

		cout<<vals1.size()<<'\n';
		for(auto e:vals1)cout<<e<<" ";cout<<'\n';
		cout<<vals2.size()<<'\n';
		for(auto e:vals2)cout<<e<<" ";cout<<'\n';
	}

	return 0;
}