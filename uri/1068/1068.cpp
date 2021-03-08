#include <bits/stdc++.h>

using namespace std;

int main(){
	string in;
	vector<char> pilha;

	while(cin>>in){
		for(int i=0;i<in.size();i++){
			if(in[i]=='('||in[i]==')'){
				if(pilha.size()==0){
					pilha.push_back(in[i]);	
					continue;
				}

				if(pilha.back()=='('&&in[i]==')'){
					pilha.pop_back();
					continue;
				}

				pilha.push_back(in[i]);
			}
		}

		if(pilha.size()==0) cout<<"correct"<<endl;
		else cout<<"incorrect"<<endl; 
		
		pilha.clear();
	}

	return 0;
}