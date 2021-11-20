#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int *dados, int l, int r, int par){
  int m=(l+r)/2;
  if(l>r)return -1;
  if (dados[m] == par){
    return par; // finalizzar aqui ...
  }
  else if(dados[m]<par){
    return buscaBinaria(dados,m+1,r,par);
  }
  else{
    return buscaBinaria(dados,l,m-1,par);
  }

  //return -2; // colocado agora 
}

int acharPar(int *dados, int l, int r, int K,int N){
  int valor;
  int achou;
  int i;
  for (i=0;i<N;i++){
      valor=K-dados[i];
      achou=buscaBinaria(dados,l,r,valor);
      if(achou>0){
        printf("%i %i\n",dados[i],achou);
        break;
      }
  }
  return 0;
}

//valgrind
//https://www.ic.unicamp.br/~rafael/cursos/2s2018/mc202/valgrind.html


int main()
{
  int N;
  scanf("%i",&N);
  int *M;
  M= (int*) malloc(N*sizeof(int));
  for (int i=0;i<N;i++){
  scanf("%i",&M[i]);
  }
  int K;
  scanf("%i",&K);
  acharPar(M, 0, N-1, K, N);
  free(M);
  return 0;
}

