//Gabriel Oliveira Nogueira
//12011EAU011

#include <stdio.h>
#include <string.h>

int foicontado(char buscados[1025][1025], char bloco[1025]){
  for(int m=0;m<1025;m++){
    if(strcmp(buscados[m],bloco)==0)return 1;
  }
  return 0;
}

int main(){

    char T[1025];//cadeia de caracteres
    int K;//numero
    //lê valores
    scanf("%s", T);
    scanf("%d", &K);

    int i=0, j=0, x=0, count=0, max=0, aux=0, l=0, c=0, teste=0,idb=0;
    char bloco[1025];
    char frequentes[1025][1025], buscados[1025][1025];
    //Laço para montar o bloco a ser analisado
    for(i=0; i<((strlen(T))-K); i++){//para cada caracter da cadeia
        aux=0;count=0;
        while(aux<K){//Enquanto aux for menor que K
            bloco[aux] = T[i+aux];//monta o bloco caracter por caracter
            aux++;
        }
        
        if(foicontado(buscados,bloco)==1){
          continue;
        }

        strcpy(buscados[idb],bloco);
        idb++;

        //Laço para buscar o bloco e contar as ocorrencias
        for(j=0; j <= ((strlen(T)-1)-K-1); j++){
            x=0;
            //count=0;//???count=0???
            while(x<=K){
                if(bloco[x] != T[x+j])break;//se o caracter analisado do bloco for diferente do analisado na cadeia de caracteres, para.
                x++;//Senão (se for igual), adiciona 1 ao valor de caracteres coincidentes
            }

            
            if(x==(K)){//se o numero de caracteres coincidentes for igual ao numero buscado
                //o bloco foi encontrado
                count++;//adiciona 1 ao valor de ocorrencias
            }
        }

        printf("%s %d\n", bloco, count);

        
           /* if(count>max){
                l=0;
                for(int w=0; w<1025; w++){//zera a matriz
                    frequentes[w][0]='\0';
                }
                max=count;//altera o valor maximo
                for(c=0; c<K; c++){
                    frequentes[l][c]=bloco[c];//adiciona o bloco na matriz de frequentes
                }
                l++;//adiciona 1 ao valor de l
            }else if(count==max){//se o numero de caracteres coincidentes for igual ao maximo
                //analisar se o bloco atual ja esta na matriz
                for(int w=0; w<1025;w++){//para cada linha da matriz frequentes
                    while(frequentes[w][0]!='\0'){//analisa enquanto o primeiro caracter da linha nao for \0
                        for(int z=0; z<K; z++){
                            if(frequentes[w][z]==bloco[z]){//se o caracter da matriz frequentes for igual ao caracter do bloco
                                teste++;
                                if(teste==K){//se o numero de caracteres coincidentes for igual a K
                                    break;//para, pois o bloco repete
                                }else{//caso contrario, se o bloco não for repetido
                                    for(c=0; c<K; c++){
                                        frequentes[l][c]=bloco[c];//adiciona o bloco na matriz de frequentes
                                    }
                                    l++;//adiciona 1 ao valor de l
                                }
                            }
                        }
                    }
                }
            }*/
    }

    for(int i=0;i<l;i++){
      printf("%s ",frequentes[i]);
    }
    printf("\n");

    return 0;
}

/*
//Gabriel Oliveira Nogueira
//12011EAU011

#include <stdio.h>
#include <string.h>

//Função para imprimir a saída
int prt(int l, char pioresdesculpas[][101],char desculpas[][101],int maior,int E){

     printf("Conjunto de desculpas:\n");
     int i;
     for(int i=0;i<l;i++){
      printf("%s\n", &pioresdesculpas[i][0]);//Imprime as frases consideradas as piores desculpas
     }
     if(maior==0){//Se nenhuma palavra for enccontrada em nenhuma frase
        for(i=0; i<E; i++){
            printf("%s\n", &desculpas[i][0]);//Imprime todas as frases
       }
     }
  printf("\n");


  return 0;
}

//Função para deixar todas as letras minúsculas
int converte(char desculpas[][101],char desculpasEmMinusculas[][101], int E ){

   int i,j;
   for(j=0; j<E; j++){
    for(i=0; i<=strlen(desculpas[j]); i++){
      if(desculpas[j][i] >= 'A' && desculpas[j][i] <= 'Z'){//Se a letra for maiúscula
        desculpasEmMinusculas[j][i] = desculpas[j][i] + 32;//faz com que ela fique minùscula
      }else{//Se for minúscula
        desculpasEmMinusculas[j][i] = desculpas[j][i];//permanece minúscula
      }
    }
  }

  return 0;
}



int main(void) {

  int K, E; //K é o número de palavras-chave e E o número de desculpas
  scanf("%d %d", &K, &E);
  char palavrasChave [K][101];//Matriz com as palavras-chave
  int aux;//Auxilia no preenchimento da matriz
  //Laço para preencher a mattriz de palavras-chave
  for(aux=0; aux<K; aux++){
    scanf("%s",palavrasChave[aux]);
  }

  char desculpas[E][101];//Matriz com as desculpas

  //Laço para preencher a matriz de desculpas
  for(aux=0; aux<E; aux++){
    scanf(" %[^\n]", desculpas[aux]);
  }

  char desculpasEmMinusculas[E][101];//Matiriz para deixar as letras das desculpas minusculas
  int i, j;

  converte(desculpas,desculpasEmMinusculas,E);//Chama a funçao que deixa todas as letras minúsculas

  int tamP, tamF, l=0, m, palavrasPorFrase[101], maior=0;
  //O vetor palavrasPorFrase irá armazenar o número de palavras-chave em cada frase
  //A variável maior auxilia no processo de detectar qual frase tem maior número de palavras-chave
  char pioresdesculpas[20][101];//Matriz com as piores desculpas

  for(i=0; i<E; i++){//Para cada frase
    palavrasPorFrase[i]=0;//Número de palavras por frase é 0 inicialmente
  }

  //Comparação das palavras
  for(j=0;j<K;j++){//para cada palavra
    tamP = strlen(palavrasChave[j])-1;//Tamanho do palavra-chave

    for(i=0;i<E;i++){//para cada frase
      tamF = strlen(desculpasEmMinusculas[i])-1;//Tamanho da frase

      for(int c=0;c<=tamF-tamP;c++){//Análise dde caracteres
        int count=0;//Número de caracteres iguais em sequência

        while(count<tamP){//enquanto o numero de caracteres iguais em sequencia for menor que o tamanho da palavra
          if(palavrasChave[j][count]!=desculpasEmMinusculas[i][c+count]){//se o caracter da palavra for diferente do caracter da fase
            break;//para a analise
          }
          count++;//adiciona 1 ao valor de count
        }


        if(count==tamP && (desculpasEmMinusculas[i][c+count+1]=='!' || desculpasEmMinusculas[i][c+count+1]==' ' || desculpasEmMinusculas[i][c+count+1]=='?' || desculpasEmMinusculas[i][c+count+1]=='.' || desculpasEmMinusculas[i][c+count+1]==',' || desculpasEmMinusculas[i][c+count+1]=='"' || desculpasEmMinusculas[i][c+count+1]=='\n' || (desculpasEmMinusculas[i][c+count+1] >= 'A' && desculpasEmMinusculas[i][c+count+1] <= 'Z') || (desculpasEmMinusculas[i][c+count+1] >= 'a' && desculpasEmMinusculas[i][c+count+1] <= 'z')) ){//se o número de caracteres iguais em sequencia for igual ao tamanho da palavra e o proximo caracter da palavra for um sinal de pontuação ou espaço ou \n ou uma letra

          palavrasPorFrase[i]=palavrasPorFrase[i]+1;//adiciona 1 ao valor de palavras-chave encontradas na frase
          if(palavrasPorFrase[i] > maior){//Se o número de palavras-chave encontradas for maior que o número anterior
            //Laço que esvazia a matriz de piores desculpas
            for( m=0;m<20;m++){
              pioresdesculpas[m][0]='\0';
            }
            l=0;//Zera o valor de l
            strcpy(pioresdesculpas[l],desculpas[i]);//copia a frase que está em desculpas[i] em pioresdesculpas[l]
            l++;//adiciona 1 ao valor de l
            maior=palavrasPorFrase[i];//a variável maior passa a ter o mesmo valor de palavrasPorFrase[i]
          }else if(palavrasPorFrase[i]==maior){//Se o número de palavras-chave encontradas for igual ao número anterior
          //Dessa forma, se houver empate, as frases com maiores números serão consideradas
            strcpy(pioresdesculpas[l],desculpas[i]);//copia a frase que está em desculpas[i] em pioresdesculpas[l]
            l++;//adiciona 1 ao valor de l
          }
        }
      }

    }
  }

  prt(l,pioresdesculpas,desculpas,maior,E);//Chama a função para imprimir

  return 0;
}
*/