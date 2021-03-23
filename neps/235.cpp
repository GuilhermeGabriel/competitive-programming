#include <iostream>

using namespace std;

int main() {
	string n;

	cin >> n;

	for (int i = 0 ; i < n.length(); i++) {
		if (n[i] >= 'A' && n[i] <= 'C') {
			cout << 2;
		} else if (n[i] >= 'D' && n[i] <= 'F') {
			cout << 3;
		} else if (n[i] >= 'G' && n[i] <= 'I') {
			cout << 4;
		} else if (n[i] >= 'J' && n[i] <= 'L') {
			cout << 5;
		} else if (n[i] >= 'M' && n[i] <= 'O') {
			cout << 6;
		} else if (n[i] >= 'P' && n[i] <= 'S') {
			cout << 7;
		} else if (n[i] >= 'T' && n[i] <= 'V') {
			cout << 8;
		} else if (n[i] >= 'W' && n[i] <= 'Z') {
			cout << 9;
		} else {
			cout << n[i];
		}
	}

	cout << endl;

	return 0;
}