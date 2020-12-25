#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 6, quant = 0;
	double i;

	while(n--){
		cin >> i;
		if(i > 0) quant++;
	}

	cout << quant << " valores positivos" << endl;

	return 0;
}