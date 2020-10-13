#include <stdio.h>

struct no {
    int valor;
    struct no* prox;
};
typedef struct no No;

void imprimeLista(No *q) {
    while (q != NULL) {
        printf("%d\n", q->valor);
        q = q->prox;
    }
}

int main() { return 0; }