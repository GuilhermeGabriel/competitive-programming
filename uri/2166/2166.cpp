#include <bits/stdc++.h>

using namespace std;
	
double sq2(double n){
	if(n>0){ 
		n--;
		return (1/(2+sq2(n)));
	}
	return 0;
}

int main(){
	double n; cin>>n;

	cout << setprecision(10) << fixed;
	cout << 1+sq2(n) << endl;

	return 0;
}