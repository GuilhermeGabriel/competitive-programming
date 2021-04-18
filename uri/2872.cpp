#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string in;int p=0;
	vector<string> packs;
	while(getline(cin,in)){
		if(in[0]=='1')continue;
		if(in[0]=='0'){
			if(packs.size()==0)continue;
			sort(packs.begin(),packs.end());
			for(auto s:packs)cout<<s<<'\n';
			cout<<'\n';
			packs.clear();continue;
		}
		packs.push_back(in);
	}

	return 0;
}
