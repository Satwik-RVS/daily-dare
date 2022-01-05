#include<stdio.h>
#include<stdlib.h>

// RVS

int main()
{
    char ch;
    int num;
    int arr[1001] = {0};
    while(scanf("%c%d",&ch,&num)==2)
    {
        for(int i=arr[ch];i<num;i++)
        {
            printf("%c",ch);
        }
        arr[ch] = num;
    }
}
