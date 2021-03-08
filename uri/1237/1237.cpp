#include <bits/stdc++.h>

using namespace std;

int main(){
	string a, b, aux;

	while(cin>>a>>b){
		if(a.size()<b.size()){
			aux=a;
			a=b;
			b=aux;
		}

		int maior=0, atual=0;
		for(int i=0;i<=a.size()-b.size();i++){
			for(int j=0;j<b.size();j++){
				cout << a[i+j] << " " << b[j] << endl;
				if(a[i+j]==b[j]) {
					atual++;
					cout << "aa";
				}else{
					if(atual>maior) maior=atual;
					atual=0;
				}
			}
		}
		cout<<maior<<endl;
	}

	return 0;
}