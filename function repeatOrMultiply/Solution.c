#include <stdio.h>
#include <stdlib.h>

char* repeatOrMultiply(char *str)
{
    // RVS
    int n = 0, m = 0;
    char x[1001] = "", k = 0;
    int i = 0;
    while(str[i] != '*')
    {
        if(isdigit(str[i]))
        {
            n = n*10 + str[i]-'0';
        }
        else
        {
            x[k++] = str[i];
        }
        i += 1;
    }
    i += 1;
    while(str[i] != '\0')
    {
        if(isdigit(str[i]))
        {
            m = m*10 + str[i]-'0';
        }
        else
        {
            x[k++] = str[i];
        }
        i += 1;
    }
    x[k++] = '\0';
    char *rvs = malloc(sizeof(int)*1001);
    if(n != 0 &&  m != 0)
    {
        sprintf(rvs,"%d",n*m);
    }
    else
    {
        if(m != 0)
        {
            n = m;
        }
        sprintf(rvs,"%s",x);
        for(int i=1;i<n;i++)
        {
            strcat(rvs,x);
        }
    }
    return rvs;
}

int main()
{
    char str[101];
    scanf("%s", str);
    char *result = repeatOrMultiply(str) ;
    if(result == NULL || result == str)
    {
        printf("String is not formed\n");
    }
    if (result [0] == '\0' || result[0] == ' ')
    {
        printf( "String is empty\n");
    }
    printf("%s", result);
    return 0;
}
