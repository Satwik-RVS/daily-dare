#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxi(a,b) a>b?a:b

typedef struct BoundedArray
{
    int R, C;
    int **matrix;
}boundedArray;

boundedArray* groupIntegers(char *str)
{
    int indexer[1001] = {0};
    int matrix[1001][1001];
    int x, y;
    char ch;
    boundedArray *rvs = malloc(sizeof(boundedArray));
    rvs->R = 0;
    rvs->C = 0;
    rvs->matrix = (int*)malloc(sizeof(int)*101);
    char* token = strtok(str," ");
    while(token != NULL)
    {
        sscanf(token,"%d%c",&x,&ch);
        y = ch-'a';
        matrix[y][indexer[y]++] = x;
        rvs->R = maxi(rvs->R,y+1);
        rvs->C = maxi(rvs->C,indexer[y]);
        token = strtok(NULL," ");
    }
    for(int i=0;i<rvs->R;i++)
    {
        rvs->matrix[i] = malloc(sizeof(int)*101);
        for(int j=0;j<rvs->C;j++)
        {
            rvs->matrix[i][j] = matrix[i][j];
        }
    }
    return rvs;
}

int main()
{
    char str[10001];
    scanf("%[^\n]", str);
    boundedArray *bArr = groupIntegers(str);
    if (bArr == NULL)
    {
        printf( "Matrix is not formed\n");
    }
    if (bArr->R <= 0 || bArr->C <= 0)
    {
        printf( "Invalid size for the matrix\n");
    }
    printf("%d %d\n", bArr->R, bArr->C);
    for (int row = 0; row < bArr->R; row++)
    {
        for (int col = 0; col < bArr->C; col++)
        {
            printf("%d ", bArr->matrix[row][col]);
        }
        printf ("\n");
    }
    return 0;
}
