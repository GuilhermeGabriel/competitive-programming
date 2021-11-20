// TRABALHO 09 - PROGRAMACAO PROCEDIMENTAL
// Bruna Isabela de Oliveira
// 12011ECP004


// Incluindo as bibliotecas necessarias
#include <stdio.h>
#include <stdlib.h>

// Funcao auxiliar
double calcula_custo(int *v, int fim, int tam);

/* Funcao principal do programa */
int main(){
 
    int n;
    scanf("%d", &n);

    int *A = NULL;
    A = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    double custo_final = 0;
    custo_final = calcula_custo(A, 0, n-1);

    printf("%.10lf\n", custo_final);
    free(A);
}


/* Recebe um par de numeros inteiros p e r, com p <= r e um ponteiro
 para vetor de numeros inteiros.
 A funcao rearranja os elementos e devolve o pivo do quick-sort */
double calcula_custo(int *v, int inicio, int fim){
    //if ((tam) < 2) return 0;
    if(fim<=inicio)return 0.0;    

    int *menores = (int*) malloc((fim+1) * sizeof(int));
    int *maiores = (int*) malloc((fim+1) * sizeof(int));

    double custototal = 0, custoatual=0;
    int cont1=0, cont2=0;

    for (int i = 0; i <= fim; i++){
        for(int j = 0; j < i; j++){
          if(v[j]>v[i]){
            custoatual++;
            maiores[cont1] = v[j];
            cont1++;
          }else{
            menores[cont2] = v[j];
            cont2++;
          }
        }

        for(int j=i + 1; j <= fim; j++){
          if(v[j]<v[i]){
                custoatual++;
                menores[cont2] = v[j];
                cont2++;
          }else{
              maiores[cont1] = v[j];
              cont1++;
          }
        }
           
        custototal += custoatual
        +
        calcula_custo(menores, 0, cont2-1)
        +
        calcula_custo(maiores, 0, cont1-1);
    }

    free(menores);
    free(maiores);
    return custototal;
}