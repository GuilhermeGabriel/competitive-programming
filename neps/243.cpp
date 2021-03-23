#include <bits/stdc++.h>

using namespace std;

struct Pais {
	int ouro, prata, bronze, id;
};

bool comparePaises(Pais p1, Pais p2) {
	if (p1.ouro != p2.ouro)
		return p1.ouro > p2.ouro;

	if (p1.prata != p2.prata)
		return p1.prata > p2.prata;

	if (p1.bronze != p2.bronze)
		return p1.bronze > p2.bronze;

	return p1.id < p2.id;
}

int main() {
	int n, m;

	cin >> n >> m;

	Pais paises[n] = {0};

	while (m--) {
		int id1, id2, id3;
		cin >> id1 >> id2 >> id3;

		paises[id1 - 1].ouro++;
		paises[id2 - 1].prata++;
		paises[id3 - 1].bronze++;
	}

	for (int i = 0; i < n; i++) {
		paises[i].id = i;
	}

	sort(paises, paises + n, comparePaises);

	cout << paises[0].id + 1;
	for (int i = 1; i < n; i++) {
		cout << " " << paises[i].id + 1;
	}
	cout << endl;

	return 0;
}