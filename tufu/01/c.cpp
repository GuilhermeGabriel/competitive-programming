#include <stdio.h>

int main() {
	long long int s = 0, a, b;
	scanf("%lld %lld", &a, &b);
	s = (a + b) *  (b - a + 1) / 2;
	printf("%lld\n", s);
	return 0;
}