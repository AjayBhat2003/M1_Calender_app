#include "unity.h"
#include "calender.h"

void setup()
{

}

void teardown()
{

}
void test_dayNumber()
{ 
    
  TEST_ASSERT_EQUAL_DOUBLE_ARRAY( 28,02,2022);
}



    

int test_main()
{
    UNITY_BEGIN();
    RUN_TEST(test_dayNumber);


    return UNITY_END();

}