#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, i;
	cin >> n;
	while(n--){
		cin >> i;
		if(i > 8000) cout << "Mais de 8000!" << endl;
		else cout << "Inseto!" << endl;
	}

	return 0;
}