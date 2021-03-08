#include <bits/stdc++.h>

using namespace std;

int main(){
	pair<int, string> tmp;
	vector<pair<int, string>> carnes;

	int n;
	while(cin >> n){
		while(n--){
			cin >> tmp.second >> tmp.first;
			carnes.push_back(tmp);
		}
		sort(carnes.begin(), carnes.end());
		for (int i = 0; i < carnes.size(); ++i){
			cout << carnes[i].second;
			if(i!=carnes.size()-1) cout << " ";
		}
		cout << endl;
		carnes.clear();
	}

	return 0;
}