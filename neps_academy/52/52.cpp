#include <iostream>

using namespace std;

int main() {
	int a = -1, b = -1, n, v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> v;
		if (v == 1) a *= -1;

		if (v == 2) {
			a *= -1;
			b *= -1;
		}
	}

	cout << ((a == -1) ? 0 : 1) << endl;
	cout << ((b == -1) ? 0 : 1) << endl;

	return 0;
}