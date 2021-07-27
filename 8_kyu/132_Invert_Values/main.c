#include <criterion/criterion.h>

void test_invert(int *values, size_t values_size, int *expected);

Test(invert, should_pass_some_example_tests)
{
    {
        int values[] = {1, 2, 3, 4, 5};
        int expected[]  = {-1, -2, -3, -4, -5};
        test_invert(values, 5, expected);
    }
    {
        int values[] = {1, -2, 3, -4, 5};
        int expected[]  = {-1, 2, -3, 4, -5};
        test_invert(values, 5, expected);
    }
    {
        test_invert(NULL, 0, NULL);
    }
}