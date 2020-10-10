// 11921ECP001
// GUILHERME GABRIEL FERREIRA SOUZA

// Biblioteca para entrada e saida de dados
#include <stdio.h>

// Biblioteca para usar utilitarios e converter tipos
#include <stdlib.h>

// Biblioteca para manipulacao de strings
#include <string.h>

// Prototipo da funcao kfatorial
long long int kfat(long long int num, int k, int i);

int main() {
    // Variavel que armazena a quatidade de instancias
    int quatidade_instancias = 0;

    // Leitura da quantidade de instancias
    scanf("%d", &quatidade_instancias);

    // Faz uma leitura de string pra cada instancia
    for (int i = 0; i < quatidade_instancias; i++) {
        // Vetores de char para armazenar o valores da instancia
        // e do numero que esta na instancia
        char instacia_str[101], numberInstanciaStr[101];
        
        // Leitura do vetor de char da instacia atual
        scanf("%s", instacia_str);

        // Variavel v para controle e k que armazena o numero de "!"
        int v = 0, k = 0;

        // Percorre toda a instancia ate o final
        while (instacia_str[v] != '\0') {

            // Adiciona 1 na quantidade de k se o caracter atual for "!"
            // Adiciona o caraceter atual na string number caso ele nao seja "!"
            if (instacia_str[v] == '!') {
                k++;
            } else {
                char caracterActual[2] = {instacia_str[v], '\0'};
                strcat(numberInstanciaStr, caracterActual);
            }

            // Incrementa 1 na variavel de controle do while
            v++;
        }

        // Transforma o vetor de chars para inteiro
        int number = atoi(numberInstanciaStr);

        // Printa a saida atual usando a funcao recursiva que calcula o k fatorial
        // Recebendo o numero, k, e uma variavel inicial para controle
        printf("%lld\n", kfat(number, k, 0));

        // Reseta os vetores de char da que armazenam a instancia atual e 
        // a instancia atual e o numero atual para utilizar na proxima chamada
        for (int r = 0; r < 101; r++) {
            numberInstanciaStr[r] = '\0';
            instacia_str[r] = '\0';
        };
    }

    return 0;
}

// Funcao recursiva que calcula o k fatorial.
// Retorna um long long long int, pois o resultado pode ser ate 10^18.
// Caso a diferenca entre o numero e o produto de k pelo indice atual
// seja maior ou igual a 1, armazena essa diferenca em uma variavel e
// a multiplica com o proximo numero que resulta da proxima chamada de kfat;
// Retorna 1, caso a condicao nao seja atingida.
// Dessa forma o valor das multiplicacoes serao mantidas e
// a funcao ira retornar o valor do k-fatorial * 1
long long int kfat(long long int num, int k, int i){
    if (num - (i * k) >= 1) {
        long long int rAtual = num - (i * k);
        i++;
        return rAtual * kfat(num, k, i);
    } else {
        return 1;
    }
}
