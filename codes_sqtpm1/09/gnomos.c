// 11921ECP001
// GUILHERME GABRIEL FERREIRA SOUZA

// Biblioteca para entrada e saida de dados
#include <stdio.h>

// Biblioteca para manipulacao de memoria
#include <stdlib.h>

// Funcao recursiva que implementa a busca binaria
int busca_binaria(int *dados, int l, int r, int x) {
  // Indice do valor que esta no meio
  int m = (l + r) / 2;
  
  // Caso base onde o indice da esquerda ultrapassou o 
  // indice da direita logo nao foi encontrado o valor da busca.
  // Retorna o indice que esta a esquerda de onde o valor de busca deveria estar
  // pois esse valor eh util para resolver o problema 
  // porque informa qual a faixa de pontuacao que o jogador esta.
  if (l > r) {
    return r;
  }

  // Caso o valor do centro seja encontrado, retorna o indice do mesmo.
  if (dados[m] == x) return m;

  // Caso contraio e o valor no centro seja menor que o valor buscado
  // chama a funcao novamente passando a metade direta do vetor
  else if (dados[m] < x)
    return busca_binaria(dados, m + 1, r, x);

  // Caso contraio e o valor no centro seja maior que o valor buscado
  // chama a funcao novamente passando a metade esquerda do vetor
  else
    return busca_binaria(dados, l, m - 1, x);
}

int main(){
  // Variaveis que armazenam o numero de faixas e de pessoas
  int n_faixas, m_pessoas;

  // Leitura do numero de faixas e pessoas
  scanf("%d %d", &n_faixas, &m_pessoas);

  // Alocacao dinamica de memoria para os vetores que armazenam
  // a faixa de intervalos, de valores e as pontucoes das pessoas
  int *faixas_intervalos = (int*) malloc((n_faixas-1) * sizeof(int));
  int *faixas_valores = (int*) malloc((n_faixas)  * sizeof(int));
  int *pessoas_pont = (int*) malloc(m_pessoas * sizeof(int));

  // Leitura de dados de cada faixa e da pontuacao de cada pessoa
  for(int i=0; i < n_faixas-1; i++) scanf("%d", &faixas_intervalos[i]);
  for(int i=0; i < n_faixas; i++) scanf("%d", &faixas_valores[i]);
  for(int i=0; i < m_pessoas; i++) scanf("%d", &pessoas_pont[i]);

  // Para cada pessoa, encontra em qual indice sua pontuacao esta
  // na faixa de intervalo de pontuacoes usando a busca binaria.
  // Printa qual o valor de sua pontuacao usando esse indice + 1
  // aplicado no vetor das faixas de valores pois a faixa de valores
  // sempre tera um valor a mais que eh o respectivo a quem fez menos pontos que o minimo.
  // Printa um espaco entre os valores (exceto no ultimo elemento) para formatacao
  for(int i = 0; i < m_pessoas; i++){ 
    int indiceFaixaIntervalos =  busca_binaria(faixas_intervalos, 0, n_faixas-2, pessoas_pont[i]);
    printf("%d", faixas_valores[indiceFaixaIntervalos + 1]);
    if(i != m_pessoas-1) printf(" ");
  }

  // Printa um \n para formatacao
  printf("\n");

  // Libera as memorias alocadas
  free(faixas_intervalos);
  free(faixas_valores);
  free(pessoas_pont);

  return 0;
}