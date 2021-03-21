#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int i,m,f,mt;
	int a,b,c;cin>>a>>b>>c;

	i=2*b+4*c;
	m=2*a+2*c;
	f=4*a+2*b;

	mt=i;
	if(m<mt)mt=m;
	if(f<mt)mt=f;

	cout<<mt<<"\n";

	return 0;
}
