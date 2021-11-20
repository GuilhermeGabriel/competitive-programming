#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void cria_fila(Fila **f){
  cria_lista(f);
}

void insere_fila(Fila *f, int v, int i, int j){
  insere_final(f, v, i, j);
  f->v++;
}

void remove_fila(Fila *f){
  remove_comeco(f);
  f->v--;
}

void mostra_fila(Fila **f){
  Fila *q;

  while (*f != NULL) {
    q = *f;
    *f = (*f)->prox;
    printf("%d ",q->v);
  }
  printf("\n");
}

void libera_fila(Fila **f){
  Fila *q;

  while (*f != NULL) {
    q = *f;
    *f = (*f)->prox;
    free(q);
  }
}
