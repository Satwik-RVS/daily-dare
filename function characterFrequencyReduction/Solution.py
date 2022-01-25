#include <stdio.h>
#include <stdlib.h>

char* characterFrequencyReduction(char *str, int K)
{
    // RVS
    int alphabets[201] = {0}, n = strlen(str), m = 0;
    char *rvs = malloc(n*sizeof(char));
    for(int i=0;i<n;i++)
    {
        if(alphabets[str[i]] < K)
        {
            rvs[m++] = str[i];
        }
        alphabets[str[i]] += 1;
    }
    rvs[m++] = '\0';
    return rvs;
}

int main( )
{
    char str[1001];
    int K;
    scanf("%s\n%d", str, &K);
    char *newStr = characterFrequencyReduction (str, K);
    if (newStr == str || newStr == NULL)
    {
        printf( "New String is not formed\n");
    }
    if (newStr[0] == ' ' || newStr[0] == '\0' )
    {
        printf("String is empty\n");
    }
    printf("%s", newStr);
    return 0;
}
