#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getStringOrTotal(char *str)
{
    char *rvs = strtok(str," ");
    char *notrvs = malloc(1001*sizeof(char));
    int flag = 0, sumi = 0, temp = 0;
    if(!(isalpha(rvs[0])))
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    char temper[1001];
    while(rvs != NULL)
    {
        if(flag == 0)
        {
            strcat(notrvs,rvs);
        }
        else
        {
            sscanf(rvs,"%d",&temp);
            sumi += temp;
        }
        rvs = strtok(NULL," ");
    }
    if(flag == 1)
    {
        sprintf(temper,"%d",sumi);
        strcat(notrvs,temper);
    }
    return notrvs;
}


int main()
{

    char str [101];
    scanf ("%[^\n\r]", str);
    char *result = getStringOrTotal(str);
    if (result == NULL || result == str)
    {
        printf( "String is not formed\n");
    }
    if (result [0] == '\0' || result[0] == ' ')
    {
        printf("String is empty \n");
    }
    printf("%s", result);
    return 0;
}
