#include <stdio.h>
#include <stdlib.h>

int main() {
    int **p;
    int i;

    p = (int *)malloc(5 * sizeof(int *));
    for (i = 0; i < 5; i++) p[i] = malloc(3 * sizeof(int));

    return 0;
}