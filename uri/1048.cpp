#include <bits/stdc++.h>

using namespace std;

int main(){
	double in; cin>>in;
	int percent=0, gain=0;

	if(in <= 400){
		percent=15;
		gain=(percent/100)*in;
	}

	if(in > 400 && in<=800){
		percent=12;
		gain=(percent/100)*in;
	}

	if(in > 800 && in<=1200){
		percent=10;
		gain=(percent/100)*in;
	}

	if(in > 1200 && in<=2000){
		percent=7;
		gain=(percent/100)*in;
	}

	if(in > 2000){
		percent=4;
		gain=(percent/100)*in;
	}

	setprecision(2);
	cout << fixed;
	cout << "Novo salario: " << in+gain << endl;
	cout << "Reajuste ganho: " << gain << endl;
	cout << "Em percentual: " << percent << " %" << endl;

	return 0;
}