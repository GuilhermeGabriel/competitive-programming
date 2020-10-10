// GUILHERME GABRIEL FERREIRA SOUZA
// 11921ECP001

// Biblioteca para entrada e saida de dados
#include <stdio.h>

// Biblioteca para manipulacao de memoria
#include <stdlib.h>

// Funcao recursiva que soma quantos sao os valores maiores que o pivo, que estao antes do pivo,
// mais quantos sao menores que o pivo e estao depois do pivo para cada escolha de
// cada pivo possivel, e retorna esse valor divido pelo numero de termos recusivamente.
double quickSortCusto(int *v, int l, int r, double custo) {
    if (r > l) {
        // Alocacao dinamica para os vetores que armazenam
        // os valores menores que o pivo e os valores maiores que o pivo.
        int *vetor_de_menores = malloc((r+1) * sizeof(int));
        int *vetor_de_maiores = malloc((r+1) * sizeof(int));

        // Loop que escolhe cada elemento do vetor recebido como um pivo  
        for (int iPivo = 0; iPivo <= r; iPivo++) {
            // Indice para saber em qual elemento adicionar no vetor de maiores
            int indexVetoresDeMaiores = 0;

            // Indice para saber em qual elemento adicionar no vetor de menores
            int indexVetoresDeMenores = 0;

            // Loop para cada valor da metade esquerda
            // resultante do loop anterior
            for (int a = 0; a < iPivo; a++) {
                // Caso o valor esteja antes da metade e seja maior que o pivo
                if (v[a] > v[iPivo]) {
                    // Aumenta em 1 no custo
                    custo++;

                    // Adiciona esse valor em um vetor auxiliar
                    // que armazena somente os valores maiores
                    // que o pivo para ser calculado o custo desse vetor
                    // de maiores na proxima chamada do quick
                    vetor_de_maiores[indexVetoresDeMaiores++] = v[a];

                    // Caso o valor esteja antes da
                    // metade e seja menor que o pivo
                } else if (v[a] < v[iPivo]) {
                    // Adiciona esse valor menor em um vetor auxiliar
                    // que armazena somente os valores menores
                    // que o pivo para ser calculado o custo desse vetor
                    // de menores na proxima chamada do quick
                    vetor_de_menores[indexVetoresDeMenores++] = v[a];
                }
            }

            // Loop para cada valor da metade direita
            // resultante do loop anterior
            for (int d = iPivo + 1; d <= r; d++) {
                // Caso o valor esteja depois da metade e seja menor que o pivo
                if (v[d] < v[iPivo]) {
                    // Aumenta em 1 no custo
                    custo++;

                    // Adiciona esse valor em um vetor auxiliar
                    // que armazena somente os valores menores
                    // que o pivo para ser calculado o custo desse
                    // vetor de menores na proxima chamada do quick
                    vetor_de_menores[indexVetoresDeMenores++] = v[d];

                    // Caso o valor esteja depois da
                    // metade e seja maior que o pivo
                } else if (v[d] > v[iPivo]) {
                    // Adiciona esse valor maior em um vetor auxiliar
                    // que armazena somente os valores maiores
                    // que o pivo para ser calculado o custo desse vetor
                    // de maiores na proxima chamada do quick
                    vetor_de_maiores[indexVetoresDeMaiores++] = v[d];
                }
            }

            // Soma no custo, o custo atual mais o custo resultante da chamada
            // recursiva do quick para o vetor atual de maiores
            custo += quickSortCusto(vetor_de_maiores, 0, indexVetoresDeMaiores - 1, 0);

            // Soma no custo, o custo atual mais o custo resultante da chamada
            // recursiva do quick para o vetor atual de menores
            custo += quickSortCusto(vetor_de_menores, 0, indexVetoresDeMenores - 1, 0);
        }

        // Retorna o custo que foi somado
        // divido pelo numero de elementos

        // Libera as memorias alocadas para os vetores que armazenam
        // os valores menores que o pivo e os valores maiores que o pivo.
        free(vetor_de_maiores);
        free(vetor_de_menores);

        return custo / (r + 1);
    }
    // Retorna o custo total das recursoes
    return custo;
}

int main(void) {
    // Variavel que armazena a quantidade de numeros
    int quantN;

    // Leitura da variavel que armazena a quantidade de numeros
    scanf("%d", &quantN);

    // Alocacao dinamica para armazenar o vetor recebido
    int *sequencia = (int *)malloc(quantN * sizeof(int));

    // Leitura do vetor recebido
    for (int i = 0; i < quantN; i++) scanf("%d", &sequencia[i]);

    // Printa o valor do custo e um \n para formatacao
    printf("%.10f\n", quickSortCusto(sequencia, 0, quantN - 1, 0));

    // Libera a memoria alocada para o vetor recebido
    free(sequencia);

    return 0;
}