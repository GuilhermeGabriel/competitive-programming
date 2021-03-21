#include <stdio.h>

int main() {
	int n, c, a, local = 1;
	int quant = 0;

	scanf("%d %d %d", &n, &c, &a);

	for (int i = 0; i < c; i++) {
		int cmm;
		scanf("%d", &cmm);

		if (local == a) quant++;

		if (cmm == -1) {
			if (local == 1) {
				local = n;
			} else {
				local--;
			}
		}

		if (cmm == 1) {
			if (local == n) {
				local = 1;
			} else {
				local++;
			}
		}
	}

	if (local == a) quant++;

	printf("%d\n", quant);

	return 0;
}