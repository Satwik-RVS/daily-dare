#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define min(a,b) a<b?a:b
#define max(a,b) a>b?a:b

// RVS

void findTheMissingNumber(int R, int C, int matrix[R][C])
{
    int mini = INT_MAX, maxi = INT_MIN, x, y;
    int arr[10001] = {0};
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            if(matrix[i][j] == -1)
            {
                x = i, y = j;
                continue;
            }
            arr[matrix[i][j]] += 1;
            mini = min(mini, matrix[i][j]);
            maxi = max(maxi, matrix[i][j]);
        }
    }
    for(int i=mini+1; i<maxi; i++)
    {
        if(arr[i] == 0)
        {
            matrix[x][y] = i;
            break;
        }
    }
}

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    findTheMissingNumber(R, C, matrix);
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}
