#include <stdio.h>

int main() {
    int i = 5, *p;
    p = &i;
    int **r;
    r = &p;

    (**r)++;

    printf("%d", i);

    return 0;
}