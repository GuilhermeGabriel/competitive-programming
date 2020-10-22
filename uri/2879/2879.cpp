#include <iostream>

using namespace std;

int main() {
	int n, v = 0;
	cin >> n;

	char portas[3] = {'b', 'b', 'b'};

	for (int i = 1; i <= n; i++) {
		int bodep;
		char vfinal;
		cin >> bodep;
		portas[bodep - 1] = 'c';

		portas[0] = 'e';

		for (int i = 0; i < 3; i++) {
			if (portas[i] == 'b') {
				portas[i] = 'x';
				break;
			}
		}


		for (int i = 0; i < 3; i++) {
			if (portas[i] != 'x' && portas[i] != 'e') {
				vfinal = portas[i];
			}
		}

		if (vfinal == portas[bodep - 1]) {
			v++;
			for (int i = 0; i < 3; i++) portas[i] = 'b';
		}
	}

	cout << v << endl;

	return 0;
}