#include <stdio.h>
#include <stdlib.h>

int countTheOrderedChairs(char *str)
{
    int count = 0;
    char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
    int n = strlen(str);
    for(int i=0,j=0;i<n;i++)
    {
        char x = str[i];
        for(j=0;j<26;j++)
        {
            if(alphabets[j] == x)
            {
                break;
            }
        }
        if(i == j)
        {
            count += 1;
        }
    }
    return count;
}

int main()
{
    char str[27];
    scanf("%s", str);
    printf("%d", countTheOrderedChairs(str));
    return 0;
}
