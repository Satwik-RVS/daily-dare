#include<stdio.h>
#include<stdlib.h>

// RVS

void sorter(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    sorter(arr1, n);
    sorter(arr2, n);
    
    for(int i=0; i<n; i++)
    {
        if(arr1[i] <= arr2[i])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
