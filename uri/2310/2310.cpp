#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	double st=0,bt=0,at=0;
	double stc=0,btc=0,atc=0;
	double sa,ba,aa,sc,bc,ac;
	string in;
	while(n--){
		cin>>in;
		cin>>sa>>ba>>aa;
		cin>>sc>>bc>>ac;
		st+=sa;bt+=ba;at+=aa;
		stc+=sc;btc+=bc;atc+=ac;
	}



	cout.precision(2);
	cout<<fixed;
	cout<<"Pontos de Saque: "<<stc*100/st<<" %.\n";
	cout<<"Pontos de Bloqueio: "<<btc*100/bt<<" %.\n";
	cout<<"Pontos de Ataque: "<<atc*100/at<<" %.\n";


	return 0;
}
