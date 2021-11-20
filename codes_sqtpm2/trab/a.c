#include <stdio.h>
#include <stdlib.h>

int calcula_custo_individual (int *v, int r, int p);

double quick_custo (int *v, int l, int r){
    int k;
    double custototal=0;
    int vetormaior[r+1],vetormenor[r+1];

    if(r<=l)return 0;
    for(k=0;k<=r;k++){
      // [4 7 9 6 0]
      // [4 0] [7 9]
      int indicemaiores=0,indicemenores=0;
      double custo_individual=0;
      int i;

      for (i=0;i<k;i++){
        if (v[i]>v[k]){
          custo_individual++;
          vetormaior[indicemaiores]=v[i];
          indicemaiores++;
        }else{
          vetormenor[indicemenores]=v[i];
          indicemenores++;
        }
      }

      for (i=k+1;i<=r;i++){
        if (v[i]<v[k]){
          custo_individual++;
          vetormenor[indicemenores]=v[i];
          indicemenores++;
        }else{
          vetormaior[indicemaiores]=v[i];
          indicemaiores++;
        }
      }
      
      if(r==1){
        custo_individual=0.5;
      }

      custototal += 
      custo_individual
      +
      quick_custo(vetormenor,0,indicemenores-1)
      +
      quick_custo(vetormaior,0,indicemaiores-1);
    }

    //return custototal/(r+1);
    return custototal/(r+1);
}

int main(){

    int n;
    scanf("%d",&n);

    int *vetor;
    vetor = (int*) malloc(n*sizeof(int));

    int i;
    for(i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }

    printf("%.10lf\n",quick_custo(vetor,0,n-1));

/*
    int j;
    for(j=0;j<n;j++){
        printf("%d ",vetor[j]);
    }
*/
    //printf("%d",calcula_custo_individual (vetor,n,0));


return 0;
}

void troca (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int *v, int l, int r) {
    int i, pivo = v[l], pos = r + 1;
    for (i = r; i >= l; i--) {
        if (v[i] >= pivo) {
            pos--;
            troca(&v[i], &v[pos]);
        }
    }
return pos;
}


int pivo_aleatorio(int l, int r) {
    return l + (int)((r-l+1)*(rand() / ((double)RAND_MAX + 1)));
}


void quicksort_ale(int *v, int l, int r) {
    int i;
    if(r <= l) return;
    troca(&v[pivo_aleatorio(l,r)], &v[l]);
    i = partition(v, l, r);
    quicksort_ale(v, l, i-1);
    quicksort_ale(v, i+1, r);
}

int calcula_custo_individual (int *v, int n, int p){
    int custo_individual = 0;
    int j;
    for (j=0;j<n;j++){
        if ((v[j]>v[p] && j<p) || (v[j]<v[p] && j>p)){
            custo_individual++;
        }
    }
return custo_individual;
}

//[3 2 1] => 2
// 3 -> [2 1][/] => 2

//[3 2 1] => 2
// 2 -> [1] [3] -> 0

// [3 2 1] => 2
// 1 -> [/] [3 2] => 2

// 8/3 = 2.667
