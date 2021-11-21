#include <stdio.h>
#include <stdlib.h>

void cria_lista();
int sentido_horario();
int sentido_ant();
void libera_horario();
void libera_ant();

typedef struct No {
	int valor;
	struct no *prox, *ant;
} no;

int main(){
	
	int N,k,m;
	int i;
	
	no *lista=NULL;
	no** p = &lista;
	
	scanf("%d %d %d", &N, &k, &m);
	
	for(i=1;i<=N;i++){
		cria_lista(p,i);
	}
	
	no *aux=*p;
	no *fim;
	for(i=0;i<N;i++){
		if (aux->prox==NULL){
			fim=aux;
			aux->prox=lista;
			lista->ant=fim;
		}
		aux=aux->prox;
	}
	
	no** f= &fim;
	int horario, ant;
	while (lista->prox!=NULL){
		
		horario=sentido_horario(p,k);
		ant=sentido_ant(f,m);
		
		if (horario==ant){
			printf("%d\n", horario);
			libera_horario(p,horario);
		}
		else {
			printf ("%d %d\n", horario, ant);
			libera_horario(p,horario);
			libera_ant(f,ant);
		}
	}
  
	/*
	libera_horario(p,2);
	libera_ant(f,9);
	
	for (i=0;i<N;i++){
		printf ("%d\n", lista->valor);
		lista= lista->prox;
	}*/
	
	return 0;
}

void cria_lista (no** a, int b){
	no *aux, *p;
	p = (no*) malloc (sizeof(no));
	p->valor=b;
	p->ant=NULL;
	p->prox=NULL;
	
	if (*a == NULL){
		*a = p;
	}
	else {
		aux = *a;
		while (aux->prox!=NULL){
			aux=aux->prox;
		}
		aux->prox=p;
		p->ant=aux;
	}
}

int sentido_horario(no** a, int b){
	int i;
	no *aux=*a;
	int x;
	for (i=0;i<b;i++){
		x=aux->valor;
		aux=aux->prox;
	} 
	*a=aux;
	return x;
}

int sentido_ant (no** a, int b){
	int i;
	no *aux=*a;
	int x;
	for (i=0;i<b;i++){
		x=aux->valor;
		aux=aux->ant;
	}
	*a=aux;
	return x;
}
void libera_horario(no** a, int b){
	int i;
	no *aux=*a;
	no *aj;
	while(aux->valor!=b) {
		aux=aux->prox;
	}

	if(aux->prox!=aux){
		aj=aux->ant;
		aj->prox=aux->prox;
		aj=aux->prox;
		aj->ant=aux->ant;
		free(aux);
	}
	else {
  	aux->prox=NULL;
		aux->ant=NULL;
		free(aux);
	}
}
void libera_ant(no** a, int b){
	int i;
	no *aux=*a;
	no* aj;
	while (aux->valor!=b){
		aux=aux->ant;
	}
	
	aj=aux->ant;
	aj->prox=aux->prox;
	aj=aux->prox;
	aj->ant=aux->ant;
	free(aux);
}
