#include<stdio.h>
#include<stdlib.h>

// RVS

int main()
{
    int N, count = 0, flag, rvs = 0;
    scanf("%d", &N);
    char S[1001], a, b;
    scanf("%s", S);
    while(1)
    {
        flag = 1;
	    rvs = 0;
        for(int ind = 0; ind < N; ind++)
        {
            if(S[ind] == 'F')
            {
                a = 'F';
                b = 'M';
            }
            else if(S[ind] == 'M')
            {
                a = 'M';
                b = 'F';
            }
            else
            {
                rvs += 1;
            }
            if(S[ind] == 'F' || S[ind] == 'M')
            {
                if(ind-2 > -1 && S[ind-1] == '#' && S[ind-2] == '#')
                {
                    if(ind-3 > -1 && (S[ind-3] == b || S[ind-3] == '#') || ind-3 < 0)
                    {
                        S[ind-1] = a;
                        S[ind-2] = b;
                        flag = 0;
                        count += 1;
                    }
                }
                if(ind+2 < N && S[ind+1] == '#' && S[ind+2] == '#')
                {
                    if(ind+3 < N && (S[ind+3] == b || S[ind+3] == '#') || ind+3 >= N)
                    {
                        S[ind+1] = a;
                        S[ind+2] = b;
                        flag = 0;
                        count += 1;
                    }
                }
            }
        }
        if(rvs == N)
        {
            count = N/2;
		    break;
        }
        if(flag)
        {
            break;
        }
    }
    printf("%d", count);
}
