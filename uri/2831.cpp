#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int in,n;cin>>n;
	vector<int> pesos;

	for(int i=0;i<n;i++){
		cin>>in;
		pesos.push_back(in);
	}

	sort(pesos.begin(), pesos.end());

	if(pesos[0]>8){
		cout<<"N\n";
		return 0;
	}

	int p=1;
	for(int i=1;i<n&&p;i++){
		if(pesos[i]-pesos[i-1]>8)p=0;
	}

	if(p)cout<<"S\n";
	else cout<<"N\n";

	return 0;
}
