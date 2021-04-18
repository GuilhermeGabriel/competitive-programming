#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<double> el;
	string in; double r,s=0;

	cout<<"Rol:\n\n";
	while(cin>>in){
		int idx=in.find(',');
		in[idx]='.';
		r=stod(in);s+=r;
		el.push_back(r);r=0;
	}

	sort(el.begin(),el.end());

	int c=6;
	for(int i=1;i<=el.size();i++){
		cout<<el[i-1]<<" ";
		if(i%c==0)cout<<"\n";
	}
	double media=s/el.size();

	cout<<"\n\n";
	cout<<"N: "<<el.size()<<"\n";
	cout<<"Soma: "<<s<<"\n";
	cout<<"Média: "<<media<<"\n";

	cout<<"Mediana: ";
	if(el.size()%2==0){
		cout<<(el[(el.size()/2)-1]+el[el.size()/2])/2;
	}else{
		cout<<el[el.size()/2];
	}
	cout<<"\n";

	double sv=0;
	for(auto v:el)sv+=pow(v-media,2);
	cout<<"Soma da variancia: "<<sv<<"\n";
	
	double variancia=sv/(el.size()-1);
	cout<<"Variancia: "<<variancia<<"\n";

	double desviopadrao=sqrt(variancia);
	cout<<"Desvio padrao: "<<desviopadrao<<"\n";
	
	cout<<"Coeficiente de variacao: ";
	cout<<(desviopadrao/media)*100<<" %\n";


	return 0;
}
