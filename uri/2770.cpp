#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int x,y,m,l,a;

	while(cin>>x>>y>>m){
		while(m--){
			cin>>l>>a;
			if((l<=x&&a<=y)||(l<=y&&a<=x))cout<<"Sim\n";
			else cout<<"Nao\n";
		}
	}

	return 0;
}
