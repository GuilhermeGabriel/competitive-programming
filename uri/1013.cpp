#include <bits/stdc++.h>

using namespace std;

int main() {
	int n[3], maiorAB, maior;

	cin >> n[0] >> n[1] >> n[2];

	maiorAB = (n[0] + n[1] + abs(n[0] - n[1])) / 2;

	if (maiorAB > n[2]) maior = maiorAB;
	else maior = n[2];

	cout << maior << " eh o maior" << endl;

	return 0;
}