#include <bits/stdc++.h>

using namespace std;

struct Doende {
	string nome;
	int idade = 0;
};

struct Time {
	Doende doendes[3];
};

bool comparaDoendes(Doende d1, Doende d2){
	if(d1.idade != d2.idade){
		return d1.idade > d2.idade;
	}

	return d1.nome < d2.nome; 
}

int main(){
	int n; cin >> n;
	vector<Doende> doendes;

	while(n--){
		string nome; cin >> nome;
		int idade; cin >> idade;

		Doende d = {nome, idade};
		doendes.push_back(d);
	}

	sort(doendes.begin(), doendes.end(), comparaDoendes);

	int qtimes = doendes.size()/3;
	for(int i=0;i<qtimes;i++){
		cout << "Time "<< i+1 << endl;
		cout << doendes[i].nome << " " << doendes[i].idade << endl;
		cout << doendes[i+qtimes].nome << " " << doendes[i+qtimes].idade << endl;
		cout << doendes[i+(2*qtimes)].nome << " " << doendes[i+(2*qtimes)].idade << endl << endl;
	}

	return 0;
}