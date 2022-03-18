#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, M, A;
    scanf("%d %d %d", &N, &M, &A);
    int ballons[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &ballons[i]);
    }
    int jersy[M];
    for(int i=0; i<M; i++)
    {
        scanf("%d", &jersy[i]);
    }
    int count = 0;
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(ballons[j] != 0 && ballons[j]%jersy[i] == 0)
            {
                ballons[j] = 0;
                if(i == A-1)
                {
                    count += 1;
                }
            }
        }
        if(i == A-1)
        {
            printf("%d", count);
        }
    }
    return 0;
}
