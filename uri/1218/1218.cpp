#include <bits/stdc++.h>

using namespace std;

int main(){
	int c=0; string in,t,s,n;
	map<string, int> tam;
	map<string, int> sex;

	while(cin>>n){
		if(c!=0)cout<<"\n";
		cin.ignore();
		getline(cin, in);
		istringstream ss(in);
		while(ss>>t>>s){
			tam[t]++;
			if(t==n)sex[s]++;
		}

		cout<<"Caso "<<++c<<":\n";
		cout<<"Pares Iguais: "<<tam[n]<<"\n";
		cout<<"F: "<<sex["F"]<<"\n";
		cout<<"M: "<<sex["M"]<<"\n";
		sex.clear();
		tam.clear();
	}

	return 0;
}
