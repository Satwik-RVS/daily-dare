#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// RVS

void printer(char str[], int x)
{
    for(int i=0; i<strlen(str); i++)
    {
        printf("%c", str[i]);
        for(int j=0; j<x; j++)
        {
            printf("*");
        }
        printf("%c\n", str[i]);
    }
}

int main()
{
    char str1[1001], str2[1001];
    scanf("%s\n%s\n", str1, str2);
    int N;
    scanf("%d", &N);
    int x = strlen(str2)-2;
    char temp1[1001], temp2[1001], temp3[1001], temp4[1001], temp5[1001];
    strcpy(temp1, str1+1);
    strcpy(temp2, str1);
    strcpy(temp3, str1+1);
    temp2[strlen(temp2)-1] = '\0';
    temp3[strlen(temp3)-1] = '\0';
    for(int i=0; i<strlen(temp3); i++)
    {
        temp4[i] = temp3[strlen(temp3)-i-1];
    }
    temp4[strlen(temp3)] = '\0';
    for(int i=0; i<strlen(str1); i++)
    {
        temp5[i] = str1[strlen(str1)-i-1];
    }
    temp5[strlen(str1)] = '\0';
    printer(temp2, x);
    for(int i=0; i<N-1; i++)
    {
        printf("%s\n", str2);
        if(i%2 == 0)
        {
            printer(temp4, x);
        }
        else
        {
            printer(temp3, x);
        }
    }
    printf("%s\n", str2);
    if(N%2 == 0)
    {
        printer(temp1, x);
    }
    else
    {
        printer(temp5+1, x);
    }
}
