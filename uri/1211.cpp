#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;string in;
	vector<string> telefones;

	while(cin>>n){
		while(n--){cin>>in; telefones.push_back(in);}
		sort(telefones.begin(), telefones.end());
		
		int nums=0; string comp=telefones[0];
		for(int i=1;i<telefones.size();i++){
			for(int j=0;j<comp.size();j++){
				if(telefones[i][j]!=comp[j])break;
				nums++;
			}
			comp=telefones[i];
		}
		cout<<nums<<"\n";
		nums=0; telefones.clear();
	}

	return 0;
}