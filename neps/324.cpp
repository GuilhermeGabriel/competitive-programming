#include <iostream>

using namespace std;

int main() {
	int n, l, c = 0, q = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> l >> c;
		if (l > c) q += c;
	}

	cout << q;

	return 0;
}