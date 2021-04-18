#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> dic; set<string> ss;
	string in,r;
	while(getline(cin,in)){
		for(auto& l:in){
			if(isalpha(l))r+=tolower(l);
			else{
				if(!r.empty())ss.insert(r);r="";
			}
		}
		if(!r.empty())ss.insert(r);r="";
	}
	for(auto& ws:ss)dic.push_back(ws);
	sort(dic.begin(),dic.end());
	for(auto& w:dic)cout<<w<<"\n";

	return 0;
}
