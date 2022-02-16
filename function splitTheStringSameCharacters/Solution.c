#include <stdio.h>
#include <stdlib.h>

void splitTheStringSameCharacters(char *str)
{
    // RVS
    int n = strlen(str), i = 0;
    while(i < n-1)
    {
        if(str[i] == str[i+1])
        {
            int count = 0, j = i;
            while(j < n && str[i] == str[j])
            {
                j += 1;
                count += 1;
            }
            if(count == 2)
            {
                printf("%c %c", str[i], str[i]);
                i += 2;
            }
            else
            {
                for(j=i; j<i+count; j++)
                {
                    printf("%c", str[j]);
                }
                i += count;
            }
        }
        else
        {
            printf("%c",str[i]);
            i += 1;
        }
    }
    if(str[n-1] != str[n-2])
    {
        printf("%c", str[n-1]);
    }
}

int main()
{
    char str[1001];
    scanf("%s", str);
    splitTheStringSameCharacters(str) ;
    return 0;
}
