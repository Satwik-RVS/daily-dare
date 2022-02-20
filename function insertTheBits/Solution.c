#include <stdio.h>
#include <stdlib.h>

int insertTheBits(int X, int Y)
{
    int arr1[1001], arr2[1001], a = 0, b = 0;
    while(X > 0)
    {
        arr1[a++] = X%2;
        X /= 2;
    }
    while(Y > 0)
    {
        arr2[b++] = Y%2;
        Y /= 2;
    }
    int arr[a+b+1], k = 0;
    int x;
    for(x = 0; x < a; x++)
    {
        if(arr1[x] == 1)
        {
            break;
        }
        arr1[k++] = arr1[x];
    }
    for(int i=0; i<b; i++)
    {
        arr[k++] = arr2[i];
    }
    for(int i=x; i<a; i++)
    {
        arr[k++] = arr1[i];
    }
    int bin = 0, base = 1;
    for(int i=0; i<k; i++)
    {
        bin += arr[i]*base;
        base *= 2;
    }
    return bin;
}

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    printf("%d", insertTheBits(X, Y));
    return 0;
}
