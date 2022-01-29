#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    long long int *arr;
}boundedArray;

boundedArray* twoIntegersMerging(int SIZE, int *arr)
{
    // RVS
    boundedArray *rvs = malloc(sizeof(boundedArray));
    rvs->arr = malloc(sizeof(long long int)*SIZE);
    rvs->SIZE = 0;
    for(int i=0; i<SIZE; i+=2)
    {
        int x = arr[i], y = arr[i+1], z;
        char s[1001], l[1001];
        sprintf(s, "%d", x);
        sprintf(l, "%d", y);
        int a = strlen(s), b = strlen(l)-1;
        x = s[a-1]-'0', y = l[0]-'0';
        z = x+y;
        if(z < 10)
        {
            char ch[1001];
            sprintf(ch, "%d", z);
            s[a-1] = '\0';
            strcat(s, ch);
            strcat(s, l+1);
            x = 0;
            strcat(s,"\0");
            for(int j=0;j<strlen(s);j++)
            {
                x = x*10 + (s[j]-'0');
            }
            rvs->arr[rvs->SIZE++] = x;
        }
        else
        {
            rvs->arr[rvs->SIZE++] = arr[i];
            rvs->arr[rvs->SIZE++] = arr[i+1];
        }
    }
    return rvs;
}

int main()
{
    int N;
    scanf ("%d", &N) ;
    int arr [N];
    for (int index = 0; index < N; index++)
    {
        scanf ("%d", &arr[index]);
    }
    boundedArray *bArr = twoIntegersMerging(N, arr);

    for (int index = 0; index < bArr->SIZE; index++)
    {
        printf("%1ld ", bArr->arr[index]) ;
    }
    return 0;
}
