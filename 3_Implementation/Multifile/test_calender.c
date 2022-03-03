#include "unity.h"
#include "calender.h"

void setup()
{

}

void teardown()
{

}
void test_dayNumber(void)
{ int year=2022,day=28,month=02;
    dayNumber(28,02,2022);
}

void test_printCalender(void)
{

}

int test_main()
{
    UNITY_BEGIN();
    RUN_TEST(test_dayNumber);
    RUN_TEST(test_printCalender);
    return UNITY_END();

}