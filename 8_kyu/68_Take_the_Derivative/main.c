#include <criterion/criterion.h>

void tester(int coefficient, int exponent, char *derivative);

Test(Example_Tests, should_pass_all_the_tests_provided)
{
    tester(7, 8, "56x^7");
    tester(5, 9, "45x^8");
}