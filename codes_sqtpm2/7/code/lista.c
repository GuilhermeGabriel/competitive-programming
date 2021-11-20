#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void cria_lista(Lista **l){
  Lista *q = (Lista*) malloc(sizeof(Lista));
  q->prox = NULL;
  q->v=0;
  *l = q;
}

void insere_final(Lista *l, int v, int i, int j){
  Lista *q, *aux;
  q = (Lista*) malloc(sizeof(Lista));
  q->v = v;
  q->i = i;
  q->j = j;
  q->prox=NULL;
  
  aux=l;
  while(aux->prox != NULL)aux=aux->prox;
  aux->prox=q;
}

void remove_comeco(Lista *l){
  Lista *q;

  if (l->prox != NULL){
    q = l->prox;
    l->prox = q->prox;
    free(q);
  }
}

void mostra_lista(Lista **l){
  Lista *q;

  while (*l != NULL) {
    q = *l;
    *l = (*l)->prox;
    printf("%d ",q->v);
  }
  printf("\n");
}

void libera_lista(Lista **l){
  Lista *q;

  while (*l != NULL) {
    q = *l;
    *l = (*l)->prox;
    free(q);
  }
}
