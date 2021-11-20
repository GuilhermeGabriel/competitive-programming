#include <stdio.h>

int main(){
    int i, n;
    double somatorio=0;

    printf("Insira o valor de n:\n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        somatorio+=1.0/i;
    }
    printf("O valor do somatorio e: %lf", somatorio);

    return 0;
}