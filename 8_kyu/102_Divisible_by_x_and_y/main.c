#include <criterion/criterion.h>
#include <stdbool.h>

bool isDivisible(int n, int x, int y);

Test(Sample_Tests, should_pass_all_the_tests_provided) {
    cr_assert_eq(isDivisible(12, 4, 3), true);
    cr_assert_eq(isDivisible(12, 3, 4), true);
    cr_assert_eq(isDivisible(3, 3, 4), false);
    cr_assert_eq(isDivisible(8, 3, 4), false);
    cr_assert_eq(isDivisible(48, 3, 4), true);
}