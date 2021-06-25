#include <criterion/criterion.h>
#include <stdbool.h>

void do_test(bool b, const char *expected);

// TODO: Replace examples and use TDD by writing your own tests. The code provided here is just a how-to example.

Test(sample_test, example_tests)
{
do_test(true,  "true");
do_test(false, "false");
}