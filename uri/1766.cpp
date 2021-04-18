#include "bits/stdc++.h"

using namespace std;

struct Rena{
	string nome;
	double peso,idade,altura;
};

bool order(Rena a, Rena b){
	if(a.peso!=b.peso)return a.peso>b.peso;
	if(a.idade!=b.idade)return a.idade<b.idade;
	if(a.altura!=b.altura)return a.altura<b.altura;
	return a.nome<b.nome;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	double t,n,m,c=1;cin>>t;
	vector<Rena> rens; Rena tmp;

	while(t--){
		while(cin>>n>>m){
			while(n--){
				cin>>tmp.nome>>tmp.peso>>tmp.idade>>tmp.altura;
				rens.push_back(tmp);
			}
			sort(rens.begin(),rens.end(),order);
			cout<<"CENARIO {"<<c++<<"}\n";
			for(int i=0;i<m;i++){
				cout<<i+1<<" - "<<rens[i].nome<<"\n";
			}
			rens.clear();
		}
	}

	return 0;
}
