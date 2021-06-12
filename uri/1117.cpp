#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	double n1=-1,n2=-1,n,qnv=0;
	while(cin>>n&&qnv<2){
		if(n>=0&&n<=10){
			qnv++;
			if(n1==-1){n1=n;continue;}
			n2=n;break;
		}else cout<<"nota invalida\n";
	}
	cout<<"media = "<<(n1+n2)/2<<'\n';

	return 0;
}
