#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t,m,aa,tp; string p,pmt;
	while(cin>>t&&t){
		t--;cin>>pmt>>aa>>tp;m=aa-tp;
		while(t--){
			cin>>p>>aa>>tp;
			if(aa-tp<m){m=aa-tp;pmt=p;}
		}	
		cout<<pmt<<"\n";
	}

	return 0;
}
