#include <stdio.h>
#include <stdlib.h>

int main(){
    int Ryu, Ken, golpe, golpesryu = 0, golpesken = 0;
    scanf("%i%", &Ryu);
    scanf("%i", &Ken);

    while(Ryu > 0 && Ken > 0 ){
        scanf("%i", &golpe);

        if(golpe > 0){
            Ken = Ken - golpe;
            if(Ken < 0) Ken = 0;
            golpesryu++;
            printf("RYU APLICOU UM GOLPE: %i\n", golpe);
            printf("HP RYU = %i\n", Ryu);
            printf("HP KEN = %i\n", Ken);
        }

        if(golpe < 0){
            Ryu = Ryu - -golpe;
            golpesken++;
            if(Ryu < 0) Ryu = 0;
            printf("KEN APLICOU UM GOLPE: %i\n", -golpe);
            printf("HP RYU = %i\n", Ryu);
            printf("HP KEN = %i\n", Ken);
        }
    }

    if(Ryu > 0){
        printf("LUTADOR VENCEDOR: RYU\n");
        printf("GOLPES RYU = %i\n", golpesryu);
        printf("GOLPES KEN = %i\n", golpesken);
    }
    
    if(Ken > 0){
        printf("LUTADOR VENCEDOR: KEN");
        printf("GOLPES RYU = %i\n", golpesryu);
        printf("GOLPES KEN = %i\n", golpesken);
    }

    return 0;
}