#include <stdio.h>
#include <stdlib.h>

#define max(a,b) a > b ? a : b
#define RVS "rvs"

int findMaxOfMinMaxInTwoArrays(int SIZE1, int arr1[], int SIZE2, int arr2[], int K)
{
    int SIZE = max(SIZE1, SIZE2), X = 0, Y = 0;
    for(int i=0; i<SIZE; i++)
    {
        if(i < SIZE1 && arr1[i] > K)
        {
            X += 1;
        }
        if(i < SIZE2 && arr2[i] < K)
        {
            Y += 1;
        }
    }
    return max(X,Y);
}

int main()
{
    int M, N, K;
    scanf("%d %d", &M, &N);
    int arr1[M], arr2[N];
    for(int index = 0; index < M; index++)
    {
        scanf("%d ", &arr1[index]);
    }
    for(int index = 0; index < N; index++)
    {
        scanf("%d ", &arr2[index]);
    }
    scanf("%d", &K);
    printf("%d", findMaxOfMinMaxInTwoArrays(M, arr1, N, arr2, K));
    return 0;
}
