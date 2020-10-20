#include <iostream>

using namespace std;

int main() {
	int n, e = 1, v = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int bodep;
		cin >> bodep;

		if (e == 1 && bodep == 2) e = 3;
		if (e == 1 && bodep == 3) e = 2;
		if (e == 2 && bodep == 1) e = 3;
		if (e == 2 && bodep == 3) e = 1;
		if (e == 3 && bodep == 1) e = 2;
		if (e == 3 && bodep == 2) e = 1;


		if (i % 3 == 0) {
			if (bodep == e) v++;
			e = 1;
		}
	}

	printf("%d\n", v);

	return 0;
}