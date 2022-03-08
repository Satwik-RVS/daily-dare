#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int R, C;
    int **matrix;
}boundedArray;

boundedArray* formMatrixWithX(int R, int C, int X)
{
    boundedArray *rvs = malloc(sizeof(boundedArray));
    rvs->matrix = (int**)malloc(sizeof(int)*R*C);
    rvs->R = R;
    rvs->C = C;
    for(int row = 0; row < R; row++)
    {
        rvs->matrix[row] = (int*)malloc(sizeof(int)*C);
        for(int col = 0; col < C; col++)
        {
            rvs->matrix[row][col] = X;
        }
    }
    return rvs;
}

int main()
{
    int R, C, X;
    scanf("%d %d %d", &R, &C, &X);
    boundedArray *bArr = formMatrixWithX(R, C, X);
    if(bArr == NULL || bArr->matrix == NULL || bArr->R != R || bArr->C != C)
    {
        printf("Matrix is not formed properly\n");
    }
    for(int row = 0; row < bArr->R; row++)
    {
        for(int col = 0; col < bArr->C; col++)
        {
            printf("%d ", bArr->matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
