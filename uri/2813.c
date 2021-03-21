#include <stdio.h>
#include <string.h>

int main() {
	int n, qt = 0, qc = 0;
	int QT = 0, QC = 0;
	scanf("%d", &n);

	while (n--) {
		char climaida[10];
		char climavolta[10];

		scanf("%s", climaida);
		scanf("%s", climavolta);

		if (strcmp(climaida, "chuva") == 0 ) {
			qt++;
			if (qc > 0) qc--;
			else QC++;
		}

		if (strcmp(climavolta, "chuva") == 0 ) {
			qc++;
			if (qt > 0) qt--;
			else QT++;
		}
	}
	printf("%d %d\n", QC, QT);

	return 0;
}