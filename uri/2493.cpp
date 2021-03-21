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
	
	int n,x,y,z;
	vector<Pessoa> pss; Pessoa tmp;
	vector<Exp> exps; Exp tmpe;

	while(cin>>n){	

		for(int ii=0;ii<n;ii++){
			string ex,ey,ez,e2;
			cin>>ex>>e2;
			//cout<<e2<<"\n";
			int i;
			for(i=0;i<e2.size();i++){
				if(e2[i]=='=')break;
				ey+=e2[i];
			};
			for(int a=i+1;a<e2.size();a++){
				ez+=e2[a];
			}
			tmpe.x=stoi(ex);
			tmpe.y=stoi(ey);
			tmpe.z=stoi(ez);
			exps.push_back(tmpe);
		}

		for(int ii=0;ii<n;ii++){
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
			
			//cout<<p.nome<<x<<" "<<sy<<y<<" "<<z<<"\n\n";

			string cs="I";
			if(x+y==z)cs="+";
			else if(x-y==z)cs="-";
			else if(x*y==z)cs="*";

			if(cs!=sy)res.push_back(p.nome);

			/*if(sy=="*"&&x*y!=z){
				res.push_back(p.nome);
			}else if(sy=="+"&&x+y!=z){
				res.push_back(p.nome);
			}else if(sy=="-"&&x-y!=z){
				res.push_back(p.nome);
			}else if(sy=="I"){
				res.push_back(p.nome);
			}*/
		}

		sort(res.begin(), res.end());
		if(res.size()==pss.size()){
			cout<<"None Shall Pass!\n";
			pss.clear();
			exps.clear();
			res.clear();
			continue;
		}

		if(res.size()==0){
			cout<<"You Shall All Pass!\n";
			pss.clear();
			exps.clear();
			res.clear();
			continue;
		}

		if(res.size()>0){
			for(int i=0;i<res.size();i++){
				cout<<res[i];
				if(i!=res.size()-1)cout<<" ";
			}
			cout<<"\n";

			pss.clear();
			exps.clear();
			res.clear();
			continue;
		}
	}

	return 0;
}
