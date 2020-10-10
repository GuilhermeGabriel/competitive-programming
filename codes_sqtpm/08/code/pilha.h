// GUILHERME GABRIEL FERREIRA SOUZA
// 11921ECP001

// Inclui a interface lista 
// para pegar o struct Lista
// e as definicoes das funcoes
#include "lista.h"

// Arquivo de definicoes
// Implementacoes em pilha.c

// Define uma tipo Pilha como um tipo de Lista
typedef Lista Pilha;

// Definicao de funcao que cria uma pilha
void pilha_criar(Pilha** p);

// Definicao de funcao que insere no topo de uma pilha
void pilha_inserir(Pilha* p, int valor);

// Definicao de uma funcao que mostra o valor
// que esta no topo da pilha
int pilha_valor_topo(Pilha* p);

// Definicao de uma funcao que remove
// o valor que esta no topo da pilha
void pilha_remover(Pilha* p);

// Definicao de uma funcao que mostra 
// o tamanho de uma pilha
int pilha_tamanho(Pilha* p);

// Definicao de uma funcao que libera
// todos valores de uma pilha
void pilha_liberar(Pilha** p);
