#include <bits/stdc++.h>

int main() {
	int n;

	while (cin>>n) {
		double menor = 1000, atual;

		for (int i = 0; i < n; i++) {
			cin>>atual;
			if (atual < menor) {
				menor = atual;
			}
		}

		printf("%.2lf\n", menor);
	}

	return 0;
}