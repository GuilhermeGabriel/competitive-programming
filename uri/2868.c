#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, a, b;
	char o;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int s, r;
		char bf;
		scanf("%d %c %d %c %d", &a, &o, &b, &bf, &r);

		if (o == '+') {
			s = a + b;
		} else if (o == '-') {
			s = a - b;
		} else if (o == 'x') {
			s = a * b;
		}

		printf("E");
		for (int i = 0; i < abs(s - r); i++) {
			printf("r");
		}
		printf("ou!\n");
	}


	return 0;
}