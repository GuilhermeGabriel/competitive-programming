#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> l;string in,o;
	while(getline(cin,in)){
		istringstream iss(in);
		while(iss>>o){
			reverse(o.begin(),o.end());
			cout<<o<<' ';
		}
		cout<<'\n';
	}

	return 0;
}