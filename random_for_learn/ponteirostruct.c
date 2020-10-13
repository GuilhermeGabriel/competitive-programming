#include <stdio.h>

int main() {
    typedef struct {
        int dia, mes, ano;
    } t_data;

    t_data hoje;
    t_data *q = &hoje;

    q->dia = 15;
    (*q).dia = 16;

    return 0;
}