#include "lista.h"
typedef Lista Fila;

void cria_fila(Fila **f);
void insere_fila(Fila *f, int v, int i, int j);
void remove_fila(Fila *f);
void libera_fila(Fila **f);
void mostra_fila(Fila **f);
