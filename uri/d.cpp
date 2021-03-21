#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	vector<int> criancas;

	while(n--){
		int ba; cin >> ba;
		criancas.push_back(ba);
	}
	sort(criancas.begin(), criancas.end());

	int qt=0, qbp=criancas[0], p=1;
	for(int i=0;i<criancas.size();i++){
		if(qbp == criancas[i]) qt+=p;
		else {
			p++;
			qt+=p;
			qbp=criancas[i];
		}
	}

	cout << qt << endl;

	return 0;
}