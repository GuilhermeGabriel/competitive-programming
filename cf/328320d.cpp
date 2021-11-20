#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,in,c=0;cin>>n;
	for(int i=0;i<n;i++){
		cin>>in;
		if((in>0&&in%2==0)||(in<0&&in%2==0))
			c++;
	}
	cout<<c<<'\n';

	return 0;
}


// +P -> -I (Proposição)

// +P -> -I -P (olhar)
// -P -> +I +P (olhar)
// +I -> -I -P (n olhar)
// -I -> +I +P (n olhar)
