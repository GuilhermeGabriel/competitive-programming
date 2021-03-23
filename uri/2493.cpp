#include "bits/stdc++.h"

using namespace std;

struct Pessoa{
	string nome, sinal;
	int idx;
};

struct Exp{
	int x,y,z;
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,x,y,z;char _;
	vector<Pessoa> pss; Pessoa tmp;
	vector<Exp> exps; Exp tmpe;

	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>tmpe.x>>tmpe.y>>_>>tmpe.z;
			exps.push_back(tmpe);
		}

		for(int i=0;i<n;i++){
			cin>>tmp.nome>>tmp.idx>>tmp.sinal;
			tmp.idx--;
			pss.push_back(tmp);
		}

		vector<string> res;
		for(auto p:pss){
			string sy=p.sinal;
			int x=exps[p.idx].x;
			int y=exps[p.idx].y;
			int z=exps[p.idx].z;

			string cs="I";
			if(x+y==z)cs="+";
			else if(x-y==z)cs="-";
			else if(x*y==z)cs="*";

			if(cs!=sy)res.push_back(p.nome);
		}

		if(res.size()==pss.size()){
			cout<<"None Shall Pass!\n";
		}else if(res.size()==0){
			cout<<"You Shall All Pass!\n";
		}else {
			sort(res.begin(), res.end());
			for(int i=0;i<res.size();i++){
				cout<<res[i];
				if(i!=res.size()-1)cout<<" ";
			}
			cout<<"\n";
		}

		pss.clear();
		exps.clear();
		res.clear();
	}

	return 0;
}
