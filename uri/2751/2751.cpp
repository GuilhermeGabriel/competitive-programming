#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

	while (cin >> n) {
		int num[n] = {0};
		int k = 0;

		for (int i = 0; i < n; i++) {
			cin >> num[k++];
		}

		int suma = 0, sumb = 0;
		int min = 0;

		for (int i = 0; i < n; i++) {
			for (int a = 0; a < i; a++) {
				suma += num[i];
			}
			for (int b = i; b < n; b++) {
				suma += num[b];
			}

			min = sumb - suma;
			cout << min;
			if (suma > sumb) break;
		}

		cout << min << endl;
	}

	return 0;
}