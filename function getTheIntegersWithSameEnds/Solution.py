#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    int *arr;
}boundedArray;

// RVS

boundedArray* getTheIntegersWithSameEnds(char *str, int K)
{
    int len = strlen(str), arr[len], ind = 0;
    boundedArray *rvs = malloc(sizeof(boundedArray));
    rvs->arr = malloc(sizeof(int)*len);
    rvs->SIZE = 0;
    
    for(int i=0; i<len-K+1; i++)
    {
        if(str[i] == str[i+K-1] && str[i] != '0')
        {
            int temp = 0;
            for(int j=i; j<i+K; j++)
            {
                temp = temp*10 + (str[j] - '0');
            }
            arr[ind++] = temp;
        }
    }
    
    for(int i=0; i<ind; i++)
    {
        for(int j=i+1; j<ind; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        rvs->arr[rvs->SIZE++] = arr[i];
    }
    
    if(!(rvs->SIZE))
    {
        rvs->arr[rvs->SIZE++] = -2;
    }
    
    return rvs;
}

int main()
{
    char str[101];
    int K;
    scanf("%s\n%d", str, &K);
    boundedArray *bArr = getTheIntegersWithSameEnds(str, K);
    if(bArr == NULL)
    {
        printf("Array is not formed\n");
    }
    if(bArr->SIZE <= 0)
    {
        printf("Invalid size for the array\n");
    }
    for(int index = 0; index < bArr->SIZE; index++)
    {
        printf("%d ", bArr->arr[index]);
    }
    return 0;
}
