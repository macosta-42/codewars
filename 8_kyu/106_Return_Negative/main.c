#include <criterion/criterion.h>

int makeNegative(int);

Test(make_negative_algorithm, should_handle_positive_test)
{
    cr_assert_eq(makeNegative(42), -42);
}