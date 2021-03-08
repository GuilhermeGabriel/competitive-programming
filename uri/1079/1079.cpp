#include <bits/stdc++.h>

using namespace std;

int main(){
	double n, m, i1, i2, i3; cin>>n;

	cout << setprecision(1) << fixed;
	while(n--){
		cin>>i1>>i2>>i3;
		m=((i1*2)+(i2*3)+(i3*5))/10;
		cout << m << endl;
	}

	return 0;
}