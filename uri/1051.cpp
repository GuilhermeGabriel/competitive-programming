#include <bits/stdc++.h>

using namespace std;

int main(){
	double n, t, v, tx = 0;
	cin >> n;
	t = n;

	if(n <= 2000){
		cout << "Isento" << endl;
		return 0;
	}

	if(n > 4500){
		v = n - 4500;
		tx+= v*0.28;
		n -= v;
	}

	if(n >= 3000.01 && n <= 4500){
		v = n - 3000;
		tx+= v*0.18;
		n -= v;
	}

	if(n >= 2000.01 && n <= 3000){
		v = n - 2000;
		tx += v*0.08;
		n -= v;
	}

	cout << setprecision(2) << fixed << "R$ " << tx << endl;

	return 0;
}