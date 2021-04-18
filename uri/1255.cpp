#include "bits/stdc++.h"

using namespace std;

struct L{
	int q;
	char lt;
};

bool ord(L a, L b){
	if(a.q!=b.q)return a.q>b.q;
	return a.lt<b.lt;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n>>ws;
	string in;
	map<char,int> ml;
	vector<L> v; L tmp;
	
	while(n--){
		getline(cin,in);
		for(auto l:in)if(isalpha(l))ml[tolower(l)]++;
		for(auto im:ml){
			tmp.lt=im.first;
			tmp.q=im.second;
			v.push_back(tmp);
		}
		
		sort(v.begin(),v.end(),ord);
		
		cout<<v[0].lt;
		for(int i=1;i<v.size();i++){
			if(v[i].q<v[0].q)break;
			cout<<v[i].lt;
		}
		
		cout<<'\n';
		v.clear();
		ml.clear();
	}

	return 0;
}
