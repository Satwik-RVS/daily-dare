#include<stdio.h>
#include<stdlib.h>
// RVS
int checker(int N, int buckets[], int capacity)
{
    int count = 0;
    for(int index=0; index<N; index++)
    {
        if(buckets[index] > 0 && buckets[index] < capacity)
        {
            count += 1;
        }
    }
    if(count <= 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int bucketIndexer(int N, int buckets[], int capacity)
{
    int index;
    for(int index=0; index<N; index++)
    {
        if(buckets[index] > 0 && buckets[index] < capacity)
        {
            return index;
        }
    }
    printf("%d\n", index);
    return index;
}

int main()
{
    int N;
    scanf("%d\n", &N);
    int buckets[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d ", &buckets[i]);
    }
    int capacity;
    scanf("%d", &capacity);
    
    int index, jndex, temp;
    while(checker(N, buckets, capacity) == 1)
    {
        index = bucketIndexer(N, buckets, capacity);
        temp = buckets[index];
        jndex = index + 1;
        while(temp > 0 && checker(N, buckets, capacity) == 1)
        {
            if(jndex == index)
            {
                jndex += 1;
            }
            if(jndex >= N)
            {
                jndex = 0;
            }
            if(buckets[jndex] >= capacity)
            {
                // do nothing
            }
            else if(capacity-buckets[jndex] > temp)
            {
                buckets[jndex] += temp;
                temp = 0;
            }
            else
            {
                temp -= capacity-buckets[jndex];
                buckets[jndex] += capacity-buckets[jndex];
            }
            jndex += 1;
        }
        buckets[index] = temp;
    }
    for(int i=0; i<N; i++)
    {
        if(buckets[i] > 0 )
        {
            printf("%d ", buckets[i]);
        }
    }
    return 0;
}
