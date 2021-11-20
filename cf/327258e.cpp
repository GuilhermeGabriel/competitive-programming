#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int p;cin>>p;
	if(p==2){cout<<0;}
	else cout<<1<<'\n'<<(p/2)+1<<' '<<(p/2);
	cout<<'\n';


	return 0;
}
