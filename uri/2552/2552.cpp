#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long n,m,tab[101][101];
	while(cin>>n>>m){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>tab[i][j];
				if(tab[i][j]==1)tab[i][j]=9;
			}
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int qa=0;
				if(tab[i][j]==0){
					if(tab[i-1][j]==9)qa++;
					if(tab[i+1][j]==9)qa++;
					if(tab[i][j-1]==9)qa++;
					if(tab[i][j+1]==9)qa++;
					tab[i][j]=qa;
				}
			}
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<tab[i][j];
				tab[i][j]=0;
			}
			cout<<"\n";
		}
	}

	return 0;
}
