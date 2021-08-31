#include <criterion/criterion.h>

void do_test(const char *input, const char *expected);

// TODO: Replace examples and use TDD by writing your own tests

Test(sample_test, example_tests)
{
    do_test("AZ", "A                         Z");
    do_test("ABC", "A B C");
    do_test("ACE", "A  C  E");
    do_test("CBA", "  A");
    do_test("HELLOWORLD", "     E H    DLL   OLO   R  W");
}