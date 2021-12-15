
// RVS

char* generator(int year, char section, int N, int D)
{
    char *rvs = malloc(100001*sizeof(char));
    for(int i=1; i<=N; i++)
    {
        char s[1001] ,num[1001];
        sprintf(s,"%d%c",year,section);
        sprintf(num,"%d",i);
        int x = strlen(num);
        strcat(rvs,s);
        for(int j=1; j<=D-x; j++)
        {
            strcat(rvs,"0");
        }
        strcat(rvs,num);
        strcat(rvs,"   ");
    }
    return rvs;
}
