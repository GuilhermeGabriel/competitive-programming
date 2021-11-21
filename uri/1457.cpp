#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int kfat(long long int num, int k, int i);

int main() {
    int quatidade_instancias = 0;

    scanf("%d", &quatidade_instancias);

    for (int i = 0; i < quatidade_instancias; i++) {
        char instacia_str[23], numberInstanciaStr[23];
        
        scanf("%s", instacia_str);

        int v = 0, k = 0;

        while (instacia_str[v] != '\0') {

            if (instacia_str[v] == '!') {
                k++;
            } else {
                char caracterActual[2] = {instacia_str[v], '\0'};
                strcat(numberInstanciaStr, caracterActual);
            }

            v++;
        }

        int number = atoi(numberInstanciaStr);

        printf("%lld\n", kfat(number, k, 0));

       for (int r = 0; r < 23; r++) {
            numberInstanciaStr[r] = '\0';
            instacia_str[r] = '\0';
        };
    }

    return 0;
}

long long int kfat(long long int num, int k, int i){
    if (num - (i * k) >= 1) {
        long long int rAtual = num - (i * k);
        i++;
        return rAtual * kfat(num, k, i);
    } else {
        return 1;
    }
}