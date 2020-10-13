#include <stdio.h>

int main() {
    typedef struct {
        int *pt1, *pt2;
    } t_reg;

    int i1 = -2, i2 = 100;

    t_reg reg;
    reg.pt1 = &i1;
    reg.pt2 = &i2;

    return 0;
}