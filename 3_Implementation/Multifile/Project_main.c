
#include "calender.h"

int main()
{
    int year,day,month ;
    printf("enter year:");
    scanf("%d",&year);
    printf("enter month and day:");
scanf("%d%d",&day,&month);

    // Function Call
    printCalendar(year);
    getweekname(day,month,year);


    return 0;
}
