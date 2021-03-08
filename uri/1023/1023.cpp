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

	int n;
	double qp=0, c=0, cm=0, ct=0;
	map<int,int> mcasas; Casa tmpC;
	vector<Casa> vcasas;
	while(cin>>n&&n){
		if(c!=0)cout<<"\n";
		while(n--){
			cin>>tmpC.p>>tmpC.c;
			
			cm=tmpC.c/tmpC.p;

			ct+=tmpC.c;
			qp+=tmpC.p;
	
			mcasas[cm]+=tmpC.p;
		}
		for(auto it:mcasas){
			tmpC.c=it.first;
			tmpC.p=it.second;
			vcasas.push_back(tmpC);
		}

		sort(vcasas.begin(), vcasas.end(), order);
		
		cout<<setprecision(0);
		cout<<"Cidade# "<<++c<<":\n";

		for(int i=0;i<vcasas.size();i++){
			cout<<vcasas[i].p<<"-"<<vcasas[i].c;
			if(i!=vcasas.size()-1)cout<<" ";
		}
		cout<<"\n";

		cout<<setprecision(2)<<fixed;
		cout<<"Consumo medio: "<<floor(ct*100/qp)/100<<" m3.\n";
		cm=qp=ct=0;
		vcasas.clear();
		mcasas.clear();
	}

	return 0;
}