#include <bits/stdc++.h>

using namespace std;

struct Pais{
	int q=0, id; 
};

bool order(Pais a, Pais b){
	if(a.q!=b.q)return a.q>b.q;
	return a.id<b.id;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,m,i;cin>>n>>m; m*=3;
	vector<Pais> paises(n);
	while(m--){
		cin>>i;
		paises[i-1].q++;
		paises[i-1].id=i;
	}
	sort(paises.begin(),paises.end(),order);
	for(int i=0;i<paises.size();i++){
		cout<<paises[i].id;
		if(i!=paises.size()-1)cout<<" ";
	}
	cout<<"\n";

	return 0;
}