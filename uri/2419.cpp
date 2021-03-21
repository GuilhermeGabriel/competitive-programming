#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n, quant = 0;

	cin >> m >> n;

	char mapa[m][n];

	for (int i = 0; i < m ; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mapa[i][j];
		}
	}

	for (int i = 0; i < m ; i++) {
		for (int j = 0; j < n; j++) {
			if (mapa[i][j] == '#') {
				if (mapa[i - 1][j] == '.' || mapa[i + 1][j] == '.' || mapa[i][j + 1] == '.' || mapa[i][j - 1] == '.' || i == 0 || i == n - 1 || j == 0 || j == m - 1) {
					quant++;
				}
			}
		}
	}

	cout << quant << endl;


	return 0;
}