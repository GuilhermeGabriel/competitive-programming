// GUILHERME GABRIEL FERREIRA SOUZA
// 11921ECP001

// Biblioteca para entrada e saida de dados
#include <stdio.h>

// Interface para incluir tipo Pilha
// (Acaba incluindo tambem o tipo Lista, suas definicoes e implementacoes)
// e implementar as funcoes desta
#include "pilha.h"

// Implementacao de uma funcao que cria uma pilha
void pilha_criar(Pilha** p){
  // Criar uma pilha é o mesmo que criar uma tipo de lista
  cria_lista(p);
}

// Implementacao de uma funcao que insere no topo de uma pilha
void pilha_inserir(Pilha* p, int valor){
  // Insere no comeco da lista
  insere_comeco(p, valor);

  // Aumenta em 1 no valor que armazena
  // o tamanho da pilha no no cabeca
  p->v++;
}

// Implementacao da funcao que retorna o valor que esta
// no topo da pilha
int pilha_valor_topo(Pilha* p){
  // Topo da pilha eh igual ao proximo
  // elemento apos o no cabeca da lista
  Pilha *aux = p->prox;

  // Se ele nao for nulo retorna seu valor
  // caso contrario retorna -1
  if(aux!=NULL) return aux->v;
  else return -1;
}

// Implementacao da funcao que remove o topo da pilha
void pilha_remover(Pilha* p){
  // Remover topo da pilha eh o mesmo que remover o 
  // comeco da lista apos o no cabeca
  remove_comeco(p);

  // Diminui em 1 no valor que armazena
  // o tamanho da pilha no no cabeca
  p->v--;
}

// Implementacao da funcao retorna o tamanho da pilha
int pilha_tamanho(Pilha* p){
  // Retorna o valor que esta no no cabeca
  return p->v;
}

// Implementacao da funcao libera todos elementos da pilha
void pilha_liberar(Pilha** p){
  // Liberar todos elementos da pilha eh 
  // o mesmo que liberar todos elementos da lista
  libera_lista(p);
}
