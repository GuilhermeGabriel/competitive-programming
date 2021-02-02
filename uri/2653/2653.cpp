#include <bits/stdc++.h>

using namespace std;

int main(){
	string in;
	set<string> set;

	while(cin>>in){
		set.insert(in);
	}

	cout<<set.size()<<endl;

	return 0;
}