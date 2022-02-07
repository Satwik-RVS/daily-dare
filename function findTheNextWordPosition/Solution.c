#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findTheNextWordPosition(char *str)
{
    char rvs[1001][1001];
    int k = 0;
    char *token = strtok(str, " ");
    while(token != NULL)
    {
        strcpy(rvs[k++],token);
        token = strtok(NULL, " ");
    }
    char notrvs[1001], x = 0;
    for(int i=0; i<k; i++)
    {
        char y[1001], z[1001];
        strcpy(y, rvs[i]);
        int flag = 1;
        for(int j=i+1; j<k; j++)
        {
            strcpy(z, rvs[j]);
            if(z[strlen(z)-1] == y[strlen(y)-1])
            {
                printf("%d ", j+1);
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            for(int j=0; j<=i; j++)
            {
                strcpy(z, rvs[j]);
                if(z[strlen(z)-1] == y[strlen(y)-1])
                {
                    printf("%d ", j+1);
                    break;
                }
            }
        }
        
    }
}

int main()
{
    char str[101];
    scanf("%[^\n\r]", str);
    findTheNextWordPosition(str);
    return 0;
}
