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
	cin.tie(nullptr);

	int n, qp=0, c=0, cm=0;
	map<int,int> mcasas; Casa tmpC;
	vector<Casa> vcasas;
	while(cin>>n&&n){
		while(n--){
			cin>>tmpC.p>>tmpC.c;
			
			cm+=tmpC.c/tmpC.p;
			qp+=tmpC.p;
	
			mcasas[cm]+=tmpC.p;
		}
		for(map<int,int>::iterator it=mcasas.begin();it!=mcasas.end();it++){
			tmpC.c=it->first;
			tmpC.p=it->second;
			vcasas.push_back(tmpC);
		}

		sort(vcasas.begin(), vcasas.end(), order);
		
		cout<<setprecision(1);
		cout<<"Cidade # "<<++c<<"\n";
		for(int i=0;i<vcasas.size();i++){
			cout<<vcasas[i].p<<"-"<<vcasas[i].c;
			if(i!=vcasas.size()-1)cout<<" ";
		}
		cout<<"\n";

		cout<<setprecision(2)<<fixed;
		cout<<"Consumo medio: "<<cm/qp<<" m3.\n\n";
		cm=qp=0;
		vcasas.clear();
	}

	return 0;
}