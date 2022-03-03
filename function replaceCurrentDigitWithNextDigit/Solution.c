#include <stdio.h>

void replaceCurrentDigitWithNextDigit(int N)
{
    char str[1001], temp[1001];
    sprintf(str, "%d", N);
    int n = strlen(str), arr[n], k = 0, num = 0, flag;
    for(int i=0; i<n; i++)
    {
        if(str[i] == '9')
        {
            str[i] = '0';
            flag = 1;
        }
        else
        {
            str[i] = str[i]+'1'-'0';
        }
        sscanf(str, "%d", &num);
        arr[k++] = num;
        if(flag == 1)
        {
            str[i] = '9';
        }
        else
        {
            str[i] = str[i]+'0'-'1';
        }
        flag = 0;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                num = arr[i];
                arr[i] = arr[j];
                arr[j] = num;
            }
        }
        printf("%d ", arr[i]);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    replaceCurrentDigitWithNextDigit(N) ;
    return 0;
}
