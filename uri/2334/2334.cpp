#include <bits/stdc++.h>

using namespace std;

int main(){
	long double n;

	while(cin>>n&&n!= -1){
		if(n==0) cout << 0 << endl;
		else cout << setprecision(0) << fixed << (n-1) << endl; 
	}

	return 0;
}