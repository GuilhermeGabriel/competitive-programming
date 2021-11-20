#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int repeat=0;
    float maiordist=-99999999,menordist=99999999,distatual;
    float x1,x2,y1,y2;
    float maiorx,menorx,maiory,menory;

    printf("Insira as coordenadas de P: (x,y):\n");
    scanf("%f %f", &x1, &y1);

    do{
        printf("Insira outro ponto:\n");
        scanf("%f %f", &x2,&y2);

        printf("Quer inserir outro ponto: 1-Sim 2-Nao?\n");
        scanf("%d", &repeat);

        distatual = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        if(distatual>maiordist){
            maiordist=distatual;
            maiorx=x2;
            maiory=y2;
        }

        if(distatual<menordist){
            menordist=distatual;
            menorx=x2;
            menory=y2;            
        }
    } while(repeat==1);

    printf("Maior distancia:%f\n",maiordist);
    printf("X:%f Y:%f\n\n",maiorx,maiory);
    
    printf("Menor distancia:%f\n",menordist);
    printf("X:%f Y:%f\n",menorx,menory);

    return 0;
}