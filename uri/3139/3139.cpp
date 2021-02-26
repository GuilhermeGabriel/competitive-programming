#include <bits/stdc++.h>

using namespace std;

int main(){
	double n,m,d,s=0;cin>>n>>m;
	long long q=0;
	queue<double> dias;
	for(int i=0;i<30;i++){
		cin>>d; dias.push(d);
		s+=d;
	}

	double med=ceil(s/30);
	while(n<=m){
		s-=dias.front();
		dias.pop();

		dias.push(med);
		s+=med;
		n+=med;
		med=ceil(s/30);
		q++;
	}

	cout<<q<<"\n";

	return 0;
}