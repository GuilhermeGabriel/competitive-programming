#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,q=0,l,c;cin>>n;
	while(n--){
		cin>>l>>c;
		if(l>c)q+=c;
	}
	cout<<q<<"\n";

	return 0;	
}