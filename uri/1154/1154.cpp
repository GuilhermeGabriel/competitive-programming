#include <bits/stdc++.h>

using namespace std;

int main(){
	double m, s=0, i, q=0;
	
	while(cin>>i&&i>0){
		s+=i;
		q++;
	}

	m=s/q;

	cout << setprecision(2) << fixed;
	cout << m << endl;

	return 0;
}