#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string s;cin>>s;
	for(auto& c:s)c=tolower(c);
	cout<<s;

	return 0;
}
