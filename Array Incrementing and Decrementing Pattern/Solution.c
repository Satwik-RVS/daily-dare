#include<stdio.h>
#include<stdlib.h>

// RVS

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N], temp[N], flags[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        temp[i] = arr[i];
        flags[i] = 0;
    }
    int T;
    scanf("%d",&T);
    int i = 0;
    for(int index = 0; index < T; index++)
    {
        if(flags[i] == 0)
        {
            temp[i] -= 1;
        }
        else
        {
            temp[i] += 1;
        }
        
        if(temp[i] == 0)
        {
            flags[i] = 1;
        }
        if(temp[i] == arr[i])
        {
            flags[i] = 0;
        }
        
        for(int j = 0; j < N; j++)
        {
            printf("%d ",temp[j]);
        }
        
        i += 1;
        if(i >= N)
        {
            i = 0;
        }
        printf("\n");
    }
}
