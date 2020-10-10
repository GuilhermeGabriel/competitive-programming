// 11921ECP001
// GUILHERME GABRIEL FERREIRA SOUZA

// Biblioteca para uso de boleanos
#include <stdbool.h>

// Biblioteca de entrada e saida
#include <stdio.h>

// Definicao de maximo e minimo de linhas usando constantes
#define MIN_LINHAS 2
#define MAX_LINHAS 100

// Definicao de maximo e minimo de colunas usando constantes
#define MIN_COLUNAS 2
#define MAX_COLUNAS 100

int main() {
    // Criacao de variaveis de numero de linhas e colunas
    int linhas, colunas;

    // Input de variaveis de numero de linhas e colunas
    scanf("%d %d", &linhas, &colunas);

    // Definicao de maximo e minimo de linhas e colunas usando contantes
    if (linhas < MIN_LINHAS) linhas = MIN_LINHAS;
    if (linhas > MAX_LINHAS) linhas = MAX_LINHAS;
    if (colunas < MIN_COLUNAS) colunas = MIN_COLUNAS;
    if (colunas > MAX_COLUNAS) colunas = MAX_COLUNAS;

    // Criacao da matriz usando as variaveis de linha e coluna
    char mapa[MAX_LINHAS][MAX_COLUNAS];

    // Input da matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf(" %c", &mapa[i][j]);
        }
    }

    // Obs.: Eu estou usando vetores de tamanho 2,
    // onde o primeiro indice representa a linha e o segundo a coluna.

    // Variavel que armazena a posicao inicial
    int posicaoInicial[2];

    // Encontrar ponto inicial
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (mapa[i][j] == 'o') {
                posicaoInicial[0] = i;
                posicaoInicial[1] = j;
                break;
            }
        }
    }

    // Criacao de variaveis para controle de posicao
    int ultimaPosicao[2] = {posicaoInicial[0], posicaoInicial[1]};
    int posicaoAtual[2] = {posicaoInicial[0], posicaoInicial[1]};

    /*
     * Logica para se mover
     */

    // O loop roda indefinidamente ate nao haver mais maneiras de
    // da posicao atual se atualizar encontrando um break no final.
    while (true) {
        // Apos encontrar a posicao atual essas serao
        // as proximas posicoes provaveis de movimento
        int acima[2] = {posicaoAtual[0] - 1, posicaoAtual[1]};
        int direita[2] = {posicaoAtual[0], posicaoAtual[1] + 1};
        int abaixo[2] = {posicaoAtual[0] + 1, posicaoAtual[1]};
        int esquerda[2] = {posicaoAtual[0], posicaoAtual[1] - 1};

        // Verifica se a proxima posicao
        // nao e igual a posicao anterior
        if (acima[0] != ultimaPosicao[0] || acima[1] != ultimaPosicao[1]) {
            // Verifica se a posicao a se mover nao
            // ultrapassa o tamanho da matriz
            if ((acima[0] > -1 && acima[0] < linhas) &&
                (acima[1] > -1 && acima[1] < colunas)) {
                // Verifica se a proxima posicao
                // e uma posicao onde hermione passou
                if (mapa[acima[0]][acima[1]] == 'H') {
                    // Muda a ultima posicao para a atual
                    ultimaPosicao[0] = posicaoAtual[0];
                    ultimaPosicao[1] = posicaoAtual[1];

                    // Muda a posicao atual para esta posicao verificada
                    posicaoAtual[0] = acima[0];
                    posicaoAtual[1] = acima[1];

                    // Comeca o loop novamente
                    continue;
                }
            }
        }

        // Verifica se a proxima posicao
        // nao e igual a posicao anterior
        if (ultimaPosicao[0] != direita[0] || ultimaPosicao[1] != direita[1]) {
            // Verifica se a posicao a se mover nao
            // ultrapassa o tamanho da matriz
            if ((direita[0] > -1 && direita[0] < linhas) &&
                (direita[1] > -1 && direita[1] < colunas)) {
                // Verifica se a proxima posicao
                // e uma posicao onde hermione passou
                if (mapa[direita[0]][direita[1]] == 'H') {
                    // Muda a ultima posicao para a atual
                    ultimaPosicao[0] = posicaoAtual[0];
                    ultimaPosicao[1] = posicaoAtual[1];

                    // Muda a posicao atual para esta posicao verificada
                    posicaoAtual[0] = direita[0];
                    posicaoAtual[1] = direita[1];

                    // Comeca o loop novamente
                    continue;
                }
            }
        }

        // Verifica se a proxima posicao
        // nao e igual a posicao anterior
        if (abaixo[0] != ultimaPosicao[0] || abaixo[1] != ultimaPosicao[1]) {
            // Verifica se a posicao a se mover nao
            // ultrapassa o tamanho da matriz
            if ((abaixo[0] > -1 && abaixo[0] < linhas) &&
                (abaixo[1] > -1 && abaixo[1] < colunas)) {
                // Verifica se a proxima posicao
                // e uma posicao onde hermione passou
                if (mapa[abaixo[0]][abaixo[1]] == 'H') {
                    // Muda a ultima posicao para a atual
                    ultimaPosicao[0] = posicaoAtual[0];
                    ultimaPosicao[1] = posicaoAtual[1];

                    // Muda a posicao atual para esta posicao verificada
                    posicaoAtual[0] = abaixo[0];
                    posicaoAtual[1] = abaixo[1];

                    // Comeca o loop novamente
                    continue;
                }
            }
        }

        // Verifica se a proxima posicao
        // nao e igual a posicao anterior
        if (ultimaPosicao[0] != esquerda[0] ||
            ultimaPosicao[1] != esquerda[1]) {
            // Verifica se a posicao a se mover nao
            // ultrapassa o tamanho da matriz
            if ((esquerda[0] > -1 && esquerda[0] < linhas) &&
                (esquerda[1] > -1 && esquerda[1] < colunas)) {
                // Verifica se a proxima posicao
                // e uma posicao onde hermione passou
                if (mapa[esquerda[0]][esquerda[1]] == 'H') {
                    // Muda a ultima posicao para a atual
                    ultimaPosicao[0] = posicaoAtual[0];
                    ultimaPosicao[1] = posicaoAtual[1];

                    // Muda a posicao atual para esta posicao verificada
                    posicaoAtual[0] = esquerda[0];
                    posicaoAtual[1] = esquerda[1];

                    // Comeca o loop novamente
                    continue;
                }
            }
        }

        // Se chegar nesse final, nao ha mais movimentos possiveis
        // Chegou no final, break para sair do loop
        break;
    }

    // Printa a ultima posicao na saida adicionando 1
    // por estarmos trabalhando com indices e o resultado
    // querer em notacao matematica.
    printf("%d %d", posicaoAtual[0] + 1, posicaoAtual[1] + 1);

    /*
     * Usado para debug, basta descomentar
     */

    /*
        printf("\n***********\n");
        printf("Linhas e Colunas %d %d\n", linhas, colunas);
        printf("Ponto inicial: %d %d\n", posicaoInicial[0], posicaoInicial[1]);
        printf("Ultima posicao: %d %d\n", ultimaPosicao[0], ultimaPosicao[1]);
        printf("Posicao Final index: %d %d\n", posicaoAtual[0],
       posicaoAtual[1]); printf("Posicao Final Output: %d %d\n", posicaoAtual[0]
       + 1, posicaoAtual[1] + 1);

        printf("Mapa:\n");
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                printf("%c", mapa[i][j]);
            }
            printf("\n");
        }
    */

    return 0;
}