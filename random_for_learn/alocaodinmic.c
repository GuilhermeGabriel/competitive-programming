#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
        char *p;
        p = (char *)malloc(1);

        *p = 'a';
        printf("%c", *p);
    */

    int *i = (int *)malloc(100 * 4);
    int *j = (int *)malloc(100 * sizeof(int));
    // code
    free(j);

    return 0;
}