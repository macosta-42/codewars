#include <criterion/criterion.h>

void tester(const char *s, int expected);

Test(Example_Tests, should_pass_all_the_tests_provided)
{
    tester("AAabcBB", 1);
    tester("AabcBB", 1);
    tester("AabcBBB", 0);
}