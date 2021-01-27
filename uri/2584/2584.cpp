#include <bits/stdc++.h>

using namespace std;

int main(){
	double n, l, r; cin>>n;

	while(n--){
		cin>>l;
		r = (5*l*l)/(4*sqrt(5-2*sqrt(5)));
		cout << setprecision(3) << fixed << r << endl;
	}
	
	return 0;
}