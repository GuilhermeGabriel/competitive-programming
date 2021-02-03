#include <bits/stdc++.h>

using namespace std;

int main(){
	string in; double i,q=0,d=0;

	while(getline(cin, in)){
		cin>>i; d+=i; q++;
		cin.ignore();
	}
	
	cout<<setprecision(1)<<fixed<<d/q<<"\n";

	return 0;
}