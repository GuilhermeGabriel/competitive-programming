#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,a,t,p;
	string nome,nomema;

	while(cin>>n&&n){
		cin>>nome>>a>>t;p=a-t;n--;nomema=nome;
		while(n--){
			cin>>nome>>a>>t;
			if(a-t<p){p=a-t;nomema=nome;}	
		}
		cout<<nomema<<"\n";
	}

	return 0;
}
