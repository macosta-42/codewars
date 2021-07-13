#include <criterion/criterion.h>
#include <stdbool.h>

void do_test(double n, bool expected);

// TODO: Replace examples and use TDD development by writing your own tests

Test(is_it_even, example_tests)
{
    do_test(0,   true);
    do_test(0.5, false);
    do_test(1,   false);
    do_test(2,   true);
    do_test(-4,  true);
}