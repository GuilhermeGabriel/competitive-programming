#include <bits/stdc++.h>

using namespace std;

int main(){
	int l, in;cin>>l;
	set<int> al;

	while(l--){
		cin>>in;	
		al.insert(in);
	}

	cout<<al.size()<<endl;

	return 0;
}
