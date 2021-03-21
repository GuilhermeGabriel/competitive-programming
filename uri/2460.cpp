#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, ini, ins; cin>>n;
	vector<int> pessoas;

	while(n--){
		cin>>ini;
		pessoas.push_back(ini);
	}

	cin>>m;
	while(m--){
		cin>>ins;
		for(int i=0;i<pessoas.size();i++){
			if(pessoas[i]==ins){
				pessoas.erase(pessoas.begin()+i);
				break;
			}
		}
	}

	for(int i=0;i<pessoas.size();i++){
		cout<<pessoas[i];
		if(i!=pessoas.size()-1)cout<<" ";
	}	
	cout<<"\n";	
	

	return 0;
}