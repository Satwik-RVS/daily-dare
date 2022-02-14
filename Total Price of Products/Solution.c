#include<stdio.h>
#include<stdlib.h>

int main()
{
    // RVS
    char str[1001];
    int n;
    scanf("%s%n", str, &n);
    int arr[5] = {0};
    int prices[4] = {40, 60, 55, 95};
    for(int i=0; i<n; i++)
    {
        arr[str[i]-'A'] += 1;
    }
    int total = 0;
    for(int i=0; i<4; i++)
    {
        if(i == 0)
        {
            total += (arr[i]/4)*100;
            arr[i] %= 4;
        }
        else if(i == 2)
        {
            total += (arr[i]/6)*200;
            arr[i] %= 6;
        }
        total += arr[i]*prices[i];
    }
    printf("%d\n", total);
}
