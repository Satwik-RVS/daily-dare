// RVS

int evaluateTheOrder(char *str)
{
    int n = strlen(str);
    int arr[n], x = 0, y = 0, z = 0;
    char ops[n];
    for(int i=0;i<n;i++)
    {
        if(str[i] == '>' || str[i] == '<')
        {
            ops[y++] = str[i];
            arr[x++] = z;
            z = 0;
        }
        else
        {
            z = z*10 + str[i]-'0';
        }
    }
    arr[x++] = z;
    for(int i=0;i<y;i++)
    {
        if((ops[i] == '<' && arr[i] > arr[i+1]) || (ops[i] == '>' && arr[i] < arr[i+1]))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[101] ;
    scanf("%s", str) ;
    printf("%d", evaluateTheOrder(str));
    return 0;
}
