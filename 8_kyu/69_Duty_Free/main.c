#include <criterion/criterion.h>

void tester(int price, int discount, int holiday_cost, int expected);

Test(Example_Tests, should_pass_all_the_tests_provided)
{
    {
        int price        = 12,
                discount     = 50,
                holiday_cost = 1000,
                expected     = 166;
        tester(price, discount, holiday_cost, expected);
    }
    {
        int price        = 17,
                discount     = 10,
                holiday_cost = 500,
                expected     = 294;
        tester(price, discount, holiday_cost, expected);
    }
}