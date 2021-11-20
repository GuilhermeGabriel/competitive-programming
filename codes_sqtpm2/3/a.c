#include <stdio.h>
#include <string.h>

void saida();
void impressao();

int main(){
    saida();
    return 0;
}

void saida(){
    int np = 0, nd = 0;
    char c;

    scanf ("%d %d", &np, &nd);
    scanf ("%c", &c);
    char marcador[] = "+";
    char palavras[19][101];
    char desculpas[99][101];
    int ocorrencia = 0;
    int tamP = 0;
    int winner[4];
    int VtamP[100];
    int tamD = 0;
    int VtamD[100];
    int maiorO = 0;
    int nsaida = nd*101;
    char palavra[101];
    char desculpa[101];
    char saida[nsaida];
    int i = 0, j = 0;

    for(i = 0; i < np; i++){
        fgets(palavra, 101, stdin);
        tamP = strlen(palavra);
        for(j = 0; j < tamP; j++){
            palavras[i][j] = palavra[j];
            VtamP[i] = tamP;
        }
    }

    for(i = 0; i < nd; i++){
        fgets(desculpa, 101, stdin);
        tamD = strlen(desculpa);
        for(j = 0; j < tamD; j++){
            desculpas[i][j] = desculpa[j];
            VtamD[i] = tamD;
        }
    }
    int letraD = 0, letraP = 0, TP = 0;
    for (i = 0; i < nd; i++){
        tamD = VtamD[i] - 1;
        for(letraD = 0; letraD < tamD; letraD++){
            for (j = 0; j < np; j++){
                tamP = VtamP[j] - 1;
                for(letraP = 0; letraP < tamP; letraP++){
                    if(letraD + letraP <= tamD){
                            if(palavras[j][letraP] == desculpas[i][letraD+letraP] || palavras[j][letraP] == desculpas[i][letraD+letraP] + 32){
                                TP++;
                            }
                        if(TP == tamP){;
                            ocorrencia++;
                            TP = 0;
                        }
                    }
                }
                TP=0;
            }
        }

        if(ocorrencia == maiorO){
            for(j = 0; j < tamD; j++){
                desculpa[j] = desculpas[i][j];
            }
            strcat(saida, marcador);
            strcat(saida, desculpa);
        }

        if(ocorrencia > maiorO){
            maiorO = ocorrencia;
            for(j = 0; j < tamD; j++){
                desculpa[j] = desculpas[i][j];
            }
            int k = 0;
            for(k=j;desculpa[k]!='\0';k++){
              desculpa[k]='\0';
            }
            strcpy(saida, desculpa);
        }


        ocorrencia = 0;
    }

    impressao();
    int h = 0;
    for(h = 0; h < strlen(saida); h++){
        if(saida[h] == '+'){
            printf("\n");
            h++;
        }
        printf("%c", saida[h]);
    }
    printf("\n");
}
void impressao(){
    printf("Conjunto de desculpas:\n");
}