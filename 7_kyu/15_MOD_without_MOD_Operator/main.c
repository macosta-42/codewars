#include <criterion/criterion.h>

int mod256WithoutMod(int);

Test(basic_tests, should_pass_all_the_tests_provided) {
    cr_assert_eq(mod256WithoutMod(254), 254);
    cr_assert_eq(mod256WithoutMod(256), 0);
    cr_assert_eq(mod256WithoutMod(258), 2);

    cr_assert_eq(mod256WithoutMod(-254), -254);
    cr_assert_eq(mod256WithoutMod(-256), 0);
    cr_assert_eq(mod256WithoutMod(-258), -2);
}