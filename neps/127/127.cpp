#include <iostream>

using namespace std;

int main() {
	int c, b;
	cin >> c >> b;

	if ((c + b) % 2 == 0) cout << "Bino";
	else cout << "Cino" << endl;

	return 0;
}