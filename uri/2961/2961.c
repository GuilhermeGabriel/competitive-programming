#include <stdio.h>

int main() {
	int a, b, n = 0;
	char l;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %c %d", &a, &l, &b);

		for (int i = 5; i <= 10; i++) {
			if (a != b) {
				printf("%d x %d = %d && %d x %d = %d\n", a, i, a * i, b, i, b * i);
			} else {
				printf("%d x %d = %d\n", a, i, a * i);
			}
		}
	}


	return 0;
}