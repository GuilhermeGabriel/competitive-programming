#include "bits/stdc++.h"

using namespace std;

#define sz size()

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	string a,b,r;
	while(n--){
		cin>>a>>b;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		while(a.sz||b.sz){
			if(a.sz>0){r+=a.back();a.pop_back();}
			if(b.sz>0){r+=b.back();b.pop_back();}
		}
		cout<<r<<"\n";r="";
	}

	return 0;
}
