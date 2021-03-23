#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	bool trocado = false;
	cin >> n;

	int vet[n];

	for (int i = 0; i < n; i++) {
		cin >> vet[i];
	}

	for (int i = 0; i < n - 1; i++) {
		if (vet[i] % 5 == 0 && vet[i] < vet[n - 1]) {
			int aux = vet[n - 1];
			vet[n - 1] = vet[i];
			vet[i] = aux;
			trocado = true;
			break;
		}
	}

	if (trocado == false) {
		for (int i = n - 2; i >= 0; i--) {
			if (vet[i] % 5 == 0) {
				int aux = vet[n - 1];
				vet[n - 1] = vet[i];
				vet[i] = aux;
				trocado = true;
				break;
			}
		}
	}

	if (trocado) {
		for (int i = 0; i < n; i++) {
			cout << vet[i];
			if (i != n - 1) cout << " ";
		}
	} else {
		cout << -1;
	}

	cout << endl;
	return 0;
}