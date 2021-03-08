#include <bits/stdc++.h>

using namespace std;

struct Assasino{
	int m=1;
	string nome;
};

bool order(Assasino a1, Assasino a2){
	return a1.nome<a2.nome;
}

int main(){
	Assasino tmpA; string assasinado;
	vector<Assasino> assasinos;
	vector<string> assasinados;

	while(cin>>tmpA.nome>>assasinado){
		bool findA=false; int i;
		for(i=0;i<assasinos.size()&&!findA;i++){
			if(assasinos[i].nome==tmpA.nome) findA=true;
			if(assasinos[i].nome==assasinado)
				assasinos.erase(assasinos.begin()+i);
		}

		if(findA) assasinos[i-1].m++;
		else assasinos.push_back(tmpA);

		assasinados.push_back(assasinado);
	}

	for(int i=0;i<assasinados.size();i++){
		for(int j=0;j<assasinos.size();j++){
			if(assasinos[j].nome==assasinados[i]){
				assasinos.erase(assasinos.begin()+j);
				break;
			}
		}
	}

	sort(assasinos.begin(), assasinos.end(), order);

	cout<<"HALL OF MURDERERS"<<endl;
	for (int i=0;i<assasinos.size();i++){
		Assasino a = assasinos[i];
		cout << a.nome << " " << a.m << endl;
	}

	return 0;
}