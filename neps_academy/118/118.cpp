#include <bits/stdc++.h>

using namespace std;

int main() {
	char result = 'N';
	string risada;
	string risadaOnlyVogal;

	getline(cin, risada);

	for (int i = 0; i < risada.length(); i++) {
		char lt = risada[i];
		if (lt == 'a' || lt == 'e' || lt == 'i' || lt == 'o' || lt == 'u')
			risadaOnlyVogal += lt;
	}

	int tam = risadaOnlyVogal.length();
	for (int i = 0; i < tam; i++) {
		if (risadaOnlyVogal[i] != risadaOnlyVogal[tam - i - 1]) break;
		if (i == tam - 1) result = 'S';
	}

	cout << result << endl;

	return 0;
}