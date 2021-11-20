#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int lab[MAX][MAX];

int valor_random(int min, int max)
{
    return (rand() % (max + 1 - min)) + min;
}

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int directions[4]= {1,2,3,4};
void generateRandomDirections()
{
    for (int i = 0; i < 4; i++)
    {
        int j = rand() % (i + 1);
        swap(&directions[i], &directions[j]);
    }
}

void recursion(int r, int c, int width, int height)
{
    // Examine each direction
    for (int i = 0; i < 4; i++)
    {

        switch(directions[i])
        {
        case 1: // Up
            //　Whether 2 cells up is out or not
            if (r - 2 <= 0)
                continue;
            if (lab[r - 2][c] != 0)
            {
                lab[r-2][c] = 0;
                lab[r-1][c] = 0;
                recursion(r - 2, c, width, height);
            }
            break;
        case 2: // Right
            // Whether 2 cells to the right is out or not
            if (c + 2 >= width - 1)
                continue;
            if (lab[r][c + 2] != 0)
            {
                lab[r][c + 2] = 0;
                lab[r][c + 1] = 0;
                recursion(r, c + 2, width, height);
            }
            break;
        case 3: // Down
            // Whether 2 cells down is out or not
            if (r + 2 >= height - 1)
                continue;
            if (lab[r + 2][c] != 0)
            {
                lab[r+2][c] = 0;
                lab[r+1][c] = 0;
                recursion(r + 2, c,  width, height);
            }
            break;
        case 4: // Left
            // Whether 2 cells to the left is out or not
            if (c - 2 <= 0)
                continue;
            if (lab[r][c - 2] != 0)
            {
                lab[r][c - 2] = 0;
                lab[r][c - 1] = 0;
                recursion(r, c - 2,  width, height);
            }
            break;
        }
    }

}


void generateMaze(int width, int height)
{
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            lab[i][j] = 1;

    int r = valor_random(0,height);
    while (r % 2 == 0)
    {
        r = valor_random(0,height);
    }
    // Generate random c
    int c = valor_random(0,width);
    while (c % 2 == 0)
    {
        c = valor_random(0,width);
    }
    // Starting cell
    lab[r][c] = 0;

    //　Allocate the lab with recursive method
    recursion(r, c, width, height);
}


int main()
{
    int n;scanf("%d",&n);
    generateMaze(n,n);

    printf("Labirinto:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            printf("%2d",lab[i][j]);
        }
        printf("\n");
    }


    return 0;
}
