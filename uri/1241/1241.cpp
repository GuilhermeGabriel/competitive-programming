#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	string a, b, aux;
	while(cin>>a>>b){
		if(a.size()<b.size()){
			cout<<"nao encaixa"<<endl;
			continue;
		}
		bool encaixa=true;
		for(int i=0;i<b.size()&&encaixa;i++){
			if(a[a.size()-b.size()+i]!=b[i])encaixa=false;
		}
		
		if(encaixa)
			cout<<"encaixa"<<endl;
		else
			cout<<"nao encaixa"<<endl;
	}
	return 0;
}