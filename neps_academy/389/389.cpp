#include <bits/stdc++.h>

using namespace std;

int main() {
	string frase;
	string fraseSemP;

	getline(cin, frase);

	int iPalavra = 1;
	for (int i = 0; i < frase.length(); i++) {
		if (frase[i] == ' ') iPalavra = 0;
		if (iPalavra % 2 == 0) fraseSemP += frase[i];
		iPalavra++;
	}

	for (int i = 0; i < fraseSemP.length(); i++) {
		cout << fraseSemP[i];
	}

	cout << endl;

	return 0;
}
