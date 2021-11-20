#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int lab[MAX][MAX];
int visitados[MAX][MAX];

int valor_random(int min, int max)
{
    return (rand() % (max + 1 - min)) + min;
}

void ler_lab(int mat[][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Digite o valor lab[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    mostrar_labirinto(n);
}


void mostrar_labirinto(int n)
{
    printf("Labirinto:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            printf("%2d",lab[i][j]);
        }
        printf("\n");
    }
}

void gerar_labirinto(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
            {
                lab[i][j] = 0;
            }
            else
            {
                if(valor_random(0,100)>35)lab[i][j] = 1;
                else lab[i][j] = 0;

            }
        }
    }

    mostrar_labirinto(n);
}

int buscar_caminho(int maze[][MAX], int visitados[][MAX],int x_atual, int y_atual, int x_objetivo, int y_objetivo,int n)
{
    if( x_atual == x_objetivo && y_atual == y_objetivo ) return 1;

    if( x_atual < 0 || x_atual >= n ) return 0;
    if( y_atual < 0 || y_atual >= n ) return 0;

    if( visitados[x_atual][y_atual] == 1 ) return 0;
    if( maze[x_atual][y_atual] == 0 ) return 0;

    visitados[x_atual][y_atual] = 1;

    int numberofWays = 0;
    numberofWays += buscar_caminho(maze, visitados, x_atual-1, y_atual, x_objetivo, y_objetivo, n);
    numberofWays += buscar_caminho(maze, visitados, x_atual+1, y_atual, x_objetivo, y_objetivo,n );
    numberofWays += buscar_caminho(maze, visitados, x_atual, y_atual-1, x_objetivo, y_objetivo,n);
    numberofWays += buscar_caminho(maze, visitados, x_atual, y_atual+1, x_objetivo, y_objetivo,n);

    visitados[x_atual][y_atual] = 0;

    return numberofWays;
}

void mostrar_menu(int n)
{
    int ex,ey,sx,sy;
    printf("Qual a linha de entrada do labirinto?");
    printf("(1-%d)\n",n);
    printf("Linha: ");
    scanf("%d",&ex);

    printf("Qual a linha da saida do labirinto?");
    printf("(1-%d)\n",n);
    printf("Linha: ");
    scanf("%d",&sx);

    lab[ex-1][0]=1;
    lab[sx-1][n-1]=1;
    mostrar_labirinto(n);

    int numero_possibilidades=buscar_caminho(lab,visitados,ex-1,0,sx-1,n-1,n);
    printf("%d",numero_possibilidades);
}

int main()
{
    srand(time(NULL));
    int n,option;


    printf("Digite o tamanho do lado do labirinto:\n");
    scanf("%d",&n);

    printf("De que forma voce quer que o labirinto seja criado?\n");
    printf("1-Manualmente | 2-Automaticamente\n");
    scanf("%d",&option);

    if(option==1)
    {
        ler_lab(lab,n,n);
        mostrar_menu(n);
    }
    else if(option==2)
    {
        gerar_labirinto(n);
        mostrar_menu(n);
    }

    return 0;
}
