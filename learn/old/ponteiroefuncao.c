#include <stdio.h>

int *funcao(int *a) {
    *a = *a + 1;
    return a;
}

int main() {
    int a = 0;
    funcao(&a);
    printf("%d", a);

    return 0;
}