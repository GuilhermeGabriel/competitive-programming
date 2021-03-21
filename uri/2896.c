#include <stdio.h>

int main() {
	int n, g, k;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &g, &k);
		printf("%d\n", (g % k) + (g / k));
	}

	return 0;
}