// GUILHERME GABRIEL FERREIRA SOUZA
// 11921ECP001

// Biblioteca para entrada e saida de dados
#include <stdio.h>

// Biblioteca para alocar a memoria
#include <stdlib.h>

// Funcao que recebe a matriz e a imprime corrigida
void corrige_e_imprime_matriz(int **matriz, int l, int c, int x, int y) {
    // Variaveis que armazenam a posicao do valor da matriz a ser imprimido
    int a = 0, b = 0;

    // Percorre cada item da matriz
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            // Posicao a ser imprimida da coluna atual.
            // Soma o tamanho da coluna (quantidade de linhas da matriz)
            // com a variavel que deve ser feita no eixo y
            // com o indice da linha atual da matriz original
            // E, desse valor, subtrai a quantidade de linhas da matriz
            // até que o resultado seja menor que a quantidade de linhas da
            // mesma. Dessa forma, o valor a ser imprimido sera um valor
            // positivo, até mesmo para variacoes negativas
            a = l + i + y;
            while (a >= l) {
                a -= l;
            }

            // Posicao a ser imprimida da linha atual.
            // Soma o tamanho da linha (quantidade de colunas da matriz)
            // com a variavel que deve ser feita no eixo x
            // com o indice da coluna atual da matriz original
            // E, desse valor, subtrai a quantidade de colunas da matriz
            // até que o resultado seja menor que a quantidade de colunas da
            // mesma. Dessa forma, o valor a ser imprimido sera um valor
            // positivo, até mesmo para variacoes negativas
            b = c + j - x;
            while (b >= c) {
                b -= c;
            }

            // Printa um espaco entre o valores, ao nao ser no inicio.
            if (j > 0) printf(" ");

            // Printa o valor a ser imprimido da matriz original
            printf("%d", matriz[a][b]);
        }
        printf("\n");
    }
}

int main() {
    // Variaveis para armazenar o tamanho da matriz do caso de teste atual
    int l, c;

    // Variavel para amazenar qual o caso de teste atual
    int testeCaso = 0;

    // Variaveis que armanezam os controles lidos atuais
    int xAtual, yAtual;

    // Roda a funcao indefinidamente ate que o
    // l e c iguais a 0, chamando um break.
    while (1) {
        // Le o input do tamanho da matriz
        scanf("%d %d", &l, &c);

        // Encerra o loop caso sejam encontrado tamanhos 0 e 0
        if (l == 0 && c == 0) break;

        // Alocacao de uma matriz (vetor de ponteiros) l*c
        int **matriz = malloc(l * sizeof(int *));
        for (int p = 0; p < l; p++) {
            matriz[p] = malloc(c * sizeof(int));
        }

        // Soma 1 para mostrar o caso de teste na saida
        testeCaso++;

        // Ler os valores de input da matriz
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        // Variaveis para armazenar a variacao no eixo x e y
        int varx = 0, vary = 0;

        // Roda a funcao indefinidamente ate que as operacoes
        // x e y sejam iguais a 0, chamando um break.
        while (1) {
            // Leitura dos valores atuais de operacao
            scanf("%d %d", &xAtual, &yAtual);

            // Se os valores forem iguais a 0, encerra o loop
            if (xAtual == 0 && yAtual == 0) break;

            // Soma as operacoes atuais na variacao total
            varx += xAtual;
            vary += yAtual;
        }

        // Subtrai do total de variacoes do eixo x e eixo y
        // pedacoes completos to tamanho de cada linha e coluna
        // com isso, o numero de operacoes sera somente para fazer
        // o deslocamento real da matriz
        varx = varx % c;
        vary = vary % l;

        // Printa qual o teste atual
        printf("Teste %d\n", testeCaso);

        // Chama a funcao que corrige passando
        // a matriz, seu tamanho, variacao no eixo x e y
        corrige_e_imprime_matriz(matriz, l, c, varx, vary);

        // Printa um \n para corrigir a formatacao
        printf("\n");

        // Desaloca a memoria usada para armazenar a matriz
        for (int f = 0; f < l; f++) {
            free(matriz[f]);
        }
        free(matriz);
    }

    return 0;
}
