#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,s,f,q;vector<int> prf;
	while(cin>>n){
		while(n--){
			cin>>s>>f;
			for(int i=s;i<=f;i++)prf.push_back(i);
		}
		sort(prf.begin(), prf.end());
		cin>>q;
		auto r=equal_range(prf.begin(), prf.end(),q);
		auto upp=r.second-prf.begin()-1;
		auto lower=r.first-prf.begin();

		if(prf[upp]!=q){
			cout<<q<<" not found\n";
		}else{
			cout<<q<<" found from "<<lower;
			cout<<" to "<<upp<<"\n";
		}
		prf.clear();
	}

	return 0;
}