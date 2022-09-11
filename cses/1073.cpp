#include "bits/stdc++.h"
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

	int n,in;cin>>n;
	multiset<int> towers;
	cin>>in;towers.insert(in);n--;

	while(n--){
		cin>>in;
		auto torre_maior=towers.upper_bound(in);
		if(torre_maior==towers.end()){
			towers.insert(in);
		}else{
			towers.erase(torre_maior);
			towers.insert(in);
		}
	}

	cout<<towers.size()<<'\n';

	return 0;	
}