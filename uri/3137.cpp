#include <bits/stdc++.h>

using namespace std;

int main(){
	int p, quant = 0;
	cin >> p;

	for(int i=1;i<=p; i++){
		string n = to_string(i);
		quant += trunc(log10(i)) + 1;
		
	}
	
	cout << quant << endl;

	return 0;
}