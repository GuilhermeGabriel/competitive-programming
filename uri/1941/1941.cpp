#include "bits/stdc++.h"

using namespace std;

bool ip(string s){
	string c=s;reverse(s.begin(), s.end());
	return s==c;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string in;getline(cin,in);
	cout<<ip(in);

	return 0;
}
