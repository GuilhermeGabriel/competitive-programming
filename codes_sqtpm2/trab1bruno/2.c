#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int valor_random(int min, int max)
{
    return (rand() % (max + 1 - min)) + min;
}

void merge(int *A,int *L,int leftCount,int *R,int rightCount)
{
    int i,j,k;
    i = 0;
    j = 0;
    k =0;

    while(i<leftCount && j< rightCount)
    {
        if(L[i]  < R[j]) A[k++] = L[i++];
        else A[k++] = R[j++];
    }
    while(i < leftCount) A[k++] = L[i++];
    while(j < rightCount) A[k++] = R[j++];
}

void merge_sort(int *A,int n)
{
    int mid,i, *L, *R;
    if(n < 2) return;
    mid = n/2;

    L = (int*)malloc(mid*sizeof(int));
    R = (int*)malloc((n- mid)*sizeof(int));

    for(i = 0; i<mid; i++) L[i] = A[i];
    for(i = mid; i<n; i++) R[i-mid] = A[i];

    merge_sort(L,mid);
    merge_sort(R,n-mid);
    merge(A,L,mid,R,n-mid);
    free(L);
    free(R);
}

double fazer_1000_buscas_linear_retorna_tempo_medio(int *vet)
{
    int valor_a_buscar;
    clock_t begin,end;
    double total_time=0,time_spent;

    for(int i=0; i<1000; i++)
    {
        valor_a_buscar=valor_random(0,8000);
        begin = clock();
        for(int i=0; i<8192; i++)
        {
            if(vet[i]==valor_a_buscar)break;
        }
        end=clock();
        time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
        total_time+=end-begin;
    }
    return total_time/1000.0;
}

int busca_binaria(int *vec, int l, int r, int x)
{
    int m=(l+r)/2;
    if(l>r)return -1;
    if(vec[m]==x)return m;
    else if(vec[m]<x)return busca_binaria(vec,m+1,r,x);
    else return busca_binaria(vec,l,m-1,x);
}

double fazer_1000_buscas_binarias_retorna_tempo_medio(int *vet)
{
    int valor_a_buscar;
    clock_t begin,end;
    double total_time=0,time_spent;

    for(int i=0; i<1000; i++)
    {
        valor_a_buscar=valor_random(0,8000);
        begin = clock();

        busca_binaria(vet,0,8191,valor_a_buscar);

        end=clock();
        time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
        total_time+=end-begin;
    }
    return total_time/1000.0;
}

int main()
{
    int vet[8192];
    for(int i=0; i<8192; i++)vet[i]=valor_random(0,8000);
    merge_sort(vet,8192);

    double tempo_buscas_linear,tempo_busca_binaria;

    tempo_buscas_linear=fazer_1000_buscas_linear_retorna_tempo_medio(vet);
    tempo_busca_binaria=fazer_1000_buscas_binarias_retorna_tempo_medio(vet);

    printf("%Tempo medio de 1000 buscas lineares: %lf segundos\n",tempo_buscas_linear);
    printf("%Tempo medio de 1000 buscas binarias: %lf segundos",tempo_busca_binaria);

    return 0;
}
