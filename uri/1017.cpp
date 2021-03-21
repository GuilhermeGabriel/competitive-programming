#include <bits/stdc++.h>

using namespace std;

int main(){
	double t, v, d, l;
	cin >> v >> t;
	
	d = v * t;
	l = d / 12.0;

	cout << fixed << setprecision(3) << l << endl;
	
	return 0;
}