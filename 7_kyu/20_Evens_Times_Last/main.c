#include <criterion/criterion.h>
#include <stddef.h>

void tester(const int array[], size_t z, int expected);

Test(Example_Cases, should_pass_all_tests)
{
    { const int array[4] = {2, 2, 2, 2};       tester(array, 4,   8); }
    { const int array[4] = {2, 3, 4, 5};       tester(array, 4,  30); }
    { const int array[5] = {1, 3, 3, 1, 10};   tester(array, 5, 140); }
    { const int array[5] = {-11, 3, 3, 1, 10}; tester(array, 5,  20); }
}