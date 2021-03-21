#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
	return ( *(int*)a - * (int*)b );
}

int main() {
	int n, q;

	scanf("%d %d", &n, &q);

	int notas[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &notas[i]);
	}

	qsort(notas, n, sizeof(int), cmpfunc);

	for (int i = 0; i < q; i++) {
		int index;
		scanf("%d", &index);
		printf("%d\n", notas[index - 1]);
	}

	return 0;
}