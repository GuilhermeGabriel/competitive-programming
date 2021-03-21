#include <iostream>

using namespace std;

int main() {
	double p[] = {4, 4.5, 5, 2, 1.5};
	int i, q;

	cin >> i >> q;
	cout.precision(2);
	cout << fixed << "Total: R$ " << q * p[i - 1] << endl;

	return 0;
}
