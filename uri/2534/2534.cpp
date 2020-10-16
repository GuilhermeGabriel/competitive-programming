#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, q;

	cin >> n >> q;

	int notas[n];
	int s = sizeof(notas) / sizeof(notas[0]);

	for (int i = 0; i < n; i++) {
		cin >> notas[i];
	}

	sort(notas, notas + s);

	int t = sizeof(notas) / sizeof(notas[0]);
	reverse(notas, notas + t);

	for (int i = 0; i < q; i++) {
		int index;
		cin >> index;
		index++;
		cout << notas[i + 1] << endl;
	}

	return 0;
}