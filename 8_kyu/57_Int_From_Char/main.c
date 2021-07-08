#include <criterion/criterion.h>

int getAge(const char *inputString);

Test(getAge, should_pass_some_example_test_cases)
{
    cr_assert_eq(getAge("5 years old"), 5);
    cr_assert_eq(getAge("9 years old"), 9);
    cr_assert_eq(getAge("1 year old"), 1);
}