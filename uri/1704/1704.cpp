#include <bits/stdc++.h>

using namespace std;

struct Tarefa{
	int tf,v;
};

bool order(Tarefa a, Tarefa b){
	if(a.tf!=b.tf)return a.tf<b.tf;
	return a.v>b.v;
}

int main(){
	int n,t,p=0;
	Tarefa tmp;
	vector<Tarefa> trfs;

	while(cin>>n>>t){
		while(n--){
			cin>>tmp.v>>tmp.tf;
			trfs.push_back(tmp);
		}
		sort(trfs.begin(), trfs.end(), order);

		/*int tp=trfs[0].tf;
		for(int i=trfs[0].tf;i<=t;i++){
			while(trfs[0]==tr)
		}*/

		cout<<p<<"\n";
		p=0;
		trfs.clear();
	}

	return 0;
}