#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,i=0;cin>>n;
	int p[n][3];
	
	for(int a=0;i<n;a++){
		cin>>p[i][0]>>p[i][1]>>p[i][2];
		i++;
	}

	for(int i=0;i<n;i++){
		double m=1e9;
		for(int j=0;j<n;j++){
			if(i==j)continue;
			m=min(m,
				sqrt(pow(p[i][0]-p[j][0],2)+
					pow(p[i][1]-p[j][1],2)+
					pow(p[i][2]-p[j][2],2)));
		}
		if(m<20)cout<<"A\n";
		else if(m>=20&&m<=50)cout<<"M\n";
		else cout<<"B\n";
	}

	return 0;
}