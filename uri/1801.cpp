#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string in,p,r;cin>>in;p=in;
	long long ip,ir,s,q=0; ir=stoll(in);

	do{
		if(p[0]=='0')continue;
		//ip=stoll(p);
/*
		double sqt=sqrt(ip+ir);
		if(floor(sqt)==sqt)q++;*/
		cout<<p<<"\n";

	}while(next_permutation(p.begin(), p.end()));
	
	cout<<q<<"\n";

	return 0;
}