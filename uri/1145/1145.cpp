#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y;

	cin >> x >> y;

	for(int j = 1; j <= y; j++){
		cout << j;
		if(j%x == 0) cout << endl;
		else cout << " ";
	}

	return 0;
}