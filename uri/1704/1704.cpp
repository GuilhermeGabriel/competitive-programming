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
	int n,t,ta=0,q=0;
	vector<Tarefa> trfs; Tarefa tmp;

	while(cin>>n>>t){
		while(n--){
			cin>>tmp.v>>tmp.tf;
			trfs.push_back(tmp);
		}
		sort(trfs.begin(),trfs.end(),order);

		for(auto t:trfs){
		//	cout<<t.tf<<"\n";
		}

		for(int i=0;i<trfs.size()&&t;i++){
			if(ta>=trfs[i].tf){q+=trfs[i].v;continue;}
			t--;ta++;
		}

		cout<<q<<"\n";q=ta=0;
		trfs.clear();
	}

	return 0;
}