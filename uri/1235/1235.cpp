#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;cin>>n;
	string l;
	cin.ignore();
	while(n--){
		getline(cin,l);
		for(int i=(l.size()/2)-1;i>=0;i--)cout<<l[i];
		for(int i=l.size()-1;i>=l.size()/2;i--)cout<<l[i];
		cout<<"\n";
	}
	

	return 0;
}