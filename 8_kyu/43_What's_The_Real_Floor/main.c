#include <criterion/criterion.h>

int get_real_floor(int n);

Test(get_real_floor, should_pass_some_example_tests)
{
    cr_assert_eq(get_real_floor(1), 0);
    cr_assert_eq(get_real_floor(5), 4);
    cr_assert_eq(get_real_floor(15), 13);
}