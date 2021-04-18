#include "bits/stdc++.h"

using namespace std;

string in,r;
set<string> ss;

void go(int k,int n){
	if(k==n){
		if(!r.empty())ss.insert(r);
	}else{
		go(k+1,n);
		r.push_back(in[k]);
		go(k+1,n);
		r.pop_back();
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	while(getline(cin,in)){
		go(0,in.size());
		for(auto s:ss)cout<<s<<"\n";
		cout<<"\n";ss.clear();
	}

	return 0;
}
