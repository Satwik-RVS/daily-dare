#include<stdio.h>
#include<stdlib.h>

int main()
{
    int R, C;
    scanf("%d%d", &R, &C);
    int matrix[R][C];
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    int sum, curr, count = 0, flag;
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            sum = 0, curr = matrix[row][col], count = 0, flag = 0;
            int arr[1001], ind = 0;
            if(row > 0)
            {
                if(col > 0)
                {
                    arr[ind++] = matrix[row-1][col-1];
                }
                arr[ind++] = matrix[row-1][col];
                if(col < C-1)
                {
                    arr[ind++] = matrix[row-1][col+1];
                }
            }
            if(col < C-1)
            {
                arr[ind++] = matrix[row][col+1];
            }
            if(row < R-1)
            {
                if(col < C-1)
                {
                    arr[ind++] = matrix[row+1][col+1];
                }
                arr[ind++] = matrix[row+1][col];
                if(col > 0)
                {
                    arr[ind++] = matrix[row+1][col-1];
                }
            }
            if(col > 0)
            {
                arr[ind++] = matrix[row][col-1];
            }
            ind = ind<curr?ind:curr;
            for(int index = 0; index < ind; index++)
            {
                sum += arr[index];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}
