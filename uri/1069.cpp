#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q=0; cin>>n;
	string in;
	vector<char> pilha;

	while(n--){
		cin >> in;

		for (int i = 0; i < in.size(); ++i){
			if(in[i] != '.'){
				if(!pilha.empty() && pilha.back() == '<' && in[i] == '>'){
					pilha.pop_back();
					q++;
					continue;
				}


				pilha.push_back(in[i]);
			}
		}
		pilha.clear();

		cout << q << endl;
		q = 0;
	}

	return 0;
}