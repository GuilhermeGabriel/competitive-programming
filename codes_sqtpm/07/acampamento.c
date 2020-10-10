// GUILHERME GABRIEL FERREIRA SOUZA
// 11921ECP001

// Biblioteca para entrada e saida de dados
#include <stdio.h>

// Biblioteca para manipulacao de memoria
#include <stdlib.h>

// Biblioteca para manipulacao de string
#include <string.h>

// Struct que armazena as informacaoes de uma pessoa e seus adjacentes
typedef struct pessoa {
    char nome[31];
    int numero;
    struct pessoa *prox;
    struct pessoa *prev;
} Pessoa;

// Insere uma pessoa na lista duplamente circular no comeco
void insereComecoLista(Pessoa **p, char *nome, int numeroPessoa) {
    // Alocacao de memoria para armazenar a pessoa
    Pessoa *q = (Pessoa *)malloc(sizeof(Pessoa));

    // Adiciona o nome
    strcpy(q->nome, nome);

    // Adiciona a ficha dela
    q->numero = numeroPessoa;

    // Verifica se a lista eh nula e se for
    // seta o elemento criado como primeiro.
    // Caso nao for nula, adiciona o elemento
    // no inicio da lista ligando todos os ponteiros.
    if (*p == NULL) {
        // Primeiro elemento da lista vira o elemento criado
        *p = q;

        // Proximo do que entrou é ele mesmo
        q->prox = q;

        // Anterios do que entrou é ele mesmo
        q->prev = q;
    } else {
        // Proximo do que entrou é igual
        // ao proximo do ultimo da lista
        q->prox = (*p)->prox;

        // O proximo do ultimo aponta para o que entrou
        (*p)->prox = q;

        // O prev do que entrou aponta para o ultimo da lista
        q->prev = *p;

        // O prev do que estava em primeiro aponta para o q entrou
        q->prox->prev = q;
    }
}

// Retorna o tamanho da lista circular
int tamLista(Pessoa *p) {
    // Se a lista for nula retorna zero
    if (p == NULL) return 0;

    // Variavel que armazena o tamanho
    int tam = 0;

    // Cria uma variavel auxiliar e percorre a lista somando
    // 1 no tam enquanto o elemento atual for diferente do primero elemento.
    Pessoa *aux = p->prox;
    while (aux != p) {
        // Elemento autal igual ao proximo elemento
        aux = aux->prox;

        // Soma 1 no tam
        tam++;
    }
    // Soma 1 no tam para contabilizar o primeiro elemento
    tam++;

    // Retorna o tamanho
    return tam;
}

// Funcao que faz a logica da "brincadeira"
void brincadeira(Pessoa **p) {
    // Ponteiro auxilar q para armazenar o primeiro elemento
    Pessoa *q = *p;

    // Recebe o tamanho da lista
    int tam = tamLista(*p);

    // Recebe o numero da ficha do primeiro elemento
    int num = q->numero;

    // Cria uma variavel auxilar para controle e liberacao de memoria
    Pessoa *aux = q;

    // Faz a logica enquanto houver pessoas
    for (int i = 0; i < tam; i++) {
        // Se a pessoa atual nao for a primeira da roda
        // libera ela da memoria (Essa primeira sera liberada no proximo loop)
        if (i > 0) {
            // Libera ela da memoria
            free(q);

            // Armazena no q o valor q estava no aux
            // pois o aux possui as informacoes de anterior e
            // proximo para continuar percorrendo a lista
            q = aux;
        }

        // Se for par, roda no sentido horario
        // caso contrario, no sentido antihorario
        if (num % 2 == 0) {
            // Enquando numero de vezes que estava na ficha nao for zero
            // continua percorrendo no sentido horario.
            while (num != 0) {
                // Atual passa a ser proximo
                q = q->prox;

                // Subtrai 1 do total do valor que precisa percorrer
                num--;
            }

            // Numero da ficha do que parou para o proximo loop
            num = q->numero;

            // Aponta o da frente do atual pra tras
            q->prox->prev = q->prev;

            // Aponta o de tras do atual pra frente
            q->prev->prox = q->prox;

            // Seta o auxiliar como o valor que foi retirado
            aux = q;
        } else {
            // Enquando numero de vezes que estava na ficha nao for zero
            // continua percorrendo no sentido antihorario.
            while (num != 0) {
                // Atual passa a ser anterior
                q = q->prev;

                // Subtrai 1 do total do valor que precisa percorrer
                num--;
            }

            // Numero da ficha do que parou para o proximo loop
            num = q->numero;

            // Aponta o da frente do atual pra tras
            q->prox->prev = q->prev;

            // Aponta o de tras do atual pra frente
            q->prev->prox = q->prox;

            // Seta o auxiliar como o valor que foi retirado
            aux = q;
        }
    }

    // Printa a crianca que sobrou da forma formatada
    printf("Vencedor(a): %s", q->nome);

    // Libera a crianca que sobrou da memoria
    // (q e aux sao o mesmo nesse momento, basta eliminar um deles)
    free(q);

    // Seta as variaveis como null
    q = NULL;
    aux = NULL;
}

int main() {
    // Variavel para armazenar
    // quantidade de criancas no caso de teste
    int quant_crianca = -1;

    // Faz a leitura enquanto a entrada da quantidade de criancas
    // for 1 elemento e bem sucedida e esse valor nao ser igual a 0
    while (scanf("%d", &quant_crianca) == 1 && quant_crianca != 0) {
        // Cria o primeiro elemento da lista
        Pessoa *Lista = NULL;

        // Percorre todas as criancas adicionando-as no
        // inicio da lista circular
        for (int i = 0; i < quant_crianca; i++) {
            // Variavel para armazenar o nome da crianca
            char nome[31];

            // Variavel para armazenar o numero na ficha dela
            int numero;

            // le o nome dela
            scanf("%s", nome);

            // le o numero dela
            scanf("%d", &numero);

            // Insere a crianca no inicio da lista
            insereComecoLista(&Lista, nome, numero);
        }

        // Faz a brincadeira em si com a lista
        // Remove os valores da memoria
        // e imprime o vencedor
        brincadeira(&Lista);

        // Printa um \n para corrigir a formatacao
        printf("\n");

        // Seta o ponteiro como null
        // (Ele ja foi limpo da memoria na funcao "brincadeira")
        Lista = NULL;
    }

    return 0;
}
