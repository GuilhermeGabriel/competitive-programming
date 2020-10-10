// GUILHERME GABRIEL FERREIRA SOUZA
// 11921ECP001

// Biblioteca para entrada e saida de dados
#include <stdio.h>

// Biblioteca para manipulacao de memoria
#include <stdlib.h>

// Interface para manipular pilha
#include "pilha.h"

// Implementacao de funcao que retorna se a expressao esta bem definida
// Retorna 1 caso for bem definida 0 caso contrario
int is_bem_definida(char *str, Pilha *pilha){
  // Comeca o valor de retorno com 1
  int ok = 1;
  
  // Valor para armazenar o valor do topo a ser comparado
  char par;

  // Faz o loop a cada caracter enquanto nao for o final
  // da cadeia e o valor de retorno ainda for 1 
  for(int i = 0; ok && str[i] != '\0'; i++){
    // Verifica se o caracter atual eh um de abertura
    if(str[i] == '[' || str[i] == '(' || str[i] == '{'){
      // Insere o caracter de abertura no topo da pilha
      pilha_inserir(pilha, str[i]);
    } else if (pilha_tamanho(pilha) == 0){
      // Caso o caracter atual nao for de abertura e a pilha esta vazia,
      // ela esta mal formatada setando valor de retorno igual a 0
      ok = 0;
    } else {
      // Caso o caracter lido atual nao for de abertura
      // seta o que esta no topo da pilha
      // em uma variavel para se fazer comparacoes
      par = pilha_valor_topo(pilha);

      // Remove o mesmo do topo da pilha
      pilha_remover(pilha);

      // Caso o caracter lido atual for de fechamento
      // e o que estava no topo da pilha nao for igual ao seu
      // respectivo caracter de fechamento, a cadeira esta mal formatada
      // setando o valor de retorno igual a 0.
      if(str[i] == ']' && par != '[')        
        ok = 0;
      if(str[i] == ')' && par != '(')
        ok = 0;
      if(str[i] == '}' && par != '{')
        ok = 0;
    }
  }

  // Se ainda restar elementos na pilha, a cadeira esta 
  // mal formatada setando o valor de retorno igual a 0.
  if(pilha_tamanho(pilha) > 0) ok = 0;

  // Retorna o valor de retorno
  return ok;
}

int main(){
  // Variavel que armazena a quantidade de instancias
  int quant_instancias = 0;

  // Le a quantidade de instancias
  scanf("%d", &quant_instancias);
  
  // Faz a leitura de cada instancia e ja mostra o resultado
  for(int i = 0; i < quant_instancias; i++){
    // Cria uma pilha
    Pilha *P;
    pilha_criar(&P);

    // Alocacao dinamica de um array de char para armazenar uma instancia
    char *instancia = (char*) malloc(100001 * sizeof(char));

    // Le a instancia
    scanf("%s", instancia);

    // Atribui o resultado em uma variavel
    int result = is_bem_definida(instancia, P);
    
    // Printa S caso for bem definida e N caso contrario
    (result) ? printf("S\n") : printf("N\n");

    // Libera instancia da memoria
    free(instancia);

    // Libera a pilha da memoria
    pilha_liberar(&P);
  }

  return 0;
}
