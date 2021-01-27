#include <bits/stdc++.h>

using namespace std;

struct Aluno {
	string nome;
	char region;
	int dist;
};

bool order(Aluno a1, Aluno a2){
	if(a1.dist!=a2.dist) return a1.dist<a2.dist;
	if(a1.region!=a2.region) return a1.region<a2.region;
	return a1.nome<a2.nome;
}

int main(){
	int n; cin>>n;
	Aluno tmpA;
	vector<Aluno> alunos;

	while(n--){
		cin>>tmpA.nome>>tmpA.region>>tmpA.dist;
		alunos.push_back(tmpA);
		
		if(n==0){
			sort(alunos.begin(), alunos.end(), order);

			for(int i=0;i<alunos.size();i++) 
				cout << alunos[i].nome << endl;
			
			alunos.clear();

			cin>>n;
		}
	}

	

	return 0;
}