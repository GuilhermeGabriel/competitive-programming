#include "bits/stdc++.h"

using namespace std;

int iss(string in){
	if(in.size()<6||in.size()>32)return 0;
	for(auto a:in)if(!isalnum(a))return 0;
	int M=0,m=0,n=0;
	for(auto a:in){
		if(a>='A'&&a<='Z')M++;
		if(a>='a'&&a<='z')m++;
		if(a>='0'&&a<='9')n++;
	}
	if(M&&m&&n)return 1;
	else return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string in;
	while(getline(cin,in)){
		if(in.empty())continue;
		iss(in) ? cout<<"Senha valida.\n" : cout<<"Senha invalida.\n";
	}	

	return 0;
}
