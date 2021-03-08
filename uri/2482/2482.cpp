#include <bits/stdc++.h>

using namespace std;

int main(){
	int nI; cin >> nI; 
	pair<string, string> tmp;
	vector<pair<string, string>> l_t;

	cin.ignore();

	while(nI--){
		getline(cin, tmp.first);
		getline(cin, tmp.second);
		l_t.push_back(tmp);
	}

	int qp; cin >> qp;
	cin.ignore();
	while(qp--){
		getline(cin, tmp.first);
		getline(cin, tmp.second);

		for(int i=0;i<l_t.size();i++){
			if(l_t[i].first == tmp.second){
				cout << tmp.first << endl;
				cout << l_t[i].second << endl << endl;
				break;
			}
		}
	}

	return 0;
}