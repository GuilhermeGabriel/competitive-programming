#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char msgcifra[10001], crib[10001];
	int q = 0;

	cin >> msgcifra >> crib;
	int i = 0;
	int tamCrib = strlen(crib);
	int tamCifra = strlen(msgcifra);
	while (msgcifra[i] != '\0' && i + tamCrib <= tamCifra) {
		int j = 0;
		//cout << endl;
		while (crib[j] != '\0') {
			//cout << msgcifra[i + j] <<  crib[j] << q << endl;
			if (msgcifra[i + j] == crib[j]) break;
			j++;
		}
		if (crib[j] == '\0') q++;
		i++;
	}

	cout << q << endl;

	return 0;
}