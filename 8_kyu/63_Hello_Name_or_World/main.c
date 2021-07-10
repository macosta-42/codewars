#include <criterion/criterion.h>

void tester(const char *name, char *expected);

Test(Sample_Tests, should_pass_all_the_tests_provided)
{
    tester("John",  "Hello, John!");
    tester("aLIce", "Hello, Alice!");
    tester("",      "Hello, World!");
}