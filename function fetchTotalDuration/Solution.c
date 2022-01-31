#include <stdio.h>
#include <stdlib.h>

struct Duration
{
    int days;
    int hours;
    int minutes;
    int seconds;
};

#include <string.h>
struct Duration* fetchTotalDuration(char *str)
{
    // RVS
    struct Duration *rvs = (struct Duration*)malloc(sizeof(struct Duration));
    int d,h,m,s;
    rvs->days = 0;
    rvs->hours = 0;
    rvs->minutes = 0;
    rvs->seconds = 0;
    char *token = strtok(str," ");
    while(token != NULL)
    {
        sscanf(token,"%d:%d:%d",&h,&m,&s);
        rvs->hours += h;
        rvs->minutes += m;
        rvs->seconds += s;
        token = strtok(NULL," ");
    }
    rvs->minutes += rvs->seconds/60;
    rvs->seconds %= 60;
    rvs->hours += rvs->minutes/60;
    rvs->minutes %= 60;
    rvs->days += rvs->hours/24;
    rvs->hours %= 24;
    return rvs;
}

int main()
{
    char str[1001];
    scanf("%[^\n]", str);
    struct Duration *duration = fetchTotalDuration(str);
    if(duration == NULL)
    {
        printf("Duration is not formed\n");
    }
    printf("%d %d %d %d", duration->days, duration->hours, duration->minutes, duration->seconds);
    return 0;
}
