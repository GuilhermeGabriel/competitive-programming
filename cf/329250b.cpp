#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,m;cin>>n>>m;
	ll mat[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}

	for(int j=0;j<m;j++){
		int t=0,ta;
		for(int i=1;i<n;i++){
			if(mat[i-1][j]<mat[i][j])ta=1;
			if(mat[i-1][j]==mat[i][j])ta=2;
			if(mat[i-1][j]>mat[i][j])ta=3;

			if(i==1)t=ta;
			else if(ta!=t){
				t=-1;
				break;
			}
		}
		if(t>=0)cout<<"S\n";
		else cout<<"N\n";
	}

	return 0;
}
