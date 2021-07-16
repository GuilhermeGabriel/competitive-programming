//Método por Programação Dinâmica
#include <stdio.h>
#include <stdlib.h>


int min(int x, int y){
    if(x > y) return y;
    else return x;
}

int calcula(int M, int N, int *list) {
    int *pd;
    int i, j;
    
    pd = (int*) malloc(sizeof(int)*(M+1));
    
    pd[0] = 0;

    for(i = 1; i <= M; i++) {
        
        pd[i] = 99999999;

        for(j = 0; j < N; j++) {
            if(i - list[j] >= 0) {
                pd[i] = min(pd[i], pd[i - list[j]] + 1);
            }
        }
    }
    free(pd);

    return pd[M];
}

int main(int argc, char** argv) {

    int T, N, M, tamanho, i, j;
    int *tamanhoList, *resul;   
    
    scanf("%d", &T);
    resul = (int*) malloc(sizeof(int)*T);
        
    for(i = 0; i < T; i++){
        j = 0; 
        
        
        scanf("%d", &N);
        scanf("%d", &M);
           
        tamanhoList = (int*) malloc(sizeof(int)*(N+1));
        
        
        for(j = 0; j < N; j++){
            scanf("%d", &tamanho);
            tamanhoList[j] = tamanho; 
        }
               
        resul[i] = calcula(M, N, tamanhoList);
        free(tamanhoList);
        
    }
    for(i = 0; i < T; i++){
        printf("%d\n", resul[i]);
    }
       
    
    return 0;
}