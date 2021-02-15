#include <bits/stdc++.h>

using namespace std;

struct Casa{
	int p, c;
};

bool order(Casa a, Casa b){
	if(a.c!=b.c)return a.c<b.c;
	return a.p<b.p;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double n, qp=0, c=0, cm=0; Casa tmpC;
	map<double,double> mcasas;
	vector<Casa> casas;
	while(cin>>n&&n){
		while(n--){
			cin>>tmpC.p>>tmpC.c;
			
			cm+=tmpC.c;
			qp+=tmpC.p;
	
			mcasas[tmpC.p]+=tmpC.c;
		}

		for(map<double,double>::iterator it=mcasas.begin(); 
			it!=mcasas.end();it++){
			tmpC.p=it->first;
			tmpC.c=it->second/tmpC.p;

			casas.push_back(tmpC);
		}

		sort(casas.begin(), casas.end(), order);
		
		cout<<setprecision(1);
		cout<<"Cidade # "<<++c<<"\n";
		for(int i=0;i<casas.size();i++){
			cout<<casas[i].p<<"-"<<casas[i].c;
			if(i!=casas.size()-1)cout<<" ";
		}
		cout<<"\n";

		cout<<setprecision(2)<<fixed;
		cout<<"Consumo medio: "<<cm/qp<<" m3.\n\n";
		cm=qp=0;
		casas.clear();
	}
	

	return 0;
}