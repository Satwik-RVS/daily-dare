#include <stdio.h>
#include <stdlib.h>
void AddOrConcate(char *str1, char *str2)
{
    // RVS
    if(isalpha(str1[0]))
    {
        printf("%s%s",str1,str2);
    }
    double x,y,z;
    sscanf(str1,"%lf",&x);
    sscanf(str2,"%lf",&y);
    z = x+y;
    long int temp = z;
    if(z == (int)z)
    {
        printf("%ld",temp);
    }
    else
    {
        printf("%.2lf",z);
    }
}

int main()
{
    char str1[1001], str2[1001];
    scanf("%s %s",&str1,&str2);
    AddOrConcate(str1,str2);
    return 0;
}
