#include <iostream>

using namespace std;

int main() {
	int v;
	cin >> v;

	if (v > 0) {
		cout << "positivo";
	} else if (v < 0) {
		cout << "negativo";
	} else {
		cout << "nulo";
	}

	return 0;
}