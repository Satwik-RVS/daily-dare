#include<stdio.h>
#include<stdlib.h>

// RVS
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf(" %c",&matrix[i][j]);
        }
    }
    int k;
    scanf("%d",&k);
    int alpha[n*m*n][201], x = 0;
    for(int i=0;i<n;i+=k)
    {
        for(int j=0;j<m;j+=k)
        {
            for(int a=0;a<221;a++)
            {
                alpha[x][a] = 0;
            }
            for(int a=i;a<i+k;a++)
            {
                for(int b=j;b<j+k;b++)
                {
                    alpha[x][matrix[a][b]] += 1;
                }
            }
            x += 1;
        }
    }
    int count = 0;
    for(int j=0;j<221;j++)
    {
        int flag = 1;
        for(int i=0;i<x;i++)
        {
            if(alpha[i][j] == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            count += 1;
        }
    }
    printf("%d",count);
}
