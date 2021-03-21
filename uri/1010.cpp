#include <bits/stdc++.h>

using namespace std;

int main(){
	double i,q,p,t=0;

	cin>>i>>q>>p; t+=q*p;
	cin>>i>>q>>p; t+=q*p;
	cout<<setprecision(2)<<fixed<<"VALOR A PAGAR: R$ "<<t<<endl;

	return 0;
}