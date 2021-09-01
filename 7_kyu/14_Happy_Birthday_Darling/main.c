#include <criterion/criterion.h>

char *womens_age(int age);
void tester(int age, char *expected);

Test(Example_Tests, should_pass_all_the_tests_provided)
{
    tester(32, "32? That's just 20, in base 16!");
    tester(39, "39? That's just 21, in base 19!");
}
