#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,a,b;cin>>n;
	string in;
	while(n--){
		cin>>in;
		int p=in.find("+");
		if(p<0){cout<<"skipped\n";continue;};
		a=stoi(in.substr(0,p));
		b=stoi(in.substr(p+1,in.size()-p));
		cout<<a+b<<"\n";
	}

	return 0;
}
