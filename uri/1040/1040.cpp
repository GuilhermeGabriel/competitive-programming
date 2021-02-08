#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double a,b,c,d;cin>>a>>b>>c>>d;
	double m=((a*2)+(b*3)+(c*4)+(d*1))/10;

	cout<<setprecision(1)<<fixed;

	cout<<"Media: "<<m<<"\n";
	if(m>=5&&m<=6.9){
		cout<<"Aluno em exame.\n";
		double e;cin>>e;
		cout<<"Nota do exame: "<<e<<"\n";
		m+=e;m/=2;
		if(m>=5)cout<<"Aluno aprovado.\n";
		else cout<<"Aluno reprovado.";
		cout<<"Media final: "<<m<<"\n";
		return 0;
	}

	if(m>=7)cout<<"Aluno aprovado.\n";
	else cout<<"Aluno reprovado.\n";

	return 0;
}