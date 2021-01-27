#include <bits/stdc++.h>

using namespace std;

struct Pais{
	string nome;
	int ouro=0, prata=0, bronze=0;
};

bool order(Pais p1, Pais p2){
	if(p1.ouro != p2.ouro) return p1.ouro>p2.ouro;
	if(p1.prata != p2.prata) return p1.prata>p2.prata;
	if(p1.bronze != p2.bronze) return p1.bronze>p2.bronze;
	return p1.nome < p2.nome;
}

int main(){
	Pais tmp; string in;
	vector<Pais> paises;

	while(getline(cin, in)){
		for(int i=0;i<3;i++){
			getline(cin,tmp.nome);
			cout << tmp.nome << endl;
			
			bool in_list = false;
			for(int j=0; j<paises.size()&&!in_list;j++){
				Pais p = paises[j];
				if(p.nome == tmp.nome){
					if(i==0)paises[j].ouro++;
					if(i==1)paises[j].prata++;
					if(i==2)paises[j].bronze++;
					in_list = true;
				}
			}

			if(in_list)continue;

			if(i==0)tmp.ouro++;
			if(i==1)tmp.prata++;
			if(i==2)tmp.bronze++;
			paises.push_back(tmp);
		}
	}

	sort(paises.begin(), paises.end(), order);

	cout << "Quadro de medalhas" << endl;
	for (int i = 0; i < paises.size(); ++i){
		Pais p = paises[i];
		cout << p.nome << " " << p.ouro << " " << p.prata << " " << p.bronze << endl;
	}

	return 0;
}