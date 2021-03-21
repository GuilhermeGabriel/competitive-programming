#include <stdio.h>

int main() {
	int ax0, ay0, ax1, ay1;
	int bx0, by0, bx1, by1;

	scanf("%d %d %d %d", &ax0, &ay0, &ax1, &ay1);
	scanf("%d %d %d %d", &bx0, &by0, &bx1, &by1);

	if (bx0 > ax1 || bx1 < ax0 || by1 < ay0 || by0 > ay1) {
		printf("0\n");
	} else {
		printf("1\n");
	}

	return 0;
}