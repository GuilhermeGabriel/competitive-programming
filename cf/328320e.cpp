#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,m,c=0;cin>>n;
	stack<char>in;char l;
	while(cin>>l){
		in.push(l);
		if(in.size()==n/2)break;
	}
	if(n%2!=0)cin>>l;
	while(cin>>l){
		if(in.top()!=l)c++;
		in.pop();
	}
	cout<<c<<'\n';

	return 0;
}
