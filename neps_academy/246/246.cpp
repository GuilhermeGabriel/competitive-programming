#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int tbonecas[n];
	int tbonecas_clone[n];

	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		tbonecas[i] = b;
		tbonecas_clone[i] = b;
	}

	sort(tbonecas, tbonecas + n);

	int diff[n];
	int index = 0;
	for (int i = 0; i < n; i++) {
		if (tbonecas_clone[i] !=  tbonecas[i]) {
			diff[index++] = tbonecas[i];
		}
	}

	cout << index << endl;
	for (int i = 0; i < index; i++) {
		cout << diff[i];
		if (i != index - 1) cout << " ";
		else cout << endl;
	}


	return 0;
}