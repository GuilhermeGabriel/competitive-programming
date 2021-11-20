#include <stdio.h>
#include <stdlib.h>

double quickSortCusto(int *v, int l, int r, double custo) {
    if (r > l) {
        int *vetor_de_menores = (int*) malloc((r+1) * sizeof(int));
        int *vetor_de_maiores = (int*) malloc((r+1) * sizeof(int));
       
        for (int iPivo = 0; iPivo <= r; iPivo++) {
            int indexVetoresDeMaiores = 0;
            int indexVetoresDeMenores = 0;

            for (int a = 0; a < iPivo; a++) {
                if (v[a] > v[iPivo]) {
                    custo++;
                    vetor_de_maiores[indexVetoresDeMaiores++] = v[a];
                } else if (v[a] < v[iPivo]) {
                    vetor_de_menores[indexVetoresDeMenores++] = v[a];
                }
            }

            for (int d = iPivo + 1; d <= r; d++) {
                if (v[d] < v[iPivo]) {
                    custo++;
                    vetor_de_menores[indexVetoresDeMenores++] = v[d];
                } else if (v[d] > v[iPivo]) {
                    vetor_de_maiores[indexVetoresDeMaiores++] = v[d];
                }
            }
            
            //printf("a\n");
            custo += quickSortCusto(vetor_de_maiores, 0, indexVetoresDeMaiores - 1, 0);
            custo += quickSortCusto(vetor_de_menores, 0, indexVetoresDeMenores - 1, 0);
        }
        free(vetor_de_maiores);
        free(vetor_de_menores); 
        //printf("%lf\n",custo);

        return custo / (r + 1);
    }
    return custo;
}

int main() {
    int quantN; scanf("%d", &quantN);
    int *sequencia = (int *)malloc(quantN * sizeof(int));

    for (int i = 0; i < quantN; i++) scanf("%d", &sequencia[i]);

    printf("%.10f\n", quickSortCusto(sequencia, 0, quantN - 1, 0));
    
    free(sequencia);

    return 0;
}
