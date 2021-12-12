#include<stdio.h>
#include<stdlib.h>

// RVS

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c], list[r*c], k = 0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
            list[k++] = arr[i][j];
        }
    }
    
    for(int i=0; i<k; i++)
    {
        for(int j=i+1; j<k; j++)
        {
            if(list[i] > list[j])
            {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }

    }
    
    k = 0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            int x = list[k++], flag = 0;
            for(int a=0; a<r; a++)
            {
                for(int b=0; b<c; b++)
                {
                    if(arr[a][b] == x)
                    {
                        printf("%d-%d ",a+1,b+1);
                        flag = 1;
                        break;
                    }
                }
                if(flag)
                {
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
