#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define CYCLE 60

int main()
{
    int hour, minute, second;
    int h = 0, m = 0, s = 0;
    printf("Enter hour: \n");
    scanf("%d", &hour);
    printf("Enter minute: \n");
    scanf("%d", &minute);
    printf("Enter second: \n");
    scanf("%d", &second);

    while(1)
    {
        printf("\n\n---------------DIGITAL STOP WATCH------------------\n\n");
        printf("                    %.2d:%.2d:%.2d\n                 \n", h, m, s);
        printf("###################################################");

        if(h == hour && m == minute && s == second)
        {
            break;
        }
        else
        {
            // system("clear");
        }
        s++;
        sleep(1);
        if(s == CYCLE)
        {
            m++;
            s = 0;
        }
        if(m == CYCLE)
        {
            h++;
            m = 0;
        }

    }
    return 0;
}