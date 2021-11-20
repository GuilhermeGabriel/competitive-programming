#include <stdio.h>

#define MAX 100

void ler_matriz(int mat[][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Digite mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void mostrar_matriz(int mat[][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void multiplica_matrizes(int matriz1[][MAX], int matriz2[][MAX], int matriz3[][MAX], int linhasM1, int colunasM2)
{
    int somaprod;
    for(int linha=0; linha<linhasM1; linha++)
    {
        for(int coluna=0; coluna<colunasM2; coluna++)
        {
            somaprod=0;
            for(int i=0; i<linhasM1; i++) somaprod+=matriz1[linha][i]*matriz2[i][coluna];
            matriz3[linha][coluna]=somaprod;
        }
    }
}

int main()
{
    int linhasM1,colunasM1;
    int linhasM2,colunasM2;
    int matriz1[MAX][MAX];
    int matriz2[MAX][MAX];
    int matriz3[MAX][MAX];

    printf("Bem-vindo ao Multiplicador de Matrizes\n");
    printf("Quantas linhas possui a matriz 1?\n");
    scanf("%d",&linhasM1);
    printf("Quantas colunas possui a matriz 1?\n");
    scanf("%d",&colunasM1);
    printf("Quantas linhas possui a matriz 2?\n");
    scanf("%d",&linhasM2);
    printf("Quantas colunas possui a matriz 2?\n");
    scanf("%d",&colunasM2);

    if(colunasM1==linhasM2)
    {
        printf("Leitura da matriz 1:\n");
        ler_matriz(matriz1,linhasM1,colunasM1);

        printf("Leitura da matriz 2:\n");
        ler_matriz(matriz2,linhasM2,colunasM2);

        multiplica_matrizes(matriz1,matriz2,matriz3,linhasM1,colunasM2);

        printf("Matriz 1:\n");
        mostrar_matriz(matriz1,linhasM1,colunasM1);
        printf("Matriz 2:\n");
        mostrar_matriz(matriz2,linhasM2,colunasM2);
        printf("Matriz Resultado:\n");
        mostrar_matriz(matriz3,linhasM1,colunasM2);
    }
    else
    {
        printf("Nao eh possivel se multiplicar essas matrizes!\n");
        printf("Quantidade de colunas da matriz 1\n");
        printf("deve ser igual a quantidade de linhas da matriz 2");
    }


    return 0;
}
