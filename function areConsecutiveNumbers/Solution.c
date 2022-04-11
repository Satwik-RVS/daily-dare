#include <stdio.h>
#include <stdlib.h>

// RVS
int areConsecutive(char *str)
{
    int N = strlen(str), M, X, Y;
    M = N/2;
    sscanf(str+M, "%d", &Y);
    if(Y == 999)
    {
        return 1;
    }
    if(str[M] == '0')
    {
        return 0;
    }
    str[M] = '\0';
    sscanf(str, "%d", &X);
    if(abs(Y-X) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
  char str[101];
  scanf ("%s", str);
  printf ("%d", areConsecutive(str));
  return 0;
}
