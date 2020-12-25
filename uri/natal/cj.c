#include <stdio.h>
#include <string.h>

int main()
{
    char E[50], G[50];
    int H, bon=0, arq=0, mus=0, des=0, N, i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
    scanf(" %s",E); scanf(" %s",G); scanf("%d",&H);
    if(strcmp(G,"arquitetos") == 0)arq+=H;
    if(strcmp(G,"bonecos") == 0)bon+=H;
    if(strcmp(G,"musicos") == 0)mus+=H;
    if(strcmp(G,"desenhistas") == 0)des+=H;
    }
    int brinquedos;
    brinquedos = (bon/8)+(arq/4)+(mus/6)+(des/12);
    printf("%d\n",brinquedos);
}