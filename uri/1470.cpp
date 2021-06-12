#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n1,n2;
	vector<int> fi,fo;

	while(cin>>n1){
		for(int i=0;i<n1;i++){
			int v;cin>>v;
			fi.push_back(v);
		}
		
		cin>>n2;
		
		for(int i=0;i<n2;i++){
			int v;cin>>v;
			fo.push_back(v);
		}

		

		/*
		for(auto l:fi)cout<<l<<" ";
		cout<<'\n';
		for(auto l:fo)cout<<l<<" ";
		cout<<'\n';*/

		fi.clear();
		fo.clear();
	}

	return 0;
}
