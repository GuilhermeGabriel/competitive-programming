#include <bits/stdc++.h>

using namespace std;

int nadd[1000005], suml[1005];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,r;cin>>n;
	int sDp=0, sDs=0;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>r;

			if(nadd[r]==r){cout<<0<<"\n";return 0;}
			nadd[r]=r;
			
			if(i==j)sDp+=r;
			if(i+j==n+1)sDs+=r;

			suml[i]+=r;
		}

		if(i>1&&suml[i]!=suml[i-1]){
			cout<<0<<"\n";
			return 0;
		}
	}

	if(sDp!=sDs){
		cout<<0<<"\n";
		return 0;
	}

	cout<<sDp<<"\n";

	return 0;
}