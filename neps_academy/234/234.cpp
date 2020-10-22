#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double l, a, p, r, dt;

	cin >> l >> a >> p >> r;

	dt = sqrt(a * a + p * p + l * l);

	cout << ((dt <= (2 * r)) ? 'S' : 'N') << endl;

	return 0;
}