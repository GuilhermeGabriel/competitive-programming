#include <bits/stdc++.h>

using namespace std;

struct Pessoa{
	string nome, cor, tam;
};

bool order(Pessoa p1, Pessoa p2){
	if(p1.cor!=p2.cor) return p1.cor<p2.cor;
	if(p1.tam!=p2.tam) return p1.tam>p2.tam;
	return p1.nome<p2.nome;
}

int main(){
	int n, p=0;
	vector<Pessoa> pessoas;
	Pessoa tmpP;

	while(cin>>n&&n){
		if(p==1)cout<<endl;

		while(n--){
			cin.ignore();
			getline(cin, tmpP.nome);
			cin>>tmpP.cor>>tmpP.tam;
			pessoas.push_back(tmpP);
		}

		sort(pessoas.begin(), pessoas.end(), order);

		for(int i=0;i<pessoas.size();i++){
			cout<<pessoas[i].cor<<" ";
			cout<<pessoas[i].tam<<" ";
			cout<<pessoas[i].nome;
			cout<<endl;
		}

		pessoas.clear();
		p=1;
	}

	return 0;
}