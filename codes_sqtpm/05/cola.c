// 11921ECP001
// GUILHERME GABRIEL FERREIRA SOUZA

// Biblioteca para entrada e saida de dados
#include <stdio.h>

// Prototipo da funcao que checa se foi anulada
int checa_prova(long int n_resps[], long int n, long int m_resps[], long int m);

int main() {
    // Variaveis que armazenam a quantidade de respostas n e m
    long int n, m;

    // Vetores que armazenam as respostas de n e m
    long int n_resps[1001], m_resps[1001];

    // Input das quantidades de respostas de n e m
    scanf("%ld %ld", &n, &m);

    // Input das respostas de n para o vetor
    for (int i = 0; i < n; i++) {
        scanf("%ld", &n_resps[i]);
    }

    // Input das respostas de m para o vetor
    for (int j = 0; j < m; j++) {
        scanf("%ld", &m_resps[j]);
    }

    // Uso da funcao que checa se a prova foi anulada
    // retornando 1 se foi anulado e 0 caso contrario
    int zerada = checa_prova(n_resps, n, m_resps, m);

    // Imprime sim caso anulado e nao caso contrario
    (zerada == 1) ? printf("%s\n", "sim") : printf("%s\n", "nao");

    return 0;
}

// Funcao checa_prova recebe referencia a dois vetores
// o vetor n que contem respostas de juan e vetor m que contem
// respostas de ricardinho, alem do tamanho de cada vetor
int checa_prova(long int n_resps[], long int n, long int m_resps[], long int m) {
    // Incializacao de variavel para controle de indice do vetor n
    int j = 0;
    
    // Testa um a um os itens do vetor m com os itens do vetor n.
    // Se eles forem iguais, comeca a testar o proximo valor do vetor de m
    // sem comecar do zero o vetor de n.
    // Caso o laco esteja verificando o ultimo valor de m 
    // e ele for encontrado ainda sim lista,
    // isso indica que todos
    // os outros valores anteriores de m tambem foram encontrados e 
    // que a prova devera ser anulada retornando 1 
    for (int i = 0; i < m; i++) {
      while (j < n){
        if(m_resps[i] == n_resps[j]) {
          if (i == m - 1) return 1;
          j++;
          break;
        }
        j++;
      }
    }

    // Retorna 0, pois nao foi ocorrido o caso em que a prova seria anulada,
    // logo a prova nao foi anulada
    return 0;
}