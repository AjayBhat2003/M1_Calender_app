
#include "calender.h"

int main()
{
    int year,day,month ;
    scanf("%d",&year);
scanf("%d%d",&day,&month);

    // Function Call
    printCalendar(year);
    getweekname(day,month,year);


    return 0;
}
