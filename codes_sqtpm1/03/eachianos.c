// 11921ECP001
// GUILHERME GABRIEL FERREIRA SOUZA

// Blibioteca para uso de boleanos
#include <stdbool.h>

// Biblioteca para entrada e saida
#include <stdio.h>

// Blibioteca para uso de funcoes prontas que manipulam string
#include <string.h>

int main() {
    // Definicao de variaveis para armazenas entra e saida 
    char texto[10050], output[10050];
    int quantidade_palavras;
    char palavras_input[10000];

    // Leitura da entrada ate encontrar um \n
    scanf("%[^\n]", texto);

    // Leitura de quantidade palavras
    scanf("%d\n", &quantidade_palavras);
    
    // Leitura de palavras a serem buscadas
    scanf("%[^\n]", palavras_input);

    // Variavel para armazenar a palavra que mais ocorre
    char palavraMaisOcorre[200];

    // Reset no vetor que armazena a palavra que mais ocorre
    for(int d = 0; d< 200; d++) palavraMaisOcorre[d] = '\0';

    // Quantidade de vezes que a palavra que mais ocorre apareceu
    int quantOcorridaPalavraMaisOcorrida = 0;

    // Variavel para controle de foi encontrado ao menos uma palavra no texto
    bool aoMenosUmaPalavraEncontrada = false;

    // Primeiro while faz um loop pulando os espacos e separando as palavras
    int indexInput = 0;
    while (palavras_input[indexInput] != '\0') {
        if (palavras_input[indexInput] != ' ') {
            // Algoritmo para encontrar palavras no palavrasInput

            // Variaveis para controle 
            bool aoMenosUmaPosicaoPalavraAtualNoTexto = false;
            int quantVezesPalavraAtualOcorrida = 0;
            
            // Primeira posicao no da palavra
            int indexStartWord = indexInput;

            // Pula as posicoes da palavra até encontrar um espaco
            while (palavras_input[indexInput] != ' ' && palavras_input[indexInput] != '\0' && palavras_input[indexInput] != '\t') {
                indexInput++;
            }
            
            // Ultima posicao da palavra
            int indexFinishWord = indexInput;

            // Tamanho da palavra encontrada
            int tamP = indexFinishWord - indexStartWord;
            
            // Algoritmo que armazena a palavra em um vetor
            char palavraInput[tamP+1];
            
            // Reset na string
            for(int f = 0;f < tamP; f++){palavraInput[f]='\0';}
            
            for (int ip = 0; ip <= tamP + 1; ip++) {
                if (ip < tamP) {
                    palavraInput[ip] = palavras_input[indexStartWord + ip];
                } else {
                    palavraInput[ip] = '\0';
                }
            }

            //Adiciona a palavra encontra e ":" na saida
            strcat(output, palavraInput);
            strcat(output, ": ");

            // Algoritmo para encontrar palavras no texto
            int k = 0;
            while (texto[k] != '\0') {
                if (texto[k] != ' ') {
                    // Primeira posicao da palavra
                    int indexStartTexto = k;
                    
                    // Pula as posicoes da palavra até encontrar um espaco
                    while (texto[k] != ' ' && texto[k] != '\0' && texto[k] != '\t') {
                        k++;
                    }

                    // Ultima posicao da palavra
                    int indexFinishTexto = k;

                    // Tamanho da palavra
                    int tamPalavraTexto = indexFinishTexto - indexStartTexto;

                    // Algoritmo que armazena a palavra em um vetor
                    char palavraTexto[tamPalavraTexto+1];
                    
                    // Reset na string
                    for(int f = 0;f < tamPalavraTexto; f++){palavraTexto[f]='\0';}
                    
                    for (int l = 0; l <= tamPalavraTexto + 1; l++) {
                        if (l < tamPalavraTexto) {
                            palavraTexto[l] = texto[indexStartTexto + l];
                        } else {
                            palavraTexto[l] = '\0';
                        }
                    }

                    // Comeca a comparar as duas palavras encontradas
                    int valueCompare = strcmp(palavraInput, palavraTexto);

                    //Caso sejam iguais
                    if (valueCompare == 0) {

                        //Adiciona a virgula, somente se já tiver uma posicao encontrada
                        if (aoMenosUmaPosicaoPalavraAtualNoTexto) {
                            strcat(output, ", ");
                        }

                        //Algoritmo para transformar inteiro em string
                        char positionTexto[12];
                        sprintf(positionTexto, "%d", indexStartTexto);
                        strcat(output, positionTexto);

                        // Variaveis para controle
                        aoMenosUmaPosicaoPalavraAtualNoTexto = true;
                        aoMenosUmaPalavraEncontrada = true;
                        quantVezesPalavraAtualOcorrida++;
                    }
                }

                // Pula os espacos
                k++;
            }

            // Adiciona -1 na saida caso nao seja encontrado nenhuma posicao
            if (!aoMenosUmaPosicaoPalavraAtualNoTexto) {
                strcat(output, "-1");
            } else {
                // Algoritmo para armazenar a palavra mais ocorrida e caso 
                // aparecam o mesma quantidade de vezes, escolhe a de menor valor lexicografico
                if(quantVezesPalavraAtualOcorrida > quantOcorridaPalavraMaisOcorrida){
                    // Reset na na palavra mais ocorrida
                    for(int b=0; b < 200; b++){ palavraMaisOcorre[b]='\0'; }

                    // Algoritmo que copia palavra mais ocorrida
                    int tamPalavraInput = strlen(palavraInput);
                    for (int q = 0; q <= tamPalavraInput; q++) {
                        if (q < tamPalavraInput) {
                            palavraMaisOcorre[q] = palavras_input[indexStartWord + q];
                        } else {
                            palavraMaisOcorre[q] = '\0';
                        }
                    }

                    // Muda o valor da quantidade de vezes da palavra mais ocorrida
                    quantOcorridaPalavraMaisOcorrida = quantVezesPalavraAtualOcorrida;
               
                } else if(quantVezesPalavraAtualOcorrida == quantOcorridaPalavraMaisOcorrida){
                    // Caso seja menor que 0, a palavra atual é menor lexicograficamente
                    int valueLexico = strcmp(palavraInput, palavraMaisOcorre);
                    
                    if (valueLexico < 0) {
                        // Reset na na palavra mais ocorrida
                        for(int b=0; b < 200; b++){ palavraMaisOcorre[b]='\0'; }
                        
                        // Algoritmo que muda copia a palavra mais ocorrida
                        int tamPalavraInput = strlen(palavraInput);
                        for (int q = 0; q <= tamPalavraInput; q++) {
                            if (q < tamPalavraInput) {
                                palavraMaisOcorre[q] = palavras_input[indexStartWord + q];
                            } else {
                                palavraMaisOcorre[q] = '\0';
                            }
                        }

                        // Muda o valor da quantidade de vezes da palavra mais ocorrida
                        quantOcorridaPalavraMaisOcorrida = quantVezesPalavraAtualOcorrida;
                    }
                }
            }

            // Adiciona uma \n apos ler cada palavra
            strcat(output, "\n");
        }

        // Pula os espacos em branco
        indexInput++;
    }

    // Caso tenha encontrado uma palavra, adicione ela no output
    // Caso contrario, adicione "Booom!"
    if (aoMenosUmaPalavraEncontrada) {
        strcat(output, palavraMaisOcorre);
        strcat(output, "\n");
    } else {
        strcat(output, "Booom!");
        strcat(output, "\n");
    }

    // Mostra na saída
    printf("%s", output);

    return 0;
}