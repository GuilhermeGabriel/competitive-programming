#include <bits/stdc++.h>

using namespace std;

int fat(int n) {
	if (n == 0) return 1;
	else return n * fat(n - 1);
}

int main() {
	int n, v, a, f;
	cin >> n;

	a = (fat(n) / fat(n - 2)) * 2;
	v = (fat(n) / fat(n - 4)) * 24;

	f = a - v + 2 + n;

	cout << f << endl;

	return 0;
}