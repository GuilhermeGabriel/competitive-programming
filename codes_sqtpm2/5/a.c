#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *assassino;
    char *assassinado;
} t_relacao;

typedef struct{
    char *assassino;
    int numero;
} t_quantidade;

void entrada();
void processo(t_relacao *n, int a);
void impressao(t_quantidade *q, int quantidade);

int main (){
    entrada();
    return 0;
}

void entrada(){
    int j = 0, a = 0;

    scanf("%d", &a);

    t_relacao *n = (t_relacao*) malloc(a*sizeof(t_relacao));
    for(j = 0; j < a; j++){
        n[j].assassino = (char*) malloc(11*sizeof(char));
        strcpy(n[j].assassino, "NULL");
        n[j].assassinado = (char*) malloc(11*sizeof(char));
        strcpy(n[j].assassinado, "NULL");
    }
    for(j = 0; j < a; j++){
        scanf("%s %s", n[j].assassino, n[j].assassinado);
    }

    processo(n, a);
}

void processo(t_relacao *n, int a){

    int ocorA = 0, j = 0, ocor = 0, quantidade = 0, morte = 0, x = 0;

    t_quantidade *q = (t_quantidade*) malloc(a*sizeof(t_quantidade));
    t_quantidade *aux = (t_quantidade*) malloc(1*sizeof(t_quantidade));

    for(j = 0; j < a; j++){
        q[j].assassino = (char*) malloc(11*sizeof(char));
        strcpy(q[j].assassino, "NULL");
        q[j].numero = 0;
    }

    for(j = 0; j < a; j++){
        if(j - 1 >= 0){
            for(x = j - 1; x >= 0; x--){
                if(strcmp(n[j].assassino, n[x].assassino) == 0){
                    ocorA = 1;
                    break;
                }
                ocorA = 0;
            }
        }
        for(x = 0; x < a; x++){
            if(strcmp(n[j].assassino, n[x].assassinado) == 0){
                morte = 1;
                break;
            }
            morte = 0;
        }
        if(ocorA == 0){
            for(x = j; x < a; x++){
                if(strcmp(n[j].assassino, n[x].assassino) == 0){
                    ocor++;
                }
            }

            if(morte == 0){
                    strcpy(q[quantidade].assassino, n[j].assassino);
                    q[quantidade].numero = ocor;

                if(quantidade > 0){
                    if(q[quantidade].numero > q[quantidade-1].numero){
                        *aux = q[quantidade-1];
                        q[quantidade-1] = q[quantidade];
                        q[quantidade] = *aux;
                    }
                }
                quantidade++;
            }
        }
        ocor = 0;
    }

    //1 4 3 2

    for(x = 0; x < quantidade; x++){
        for(j = x + 1; j < quantidade; j++){
            if (q[x].numero < q[j].numero){
                *aux = q[x];
                q[x] = q[j];
                q[j] = *aux;
            } 
        }
    }
    impressao(q, quantidade);
    for(j = 0; j < a; j++){
        free(n[j].assassino);
        free(n[j].assassinado);
    }
    free(n);

    for(j = 0; j < a; j++){
        free(q[j].assassino);
    }
    free(q);

    free(aux);
}

void impressao(t_quantidade *q, int quantidade){
    printf("HALL OF MURDERERS\n");
    int j = 0;
    for(j = 0; j < quantidade; j++){
        printf("%s %d\n", q[j].assassino, q[j].numero);
    }
}

/*
3
a b
b a
c d
*/
