#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, r;

	cin >> x >> y;

	r = pow(x, y);

	cout.precision(4);
	cout << fixed << r << endl;

	return 0;
}