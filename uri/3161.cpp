#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,m;cin>>n>>m;
	vector<string> ft;string f,rf="";char rt;
	while(n--){
		cin>>f;
		ft.push_back(f);
	}

	while(cin>>rt){
		if(rt!='\n')rf+=tolower(rt);
	}
	for(auto e:ft){
		cout<<"Sheldon";
		string a=e,b=e;
		for(auto &i:a)i=tolower(i);reverse(a.begin(),a.end());
		for(auto &i:b)i=tolower(i);
		if(rf.find(a)!=-1||rf.find(b)!=-1)cout<<" come a fruta "<<b;
		else cout<<" detesta a fruta "<<b;
		cout<<'\n';
	}
	

	return 0;
}