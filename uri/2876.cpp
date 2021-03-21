#include <iostream>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	char lamps[m];
	for (int i = 0 ; i < m; i++) {
		lamps[i] = 'd';
	}

	int qLampsAcessas = 0;
	cin >> qLampsAcessas;
	for (int i = 0; i < qLampsAcessas; i++) {
		int ll = 0;
		cin >> ll;
		lamps[ll - 1] = 'l';
	}



	return 0;
}