typedef struct no {
	int v,i,j;
  struct no *prox;
} Lista;

void cria_lista(Lista **l);
void insere_final(Lista *l, int v, int i, int j);
void remove_comeco(Lista *l);
void libera_lista(Lista **l);
void mostra_lista(Lista **l);
