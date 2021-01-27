#include <bits/stdc++.h>

using namespace std;

struct Pessoa {
	int h;
	string name;
};

bool orderNum(Pessoa p1, Pessoa p2){
	return p1.h > p2.h;
}

bool orderAlpha(Pessoa p1, Pessoa p2){
	return p1.name < p2.name;
}

int main(){
	int qp, qt; cin >> qp >> qt;
	Pessoa p_tmp;
	vector<Pessoa> pessoas;

	while(qp--){
		cin >> p_tmp.name >> p_tmp.h;
		pessoas.push_back(p_tmp); 
	}

	sort(pessoas.begin(), pessoas.end(), orderNum);

	vector<vector<Pessoa>> times;
	times.resize(qt);

	while(pessoas.size()>0){
		for(int j=0;j<qt;j++){
			if(pessoas.size()==0)break;
			times[j].push_back(pessoas[0]);
			pessoas.erase(pessoas.begin());
		}
	}

	for(int i=0;i<times.size(); i++){
		cout << "Time " << i+1 << endl;
		sort(times[i].begin(), times[i].end(), orderAlpha);
		for(int j=0;j<times[i].size();j++){
			cout << times[i][j].name << endl;
		}
		cout << endl;
	}

	return 0;
}