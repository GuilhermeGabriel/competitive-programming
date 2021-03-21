#include <bits/stdc++.h>

using namespace std;

int main(){
	double n, q=0, tf=0, d=0, p, tp=0;cin>>n;
	string in, w;

	while(n--){
		cin>>p;cin.ignore();
		tp+=p;

		getline(cin,in);		
		istringstream ss(in);
		while(ss>>w){
			q++;
		}

		cout<<"day "<<++d<<": "<<q<<" kg\n";
		tf+=q;
		q=0;
	}
	cout<<setprecision(2)<<fixed;
	cout<<tf/d<<" kg by day\n";
	cout<<"R$ "<<tp/d<<" by day\n";

	return 0;
}