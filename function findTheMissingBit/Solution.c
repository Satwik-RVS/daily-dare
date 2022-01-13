#include <stdio.h>
#include <stdlib.h>


int findTheMissingBit(char *str, int X)
{
    // RVS
    int y,index = 0, n = strlen(str);
    while(X > 0)
    {
        y = X%2;
        if(y != str[n-index-1]-'0')
        {
            return y;
        }
        index += 1;
        X /= 2;
    }
    return 0;
}

int main()
{
    char str[1001];
    scanf("%s",str);
    int X;
    scanf("%d",&X);
    printf("%d",findTheMissingBit(str,X));
    return 0;
}
