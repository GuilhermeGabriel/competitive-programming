#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string f;
	map<char,char> m={{'@','a'},{'&','e'},{'!','i'},{'*','o'},{'#','u'}};

	while(getline(cin,f)){
		for(auto& l:f)if(m[l])l=m[l];
		cout<<f<<'\n';
	}

	return 0;
}
