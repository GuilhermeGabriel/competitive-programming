#include <stdio.h>

int main() {
	int n;

	while (scanf("%d", &n) != EOF) {
		double menor = 1000, atual;

		for (int i = 0; i < n; i++) {
			scanf("%lf", &atual);
			if (atual < menor) {
				menor = atual;
			}
		}

		printf("%.2lf\n", menor);
	}

	return 0;
} c