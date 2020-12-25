#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, n, s = 0;
	cin >> a;

	while(cin >> n && n <= 0);

	for(int i = 0; i <= n-1; i++){
	 	s += a + i;
	}

	cout << s << endl;
	
	return 0;
}