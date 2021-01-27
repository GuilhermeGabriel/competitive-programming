#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	string cad;
	vector<char> pilha;

	while(n--){
		cin>>cad;
		for(int i=0;i<cad.size();i++){
			if(pilha.empty()){
				pilha.push_back(cad[i]);
				continue;
			}
			
			if(pilha.back()=='(' && cad[i]==')'){
				pilha.pop_back();
				continue;
			}

			if(pilha.back()=='[' && cad[i]==']'){
				pilha.pop_back();
				continue;
			}

			if(pilha.back()=='{' && cad[i]=='}'){
				pilha.pop_back();
				continue;
			}

			pilha.push_back(cad[i]);
		}
		char r = (pilha.size()>0) ? 'N' : 'S';
		cout << r << endl;
		pilha.clear();
	}

	return 0;
}