#include <bits/stdc++.h>

using namespace std;

int main(){
	int T, qD = 0; cin >> T;
	double value;
	while(T--){
		cin >> value;	
		
		while(value>1){
			value/=2;
			qD++;
		}

		cout << qD << " dias"<< endl;
		qD = 0;
	}
	return 0;
}