#include "bits/stdc++.h"
using namespace std;

long long diags(long long n){
	return (n*n)-(n-1);
}

int main(){
	long long t,x,y,d;cin>>t;

	while(t--){
		cin>>y>>x;

		if(x>y){
			d=diags(x);
		
			if(x%2==0)d+=y-x;
			else d-=y-x;

			cout<<d<<'\n';
		}else if(x<y){
			d=diags(y);

			if(y%2==0)d+=y-x;
			else d-=y-x;

			cout<<d<<'\n';
		}else{
			cout<<diags(x)<<'\n';
		}
	}

	return 0;
}