#include <bits/stdc++.h>

using namespace std;

bool ip(int n){
	if(n==0||n==1) return false;
	bool isp=true;
	for(int i=2;i<=sqrt(n)&&isp;i++){
		if(n%i==0)isp=false;
	}
	return isp;
}

int main(){
	int n;
	string ns;

	while(cin>>n){
		int p=1, s=1;
		ns=to_string(n);
		p=ip(n);

		if(p==0){
			cout<<"Nada"<<endl;
			continue;
		}

		for(int i=0;i<ns.size()&&s;i++) s=ip(ns[i]-'0');

		if(p&&s)cout<<"Super"<<endl;
		else cout<<"Primo"<<endl;
	}

	return 0;
}