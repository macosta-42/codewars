#include <criterion/criterion.h>
#include <stdbool.h>

bool check_for_factor(int, int);

Test(check_factors, basic_tests) {
    cr_assert_eq(check_for_factor(10, 2), true);
    cr_assert_eq(check_for_factor(63, 7), true);
    cr_assert_eq(check_for_factor(2450, 5), true);
    cr_assert_eq(check_for_factor(24612, 3), true);
    cr_assert_eq(check_for_factor(9, 2), false);
    cr_assert_eq(check_for_factor(653, 7), false);
    cr_assert_eq(check_for_factor(2453, 5), false);
    cr_assert_eq(check_for_factor(24617, 3), false);
}