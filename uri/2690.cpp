/*#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	map<string,int> m;
	m["GQaku"]=0;
	m["ISblv"]=1;
	m["EOYcmw"]=2;
	m["FPZdnx"]=3;
	m["JTeoy"]=4;
	m["DNXfpz"]=5;
	m["AKUgq"]=6;
	m["CMWhr"]=7;
	m["BLVis"]=8;
	m["HRjt"]=9;

	int n,c=0;cin>>n>>ws;
	string in;
	while(n--){
		getline(cin,in);
		for(auto& l:in){
			if(isalpha(l)){
				for(auto item:m){
					if(item.first.find(l)<item.first.size()){
						cout<<item.second;
						break;
					}
				}
			}
			if(c++==15)break;
		}
		cout<<"\n";c=0;
	}



	return 0;
}*/
