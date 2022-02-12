#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct time
{
    int hours, minutes, seconds;
} Time;

// RVS
void timeInSeconds(int n, Time time1, ...)
{
    va_list rvs;
    Time temp;
    va_start(rvs, time1);
    temp = time1;
    int sec = 0;
    for(int i=0; i<n; i++)
    {
        sec += temp.seconds;
        sec += temp.minutes*60;
        sec += temp.hours*60*60;
        temp = va_arg(rvs, Time);
    }
    printf("%d\n",sec);
}

int main()
{
    Time time1, time2, time3, time4;
    scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);
    scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);
    scanf("%d:%d:%d", &time3.hours, &time3.minutes, &time3.seconds) ;
    scanf("%d:%d:%d", &time4.hours, &time4.minutes, &time4.seconds);
    timeInSeconds(1, time1);
    timeInSeconds(2, time1, time2);
    timeInSeconds(3, time1, time2, time3);
    timeInSeconds(4, time1, time2, time3, time4);
    return 0;
}
