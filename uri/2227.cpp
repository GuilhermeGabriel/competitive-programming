#include <bits/stdc++.h>

using namespace std;

struct Aerop{
	int id, voos;
};

bool order(Aerop a, Aerop b){
	if(a.voos!=b.voos)return a.voos>b.voos;
	return a.id<b.id;
}

int main(){
	int a,v, a1, a2, t=1;
	map<int, int> trf;

	Aerop tmp;
	vector<Aerop> aeros;

	while(cin>>a>>v&&a||v){
		while(v--){
			cin>>a1>>a2;
			trf[a1]++;
			trf[a2]++;
		}

		for(map<int,int>::iterator it=trf.begin(); it!=trf.end(); it++){
			tmp.id=it->first;
			tmp.voos=it->second;
			aeros.push_back(tmp);
		}

		sort(aeros.begin(), aeros.end(), order);

		cout<<"Teste "<<t++<<"\n";
		for(int i=0;i<aeros.size();i++){
			cout<<aeros[i].id<<" ";
			if(aeros[i+1].voos!=aeros[i].voos)break;
		}
		cout<<"\n\n";
		
		aeros.clear();
		trf.clear();
	}

	return 0;
}