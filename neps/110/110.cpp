#include <iostream>

using namespace std;

int main() {
	int n, v, vant, countrecord = 0, countatual = 1;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> v;

		if (v == vant) {
			countatual++;
			if (countatual > countrecord) {
				countrecord = countatual;
			}
		} else {
			countatual = 1;
		}

		vant = v;
	}

	cout << countrecord << endl;

	return 0;
}