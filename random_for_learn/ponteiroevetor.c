#include <stdio.h>

int main() {
    int i = 10;
    int v[100];

    // Iguais
    *(v + i) = 50;
    v[i] = 50;

    // Iguais
    (v + i) == &v[i];

    return 0;
}