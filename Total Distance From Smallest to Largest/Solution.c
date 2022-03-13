#include<stdio.h>
#include<stdlib.h>

void find(int x, int R, int C, int matrix[R][C], int temp[])
{
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            if(matrix[row][col] == x)
            {
                temp[0] = row;
                temp[1] = col;
                return ;
            }
        }
    }
}

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C], arr[R*C], ind = 0, k;
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf("%d", &matrix[row][col]);
            k = ind-1;
            while(k > -1 && arr[k] > matrix[row][col])
            {
                arr[k+1] = arr[k];
                k -= 1;
            }
            arr[k+1] = matrix[row][col];
            ind += 1;
        }
    }
    int temp[2];
    int a, b, c, d, totalDistance = 0;
    for(int index = 0; index < ind-1; index += 1)
    {
        find(arr[index], R, C, matrix, temp);
        a = temp[0], b = temp[1];
        find(arr[index+1], R, C, matrix, temp);
        c = temp[0], d = temp[1];
        totalDistance += abs(a-c)>abs(b-d)?abs(a-c):abs(b-d);
    }
    printf("%d", totalDistance);
}
