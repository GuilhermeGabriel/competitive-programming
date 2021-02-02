#include <bits/stdc++.h>

using namespace std;

struct Aluno{
	string nome;
	int perolas;
};

bool order(Aluno a1, Aluno a2){
	if(a1.perolas!=a2.perolas) return a1.perolas>a2.perolas;
	return a1.nome<a2.nome;	
}

int main(){
	int p,a,r; string in;
	set<string> perolas;
	map<string, int> mAlunos;

	while(cin>>p>>a>>r&&p||a||r){
		cin.ignore();
		while(p--){
			getline(cin,in);
			perolas.insert(in);
		}
	
		while(a--){
			string nameA, resA;
			cin>>nameA;
			cin.ignore();

			for(int i=0;i<r;i++){
				getline(cin,resA);
				mAlunos[nameA]=0;
			
				if(perolas.find(resA)!=perolas.end())
					mAlunos[nameA]++;
			}
		}

		vector<Aluno> vAlunos;
		for(map<string,int>::iterator it=mAlunos.begin();it!=mAlunos.end();it++){
			Aluno a={it->first,it->second};
			vAlunos.push_back(a);
		}

		sort(vAlunos.begin(), vAlunos.end(), order);

		int max=vAlunos[0].perolas;
		for(int i=0;i<vAlunos.size();i++){
			if(vAlunos[i].perolas==max){
				if(i!=0)cout<<", ";
				cout<<vAlunos[i].nome;
			}else{
				break;
			}
		}
		cout<<"\n";

		perolas.clear();
		mAlunos.clear();
		vAlunos.clear();
	}

	return 0;
}